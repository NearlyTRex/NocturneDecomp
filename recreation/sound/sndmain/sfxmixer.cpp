#include "sound/sndmain/sfxmixer.h"

#include "common/error/error.h"

#include <algorithm>
#include <format>

namespace nocturne::sound {

CSfxMixer::CSfxMixer(int channel_count, int sample_rate) {
    ma_engine_config config = ma_engine_config_init();
    config.noDevice = MA_TRUE;
    config.channels = static_cast<ma_uint32>(channel_count);
    config.sampleRate = static_cast<ma_uint32>(sample_rate);
    if (ma_engine_init(&config, &engine_) != MA_SUCCESS) {
        common::displayErrorAndQuit(
            std::format("Unable to mix {} channels at {} Hz", channel_count, sample_rate));
    }
}

CSfxMixer::~CSfxMixer() {
    ma_engine_uninit(&engine_);
}

// The engine mixes nothing at all while no voice is playing, so what it leaves is silence.
void CSfxMixer::readFrames(std::span<float> frames) {
    const auto channels = static_cast<std::size_t>(getChannelCount());
    ma_uint64 mixed = 0;
    ma_engine_read_pcm_frames(&engine_, frames.data(), frames.size() / channels, &mixed);
    std::ranges::fill(frames.subspan(static_cast<std::size_t>(mixed) * channels), 0.0F);
}

std::uint64_t CSfxMixer::getTime() const {
    return ma_engine_get_time_in_pcm_frames(&engine_);
}

int CSfxMixer::getChannelCount() const {
    return static_cast<int>(ma_engine_get_channels(&engine_));
}

int CSfxMixer::getSampleRate() const {
    return static_cast<int>(ma_engine_get_sample_rate(&engine_));
}

ma_engine &CSfxMixer::getEngine() {
    return engine_;
}

} // namespace nocturne::sound
