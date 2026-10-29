#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/edittool/strlist.h"
#include "sound/fwd.h"

#include <cstdint>
#include <functional>
#include <string_view>

namespace nocturne::core {

// The game's sounds, played through the sound system it shuts down when it goes.
class CSound {
public:
    // The sound system's channels, as the game plays on them.
    static constexpr int kEffectsChannel = 0;
    static constexpr int kMusicChannel = 1;
    static constexpr int kDialogChannel = 2;

    CSound(sound::CSndMain &sound_main, engine::CPod &pod, platform::IFileSystem &file_system);
    ~CSound();
    CSound(const CSound &) = delete;
    CSound &operator=(const CSound &) = delete;
    CSound(CSound &&) = delete;
    CSound &operator=(CSound &&) = delete;

    void findRandomSoundFile(char *out_result, char *wildcard_pattern);
    // Lists sound\*.wav and sound\*.mp3 the first time, then takes up the sound device.
    void findAllSoundFiles();
    void init();
    void shutdown();
    void process();
    // Turns the effects and music down to the menu's level and the dialog to full at most, then,
    // unless sound is muted, stops every sound, puts the listener at the origin and starts the
    // menu music at the output's rate.
    void configure();
    // Given the length of the menu music configure starts, and 0 whenever none plays: muted, or
    // every sound stopped by reset.
    void setMusicHandler(std::function<void(float)> handler);
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
    // In seconds, the name ending at an '@', a '*' or whitespace; -1 when there is no such sound.
    [[nodiscard]] float getSoundDuration(std::string_view sound_name);
    void setReverbPreset(int index);
    void setVolumeFade(float target_volume, float fade_time);

    [[nodiscard]] const shape::CStrList &getSoundFileList() const;

private:
    void reportMusic(float seconds) const;

    sound::CSndMain &sound_main_;
    engine::CPod &pod_;
    platform::IFileSystem &file_system_;
    shape::CStrList sound_file_list_;
    std::function<void(float)> music_handler_;
};

} // namespace nocturne::core
