#include "sound/snddx/directsounddevice.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CDirectSoundDevice, DerivesFromCSoundDevice) {
    static_assert(std::is_base_of_v<CSoundDevice, CDirectSoundDevice>);
}

TEST(CDirectSoundDevice, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDirectSoundDevice>);
}

TEST(CDirectSoundDevice, IsConcrete) {
    static_assert(!std::is_abstract_v<CDirectSoundDevice>);
}

TEST(CDirectSoundDevice, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CDirectSoundDevice::close), int (CDirectSoundDevice::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDirectSoundDevice::start), int (CDirectSoundDevice::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDirectSoundDevice::reset), int (CDirectSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::setMode),
                                 int (CDirectSoundDevice::*)(int, int, int, int *)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::poll),
                                 int (CDirectSoundDevice::*)(std::int16_t *, int)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::hasHardware3D),
                                 int (CDirectSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::set3DListenerPos),
                                 void (CDirectSoundDevice::*)(double, double, double)>);
    static_assert(
        std::is_same_v<decltype(&CDirectSoundDevice::set3DListenerOrient),
                       void (CDirectSoundDevice::*)(double, double, double, double, double, double,
                                                    double, double, double)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::set3DListenerVelocity),
                                 void (CDirectSoundDevice::*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::set3DListenerDistanceFactor),
                                 void (CDirectSoundDevice::*)(double)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::commitDeferredSettings),
                                 void (CDirectSoundDevice::*)()>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::allocateSample),
                                 int (CDirectSoundDevice::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::freeSample),
                                 void (CDirectSoundDevice::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::lockSample),
                                 void *(CDirectSoundDevice::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::unlockSample),
                                 void (CDirectSoundDevice::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::allocateSfx),
                                 int (CDirectSoundDevice::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::setSfxPos),
                                 int (CDirectSoundDevice::*)(CSfxSlot *, int)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::getSfxPlaybackPos),
                                 double (CDirectSoundDevice::*)(CSfxSlot *)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::startSfx),
                                 int (CDirectSoundDevice::*)(CSfxSlot *)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::killSfx),
                                 void (CDirectSoundDevice::*)(CSfxSlot *)>);
    static_assert(std::is_same_v<decltype(&CDirectSoundDevice::isSfxPlaying),
                                 int (CDirectSoundDevice::*)(CSfxSlot *)>);
}

} // namespace
} // namespace nocturne::sound
