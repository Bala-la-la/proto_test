cmake_minimum_required (VERSION 2.8)
 
project (Demo1)
SET(SRC_LIST ./src/main.cpp)
SET(PROTO_META_BASE_DIR ${CMAKE_CURRENT_BINARY_DIR}/p_out)
# Find required protobuf package
find_package(Protobuf REQUIRED)
if(PROTOBUF_FOUND)
   message(STATUS "protobuf library found")
else()
    message(FATAL_ERROR "protobuf library is needed but cant be found")
endif()

include_directories(${PROTOBUF_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR}/build ./build) 


file(GLOB PROTOFILES "${CMAKE_CURRENT_SOURCE_DIR}/common_proto/*.proto" "${CMAKE_CURRENT_SOURCE_DIR}/map_proto/*.proto")


PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ${PROTOFILES})


ADD_EXECUTABLE(main ${SRC_LIST} ${PROTO_SRCS} ${PROTO_HDRS})
 
target_link_libraries(main ${PROTOBUF_LIBRARIES})
