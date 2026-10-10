#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CSound {
public:
    CSound();
    ~CSound();

    void findRandomSoundFile(char *out_result, char *wildcard_pattern);
    void findAllSoundFiles();
    void init();
    void shutdown();
    void process();
    void configure();
    void reset();
    void playAmbientSound(char *sound_name);
    std::uint32_t playSound(void *user_data, char *sound_name);
    std::uint32_t playActorSound(CDemonActor *actor, char *sound_name, common::CVector3f *position);
    std::uint32_t playTrackedActorSound(CDemonActor *actor, char *sound_name,
                                        common::CVector3f *position_tracker);
    std::uint32_t playActorPositionalSoundWithDelay(CDemonActor *actor, char *sound_name,
                                                    common::CVector3f *position, float delay);
    std::uint32_t playTrackedActorSoundWithDelay(CDemonActor *actor, char *sound_name,
                                                 common::CVector3f *position_tracker, float delay);
    int isSoundPlaying(std::uint32_t sfx_handle);
    void killSound(std::uint32_t sfx_handle);
    float getSoundDuration(char *sound_name);
    void setReverbPreset(int index);
    void setVolumeFade(float target_volume, float fade_time);
};

} // namespace nocturne::core
