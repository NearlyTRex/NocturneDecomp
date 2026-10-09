#include "core/fire/bullethole.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBulletHole, IsConcrete) {
    static_assert(!std::is_abstract_v<CBulletHole>);
}

TEST(CBulletHole, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBulletHole::init),
                                 void (CBulletHole::*)(common::CVector3f *, common::CVector3f *,
                                                       CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CBulletHole::process), void (CBulletHole::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBulletHole::setupRenderState), void (CBulletHole::*)()>);
    static_assert(std::is_same_v<decltype(&CBulletHole::render), void (CBulletHole::*)()>);
}

} // namespace
} // namespace nocturne::core
