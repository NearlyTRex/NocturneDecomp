#pragma once

#include "common/fwd.h"
#include "common/math/vector3d.h"
#include "engine/fwd.h"
#include "platform/audiodevice.h"
#include "platform/fwd.h"
#include "sound/fwd.h"
#include "sound/sndmain/sampleinfo.h"
#include "sound/sndmain/sfxanalyzer.h"
#include "sound/sndmain/sfxoptions.h"
#include "sound/sndmain/sfxsample.h"
#include "sound/sndmain/sfxslot.h"
#include "sound/sndmain/sounddeviceinfo.h"
#include "sound/sndmain/soundmemorystats.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <ctime>
#include <functional>
#include <memory>
#include <optional>
#include <span>
#include <string_view>
#include <vector>

namespace nocturne::sound {

// The sound system: the sounds playing and the samples they play from, the output device and its
// format, and the listener. The original's sndmain.cpp, whose globals are these members.
//
// Everything runs on the game thread except readFrames, which the audio device calls on its own:
// pollAllSfxSlots works out each voice's volumes and pitch once a frame, and the mixer plays them.
class CSndMain : public platform::IAudioSource {
public:
    static constexpr std::size_t kSlotCount = 64;
    static constexpr std::size_t kSampleCount = 64;
    // Channels group sounds under one volume and one switch.
    static constexpr int kMaxSfxChannels = 32;

    // local_time stamps the sound error log.
    CSndMain(const engine::CDosIo &dos_io, platform::IFileSystem &file_system,
             platform::IAudioDevice &audio_device, engine::CConsole &console,
             std::function<std::tm()> local_time);
    ~CSndMain() override;
    CSndMain(const CSndMain &) = delete;
    CSndMain &operator=(const CSndMain &) = delete;
    CSndMain(CSndMain &&) = delete;
    CSndMain &operator=(CSndMain &&) = delete;

    // The options the next startSfx takes, on top of a stack eight deep.
    void setNextSfxStaticPosition(double pos_x, double pos_y, double pos_z);
    void setNextSfxTrackedFloatPosition(const common::CVector3f *position_source_ptr);
    void setNextSfxTrackedVelocity1(const common::CVector3f *velocity_source_ptr);
    void setNextSfxVolume(float volume);
    void setNextSfxBaseFrequency(float base_frequency);
    void setNextSfxChannel(int channel_index);
    void setNextSfxDelay(double delay_seconds);
    void setNextSfxFlags(std::uint32_t flags);
    void setNextSfxFlagBits(std::uint32_t flag_mask);
    void setNextSfxTriggerTime(double playback_position, EPlaybackPosType playback_position_type);
    void pushSfxOptions();
    void popSfxOptions();

    // A handle for the sound, or 0 when it isn't playing: sound is off, its channel is, every
    // slot is busy, or the sample can't be had. A handle goes stale once the sound ends.
    std::uint32_t startSfx(std::string_view filename);
    [[nodiscard]] bool isSfxPlaying(std::uint32_t sfx_handle);
    [[nodiscard]] std::optional<CSampleInfo> getSfxSampleInfo(std::uint32_t sfx_handle);
    // -1 when the sound isn't playing.
    [[nodiscard]] double getSfxPlaybackPosition(std::uint32_t sfx_handle,
                                                EPlaybackPosType output_format);
    // Each false when the sound isn't playing.
    bool setSfxPosition(std::uint32_t sfx_handle, double pos_x, double pos_y, double pos_z);
    bool setSfxTrackedFloatPosition(std::uint32_t sfx_handle,
                                    const common::CVector3f *position_source_ptr);
    bool setSfxTrackedFloatVelocity(std::uint32_t sfx_handle,
                                    const common::CVector3f *velocity_source_ptr);
    bool setSfxVolume(std::uint32_t sfx_handle, float volume);
    bool setSfxBaseFrequency(std::uint32_t sfx_handle, float base_frequency);
    bool killSfx(std::uint32_t sfx_handle);
    // Moves the volume to target_volume over fade_duration seconds, then stops it if asked.
    bool setSfxFade(std::uint32_t sfx_handle, float target_volume, float fade_duration,
                    bool stop_after_fade);
    void killAllSfx();
    // Walks the playing sounds; 0 after the last.
    [[nodiscard]] std::uint32_t getFirstActiveSfx() const;
    [[nodiscard]] std::uint32_t getNextActiveSfx(std::uint32_t current_sfx_handle) const;
    [[nodiscard]] int countActiveSfx() const;
    // Advances every sound by delta_time seconds, capped at a quarter of a second.
    void pollAllSfxSlots(float delta_time);

    void setSfxChannelVol(int channel_index, float volume);
    [[nodiscard]] float getSfxChannelVol(int channel_index) const;
    // How many channels the INI keeps a volume and switch for.
    void setNumberOfSfxChannels(int channel_count);
    // Switching a channel off stops what plays on it.
    void enableSfxChannel(int channel_index, bool enable_state);
    [[nodiscard]] bool isSfxChannelEnabled(int channel_index) const;
    [[nodiscard]] bool isSoundMuted() const;
    // Muting stops every sound and the output.
    void setSoundMuted(bool muted);

    // The listener, in feet; front, up and right are its axes.
    void set3DListenerPos(double pos_x, double pos_y, double pos_z);
    void set3DListenerOrient(double front_x, double front_y, double front_z, double up_x,
                             double up_y, double up_z, double right_x, double right_y,
                             double right_z);
    void set3DListenerVelocity(double x_velocity, double y_velocity, double z_velocity);
    [[nodiscard]] bool isWithinListenerRadius(double pos_x, double pos_y, double pos_z,
                                              double radius) const;
    [[nodiscard]] const common::CVector3d &getListenerPosition() const;
    [[nodiscard]] const common::CVector3d &getListenerVelocity() const;
    // Where the output channel's ear is, from calculateVirtualSpeakerPositions.
    [[nodiscard]] const common::CVector3d &getSpeakerPosition(std::size_t channel) const;

    // A loaded sample's info, or the file's; nothing when there is no such file.
    [[nodiscard]] std::optional<CSampleInfo> getSampleInfo(std::string_view sample_name);
    void freeAllSamples();
    [[nodiscard]] SSoundMemoryStats getSoundMemoryStats() const;
    // Frees samples nothing plays until requested_bytes more would fit the budget; false when
    // they wouldn't even then.
    bool ensureSoundMemoryAvailable(std::size_t requested_bytes);

    void resetSoundSystemDefaults();
    void shutdownSoundSystem();
    // Starts the output on the selected device, or stops it while muted. False when it can't.
    bool enableSoundSystem();
    // A device has been picked and initialized.
    [[nodiscard]] bool isSoundSystemActive() const;
    // The output is running.
    [[nodiscard]] bool isSoundBusy() const;
    // Stops every sound and the output.
    void resetSoundDevice();
    void closeSoundDevice();
    // Takes up the selected device, or the default when none is.
    void initializeSoundDevice();
    // A device that doesn't exist picks the default; choosing while one is open is fatal.
    void selectSoundDevice(int device_id);
    [[nodiscard]] int getSoundDeviceCount();
    // Asking for one that doesn't exist is fatal.
    [[nodiscard]] SSoundDeviceInfo getSoundDeviceInfo(int device_id);
    [[nodiscard]] int getCurrentSoundDevice() const;
    // Changing it while the output runs is fatal. False when the device won't open in it.
    bool setSoundOutputMode(int bits_per_sample, int channels, int sample_rate);
    [[nodiscard]] int getAudioBitDepth() const;
    [[nodiscard]] int getAudioSampleRate() const;
    [[nodiscard]] int getAudioChannelCount() const;
    void setAudioBitDepth(int bit_depth);
    void setAudioChannelCount(int channel_count);
    void setAudioSampleRate(int sample_rate);
    void readIni(const engine::CIniFile &ini_file);
    void writeIni(engine::CIniFile &ini_file);
    // To the console, and with the device's settings to sounderr.txt.
    void logSoundError(std::string_view message);
    // How loud the output channel was between the two frequencies in the last moment mixed, for
    // the Sound Options' spectrum; about 0..1.
    [[nodiscard]] float analyzeFrequencyBand(int channel, float freq_start_hz, float freq_end_hz);

    void readFrames(std::span<float> frames) override;

private:
    void calculateVirtualSpeakerPositions();
    [[nodiscard]] CSfxSlot *getSfxSlotFromHandle(std::uint32_t sfx_handle);
    [[nodiscard]] const CSfxSlot *findActiveSfx(std::size_t first_index) const;
    [[nodiscard]] std::uint32_t getSfxHandle(const CSfxSlot &slot) const;
    // Changes a playing sound and works out its volumes and pitch again.
    bool updateSfx(std::uint32_t sfx_handle, const std::function<void(CSfxSlot &)> &change);
    [[nodiscard]] CSfxSample &findFreeSfxSample();
    [[nodiscard]] CSfxSample *getSfxSample(std::string_view filename);
    [[nodiscard]] CSfxSample *openStreamingSample(std::string_view filename, std::size_t slot);
    bool loadSampleData(CSfxSample &sample, std::string_view filename);
    bool parseWavFile(std::string_view file, std::size_t &data_offset, CSampleInfo &sample_info);
    [[nodiscard]] static int findBestSoundDevice();
    [[nodiscard]] CSfxOptions &getNextSfxOptions();
    static void checkSfxChannel(std::string_view function, int channel_index);

    const engine::CDosIo &dos_io_;
    platform::IFileSystem &file_system_;
    platform::IAudioDevice &audio_device_;
    engine::CConsole &console_;
    std::function<std::tm()> local_time_;

    std::array<CSfxOptions, 8> sfx_options_;
    std::size_t sfx_last_slot_ = 0;
    std::array<CSfxSample, kSampleCount> sfx_samples_;
    std::size_t last_sample_access_index_ = 0;
    std::size_t maximum_sound_memory_budget_ = 0x400000;
    // Declared after the samples and before the slots: the voices play from one and in the other.
    std::unique_ptr<CSfxMixer> mixer_;
    std::array<CSfxSlot, kSlotCount> sfx_slots_;
    int sfx_playback_state_counter_ = 1;

    std::array<float, kMaxSfxChannels> sfx_channel_volumes_{};
    std::array<bool, kMaxSfxChannels> sfx_channel_enabled_{};
    int max_sound_channels_ = kMaxSfxChannels;
    bool sound_muted_ = false;

    common::CVector3d cached_3d_listener_pos_;
    common::CVector3d cached_3d_listener_orient_front_;
    common::CVector3d cached_3d_listener_velocity_;
    std::array<common::CVector3d, CSfxSlot::kMaxChannels> virtual_speaker_positions_{};

    // Listed the first time they are asked about.
    std::vector<SSoundDeviceInfo> sound_devices_;
    int current_sound_device_ = -1;
    bool sound_device_active_ = false;
    bool sound_busy_flag_ = false;
    int audio_bits_per_sample_ = 16;
    int audio_channel_count_ = 2;
    int audio_sample_rate_ = 22050;

    CSfxAnalyzer analyzer_;
};

} // namespace nocturne::sound
