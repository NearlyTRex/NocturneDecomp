#include "sound/sndmain/sounddeviceprovider.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(ISoundDeviceProvider, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<ISoundDeviceProvider>);
    static_assert(std::has_virtual_destructor_v<ISoundDeviceProvider>);
}

TEST(ISoundDeviceProvider, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&ISoundDeviceProvider::enumerateSoundDevice),
                       bool (ISoundDeviceProvider::*)(std::uint32_t, SSoundDeviceInfo &)>);
    static_assert(std::is_same_v<decltype(&ISoundDeviceProvider::getSoundDevice),
                                 CSoundDevice *(ISoundDeviceProvider::*)(std::uint32_t)>);
}

} // namespace
} // namespace nocturne::sound
