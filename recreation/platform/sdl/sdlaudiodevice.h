#pragma once

#include "platform/audiodevice.h"

#include <cstddef>
#include <memory>
#include <vector>

struct SDL_AudioStream;

namespace nocturne::platform::sdl {

// An SDL audio stream whose callback pulls float samples from the source in the format it was
// opened with; SDL converts to whatever the device plays. Needs a CSdlContext.
class CSdlAudioDevice final : public IAudioDevice {
public:
    CSdlAudioDevice() = default;
    ~CSdlAudioDevice() override;
    CSdlAudioDevice(const CSdlAudioDevice &) = delete;
    CSdlAudioDevice &operator=(const CSdlAudioDevice &) = delete;

    [[nodiscard]] std::string getDriverName() override;
    [[nodiscard]] std::vector<std::string> getDeviceNames() override;
    [[nodiscard]] bool open(std::string_view device_name, const SAudioFormat &format,
                            IAudioSource &source) override;
    void setPaused(bool paused) override;
    void close() override;

private:
    struct SStreamDeleter {
        void operator()(SDL_AudioStream *stream) const;
    };

    static void pull(void *userdata, SDL_AudioStream *stream, int additional_amount,
                     int total_amount);

    // Runs on SDL's audio thread.
    void fill(SDL_AudioStream *stream, int byte_count);

    std::unique_ptr<SDL_AudioStream, SStreamDeleter> stream_;
    IAudioSource *source_ = nullptr;
    std::size_t channels_ = 1;
    std::vector<float> samples_;
};

} // namespace nocturne::platform::sdl
