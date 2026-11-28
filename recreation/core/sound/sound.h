#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/edittool/strlist.h"
#include "sound/fwd.h"

#include <cstdint>
#include <functional>
#include <string>
#include <string_view>

namespace nocturne::core {

// What the sounds play through and are found in, the packages' content whose menu music
// configure starts, the stream that picks among a name's files, the console a missing one is
// reported on, and the size of room a point in the set sounds like.
struct SSoundOwners {
    sound::CSndMain &sound_main;
    engine::CPod &pod;
    platform::IFileSystem &file_system;
    const engine::SGameContent &content;
    common::CWatcomRandom &crt_random;
    engine::CConsole &console;
    std::function<int(const common::CVector3f &)> room_size_at;
};

// What a session's sounds follow: the camera the listener is on, the set whose wind and water
// play, and the square feet of its water that show.
struct SSoundScene {
    CDemonCamera &camera;
    const CDemonSet &set;
    float water_area = 0.0F;
};

// The game's sounds, played through the sound system it shuts down when it goes.
class CSound {
public:
    // The sound system's channels, as the game plays on them.
    static constexpr int kEffectsChannel = 0;
    static constexpr int kMusicChannel = 1;
    static constexpr int kDialogChannel = 2;
    // The set's ambient sound's, on and as loud as the effects'.
    static constexpr int kAmbientChannel = 3;

    explicit CSound(SSoundOwners owners);
    ~CSound();
    CSound(const CSound &) = delete;
    CSound &operator=(const CSound &) = delete;
    CSound(CSound &&) = delete;
    CSound &operator=(CSound &&) = delete;

    // One of the first 40 listed sound files the pattern matches, ignoring case, picked at
    // random; empty when none does.
    [[nodiscard]] std::string findRandomSoundFile(std::string_view wildcard_pattern);
    // Lists sound\*.wav and sound\*.mp3 the first time, then takes up the sound device.
    void findAllSoundFiles();
    // A session's audio: the wind and water silent, the listener on the camera, the output
    // started and, once it runs, the set's ambient sound.
    void init(const SSoundScene &scene);
    // Every sound stopped and the output with them, until init.
    void shutdown();
    // A frame of the session's sounds, delta_time seconds long: the listener follows the camera,
    // and the wind and water move toward how loud the scene makes them.
    void process(const SSoundScene &scene, float delta_time);
    // Turns the effects and music down to the menu's level and the dialog to full at most, then,
    // unless sound is muted, stops every sound, puts the listener at the origin and starts the
    // menu music at the output's rate.
    void configure();
    // Given the length of the menu music configure starts, and 0 whenever none plays: muted, or
    // every sound stopped by reset.
    void setMusicHandler(std::function<void(float)> handler);
    void reset();
    // Stops the ambient sound and makes the one named the set's ambient sound, playing it once
    // the session's audio is up.
    void playAmbientSound(std::string_view sound_name);
    // A sound by its name, without a position: a file pattern, where "[a,b]" stands for the
    // numbers from a to b and '!' for the size of the room it plays in, ".wav" unless it says
    // otherwise, then "@volume" and "*pitch" in either order. A bad range or modifier is fatal;
    // 0 when muted, unnamed, or when no file matches, which the console reports.
    std::uint32_t playSound(std::string_view sound_name);
    std::uint32_t playActorSound(CDemonActor *actor, char *sound_name, common::CVector3f *position);
    std::uint32_t playTrackedActorSound(CDemonActor *actor, char *sound_name,
                                        common::CVector3f *position_tracker);
    std::uint32_t playActorPositionalSoundWithDelay(CDemonActor *actor, char *sound_name,
                                                    common::CVector3f *position, float delay);
    std::uint32_t playTrackedActorSoundWithDelay(CDemonActor *actor, char *sound_name,
                                                 common::CVector3f *position_tracker, float delay);
    [[nodiscard]] bool isSoundPlaying(std::uint32_t sfx_handle);
    void killSound(std::uint32_t sfx_handle);
    // In seconds, the name ending at an '@', a '*' or whitespace; -1 when there is no such sound.
    [[nodiscard]] float getSoundDuration(std::string_view sound_name);
    void setReverbPreset(int index);
    void setVolumeFade(float target_volume, float fade_time);

    [[nodiscard]] const shape::CStrList &getSoundFileList() const;
    // The ambient sound the set plays, as a sound name with any modifiers.
    [[nodiscard]] const std::string &getAmbientSoundName() const;

private:
    void reportMusic(float seconds) const;
    std::uint32_t playSfxInternal(std::string_view sound_name, const common::CVector3f &position,
                                  std::uint32_t flags);
    // The first file the pattern's '!' finds as the room's size, then a size one more and one
    // less, out to four away.
    [[nodiscard]] std::string findRoomSoundFile(std::string_view pattern,
                                                const common::CVector3f &position);
    // The ambient channel on as the effects channel is, as loud.
    void followEffectsChannel();
    // The listener on the camera, once it has moved, and the wind's target where it was.
    void updateListeners(const SSoundScene &scene);
    // How loud the wind the camera's view makes is, 0 to 1, as heard from eye.
    [[nodiscard]] static float sampleWind(const SSoundScene &scene, const common::CVector3f &eye);
    // The volume moved toward the target by at most step; the sound stopped once silent, or
    // started from file if it isn't playing.
    void stepLoopVolume(float &volume, float target, float step, std::uint32_t &handle,
                        std::string_view file);

    // The wind's and the water's volumes now, and the wind's target.
    float wind_target_ = 0.0F;
    float wind_volume_ = 0.0F;
    float water_volume_ = 0.0F;
    std::uint32_t wind_sfx_handle_ = 0;
    std::uint32_t water_sfx_handle_ = 0;
    // Where the listener was put last; far off until updateListeners first moves it.
    common::CVector3f listener_previous_;

    sound::CSndMain &sound_main_;
    engine::CPod &pod_;
    platform::IFileSystem &file_system_;
    const engine::SGameContent &content_;
    common::CWatcomRandom &crt_random_;
    engine::CConsole &console_;
    std::function<int(const common::CVector3f &)> room_size_at_;
    shape::CStrList sound_file_list_;
    std::function<void(float)> music_handler_;
    std::string ambient_sound_name_;
    std::uint32_t ambient_sfx_handle_ = 0;
    // The original's g_SoundAudioInitialized: init has run, and shutdown hasn't since.
    bool audio_initialized_ = false;
};

} // namespace nocturne::core
