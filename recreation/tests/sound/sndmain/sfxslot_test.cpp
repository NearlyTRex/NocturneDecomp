#include "sound/sndmain/sfxslot.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSfxSlot, IsConcrete) {
    static_assert(!std::is_abstract_v<CSfxSlot>);
}

TEST(CSfxSlot, Constructors) {
    static_assert(std::is_constructible_v<CSfxSlot>);
}

TEST(CSfxSlot, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSfxSlot::compute), int (CSfxSlot::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSfxSlot::kill), void (CSfxSlot::*)()>);
    static_assert(std::is_same_v<decltype(&CSfxSlot::seek), void (CSfxSlot::*)()>);
}

} // namespace
} // namespace nocturne::sound
