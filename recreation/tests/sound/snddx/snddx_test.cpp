#include "sound/snddx/snddx.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(SoundSnddxFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&enumerateDirectSoundDevice),
                                 int (*)(std::uint32_t, SSoundDeviceInfo *)>);
    static_assert(
        std::is_same_v<decltype(&getDirectSoundDevice), CDirectSoundDevice *(*)(std::uint32_t)>);
}

} // namespace
} // namespace nocturne::sound
