#include "core/fire/laserbeam.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLaserBeam, IsConcrete) {
    static_assert(!std::is_abstract_v<CLaserBeam>);
}

TEST(CLaserBeam, Constructors) {
    static_assert(std::is_constructible_v<CLaserBeam>);
}

TEST(CLaserBeam, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLaserBeam::init),
                                 void (CLaserBeam::*)(CVector3f *, CVector3f *, float, float,
                                                      CVector3f *, int, int, int, float, float)>);
    static_assert(std::is_same_v<decltype(&CLaserBeam::render), void (CLaserBeam::*)()>);
}

} // namespace
} // namespace nocturne::core
