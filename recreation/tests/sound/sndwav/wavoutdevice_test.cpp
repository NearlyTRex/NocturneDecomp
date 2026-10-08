#include "sound/sndwav/wavoutdevice.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CWavOutDevice, DerivesFromCSoundDevice) {
    static_assert(std::is_base_of_v<CSoundDevice, CWavOutDevice>);
}

TEST(CWavOutDevice, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWavOutDevice>);
}

TEST(CWavOutDevice, IsConcrete) {
    static_assert(!std::is_abstract_v<CWavOutDevice>);
}

TEST(CWavOutDevice, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWavOutDevice::close), int (CWavOutDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::start), int (CWavOutDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::reset), int (CWavOutDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::setMode),
                                 int (CWavOutDevice::*)(int, int, int, int *)>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::poll),
                                 int (CWavOutDevice::*)(std::int16_t *, int)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::hasHardware3D), int (CWavOutDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::set3DListenerPos),
                                 void (CWavOutDevice::*)(double, double, double)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::set3DListenerOrient),
                       void (CWavOutDevice::*)(double, double, double, double, double, double)>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::set3DListenerVelocity),
                                 void (CWavOutDevice::*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::set3DListenerDistanceFactor),
                                 void (CWavOutDevice::*)(double)>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::commitDeferredSettings),
                                 void (CWavOutDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::allocateSample),
                                 int (CWavOutDevice::*)(int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::freeSample), void (CWavOutDevice::*)(int)>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::lockSample),
                                 int (CWavOutDevice::*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::unlockSample), void (CWavOutDevice::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::allocateSfx), int (CWavOutDevice::*)(int)>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::setSfxPos),
                                 int (CWavOutDevice::*)(CSfxSlot *, int)>);
    static_assert(std::is_same_v<decltype(&CWavOutDevice::getSfxPlaybackPos),
                                 double (CWavOutDevice::*)(CSfxSlot *)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::startSfx), int (CWavOutDevice::*)(CSfxSlot *)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::killSfx), void (CWavOutDevice::*)(CSfxSlot *)>);
    static_assert(
        std::is_same_v<decltype(&CWavOutDevice::isSfxPlaying), int (CWavOutDevice::*)(CSfxSlot *)>);
}

} // namespace
} // namespace nocturne::sound
