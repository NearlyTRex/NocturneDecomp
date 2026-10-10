#include "sound/sndmain/sfxoptions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSfxOptions, IsConcrete) {
    static_assert(!std::is_abstract_v<CSfxOptions>);
}

TEST(CSfxOptions, Constructors) {
    static_assert(std::is_constructible_v<CSfxOptions>);
}

TEST(CSfxOptions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSfxOptions::reset), void (CSfxOptions::*)()>);
}

} // namespace
} // namespace nocturne::sound
