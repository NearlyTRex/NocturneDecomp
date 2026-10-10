#include "core/dcube/demoncubetriangle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonCubeTriangle, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonCubeTriangle>);
}

TEST(CDemonCubeTriangle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonCubeTriangle::readFromFile),
                                 void (CDemonCubeTriangle::*)(std::FILE *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCubeTriangle::rayTriangleIntersection),
                       float (CDemonCubeTriangle::*)(common::CVector3f *, common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
