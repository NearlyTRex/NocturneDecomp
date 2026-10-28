#include "sound/sndmain/sfxvoice.h"

#include "common/error/error.h"
#include "sound/sndmain/sfxmixer.h"
#include "sound/sndmain/sfxsample.h"
#include "sound/sndmain/sfxstream.h"

#include <algorithm>
#include <format>

namespace nocturne::sound {

CSfxVoice::CSfxVoice(CSfxMixer &mixer, CSfxSample &sample) : mixer_(mixer) {
    const auto channels = static_cast<std::size_t>(std::max(sample.sample_info.num_channels, 1));
    ma_audio_buffer_ref_init(ma_format_f32, static_cast<ma_uint32>(sample.sample_info.num_channels),
                             sample.sample_data.data(), sample.sample_data.size() / channels,
                             &data_);
    data_.sampleRate = static_cast<ma_uint32>(sample.sample_info.sample_rate);
    ma_data_source *const source = sample.stream != nullptr
                                       ? static_cast<ma_data_source *>(&sample.stream->getDecoder())
                                       : static_cast<ma_data_source *>(&data_);
    if (ma_sound_init_from_data_source(&mixer.getEngine(), source, MA_SOUND_FLAG_NO_SPATIALIZATION,
                                       nullptr, &sound_) != MA_SUCCESS) {
        ma_audio_buffer_ref_uninit(&data_);
        common::displayErrorAndQuit(std::format("Can't play {}", sample.sample_info.name));
    }
}

CSfxVoice::~CSfxVoice() {
    ma_sound_uninit(&sound_);
    ma_audio_buffer_ref_uninit(&data_);
}

void CSfxVoice::start(std::uint64_t delay_frames) {
    ma_sound_set_start_time_in_pcm_frames(&sound_, mixer_.getTime() + delay_frames);
    ma_sound_start(&sound_);
}

// The mixer pans by attenuating one side, so the louder side's gain is the volume and the
// quieter one's share of it sets the pan.
void CSfxVoice::setGains(std::span<const float> channel_volumes) {
    const float left = channel_volumes.front();
    const float right = channel_volumes.size() > 1 ? channel_volumes[1] : left;
    const float louder = std::max(left, right);
    ma_sound_set_volume(&sound_, louder);
    if (louder <= 0.0F) {
        ma_sound_set_pan(&sound_, 0.0F);
    } else if (right < left) {
        ma_sound_set_pan(&sound_, (right / left) - 1.0F);
    } else {
        ma_sound_set_pan(&sound_, 1.0F - (left / right));
    }
}

void CSfxVoice::setPitch(float pitch) {
    ma_sound_set_pitch(&sound_, pitch);
}

void CSfxVoice::setLooping(bool looping) {
    ma_sound_set_looping(&sound_, looping ? MA_TRUE : MA_FALSE);
}

void CSfxVoice::seek(std::uint64_t frame) {
    ma_sound_seek_to_pcm_frame(&sound_, frame);
}

std::uint64_t CSfxVoice::getCursor() const {
    ma_uint64 cursor = 0;
    ma_sound_get_cursor_in_pcm_frames(&sound_, &cursor);
    return cursor;
}

bool CSfxVoice::atEnd() const {
    return ma_sound_at_end(&sound_) == MA_TRUE;
}

} // namespace nocturne::sound
