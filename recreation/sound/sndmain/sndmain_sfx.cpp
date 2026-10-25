#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/dosio/dosio.h"
#include "sound/sndmain/sfxmixer.h"
#include "sound/sndmain/sndmain.h"

#include <algorithm>
#include <format>

namespace nocturne::sound {
namespace {

// A handle is the slot's generation above its index.
constexpr std::uint32_t kSlotBits = 6;
constexpr std::uint32_t kSlotMask = (1U << kSlotBits) - 1;
constexpr int kMaxGeneration = 0xfffffe;
// Larger files, and every MP3, are decoded as they play rather than held whole.
constexpr std::int64_t kMaxHeldFileSize = 0x200000;
constexpr float kMaxPollStep = 0.25F;

// A slot's sample and its generation are set and cleared together.
bool isActive(const CSfxSlot &slot) {
    return slot.playback_state != 0;
}

} // namespace

std::uint32_t CSndMain::getSfxHandle(const CSfxSlot &slot) const {
    const auto index = static_cast<std::uint32_t>(&slot - sfx_slots_.data());
    return static_cast<std::uint32_t>(slot.playback_state) << kSlotBits | index;
}

// nocedit 0x005a8e90
std::uint32_t CSndMain::startSfx(std::string_view filename) {
    if (filename.empty() || !isSoundBusy()) {
        return 0;
    }
    const CSfxOptions options = getNextSfxOptions();
    if (!isSfxChannelEnabled(options.channel_index)) {
        return 0;
    }
    std::size_t index = 0;
    while (index < kSlotCount && isActive(sfx_slots_.at(index))) {
        ++index;
    }
    if (index == kSlotCount) {
        return 0;
    }
    CSfxSlot &slot = sfx_slots_.at(index);
    slot.options = options;
    const bool streamed = dos_io_.getFileSize("sound", filename) > kMaxHeldFileSize ||
                          common::equalsIgnoringAsciiCase(common::pathExtension(filename), ".mp3");
    slot.sample = streamed ? openStreamingSample(filename, index) : getSfxSample(filename);
    if (slot.sample == nullptr) {
        logSoundError(std::format("startSfx - can't get sample {}", filename));
        return 0;
    }
    ++slot.sample->ref_count;
    slot.seek();
    slot.fade_target_volume = slot.options.current_volume;
    slot.fade_time_remaining = -1.0F;
    slot.stop_after_fade = false;
    const CSampleInfo &info = slot.sample->sample_info;
    slot.reference_distance = info.reference_distance;
    slot.min_distance = info.reference_volume_distance;
    slot.max_distance = info.max_distance;
    // From 1 up to the largest the handle holds, then round to 1 again.
    sfx_playback_state_counter_ = (sfx_playback_state_counter_ % kMaxGeneration) + 1;
    slot.playback_state = sfx_playback_state_counter_;
    slot.compute(0.0F);
    slot.play(*mixer_);
    return getSfxHandle(slot);
}

// A stale handle, or one whose voice has played out, finds nothing.
// nocedit 0x005a5d00
CSfxSlot *CSndMain::getSfxSlotFromHandle(std::uint32_t sfx_handle) {
    const auto generation = static_cast<int>(sfx_handle >> kSlotBits);
    CSfxSlot &slot = sfx_slots_.at(sfx_handle & kSlotMask);
    if (generation == 0 || slot.playback_state != generation) {
        return nullptr;
    }
    slot.pollHwHandle();
    return slot.playback_state == generation ? &slot : nullptr;
}

// nocedit 0x005a9660
bool CSndMain::isSfxPlaying(std::uint32_t sfx_handle) {
    return getSfxSlotFromHandle(sfx_handle) != nullptr;
}

// nocedit 0x005a96e0
std::optional<CSampleInfo> CSndMain::getSfxSampleInfo(std::uint32_t sfx_handle) {
    const CSfxSlot *const slot = getSfxSlotFromHandle(sfx_handle);
    if (slot == nullptr) {
        return std::nullopt;
    }
    return slot->sample->sample_info;
}

// nocedit 0x005a9720
double CSndMain::getSfxPlaybackPosition(std::uint32_t sfx_handle, EPlaybackPosType output_format) {
    CSfxSlot *const slot = getSfxSlotFromHandle(sfx_handle);
    if (slot == nullptr) {
        return -1.0;
    }
    slot->pollHwPlaybackPos();
    return slot->sample->sample_info.cvtPlaybackPos(
        slot->options.playback_position, slot->options.playback_position_type, output_format);
}

bool CSndMain::updateSfx(std::uint32_t sfx_handle, const std::function<void(CSfxSlot &)> &change) {
    CSfxSlot *const slot = getSfxSlotFromHandle(sfx_handle);
    if (slot == nullptr) {
        return false;
    }
    change(*slot);
    slot->compute(0.0F);
    return true;
}

// nocedit 0x005a9820
bool CSndMain::setSfxPosition(std::uint32_t sfx_handle, double pos_x, double pos_y, double pos_z) {
    return updateSfx(sfx_handle, [&](CSfxSlot &slot) {
        slot.options.position_source_ptr = nullptr;
        slot.options.position = {.x = pos_x, .y = pos_y, .z = pos_z};
    });
}

// The original followed a null source too, reading through it; here it stops the following.
// nocedit 0x005a98b0
bool CSndMain::setSfxTrackedFloatPosition(std::uint32_t sfx_handle,
                                          const common::CVector3f *position_source_ptr) {
    return updateSfx(sfx_handle, [position_source_ptr](CSfxSlot &slot) {
        slot.options.position_source_ptr = position_source_ptr;
    });
}

// The original followed a null source too, reading through it; here it stops the following.
// nocedit 0x005a9a00
bool CSndMain::setSfxTrackedFloatVelocity(std::uint32_t sfx_handle,
                                          const common::CVector3f *velocity_source_ptr) {
    return updateSfx(sfx_handle, [velocity_source_ptr](CSfxSlot &slot) {
        slot.options.velocity_source_ptr = velocity_source_ptr;
    });
}

// nocedit 0x005a9ae0
bool CSndMain::setSfxVolume(std::uint32_t sfx_handle, float volume) {
    return updateSfx(sfx_handle,
                     [volume](CSfxSlot &slot) { slot.options.current_volume = volume; });
}

// nocedit 0x005a9b40
bool CSndMain::setSfxBaseFrequency(std::uint32_t sfx_handle, float base_frequency) {
    return updateSfx(sfx_handle, [base_frequency](CSfxSlot &slot) {
        slot.options.base_frequency = base_frequency;
    });
}

// nocedit 0x005a9c40
bool CSndMain::killSfx(std::uint32_t sfx_handle) {
    CSfxSlot *const slot = getSfxSlotFromHandle(sfx_handle);
    if (slot == nullptr) {
        return false;
    }
    slot->kill();
    return true;
}

// nocedit 0x005a9c70
bool CSndMain::setSfxFade(std::uint32_t sfx_handle, float target_volume, float fade_duration,
                          bool stop_after_fade) {
    CSfxSlot *const slot = getSfxSlotFromHandle(sfx_handle);
    if (slot == nullptr) {
        return false;
    }
    slot->fade_target_volume = target_volume;
    slot->fade_time_remaining = fade_duration;
    slot->stop_after_fade = stop_after_fade;
    return true;
}

// nocedit 0x005a9cc0
void CSndMain::killAllSfx() {
    for (CSfxSlot &slot : sfx_slots_) {
        slot.kill();
    }
}

const CSfxSlot *CSndMain::findActiveSfx(std::size_t first_index) const {
    for (std::size_t index = first_index; index < kSlotCount; ++index) {
        if (isActive(sfx_slots_.at(index))) {
            return &sfx_slots_.at(index);
        }
    }
    return nullptr;
}

// nocedit 0x005a9ef0
std::uint32_t CSndMain::getFirstActiveSfx() const {
    const CSfxSlot *const slot = findActiveSfx(0);
    return slot == nullptr ? 0 : getSfxHandle(*slot);
}

// nocedit 0x005a9f30
std::uint32_t CSndMain::getNextActiveSfx(std::uint32_t current_sfx_handle) const {
    const CSfxSlot *const slot = findActiveSfx((current_sfx_handle & kSlotMask) + 1);
    return slot == nullptr ? 0 : getSfxHandle(*slot);
}

// nocedit 0x005a9ff0
int CSndMain::countActiveSfx() const {
    return static_cast<int>(std::ranges::count_if(sfx_slots_, isActive));
}

// The original's audio thread did this for every mix buffer; the game does it once a frame.
// nocedit 0x005acdb0
void CSndMain::pollAllSfxSlots(float delta_time) {
    const float step = std::clamp(delta_time, 0.0F, kMaxPollStep);
    for (CSfxSlot &slot : sfx_slots_) {
        if (slot.compute(step)) {
            slot.pollHwHandle();
        }
    }
}

void CSndMain::readFrames(std::span<float> frames) {
    if (mixer_ == nullptr) {
        std::ranges::fill(frames, 0.0F);
        return;
    }
    mixer_->readFrames(frames);
    analyzer_.record(frames);
}

// unverified: the band's bin bounds and sums, by running nocedit's own code on spectra poked into
//   its transform buffers
// unverified: the transform's float stores and its pi of 3.1415926535, which the double-precision
//   transform doesn't keep, by running nocedit's transform on the same window
// nocedit 0x005ac400
float CSndMain::analyzeFrequencyBand(int channel, float freq_start_hz, float freq_end_hz) {
    return analyzer_.analyzeFrequencyBand(channel, freq_start_hz, freq_end_hz);
}

} // namespace nocturne::sound
