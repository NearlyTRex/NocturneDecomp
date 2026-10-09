#include "sound/sndmain/sounddevice.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSoundDevice, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSoundDevice>);
}

TEST(CSoundDevice, IsAbstract) {
    static_assert(std::is_abstract_v<CSoundDevice>);
}

TEST(CSoundDevice, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSoundDevice::close), int (CSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::start), int (CSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::reset), int (CSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::setMode),
                                 int (CSoundDevice::*)(int, int, int, int *)>);
    static_assert(
        std::is_same_v<decltype(&CSoundDevice::poll), int (CSoundDevice::*)(std::int16_t *, int)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::hasHardware3D), int (CSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::set3DListenerPos),
                                 void (CSoundDevice::*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::set3DListenerOrient),
                                 void (CSoundDevice::*)(double, double, double, double, double,
                                                        double, double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::set3DListenerVelocity),
                                 void (CSoundDevice::*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::set3DListenerDistanceFactor),
                                 void (CSoundDevice::*)(double)>);
    static_assert(
        std::is_same_v<decltype(&CSoundDevice::commitDeferredSettings), void (CSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::allocateSample),
                                 int (CSoundDevice::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::freeSample), void (CSoundDevice::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::lockSample),
                                 void *(CSoundDevice::*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CSoundDevice::unlockSample), void (CSoundDevice::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::allocateSfx), int (CSoundDevice::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CSoundDevice::setSfxPos), int (CSoundDevice::*)(CSfxSlot *, int)>);
    static_assert(std::is_same_v<decltype(&CSoundDevice::getSfxPlaybackPos),
                                 double (CSoundDevice::*)(CSfxSlot *)>);
    static_assert(
        std::is_same_v<decltype(&CSoundDevice::startSfx), int (CSoundDevice::*)(CSfxSlot *)>);
    static_assert(
        std::is_same_v<decltype(&CSoundDevice::killSfx), void (CSoundDevice::*)(CSfxSlot *)>);
    static_assert(
        std::is_same_v<decltype(&CSoundDevice::isSfxPlaying), int (CSoundDevice::*)(CSfxSlot *)>);
}

} // namespace
} // namespace nocturne::sound
