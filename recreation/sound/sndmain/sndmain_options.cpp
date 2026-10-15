#include "common/error/error.h"
#include "sound/sndmain/sndmain.h"

#include <format>

namespace nocturne::sound {

CSfxOptions &CSndMain::getNextSfxOptions() {
    return sfx_options_.at(sfx_last_slot_);
}

// nocedit 0x005a88e0
void CSndMain::setNextSfxStaticPosition(double pos_x, double pos_y, double pos_z) {
    CSfxOptions &options = getNextSfxOptions();
    options.position = {.x = pos_x, .y = pos_y, .z = pos_z};
    options.position_source_ptr = nullptr;
}

// The original followed a null source too, reading through it; here it stops the following.
// nocedit 0x005a8940
void CSndMain::setNextSfxTrackedFloatPosition(const common::CVector3f *position_source_ptr) {
    getNextSfxOptions().position_source_ptr = position_source_ptr;
}

// The original followed a null source too, reading through it; here it stops the following.
// nocedit 0x005a8a00
void CSndMain::setNextSfxTrackedVelocity1(const common::CVector3f *velocity_source_ptr) {
    getNextSfxOptions().velocity_source_ptr = velocity_source_ptr;
}

// nocedit 0x005a8a60
void CSndMain::setNextSfxVolume(float volume) {
    getNextSfxOptions().current_volume = volume;
}

// nocedit 0x005a8a80
void CSndMain::setNextSfxBaseFrequency(float base_frequency) {
    getNextSfxOptions().base_frequency = base_frequency;
}

// nocedit 0x005a8af0
void CSndMain::setNextSfxChannel(int channel_index) {
    checkSfxChannel("setNextSfxChannel", channel_index);
    getNextSfxOptions().channel_index = channel_index;
}

// nocedit 0x005a8b40
void CSndMain::setNextSfxDelay(double delay_seconds) {
    getNextSfxOptions().delay_remaining = delay_seconds;
}

// nocedit 0x005a8b70
void CSndMain::setNextSfxFlags(std::uint32_t flags) {
    getNextSfxOptions().flags = flags;
}

// nocedit 0x005a8b90
void CSndMain::setNextSfxFlagBits(std::uint32_t flag_mask) {
    getNextSfxOptions().flags |= flag_mask;
}

// nocedit 0x005a8be0
void CSndMain::setNextSfxTriggerTime(double playback_position,
                                     EPlaybackPosType playback_position_type) {
    CSfxOptions &options = getNextSfxOptions();
    options.playback_position = playback_position;
    options.playback_position_type = playback_position_type;
}

// nocedit 0x005a8c30
void CSndMain::pushSfxOptions() {
    if (sfx_last_slot_ + 1 == sfx_options_.size()) {
        common::displayErrorAndQuit("pushSfxOptions - stack full");
    }
    ++sfx_last_slot_;
    sfx_options_.at(sfx_last_slot_) = sfx_options_.at(sfx_last_slot_ - 1);
}

// nocedit 0x005a8cb0
void CSndMain::popSfxOptions() {
    if (sfx_last_slot_ == 0) {
        common::displayErrorAndQuit("popSfxOptions - stack empty");
    }
    --sfx_last_slot_;
}

void CSndMain::checkSfxChannel(std::string_view function, int channel_index) {
    if (channel_index < 0 || channel_index >= kMaxSfxChannels) {
        common::displayErrorAndQuit(
            std::format("{} - invalid channel index: {}", function, channel_index));
    }
}

// nocedit 0x005a9cf0
void CSndMain::setSfxChannelVol(int channel_index, float volume) {
    checkSfxChannel("setSfxChannelVol", channel_index);
    sfx_channel_volumes_.at(static_cast<std::size_t>(channel_index)) = volume;
}

// nocedit 0x005a9d90
float CSndMain::getSfxChannelVol(int channel_index) const {
    checkSfxChannel("getSfxChannelVol", channel_index);
    return sfx_channel_volumes_.at(static_cast<std::size_t>(channel_index));
}

// nocedit 0x005a9de0
void CSndMain::setNumberOfSfxChannels(int channel_count) {
    if (channel_count > kMaxSfxChannels) {
        common::displayErrorAndQuit("setNumberOfSfxChannels - too many!");
    }
    max_sound_channels_ = channel_count;
}

// nocedit 0x005a9e20
void CSndMain::enableSfxChannel(int channel_index, bool enable_state) {
    checkSfxChannel("enableSfxChannel", channel_index);
    sfx_channel_enabled_.at(static_cast<std::size_t>(channel_index)) = enable_state;
    if (enable_state) {
        return;
    }
    for (CSfxSlot &slot : sfx_slots_) {
        if (slot.options.channel_index == channel_index) {
            slot.kill();
        }
    }
}

// nocedit 0x005a9ea0
bool CSndMain::isSfxChannelEnabled(int channel_index) const {
    checkSfxChannel("isSfxChannelEnabled", channel_index);
    return sfx_channel_enabled_.at(static_cast<std::size_t>(channel_index));
}

// nocedit 0x005a96b0
bool CSndMain::isSoundMuted() const {
    return sound_muted_;
}

// nocedit 0x005a96c0
void CSndMain::setSoundMuted(bool muted) {
    sound_muted_ = muted;
    if (muted) {
        resetSoundDevice();
    }
}

} // namespace nocturne::sound
