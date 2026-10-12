#pragma once

#include "sound/fwd.h"

#include <cstdint>
#include <miniaudio.h>
#include <span>

namespace nocturne::sound {

// One sample playing in the mixer, at the gains and pitch CSfxSlot::compute works out: what the
// original's CSfxSlot::mix did into its mix buffers.
class CSfxVoice {
public:
    // Plays a streamed sample from its stream and any other from its data, which both have to
    // outlive the voice. One that can't be played is fatal.
    CSfxVoice(CSfxMixer &mixer, CSfxSample &sample);
    ~CSfxVoice();
    CSfxVoice(const CSfxVoice &) = delete;
    CSfxVoice &operator=(const CSfxVoice &) = delete;
    CSfxVoice(CSfxVoice &&) = delete;
    CSfxVoice &operator=(CSfxVoice &&) = delete;

    // Starts after delay_frames more frames are mixed.
    void start(std::uint64_t delay_frames);
    // One gain per output channel, in the sample's own scale: 1 plays it as recorded.
    void setGains(std::span<const float> channel_volumes);
    // A multiple of the sample's rate.
    void setPitch(float pitch);
    void setLooping(bool looping);
    void seek(std::uint64_t frame);
    [[nodiscard]] std::uint64_t getCursor() const;
    // A sound that doesn't loop is done once its last frame is mixed.
    [[nodiscard]] bool atEnd() const;

private:
    CSfxMixer &mixer_;
    ma_audio_buffer_ref data_{};
    ma_sound sound_{};
};

} // namespace nocturne::sound
