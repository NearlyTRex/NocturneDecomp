#include "core/fire/muzzleflash.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMuzzleFlash, IsConcrete) {
    static_assert(!std::is_abstract_v<CMuzzleFlash>);
}

TEST(CMuzzleFlash, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CMuzzleFlash::init),
                       void (CMuzzleFlash::*)(common::CVector3f *, common::CMatrix3x3f *)>);
    static_assert(std::is_same_v<decltype(&CMuzzleFlash::process), void (CMuzzleFlash::*)()>);
    static_assert(std::is_same_v<decltype(&CMuzzleFlash::render), void (CMuzzleFlash::*)()>);
}

} // namespace
} // namespace nocturne::core
