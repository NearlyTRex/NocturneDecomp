#include "core/gore/footstep.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFootstep, IsConcrete) {
    static_assert(!std::is_abstract_v<CFootstep>);
}

TEST(CFootstep, Constructors) {
    static_assert(std::is_constructible_v<CFootstep>);
}

TEST(CFootstep, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFootstep::init),
                                 void (CFootstep::*)(common::CVector3f *,
                                                     common::UOrientationVector *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CFootstep::render), void (CFootstep::*)(int)>);
}

} // namespace
} // namespace nocturne::core
