#include "sound/sndmain/sampleinfo.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSampleInfo, IsConcrete) {
    static_assert(!std::is_abstract_v<CSampleInfo>);
}

TEST(CSampleInfo, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CSampleInfo::getSampleDuration), double (CSampleInfo::*)()>);
    static_assert(std::is_same_v<decltype(&CSampleInfo::cvtPlaybackPos),
                                 double (CSampleInfo::*)(double, std::uint32_t, std::uint32_t)>);
}

} // namespace
} // namespace nocturne::sound
