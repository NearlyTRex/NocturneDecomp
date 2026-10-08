#include "core/course/course.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCourse, IsConcrete) {
    static_assert(!std::is_abstract_v<CCourse>);
}

TEST(CCourse, Constructors) {
    static_assert(std::is_constructible_v<CCourse>);
}

TEST(CCourse, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCourse::load), void (CCourse::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CCourse::free), void (CCourse::*)()>);
    static_assert(std::is_same_v<decltype(&CCourse::evaluate),
                                 void (CCourse::*)(float, CVector3f *, CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
