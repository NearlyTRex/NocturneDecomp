#include "core/tbplayer/bassplayer.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBassPlayer, DerivesFromCNPC) {
    static_assert(std::is_base_of_v<CNPC, CBassPlayer>);
}

TEST(CBassPlayer, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBassPlayer>);
}

TEST(CBassPlayer, IsConcrete) {
    static_assert(!std::is_abstract_v<CBassPlayer>);
}

TEST(CBassPlayer, Constructors) {
    static_assert(std::is_constructible_v<CBassPlayer>);
}

TEST(CBassPlayer, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBassPlayer::setup), void (CBassPlayer::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBassPlayer::getActorType), CDemonActorType *(CBassPlayer::*)()>);
    static_assert(std::is_same_v<decltype(&CBassPlayer::processDamage),
                                 void (CBassPlayer::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBassPlayer::getCarryObjToBodyXForm),
                       common::CMatrix3x4f *(CBassPlayer::*)(int, common::CMatrix3x4f *)>);
}

} // namespace
} // namespace nocturne::core
