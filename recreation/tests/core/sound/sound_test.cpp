#include "core/sound/sound.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSound, IsConcrete) {
    static_assert(!std::is_abstract_v<CSound>);
}

TEST(CSound, Constructors) {
    static_assert(std::is_constructible_v<CSound>);
}

TEST(CSound, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CSound::findRandomSoundFile), void (CSound::*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&CSound::findAllSoundFiles), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::init), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::shutdown), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::process), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::configure), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::reset), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::playAmbientSound), void (CSound::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CSound::playSound), std::uint32_t (CSound::*)(void *, char *)>);
    static_assert(
        std::is_same_v<decltype(&CSound::playActorSound),
                       std::uint32_t (CSound::*)(CDemonActor *, char *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CSound::playTrackedActorSound),
                       std::uint32_t (CSound::*)(CDemonActor *, char *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CSound::playActorPositionalSoundWithDelay),
                                 std::uint32_t (CSound::*)(CDemonActor *, char *,
                                                           common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CSound::playTrackedActorSoundWithDelay),
                                 std::uint32_t (CSound::*)(CDemonActor *, char *,
                                                           common::CVector3f *, float)>);
    static_assert(
        std::is_same_v<decltype(&CSound::isSoundPlaying), int (CSound::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CSound::killSound), void (CSound::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CSound::getSoundDuration), float (CSound::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CSound::setReverbPreset), void (CSound::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSound::setVolumeFade), void (CSound::*)(float, float)>);
}

} // namespace
} // namespace nocturne::core
