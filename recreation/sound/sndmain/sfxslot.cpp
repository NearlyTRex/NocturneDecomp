#include "sound/sndmain/sfxslot.h"

#include "common/math/vector3f.h"
#include "sound/sndmain/sfxmixer.h"
#include "sound/sndmain/sfxsample.h"
#include "sound/sndmain/sfxvoice.h"
#include "sound/sndmain/sndmain.h"

#include <algorithm>
#include <cmath>
#include <utility>

namespace nocturne::sound {
namespace {

// Feet a second: positions are in feet.
constexpr double kSpeedOfSound = 1116.4;
constexpr double kMinimumDoppler = 0.25;
constexpr double kMaximumDoppler = 4.0;
constexpr float kMinimumFrequency = 0.05F;
constexpr float kMaximumFrequency = 20.0F;
// Nearer than this share of the reference distance, a sound is as loud as it gets.
constexpr double kNearShare = 0.05;
constexpr float kNearGain = 20.0F;

common::CVector3d toDouble(const common::CVector3f &v) {
    return {.x = v.x, .y = v.y, .z = v.z};
}

common::CVector3d subtract(const common::CVector3d &a, const common::CVector3d &b) {
    return {.x = a.x - b.x, .y = a.y - b.y, .z = a.z - b.z};
}

double dot(const common::CVector3d &a, const common::CVector3d &b) {
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

double length(const common::CVector3d &v) {
    return std::sqrt(dot(v, v));
}

// Nothing called it; computeChannelVolumes had its own copy. Nearer than the minimum, or NaN,
// takes the minimum.
// nocedit 0x005a56c0
float calculateDistanceGain(float distance, float reference_distance, float min_distance,
                            float max_distance) {
    if (!(distance >= min_distance)) {
        distance = min_distance;
    }
    distance = std::min(distance, max_distance);
    return distance > reference_distance * kNearShare ? reference_distance / distance : kNearGain;
}

} // namespace

// nocedit 0x005ade00
CSfxSlot::CSfxSlot(CSndMain &sound_main) : sound_main_(sound_main) {}

CSfxSlot::~CSfxSlot() = default;

// The original also printed its working to the console for a slot setSfxIsActive picked, which
// nothing in the game ever did, and worked out a delay for each ear from its distance, which the
// per-ear gains make up for.
// nocedit 0x005a7100
bool CSfxSlot::compute(float delta_time) {
    if (sample == nullptr) {
        return false;
    }
    if (delta_time > 0.0F && fade_time_remaining >= 0.0F) {
        if (fade_time_remaining <= delta_time) {
            if (stop_after_fade) {
                kill();
                return false;
            }
            options.current_volume = fade_target_volume;
        } else {
            advanceFade(delta_time);
        }
    }
    updateBoundPositionAndVelocity();
    effective_frequency = options.base_frequency;
    if (isPositional()) {
        effective_frequency = static_cast<float>(effective_frequency * computeDoppler());
    }
    computeDistancesToSpeakers();
    computeChannelVolumes();
    // Below the least, or NaN, takes the least.
    if (!(effective_frequency >= kMinimumFrequency)) {
        effective_frequency = kMinimumFrequency;
    }
    effective_frequency = std::min(effective_frequency, kMaximumFrequency);
    if (voice_ != nullptr) {
        voice_->setGains(getChannelVolumes());
        voice_->setPitch(effective_frequency);
    }
    return true;
}

// The original's step, rounded to float only where it stores.
void CSfxSlot::advanceFade(float delta_time) {
    const double share = static_cast<double>(delta_time) / fade_time_remaining;
    options.current_volume = static_cast<float>(
        ((static_cast<double>(fade_target_volume) - options.current_volume) * share) +
        options.current_volume);
    fade_time_remaining -= delta_time;
}

// The listener's speed towards the sound, as a share of the speed of sound; below a quarter, or
// NaN, takes a quarter.
double CSfxSlot::computeDoppler() const {
    const common::CVector3d offset = subtract(options.position, sound_main_.getListenerPosition());
    const common::CVector3d closing = subtract(sound_main_.getListenerVelocity(), options.velocity);
    const double distance = length(offset);
    const double speed = distance <= 0.0 ? length(closing) : dot(offset, closing) / distance;
    const double doppler = (speed + kSpeedOfSound) / kSpeedOfSound;
    return !(doppler >= kMinimumDoppler) ? kMinimumDoppler : std::min(doppler, kMaximumDoppler);
}

// The original also followed double-precision sources, which nothing in the game sets.
// nocedit 0x005a6ce0
void CSfxSlot::updateBoundPositionAndVelocity() {
    if (options.position_source_ptr != nullptr) {
        options.position = toDouble(*options.position_source_ptr);
    }
    if (options.velocity_source_ptr != nullptr) {
        options.velocity = toDouble(*options.velocity_source_ptr);
    }
}

// nocedit 0x005a6d80
void CSfxSlot::computeDistancesToSpeakers() {
    for (std::size_t channel = 0; channel < getChannelCount(); ++channel) {
        distance_to_speakers.at(channel) = static_cast<float>(
            length(subtract(options.position, sound_main_.getSpeakerPosition(channel))));
    }
}

// The original also divided by the sample's full-scale value, which the mixer does itself.
// nocedit 0x005a6f00
void CSfxSlot::computeChannelVolumes() {
    const float volume =
        sound_main_.getSfxChannelVol(options.channel_index) * options.current_volume;
    for (std::size_t channel = 0; channel < getChannelCount(); ++channel) {
        if (!isPositional()) {
            channel_volumes.at(channel) = volume;
            continue;
        }
        channel_volumes.at(channel) =
            volume * calculateDistanceGain(distance_to_speakers.at(channel), reference_distance,
                                           min_distance, max_distance);
    }
}

// nocedit 0x005a7e60
void CSfxSlot::kill() {
    voice_.reset();
    playback_state = 0;
    if (sample == nullptr) {
        return;
    }
    CSfxSample &released = *std::exchange(sample, nullptr);
    --released.ref_count;
    if (released.streaming_slot_index >= 0) {
        released.freeMemory();
    }
    sound_main_.ensureSoundMemoryAvailable(0);
}

// nocedit 0x005a8390
void CSfxSlot::seek() {
    options.playback_position = sample->sample_info.cvtPlaybackPos(
        options.playback_position, options.playback_position_type, EPlaybackPosType::Samples);
    options.playback_position_type = EPlaybackPosType::Samples;
    options.playback_position =
        sample->normalizePlaybackPos(options.playback_position, options.playback_position_type);
    prev_hardware_playback_pos = options.playback_position;
}

// The position follows the cursor, wrapping a looping sample and stopping any other at its end.
// nocedit 0x005a8170
void CSfxSlot::updatePlaybackPos(double hardware_playback_pos) {
    const double sample_count = sample->sample_info.sample_count;
    double step = hardware_playback_pos - prev_hardware_playback_pos;
    if (step < 0.0) {
        step += sample_count;
    }
    if (options.playback_position != prev_hardware_playback_pos ||
        hardware_playback_pos < options.playback_position) {
        options.playback_position += step;
    } else {
        options.playback_position = hardware_playback_pos;
    }
    options.playback_position = std::max(options.playback_position, 0.0);
    if (sample_count >= 0.0 && sample_count <= options.playback_position) {
        options.playback_position =
            sample->loop_marker_count
                ? options.playback_position -
                      (std::floor(options.playback_position / sample_count) * sample_count)
                : sample_count;
    }
    prev_hardware_playback_pos = hardware_playback_pos;
}

void CSfxSlot::play(CSfxMixer &mixer) {
    voice_ = std::make_unique<CSfxVoice>(mixer, *sample);
    voice_->setLooping(sample->loop_marker_count);
    voice_->seek(static_cast<std::uint64_t>(options.playback_position));
    voice_->setGains(getChannelVolumes());
    voice_->setPitch(effective_frequency);
    // The original never waited out a delay. A delay the game asks for is honoured; the automatic
    // one, the sound's travel time, isn't, as it would put every distant sound behind what makes
    // it.
    voice_->start(
        static_cast<std::uint64_t>(std::max(options.delay_remaining, 0.0) * mixer.getSampleRate()));
}

// The voice stands in for the original's hardware buffer.
// nocedit 0x005a7fe0
void CSfxSlot::pollHwHandle() {
    if (voice_ != nullptr && voice_->atEnd()) {
        kill();
    }
}

// nocedit 0x005a80e0
bool CSfxSlot::pollHwPlaybackPos() {
    if (voice_ == nullptr) {
        return false;
    }
    updatePlaybackPos(static_cast<double>(voice_->getCursor()));
    return true;
}

std::span<const float> CSfxSlot::getChannelVolumes() const {
    return std::span(channel_volumes).first(getChannelCount());
}

std::size_t CSfxSlot::getChannelCount() const {
    return std::min(static_cast<std::size_t>(sound_main_.getAudioChannelCount()), kMaxChannels);
}

bool CSfxSlot::isPositional() const {
    return (options.flags & kSfxNonPositional) == 0;
}

} // namespace nocturne::sound
