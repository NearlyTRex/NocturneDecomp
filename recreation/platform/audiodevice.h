#pragma once

#include "platform/fwd.h"

#include <span>
#include <string>
#include <string_view>
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

// The output the game's software mixer feeds. The device converts from the format the source
// was opened with, so the mixer always gets what it asked for.
class IAudioDevice {
public:
    virtual ~IAudioDevice() = default;

    // The host audio API in use, such as "pipewire" or "wasapi"; empty before any is.
    [[nodiscard]] virtual std::string getDriverName() = 0;
    // Playback devices by the names the INI's DeviceName stores.
    [[nodiscard]] virtual std::vector<std::string> getDeviceNames() = 0;
    // Starts pulling from source; the device asks only for what it is about to play. An empty
    // name is the system default; a name no device has fails.
    [[nodiscard]] virtual bool open(std::string_view device_name, const SAudioFormat &format,
                                    IAudioSource &source) = 0;
    virtual void setPaused(bool paused) = 0;
    // Once it returns, the source is not being read and will not be read again.
    virtual void close() = 0;
};

} // namespace nocturne::platform
