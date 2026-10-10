#include "platform/sdl/sdlaudiodevice.h"

#include "platform/sdl/sdlfree.h"

#include <SDL3/SDL.h>
#include <algorithm>
#include <span>

namespace nocturne::platform::sdl {

void CSdlAudioDevice::SStreamDeleter::operator()(SDL_AudioStream *stream) const {
    // Closes the device it was opened with; once unbound, the callback no longer runs.
    SDL_DestroyAudioStream(stream);
}

CSdlAudioDevice::~CSdlAudioDevice() {
    close();
}

std::string CSdlAudioDevice::getDriverName() {
    const char *const driver = SDL_GetCurrentAudioDriver();
    return driver != nullptr ? driver : "";
}

std::vector<std::string> CSdlAudioDevice::getDeviceNames() {
    int count = 0;
    const SdlOwned<SDL_AudioDeviceID> ids(SDL_GetAudioPlaybackDevices(&count));
    std::vector<std::string> names;
    for (const SDL_AudioDeviceID id : std::span(ids.get(), ids ? count : 0)) {
        const char *const name = SDL_GetAudioDeviceName(id);
        names.emplace_back(name != nullptr ? name : "");
    }
    return names;
}

bool CSdlAudioDevice::open(std::string_view device_name, const SAudioFormat &format,
                           IAudioSource &source) {
    close();
    SDL_AudioDeviceID device = SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK;
    if (!device_name.empty()) {
        int count = 0;
        const SdlOwned<SDL_AudioDeviceID> ids(SDL_GetAudioPlaybackDevices(&count));
        const std::span<const SDL_AudioDeviceID> devices(ids.get(), ids ? count : 0);
        const auto found = std::ranges::find_if(devices, [device_name](auto id) {
            const char *const name = SDL_GetAudioDeviceName(id);
            return name != nullptr && device_name == name;
        });
        if (found == devices.end()) {
            return false;
        }
        device = *found;
    }
    const SDL_AudioSpec spec{
        .format = SDL_AUDIO_F32, .channels = format.channel_count, .freq = format.sample_rate};
    source_ = &source;
    channels_ = static_cast<std::size_t>(std::max(format.channel_count, 1));
    stream_.reset(SDL_OpenAudioDeviceStream(device, &spec, &CSdlAudioDevice::pull, this));
    if (!stream_) {
        source_ = nullptr;
        return false;
    }
    // Opened paused, so nothing is pulled before the stream is held here.
    return SDL_ResumeAudioStreamDevice(stream_.get());
}

void CSdlAudioDevice::setPaused(bool paused) {
    if (paused) {
        SDL_PauseAudioStreamDevice(stream_.get());
    } else {
        SDL_ResumeAudioStreamDevice(stream_.get());
    }
}

void CSdlAudioDevice::close() {
    stream_.reset();
    source_ = nullptr;
}

void CSdlAudioDevice::pull(void *userdata, SDL_AudioStream *stream, int additional_amount,
                           int /*total_amount*/) {
    static_cast<CSdlAudioDevice *>(userdata)->fill(stream, additional_amount);
}

void CSdlAudioDevice::fill(SDL_AudioStream *stream, int byte_count) {
    const std::size_t frames = static_cast<std::size_t>(byte_count) / sizeof(float) / channels_;
    // The capacity stays at the largest request, so the audio thread rarely allocates.
    samples_.resize(frames * channels_);
    source_->readFrames(samples_);
    SDL_PutAudioStreamData(stream, samples_.data(),
                           static_cast<int>(samples_.size() * sizeof(float)));
}

} // namespace nocturne::platform::sdl
