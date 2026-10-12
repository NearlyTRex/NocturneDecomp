#pragma once

#include "sound/fwd.h"
#include "sound/sndmain/sfxoptions.h"

#include <array>
#include <cstddef>
#include <memory>
#include <span>

namespace nocturne::sound {

// One of the voices sounds play in: the options it started with, the sample it plays, and the
// volumes and pitch worked out for where it is.
class CSfxSlot {
public:
    // The most output channels the volumes are worked out for.
    static constexpr std::size_t kMaxChannels = 8;

    explicit CSfxSlot(CSndMain &sound_main);
    ~CSfxSlot();
    CSfxSlot(const CSfxSlot &) = delete;
    CSfxSlot &operator=(const CSfxSlot &) = delete;
    CSfxSlot(CSfxSlot &&) = delete;
    CSfxSlot &operator=(CSfxSlot &&) = delete;

    // Advances the fade by delta_time seconds, then works out the volumes and pitch for where the
    // sound and the listener are and hands them to the voice. False once the slot is empty.
    bool compute(float delta_time);
    // Stops the voice and lets go of the sample, freeing a streamed one.
    void kill();
    // Moves to the playback position the options ask for, in samples, wrapped or clamped to the
    // sample.
    void seek();
    // Brings the playback position up to a cursor in the sample, keeping it inside the sample.
    void updatePlaybackPos(double hardware_playback_pos);
    // Gives the slot a voice at the playback position, starting after the options' delay.
    void play(CSfxMixer &mixer);
    // Empties the slot once its voice has played to the end.
    void pollHwHandle();
    // Brings the playback position up to the voice's cursor; false without a voice.
    bool pollHwPlaybackPos();
    [[nodiscard]] std::span<const float> getChannelVolumes() const;

    CSfxOptions options;
    // The generation its handle carries; 0 when the slot is free.
    int playback_state = 0;
    CSfxSample *sample = nullptr;
    // The rate the sample plays at, as a multiple of its own.
    float effective_frequency = 1.0F;
    std::array<float, kMaxChannels> distance_to_speakers{};
    std::array<float, kMaxChannels> channel_volumes{};
    // The sample's distances, taken when it starts.
    float reference_distance = 0.0F;
    float min_distance = 0.0F;
    float max_distance = 0.0F;
    float fade_target_volume = 0.0F;
    // Seconds left; negative when it isn't fading.
    float fade_time_remaining = -1.0F;
    bool stop_after_fade = false;
    // The voice's cursor when the playback position was last brought up to date.
    double prev_hardware_playback_pos = 0.0;

private:
    void updateBoundPositionAndVelocity();
    void computeDistancesToSpeakers();
    void computeChannelVolumes();
    [[nodiscard]] float computeDoppler() const;
    [[nodiscard]] std::size_t getChannelCount() const;
    [[nodiscard]] bool isPositional() const;

    CSndMain &sound_main_;
    std::unique_ptr<CSfxVoice> voice_;
};

} // namespace nocturne::sound
