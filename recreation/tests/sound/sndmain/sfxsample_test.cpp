#include "sound/sndmain/sfxsample.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSfxSample, IsConcrete) {
    static_assert(!std::is_abstract_v<CSfxSample>);
}

TEST(CSfxSample, Constructors) {
    static_assert(std::is_constructible_v<CSfxSample>);
}

TEST(CSfxSample, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSfxSample::parseConfigFile), void (CSfxSample::*)()>);
    static_assert(std::is_same_v<decltype(&CSfxSample::freeMemory), void (CSfxSample::*)()>);
    static_assert(std::is_same_v<decltype(&CSfxSample::init), CSfxSample *(CSfxSample::*)()>);
    static_assert(std::is_same_v<decltype(&CSfxSample::getBytesPerFrame), int (CSfxSample::*)()>);
    static_assert(std::is_same_v<decltype(&CSfxSample::normalizePlaybackPos),
                                 double (CSfxSample::*)(double, std::uint32_t)>);
}

} // namespace
} // namespace nocturne::sound
