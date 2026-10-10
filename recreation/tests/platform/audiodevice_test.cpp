#include "platform/audiodevice.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IAudioSource, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IAudioSource>);
    static_assert(std::has_virtual_destructor_v<IAudioSource>);
}

TEST(IAudioSource, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IAudioSource::readFrames),
                                 void (IAudioSource::*)(std::span<float>)>);
}

TEST(IAudioDevice, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IAudioDevice>);
    static_assert(std::has_virtual_destructor_v<IAudioDevice>);
}

TEST(IAudioDevice, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IAudioDevice::getDriverName), std::string (IAudioDevice::*)()>);
    static_assert(std::is_same_v<decltype(&IAudioDevice::getDeviceNames),
                                 std::vector<std::string> (IAudioDevice::*)()>);
    static_assert(std::is_same_v<decltype(&IAudioDevice::open),
                                 bool (IAudioDevice::*)(std::string_view, const SAudioFormat &,
                                                        IAudioSource &)>);
    static_assert(std::is_same_v<decltype(&IAudioDevice::setPaused), void (IAudioDevice::*)(bool)>);
    static_assert(std::is_same_v<decltype(&IAudioDevice::close), void (IAudioDevice::*)()>);
}

TEST(SAudioFormat, DefaultsToCdQualityStereo) {
    const SAudioFormat format;
    EXPECT_EQ(format.sample_rate, 44100);
    EXPECT_EQ(format.channel_count, 2);
}

} // namespace
} // namespace nocturne::platform
