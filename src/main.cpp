#include <iostream>
#include <fstream>
#include <string>
#include "map.pb.h"
#include "map_geometry.pb.h"

int main() {
    apollo::common::PointENU point1;
    point1.set_x(5);
    point1.set_y(6);
    point1.set_z(7);
    apollo::hdmap::Polygon polygon;
    auto point2 = polygon.add_point();
    point2->set_x(1);
    point2->set_y(2);
    point2->set_z(3);

    std::string filename = "example1_";
    std::fstream output(filename, std::ios::out | std::ios::trunc | std::ios::binary);
    if (!polygon.SerializeToOstream(&output)) {
        std::cerr << "Failed to write example1." << std::endl;
        exit(-1);
    }


    return 0;
}