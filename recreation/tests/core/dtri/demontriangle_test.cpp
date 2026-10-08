#include "core/dtri/demontriangle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonTriangle, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonTriangle>);
}

TEST(CDemonTriangle, Constructors) {
    static_assert(std::is_constructible_v<CDemonTriangle>);
}

TEST(CDemonTriangle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonTriangle::readDataBinary),
                                 void (CDemonTriangle::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CDemonTriangle::buildCollision),
                                 void (CDemonTriangle::*)(CVector3f *, CVector3f *, CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
