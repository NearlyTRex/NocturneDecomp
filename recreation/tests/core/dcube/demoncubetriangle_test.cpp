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
                                 void (CDemonCubeTriangle::*)(common::CBinaryReader &)>);
    static_assert(std::is_same_v<decltype(&CDemonCubeTriangle::rayTriangleIntersection),
                                 float (CDemonCubeTriangle::*)(std::span<const common::CVector3f>,
                                                               const common::CVector3f &,
                                                               const common::CVector3f &) const>);
}

} // namespace
} // namespace nocturne::core
