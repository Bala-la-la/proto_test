// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map_signal.proto

#ifndef PROTOBUF_INCLUDED_map_5fsignal_2eproto
#define PROTOBUF_INCLUDED_map_5fsignal_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "geometry.pb.h"
#include "map_geometry.pb.h"
#include "map_id.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_map_5fsignal_2eproto 

namespace protobuf_map_5fsignal_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_map_5fsignal_2eproto
namespace apollo {
namespace hdmap {
class SignInfo;
class SignInfoDefaultTypeInternal;
extern SignInfoDefaultTypeInternal _SignInfo_default_instance_;
class Signal;
class SignalDefaultTypeInternal;
extern SignalDefaultTypeInternal _Signal_default_instance_;
class Subsignal;
class SubsignalDefaultTypeInternal;
extern SubsignalDefaultTypeInternal _Subsignal_default_instance_;
}  // namespace hdmap
}  // namespace apollo
namespace google {
namespace protobuf {
template<> ::apollo::hdmap::SignInfo* Arena::CreateMaybeMessage<::apollo::hdmap::SignInfo>(Arena*);
template<> ::apollo::hdmap::Signal* Arena::CreateMaybeMessage<::apollo::hdmap::Signal>(Arena*);
template<> ::apollo::hdmap::Subsignal* Arena::CreateMaybeMessage<::apollo::hdmap::Subsignal>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace apollo {
namespace hdmap {

enum Subsignal_Type {
  Subsignal_Type_UNKNOWN = 1,
  Subsignal_Type_CIRCLE = 2,
  Subsignal_Type_ARROW_LEFT = 3,
  Subsignal_Type_ARROW_FORWARD = 4,
  Subsignal_Type_ARROW_RIGHT = 5,
  Subsignal_Type_ARROW_LEFT_AND_FORWARD = 6,
  Subsignal_Type_ARROW_RIGHT_AND_FORWARD = 7,
  Subsignal_Type_ARROW_U_TURN = 8
};
bool Subsignal_Type_IsValid(int value);
const Subsignal_Type Subsignal_Type_Type_MIN = Subsignal_Type_UNKNOWN;
const Subsignal_Type Subsignal_Type_Type_MAX = Subsignal_Type_ARROW_U_TURN;
const int Subsignal_Type_Type_ARRAYSIZE = Subsignal_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Subsignal_Type_descriptor();
inline const ::std::string& Subsignal_Type_Name(Subsignal_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Subsignal_Type_descriptor(), value);
}
inline bool Subsignal_Type_Parse(
    const ::std::string& name, Subsignal_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Subsignal_Type>(
    Subsignal_Type_descriptor(), name, value);
}
enum SignInfo_Type {
  SignInfo_Type_None = 0,
  SignInfo_Type_NO_RIGHT_TURN_ON_RED = 1
};
bool SignInfo_Type_IsValid(int value);
const SignInfo_Type SignInfo_Type_Type_MIN = SignInfo_Type_None;
const SignInfo_Type SignInfo_Type_Type_MAX = SignInfo_Type_NO_RIGHT_TURN_ON_RED;
const int SignInfo_Type_Type_ARRAYSIZE = SignInfo_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* SignInfo_Type_descriptor();
inline const ::std::string& SignInfo_Type_Name(SignInfo_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    SignInfo_Type_descriptor(), value);
}
inline bool SignInfo_Type_Parse(
    const ::std::string& name, SignInfo_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SignInfo_Type>(
    SignInfo_Type_descriptor(), name, value);
}
enum Signal_Type {
  Signal_Type_UNKNOWN = 1,
  Signal_Type_MIX_2_HORIZONTAL = 2,
  Signal_Type_MIX_2_VERTICAL = 3,
  Signal_Type_MIX_3_HORIZONTAL = 4,
  Signal_Type_MIX_3_VERTICAL = 5,
  Signal_Type_SINGLE = 6
};
bool Signal_Type_IsValid(int value);
const Signal_Type Signal_Type_Type_MIN = Signal_Type_UNKNOWN;
const Signal_Type Signal_Type_Type_MAX = Signal_Type_SINGLE;
const int Signal_Type_Type_ARRAYSIZE = Signal_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Signal_Type_descriptor();
inline const ::std::string& Signal_Type_Name(Signal_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Signal_Type_descriptor(), value);
}
inline bool Signal_Type_Parse(
    const ::std::string& name, Signal_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Signal_Type>(
    Signal_Type_descriptor(), name, value);
}
// ===================================================================

class Subsignal : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.Subsignal) */ {
 public:
  Subsignal();
  virtual ~Subsignal();

  Subsignal(const Subsignal& from);

  inline Subsignal& operator=(const Subsignal& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Subsignal(Subsignal&& from) noexcept
    : Subsignal() {
    *this = ::std::move(from);
  }

  inline Subsignal& operator=(Subsignal&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Subsignal& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Subsignal* internal_default_instance() {
    return reinterpret_cast<const Subsignal*>(
               &_Subsignal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Subsignal* other);
  friend void swap(Subsignal& a, Subsignal& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Subsignal* New() const final {
    return CreateMaybeMessage<Subsignal>(NULL);
  }

  Subsignal* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Subsignal>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Subsignal& from);
  void MergeFrom(const Subsignal& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Subsignal* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Subsignal_Type Type;
  static const Type UNKNOWN =
    Subsignal_Type_UNKNOWN;
  static const Type CIRCLE =
    Subsignal_Type_CIRCLE;
  static const Type ARROW_LEFT =
    Subsignal_Type_ARROW_LEFT;
  static const Type ARROW_FORWARD =
    Subsignal_Type_ARROW_FORWARD;
  static const Type ARROW_RIGHT =
    Subsignal_Type_ARROW_RIGHT;
  static const Type ARROW_LEFT_AND_FORWARD =
    Subsignal_Type_ARROW_LEFT_AND_FORWARD;
  static const Type ARROW_RIGHT_AND_FORWARD =
    Subsignal_Type_ARROW_RIGHT_AND_FORWARD;
  static const Type ARROW_U_TURN =
    Subsignal_Type_ARROW_U_TURN;
  static inline bool Type_IsValid(int value) {
    return Subsignal_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Subsignal_Type_Type_MIN;
  static const Type Type_MAX =
    Subsignal_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Subsignal_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Subsignal_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Subsignal_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Subsignal_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .apollo.hdmap.Id id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  private:
  const ::apollo::hdmap::Id& _internal_id() const;
  public:
  const ::apollo::hdmap::Id& id() const;
  ::apollo::hdmap::Id* release_id();
  ::apollo::hdmap::Id* mutable_id();
  void set_allocated_id(::apollo::hdmap::Id* id);

  // optional .apollo.common.PointENU location = 3;
  bool has_location() const;
  void clear_location();
  static const int kLocationFieldNumber = 3;
  private:
  const ::apollo::common::PointENU& _internal_location() const;
  public:
  const ::apollo::common::PointENU& location() const;
  ::apollo::common::PointENU* release_location();
  ::apollo::common::PointENU* mutable_location();
  void set_allocated_location(::apollo::common::PointENU* location);

  // optional .apollo.hdmap.Subsignal.Type type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::apollo::hdmap::Subsignal_Type type() const;
  void set_type(::apollo::hdmap::Subsignal_Type value);

  // @@protoc_insertion_point(class_scope:apollo.hdmap.Subsignal)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_type();
  void clear_has_type();
  void set_has_location();
  void clear_has_location();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::apollo::hdmap::Id* id_;
  ::apollo::common::PointENU* location_;
  int type_;
  friend struct ::protobuf_map_5fsignal_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SignInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.SignInfo) */ {
 public:
  SignInfo();
  virtual ~SignInfo();

  SignInfo(const SignInfo& from);

  inline SignInfo& operator=(const SignInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SignInfo(SignInfo&& from) noexcept
    : SignInfo() {
    *this = ::std::move(from);
  }

  inline SignInfo& operator=(SignInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SignInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SignInfo* internal_default_instance() {
    return reinterpret_cast<const SignInfo*>(
               &_SignInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SignInfo* other);
  friend void swap(SignInfo& a, SignInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SignInfo* New() const final {
    return CreateMaybeMessage<SignInfo>(NULL);
  }

  SignInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SignInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SignInfo& from);
  void MergeFrom(const SignInfo& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SignInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef SignInfo_Type Type;
  static const Type None =
    SignInfo_Type_None;
  static const Type NO_RIGHT_TURN_ON_RED =
    SignInfo_Type_NO_RIGHT_TURN_ON_RED;
  static inline bool Type_IsValid(int value) {
    return SignInfo_Type_IsValid(value);
  }
  static const Type Type_MIN =
    SignInfo_Type_Type_MIN;
  static const Type Type_MAX =
    SignInfo_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    SignInfo_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return SignInfo_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return SignInfo_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return SignInfo_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .apollo.hdmap.SignInfo.Type type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::apollo::hdmap::SignInfo_Type type() const;
  void set_type(::apollo::hdmap::SignInfo_Type value);

  // @@protoc_insertion_point(class_scope:apollo.hdmap.SignInfo)
 private:
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int type_;
  friend struct ::protobuf_map_5fsignal_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Signal : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.Signal) */ {
 public:
  Signal();
  virtual ~Signal();

  Signal(const Signal& from);

  inline Signal& operator=(const Signal& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Signal(Signal&& from) noexcept
    : Signal() {
    *this = ::std::move(from);
  }

  inline Signal& operator=(Signal&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Signal& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Signal* internal_default_instance() {
    return reinterpret_cast<const Signal*>(
               &_Signal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Signal* other);
  friend void swap(Signal& a, Signal& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Signal* New() const final {
    return CreateMaybeMessage<Signal>(NULL);
  }

  Signal* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Signal>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Signal& from);
  void MergeFrom(const Signal& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Signal* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Signal_Type Type;
  static const Type UNKNOWN =
    Signal_Type_UNKNOWN;
  static const Type MIX_2_HORIZONTAL =
    Signal_Type_MIX_2_HORIZONTAL;
  static const Type MIX_2_VERTICAL =
    Signal_Type_MIX_2_VERTICAL;
  static const Type MIX_3_HORIZONTAL =
    Signal_Type_MIX_3_HORIZONTAL;
  static const Type MIX_3_VERTICAL =
    Signal_Type_MIX_3_VERTICAL;
  static const Type SINGLE =
    Signal_Type_SINGLE;
  static inline bool Type_IsValid(int value) {
    return Signal_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Signal_Type_Type_MIN;
  static const Type Type_MAX =
    Signal_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Signal_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Signal_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Signal_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Signal_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .apollo.hdmap.Subsignal subsignal = 3;
  int subsignal_size() const;
  void clear_subsignal();
  static const int kSubsignalFieldNumber = 3;
  ::apollo::hdmap::Subsignal* mutable_subsignal(int index);
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Subsignal >*
      mutable_subsignal();
  const ::apollo::hdmap::Subsignal& subsignal(int index) const;
  ::apollo::hdmap::Subsignal* add_subsignal();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Subsignal >&
      subsignal() const;

  // repeated .apollo.hdmap.Id overlap_id = 4;
  int overlap_id_size() const;
  void clear_overlap_id();
  static const int kOverlapIdFieldNumber = 4;
  ::apollo::hdmap::Id* mutable_overlap_id(int index);
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
      mutable_overlap_id();
  const ::apollo::hdmap::Id& overlap_id(int index) const;
  ::apollo::hdmap::Id* add_overlap_id();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
      overlap_id() const;

  // repeated .apollo.hdmap.Curve stop_line = 6;
  int stop_line_size() const;
  void clear_stop_line();
  static const int kStopLineFieldNumber = 6;
  ::apollo::hdmap::Curve* mutable_stop_line(int index);
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >*
      mutable_stop_line();
  const ::apollo::hdmap::Curve& stop_line(int index) const;
  ::apollo::hdmap::Curve* add_stop_line();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >&
      stop_line() const;

  // repeated .apollo.hdmap.SignInfo sign_info = 7;
  int sign_info_size() const;
  void clear_sign_info();
  static const int kSignInfoFieldNumber = 7;
  ::apollo::hdmap::SignInfo* mutable_sign_info(int index);
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SignInfo >*
      mutable_sign_info();
  const ::apollo::hdmap::SignInfo& sign_info(int index) const;
  ::apollo::hdmap::SignInfo* add_sign_info();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SignInfo >&
      sign_info() const;

  // optional .apollo.hdmap.Id id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  private:
  const ::apollo::hdmap::Id& _internal_id() const;
  public:
  const ::apollo::hdmap::Id& id() const;
  ::apollo::hdmap::Id* release_id();
  ::apollo::hdmap::Id* mutable_id();
  void set_allocated_id(::apollo::hdmap::Id* id);

  // optional .apollo.hdmap.Polygon boundary = 2;
  bool has_boundary() const;
  void clear_boundary();
  static const int kBoundaryFieldNumber = 2;
  private:
  const ::apollo::hdmap::Polygon& _internal_boundary() const;
  public:
  const ::apollo::hdmap::Polygon& boundary() const;
  ::apollo::hdmap::Polygon* release_boundary();
  ::apollo::hdmap::Polygon* mutable_boundary();
  void set_allocated_boundary(::apollo::hdmap::Polygon* boundary);

  // optional .apollo.hdmap.Signal.Type type = 5;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::apollo::hdmap::Signal_Type type() const;
  void set_type(::apollo::hdmap::Signal_Type value);

  // @@protoc_insertion_point(class_scope:apollo.hdmap.Signal)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_boundary();
  void clear_has_boundary();
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Subsignal > subsignal_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id > overlap_id_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve > stop_line_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SignInfo > sign_info_;
  ::apollo::hdmap::Id* id_;
  ::apollo::hdmap::Polygon* boundary_;
  int type_;
  friend struct ::protobuf_map_5fsignal_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Subsignal

// optional .apollo.hdmap.Id id = 1;
inline bool Subsignal::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Subsignal::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Subsignal::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::apollo::hdmap::Id& Subsignal::_internal_id() const {
  return *id_;
}
inline const ::apollo::hdmap::Id& Subsignal::id() const {
  const ::apollo::hdmap::Id* p = id_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.Subsignal.id)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Id*>(
      &::apollo::hdmap::_Id_default_instance_);
}
inline ::apollo::hdmap::Id* Subsignal::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Subsignal.id)
  clear_has_id();
  ::apollo::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
inline ::apollo::hdmap::Id* Subsignal::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::hdmap::Id>(GetArenaNoVirtual());
    id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Subsignal.id)
  return id_;
}
inline void Subsignal::set_allocated_id(::apollo::hdmap::Id* id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(id_);
  }
  if (id) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, id, submessage_arena);
    }
    set_has_id();
  } else {
    clear_has_id();
  }
  id_ = id;
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Subsignal.id)
}

// optional .apollo.hdmap.Subsignal.Type type = 2;
inline bool Subsignal::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Subsignal::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Subsignal::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Subsignal::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::apollo::hdmap::Subsignal_Type Subsignal::type() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Subsignal.type)
  return static_cast< ::apollo::hdmap::Subsignal_Type >(type_);
}
inline void Subsignal::set_type(::apollo::hdmap::Subsignal_Type value) {
  assert(::apollo::hdmap::Subsignal_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo.hdmap.Subsignal.type)
}

// optional .apollo.common.PointENU location = 3;
inline bool Subsignal::has_location() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Subsignal::set_has_location() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Subsignal::clear_has_location() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::apollo::common::PointENU& Subsignal::_internal_location() const {
  return *location_;
}
inline const ::apollo::common::PointENU& Subsignal::location() const {
  const ::apollo::common::PointENU* p = location_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.Subsignal.location)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::common::PointENU*>(
      &::apollo::common::_PointENU_default_instance_);
}
inline ::apollo::common::PointENU* Subsignal::release_location() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Subsignal.location)
  clear_has_location();
  ::apollo::common::PointENU* temp = location_;
  location_ = NULL;
  return temp;
}
inline ::apollo::common::PointENU* Subsignal::mutable_location() {
  set_has_location();
  if (location_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::common::PointENU>(GetArenaNoVirtual());
    location_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Subsignal.location)
  return location_;
}
inline void Subsignal::set_allocated_location(::apollo::common::PointENU* location) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(location_);
  }
  if (location) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      location = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, location, submessage_arena);
    }
    set_has_location();
  } else {
    clear_has_location();
  }
  location_ = location;
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Subsignal.location)
}

// -------------------------------------------------------------------

// SignInfo

// optional .apollo.hdmap.SignInfo.Type type = 1;
inline bool SignInfo::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignInfo::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignInfo::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignInfo::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::apollo::hdmap::SignInfo_Type SignInfo::type() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SignInfo.type)
  return static_cast< ::apollo::hdmap::SignInfo_Type >(type_);
}
inline void SignInfo::set_type(::apollo::hdmap::SignInfo_Type value) {
  assert(::apollo::hdmap::SignInfo_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo.hdmap.SignInfo.type)
}

// -------------------------------------------------------------------

// Signal

// optional .apollo.hdmap.Id id = 1;
inline bool Signal::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Signal::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Signal::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::apollo::hdmap::Id& Signal::_internal_id() const {
  return *id_;
}
inline const ::apollo::hdmap::Id& Signal::id() const {
  const ::apollo::hdmap::Id* p = id_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.Signal.id)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Id*>(
      &::apollo::hdmap::_Id_default_instance_);
}
inline ::apollo::hdmap::Id* Signal::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Signal.id)
  clear_has_id();
  ::apollo::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
inline ::apollo::hdmap::Id* Signal::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::hdmap::Id>(GetArenaNoVirtual());
    id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Signal.id)
  return id_;
}
inline void Signal::set_allocated_id(::apollo::hdmap::Id* id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(id_);
  }
  if (id) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, id, submessage_arena);
    }
    set_has_id();
  } else {
    clear_has_id();
  }
  id_ = id;
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Signal.id)
}

// optional .apollo.hdmap.Polygon boundary = 2;
inline bool Signal::has_boundary() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Signal::set_has_boundary() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Signal::clear_has_boundary() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::apollo::hdmap::Polygon& Signal::_internal_boundary() const {
  return *boundary_;
}
inline const ::apollo::hdmap::Polygon& Signal::boundary() const {
  const ::apollo::hdmap::Polygon* p = boundary_;
  // @@protoc_insertion_point(field_get:apollo.hdmap.Signal.boundary)
  return p != NULL ? *p : *reinterpret_cast<const ::apollo::hdmap::Polygon*>(
      &::apollo::hdmap::_Polygon_default_instance_);
}
inline ::apollo::hdmap::Polygon* Signal::release_boundary() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Signal.boundary)
  clear_has_boundary();
  ::apollo::hdmap::Polygon* temp = boundary_;
  boundary_ = NULL;
  return temp;
}
inline ::apollo::hdmap::Polygon* Signal::mutable_boundary() {
  set_has_boundary();
  if (boundary_ == NULL) {
    auto* p = CreateMaybeMessage<::apollo::hdmap::Polygon>(GetArenaNoVirtual());
    boundary_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Signal.boundary)
  return boundary_;
}
inline void Signal::set_allocated_boundary(::apollo::hdmap::Polygon* boundary) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(boundary_);
  }
  if (boundary) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      boundary = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, boundary, submessage_arena);
    }
    set_has_boundary();
  } else {
    clear_has_boundary();
  }
  boundary_ = boundary;
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Signal.boundary)
}

// repeated .apollo.hdmap.Subsignal subsignal = 3;
inline int Signal::subsignal_size() const {
  return subsignal_.size();
}
inline void Signal::clear_subsignal() {
  subsignal_.Clear();
}
inline ::apollo::hdmap::Subsignal* Signal::mutable_subsignal(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Signal.subsignal)
  return subsignal_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Subsignal >*
Signal::mutable_subsignal() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.Signal.subsignal)
  return &subsignal_;
}
inline const ::apollo::hdmap::Subsignal& Signal::subsignal(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Signal.subsignal)
  return subsignal_.Get(index);
}
inline ::apollo::hdmap::Subsignal* Signal::add_subsignal() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.Signal.subsignal)
  return subsignal_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Subsignal >&
Signal::subsignal() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.Signal.subsignal)
  return subsignal_;
}

// repeated .apollo.hdmap.Id overlap_id = 4;
inline int Signal::overlap_id_size() const {
  return overlap_id_.size();
}
inline ::apollo::hdmap::Id* Signal::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Signal.overlap_id)
  return overlap_id_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
Signal::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.Signal.overlap_id)
  return &overlap_id_;
}
inline const ::apollo::hdmap::Id& Signal::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Signal.overlap_id)
  return overlap_id_.Get(index);
}
inline ::apollo::hdmap::Id* Signal::add_overlap_id() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.Signal.overlap_id)
  return overlap_id_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
Signal::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.Signal.overlap_id)
  return overlap_id_;
}

// optional .apollo.hdmap.Signal.Type type = 5;
inline bool Signal::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Signal::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Signal::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Signal::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::apollo::hdmap::Signal_Type Signal::type() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Signal.type)
  return static_cast< ::apollo::hdmap::Signal_Type >(type_);
}
inline void Signal::set_type(::apollo::hdmap::Signal_Type value) {
  assert(::apollo::hdmap::Signal_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo.hdmap.Signal.type)
}

// repeated .apollo.hdmap.Curve stop_line = 6;
inline int Signal::stop_line_size() const {
  return stop_line_.size();
}
inline ::apollo::hdmap::Curve* Signal::mutable_stop_line(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Signal.stop_line)
  return stop_line_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >*
Signal::mutable_stop_line() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.Signal.stop_line)
  return &stop_line_;
}
inline const ::apollo::hdmap::Curve& Signal::stop_line(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Signal.stop_line)
  return stop_line_.Get(index);
}
inline ::apollo::hdmap::Curve* Signal::add_stop_line() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.Signal.stop_line)
  return stop_line_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >&
Signal::stop_line() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.Signal.stop_line)
  return stop_line_;
}

// repeated .apollo.hdmap.SignInfo sign_info = 7;
inline int Signal::sign_info_size() const {
  return sign_info_.size();
}
inline void Signal::clear_sign_info() {
  sign_info_.Clear();
}
inline ::apollo::hdmap::SignInfo* Signal::mutable_sign_info(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Signal.sign_info)
  return sign_info_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SignInfo >*
Signal::mutable_sign_info() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.Signal.sign_info)
  return &sign_info_;
}
inline const ::apollo::hdmap::SignInfo& Signal::sign_info(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Signal.sign_info)
  return sign_info_.Get(index);
}
inline ::apollo::hdmap::SignInfo* Signal::add_sign_info() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.Signal.sign_info)
  return sign_info_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SignInfo >&
Signal::sign_info() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.Signal.sign_info)
  return sign_info_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::hdmap::Subsignal_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::hdmap::Subsignal_Type>() {
  return ::apollo::hdmap::Subsignal_Type_descriptor();
}
template <> struct is_proto_enum< ::apollo::hdmap::SignInfo_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::hdmap::SignInfo_Type>() {
  return ::apollo::hdmap::SignInfo_Type_descriptor();
}
template <> struct is_proto_enum< ::apollo::hdmap::Signal_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::hdmap::Signal_Type>() {
  return ::apollo::hdmap::Signal_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_map_5fsignal_2eproto
