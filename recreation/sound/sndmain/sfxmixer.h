#pragma once

#include <cstdint>
#include <miniaudio.h>
#include <span>

namespace nocturne::sound {

// The mixer the voices play into, in the output's format: miniaudio's engine, read by the audio
// device's thread in place of the original's mix buffers.
class CSfxMixer {
public:
    // A format the engine can't run is fatal.
    CSfxMixer(int channel_count, int sample_rate);
    ~CSfxMixer();
    CSfxMixer(const CSfxMixer &) = delete;
    CSfxMixer &operator=(const CSfxMixer &) = delete;
    CSfxMixer(CSfxMixer &&) = delete;
    CSfxMixer &operator=(CSfxMixer &&) = delete;

    // Mixes frames.size() / the channel count frames, interleaved.
    void readFrames(std::span<float> frames);
    // The mixer's clock in frames, which runs while voices are playing or waiting to.
    [[nodiscard]] std::uint64_t getTime() const;
    [[nodiscard]] int getChannelCount() const;
    [[nodiscard]] int getSampleRate() const;
    [[nodiscard]] ma_engine &getEngine();

private:
    ma_engine engine_{};
};

} // namespace nocturne::sound
