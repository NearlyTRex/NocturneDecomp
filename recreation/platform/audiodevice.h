#pragma once

#include "platform/fwd.h"

#include <cstddef>
#include <span>
#include <string>
#include <vector>

namespace nocturne::platform {

struct SAudioFormat {
    int sample_rate = 44100;
    int channel_count = 2;
};

// Mixed audio, produced on demand. Called on the device's thread.
class IAudioSource {
public:
    virtual ~IAudioSource() = default;

    // Fills frames with interleaved samples in [-1, 1], frames.size() / channel_count frames.
    virtual void readFrames(std::span<float> frames) = 0;
};

class IAudioDevice {
public:
    virtual ~IAudioDevice() = default;

    // Output devices for the sound options menu, the default first.
    [[nodiscard]] virtual std::vector<std::string> getDeviceNames() = 0;
    // Starts pulling from source; the device asks only for what it is about to play.
    [[nodiscard]] virtual bool open(std::size_t device_index, const SAudioFormat &format,
                                    IAudioSource &source) = 0;
    virtual void close() = 0;
};

} // namespace nocturne::platform
