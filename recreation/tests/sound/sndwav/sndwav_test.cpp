#include "sound/sndwav/sndwav.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(SoundSndwavFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&enumerateWavOutDevice),
                                 int (*)(std::uint32_t, SSoundDeviceInfo *)>);
    static_assert(std::is_same_v<decltype(&getWavOutDevice), CWavOutDevice *(*)(std::uint32_t)>);
}

} // namespace
} // namespace nocturne::sound
