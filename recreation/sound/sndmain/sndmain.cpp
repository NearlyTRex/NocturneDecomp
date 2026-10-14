#include "sound/sndmain/sndmain.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/asctime.h"
#include "engine/console/console.h"
#include "engine/ini/inifile.h"
#include "platform/filesystem.h"
#include "sound/sndmain/sfxmixer.h"

#include <format>
#include <string>
#include <utility>

namespace nocturne::sound {
namespace {

// The original's device table held eight.
constexpr std::size_t kMaxSoundDevices = 8;
constexpr std::size_t kDeviceNameBufferSize = 256;

template <std::size_t... Index>
std::array<CSfxSlot, sizeof...(Index)> makeSlots(CSndMain &sound_main,
                                                 std::index_sequence<Index...> /*indices*/) {
    return {{(static_cast<void>(Index), CSfxSlot(sound_main))...}};
}

std::string labelDevice(std::string_view driver, std::string_view device) {
    return driver.empty() ? std::string(device) : std::format("{}: {}", driver, device);
}

} // namespace

// What staticInit constructed is the members.
// nocedit 0x005a3940
CSndMain::CSndMain(const engine::CDosIo &dos_io, platform::IFileSystem &file_system,
                   platform::IAudioDevice &audio_device, engine::CConsole &console,
                   std::function<std::tm()> local_time)
    : dos_io_(dos_io), file_system_(file_system), audio_device_(audio_device), console_(console),
      local_time_(std::move(local_time)),
      sfx_slots_(makeSlots(*this, std::make_index_sequence<kSlotCount>())) {}

// The device stops pulling before the mixer it pulls from goes.
CSndMain::~CSndMain() {
    audio_device_.close();
}

// The original also picked the current device again; retail doesn't.
// nocedit 0x005aae00
void CSndMain::resetSoundSystemDefaults() {
    for (int channel = 0; channel < kMaxSfxChannels; ++channel) {
        setSfxChannelVol(channel, 1.0F);
        enableSfxChannel(channel, true);
    }
    set3DListenerPos(0.0, 0.0, 0.0);
    set3DListenerOrient(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
    set3DListenerVelocity(0.0, 0.0, 0.0);
}

// nocedit 0x005aaeb0
void CSndMain::shutdownSoundSystem() {
    resetSoundDevice();
    freeAllSamples();
}

// nocedit 0x005aaef0
bool CSndMain::enableSoundSystem() {
    if (!isSoundSystemActive()) {
        return false;
    }
    if (isSoundMuted()) {
        resetSoundDevice();
        return true;
    }
    if (isSoundBusy()) {
        return true;
    }
    if (!setSoundOutputMode(audio_bits_per_sample_, audio_channel_count_, audio_sample_rate_)) {
        return false;
    }
    sound_busy_flag_ = true;
    return true;
}

// nocedit 0x005ab530
bool CSndMain::isSoundSystemActive() const {
    return sound_device_active_;
}

// nocedit 0x005ab540
bool CSndMain::isSoundBusy() const {
    return isSoundSystemActive() && sound_busy_flag_;
}

// nocedit 0x005ab130
void CSndMain::resetSoundDevice() {
    killAllSfx();
    audio_device_.close();
    mixer_.reset();
    sound_busy_flag_ = false;
}

// nocedit 0x005ab660
void CSndMain::closeSoundDevice() {
    resetSoundDevice();
    for (CSfxSample &sample : sfx_samples_) {
        sample.freeMemory();
    }
    sound_device_active_ = false;
}

// nocedit 0x005ab5b0
void CSndMain::initializeSoundDevice() {
    closeSoundDevice();
    selectSoundDevice(current_sound_device_);
    sound_device_active_ = true;
}

// nocedit 0x005ab4c0
void CSndMain::selectSoundDevice(int device_id) {
    if (isSoundSystemActive()) {
        common::displayErrorAndQuit("selectSoundDevice - device already open.");
    }
    if (device_id < 0) {
        device_id = current_sound_device_;
    }
    current_sound_device_ =
        device_id >= 0 && device_id < getSoundDeviceCount() ? device_id : findBestSoundDevice();
}

// The host audio API's devices, after its default. The label is the decomp's: the API that is
// really playing, where the shipped game said DirectSound.
// nocedit 0x005ab2e0
int CSndMain::getSoundDeviceCount() {
    if (sound_devices_.empty()) {
        const std::string driver = audio_device_.getDriverName();
        sound_devices_.push_back(
            {.device_name = labelDevice(driver, "Default Device"), .open_name = ""});
        for (std::string &name : audio_device_.getDeviceNames()) {
            if (sound_devices_.size() == kMaxSoundDevices) {
                break;
            }
            sound_devices_.push_back(
                {.device_name = labelDevice(driver, name), .open_name = std::move(name)});
        }
    }
    return static_cast<int>(sound_devices_.size());
}

// nocedit 0x005ab370
SSoundDeviceInfo CSndMain::getSoundDeviceInfo(int device_id) {
    if (device_id < 0 || device_id >= getSoundDeviceCount()) {
        common::displayErrorAndQuit("getSoundDeviceInfo - invalid index");
    }
    return sound_devices_.at(static_cast<std::size_t>(device_id));
}

// The original preferred hardware mixing, then DirectSound's primary device; the system's
// default, which heads the list, is that device.
// nocedit 0x005ab3d0
int CSndMain::findBestSoundDevice() {
    return 0;
}

// nocedit 0x005ab6c0
int CSndMain::getCurrentSoundDevice() const {
    return current_sound_device_;
}

// The output is mixed and sent in float, so the bit depth only keeps the Sound Options' choice.
// nocedit 0x005ab170
bool CSndMain::setSoundOutputMode(int bits_per_sample, int channels, int sample_rate) {
    if (isSoundBusy()) {
        common::displayErrorAndQuit("setSoundOutputMode - can't do this while sound active!");
    }
    audio_bits_per_sample_ = bits_per_sample;
    audio_channel_count_ = channels;
    audio_sample_rate_ = sample_rate;
    calculateVirtualSpeakerPositions();
    if (!isSoundSystemActive()) {
        return true;
    }
    audio_device_.close();
    mixer_ = std::make_unique<CSfxMixer>(channels, sample_rate);
    analyzer_.reset(channels, sample_rate);
    if (!audio_device_.open(getSoundDeviceInfo(current_sound_device_).open_name,
                            {.sample_rate = sample_rate, .channel_count = channels}, *this)) {
        mixer_.reset();
        return false;
    }
    return true;
}

// nocedit 0x005ab250
int CSndMain::getAudioBitDepth() const {
    return audio_bits_per_sample_;
}

// nocedit 0x005ab260
int CSndMain::getAudioSampleRate() const {
    return audio_sample_rate_;
}

// nocedit 0x005ab270
int CSndMain::getAudioChannelCount() const {
    return audio_channel_count_;
}

// nocedit 0x005ab280
void CSndMain::setAudioBitDepth(int bit_depth) {
    setSoundOutputMode(bit_depth, audio_channel_count_, audio_sample_rate_);
}

// nocedit 0x005ab2a0
void CSndMain::setAudioChannelCount(int channel_count) {
    setSoundOutputMode(audio_bits_per_sample_, channel_count, audio_sample_rate_);
}

// nocedit 0x005ab2c0
void CSndMain::setAudioSampleRate(int sample_rate) {
    setSoundOutputMode(audio_bits_per_sample_, audio_channel_count_, sample_rate);
}

// getAudioFormat's three reads are the getters. The original also read HwMixingEnabled and
// MaxSwLatency, which drove the hardware mixer and the mix buffers.
// nocedit 0x005abf20
// nocedit 0x005ab210
void CSndMain::readIni(const engine::CIniFile &ini_file) {
    const std::string device_name = ini_file.getString("DeviceName", "", kDeviceNameBufferSize);
    for (int device = 0; device < getSoundDeviceCount(); ++device) {
        if (common::equalsIgnoringAsciiCase(getSoundDeviceInfo(device).device_name, device_name)) {
            selectSoundDevice(device);
            break;
        }
    }
    setSoundOutputMode(ini_file.getInteger("Bits", audio_bits_per_sample_),
                       ini_file.getInteger("Channels", audio_channel_count_),
                       ini_file.getInteger("Hz", audio_sample_rate_));
    setSoundMuted(ini_file.getInteger("Mute", isSoundMuted() ? 1 : 0) != 0);
    for (int channel = 0; channel < max_sound_channels_; ++channel) {
        const int enabled = isSfxChannelEnabled(channel) ? 1 : 0;
        enableSfxChannel(channel, ini_file.getInteger(std::format("SfxChannel{}Enabled", channel),
                                                      enabled) != 0);
        setSfxChannelVol(channel, ini_file.getFloat(std::format("SfxChannel{}Vol", channel),
                                                    getSfxChannelVol(channel)));
    }
}

// nocedit 0x005ac220
void CSndMain::writeIni(engine::CIniFile &ini_file) {
    ini_file.setString("DeviceName", current_sound_device_ >= 0
                                         ? getSoundDeviceInfo(current_sound_device_).device_name
                                         : "");
    ini_file.setInteger("Bits", audio_bits_per_sample_);
    ini_file.setInteger("Channels", audio_channel_count_);
    ini_file.setInteger("Hz", audio_sample_rate_);
    ini_file.setInteger("Mute", isSoundMuted() ? 1 : 0);
    for (int channel = 0; channel < max_sound_channels_; ++channel) {
        ini_file.setInteger(std::format("SfxChannel{}Enabled", channel),
                            isSfxChannelEnabled(channel) ? 1 : 0);
        ini_file.setFloatValue(std::format("SfxChannel{}Vol", channel), getSfxChannelVol(channel));
    }
}

// Written beside the game, where the original wrote to a share on Terminal Reality's network.
// The user and machine names it added mean nothing in a report from the player's own machine.
// nocedit 0x005adba0
void CSndMain::logSoundError(std::string_view message) {
    console_.printf(std::format("{}\n", message));
    std::string report =
        std::format("{:-<64}\nMsg: {}\nTime: {}selectedDeviceIndex: {}\n", "", message,
                    common::formatAsctime(local_time_()), current_sound_device_);
    report +=
        current_sound_device_ < 0
            ? std::string("No device selected.\n")
            : std::format("Device: {}.\n", getSoundDeviceInfo(current_sound_device_).device_name);
    report += std::format("Bits: {}\nChannels: {}\nHz: {}\n", audio_bits_per_sample_,
                          audio_channel_count_, audio_sample_rate_);
    file_system_.appendFile("sounderr.txt", report);
}

} // namespace nocturne::sound
