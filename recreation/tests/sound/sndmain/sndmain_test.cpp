#include "common/error/fatalerror.h"
#include "engine/ini/ini.h"
#include "engine/ini/inifile.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::sound {
namespace {

using ::testing::_;
using ::testing::Each;
using ::testing::HasSubstr;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CSndMain, IsTheAudioDevicesSource) {
    static_assert(std::is_base_of_v<platform::IAudioSource, CSndMain>);
    static_assert(!std::is_copy_constructible_v<CSndMain>);
}

TEST(CSndMain, PublicInterface) {
    using Handle = std::uint32_t;
    using Tracked = const common::CVector3f *;
    static_assert(std::is_same_v<decltype(&CSndMain::setNextSfxStaticPosition),
                                 void (CSndMain::*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setNextSfxTrackedFloatPosition),
                                 void (CSndMain::*)(Tracked)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setNextSfxTrackedVelocity1),
                                 void (CSndMain::*)(Tracked)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setNextSfxVolume), void (CSndMain::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setNextSfxBaseFrequency), void (CSndMain::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setNextSfxChannel), void (CSndMain::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setNextSfxDelay), void (CSndMain::*)(double)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setNextSfxFlags), void (CSndMain::*)(std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setNextSfxFlagBits), void (CSndMain::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setNextSfxTriggerTime),
                                 void (CSndMain::*)(double, EPlaybackPosType)>);
    static_assert(std::is_same_v<decltype(&CSndMain::pushSfxOptions), void (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::popSfxOptions), void (CSndMain::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::startSfx), Handle (CSndMain::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CSndMain::isSfxPlaying), bool (CSndMain::*)(Handle)>);
    static_assert(std::is_same_v<decltype(&CSndMain::getSfxSampleInfo),
                                 std::optional<CSampleInfo> (CSndMain::*)(Handle)>);
    static_assert(std::is_same_v<decltype(&CSndMain::getSfxPlaybackPosition),
                                 double (CSndMain::*)(Handle, EPlaybackPosType)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setSfxPosition),
                                 bool (CSndMain::*)(Handle, double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setSfxTrackedFloatPosition),
                                 bool (CSndMain::*)(Handle, Tracked)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setSfxTrackedFloatVelocity),
                                 bool (CSndMain::*)(Handle, Tracked)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setSfxVolume), bool (CSndMain::*)(Handle, float)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setSfxBaseFrequency),
                                 bool (CSndMain::*)(Handle, float)>);
    static_assert(std::is_same_v<decltype(&CSndMain::killSfx), bool (CSndMain::*)(Handle)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setSfxFade),
                                 bool (CSndMain::*)(Handle, float, float, bool)>);
    static_assert(std::is_same_v<decltype(&CSndMain::killAllSfx), void (CSndMain::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::getFirstActiveSfx), Handle (CSndMain::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::getNextActiveSfx), Handle (CSndMain::*)(Handle) const>);
    static_assert(std::is_same_v<decltype(&CSndMain::countActiveSfx), int (CSndMain::*)() const>);
    static_assert(std::is_same_v<decltype(&CSndMain::pollAllSfxSlots), void (CSndMain::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setSfxChannelVol), void (CSndMain::*)(int, float)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::getSfxChannelVol), float (CSndMain::*)(int) const>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setNumberOfSfxChannels), void (CSndMain::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::enableSfxChannel), void (CSndMain::*)(int, bool)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::isSfxChannelEnabled), bool (CSndMain::*)(int) const>);
    static_assert(std::is_same_v<decltype(&CSndMain::isSoundMuted), bool (CSndMain::*)() const>);
    static_assert(std::is_same_v<decltype(&CSndMain::setSoundMuted), void (CSndMain::*)(bool)>);
    static_assert(std::is_same_v<decltype(&CSndMain::getMovieVolume), float (CSndMain::*)() const>);
    static_assert(std::is_same_v<decltype(&CSndMain::setMovieVolume), void (CSndMain::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSndMain::set3DListenerPos),
                                 void (CSndMain::*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSndMain::set3DListenerOrient),
                                 void (CSndMain::*)(double, double, double, double, double, double,
                                                    double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSndMain::set3DListenerVelocity),
                                 void (CSndMain::*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&CSndMain::isWithinListenerRadius),
                                 bool (CSndMain::*)(double, double, double, double) const>);
    static_assert(std::is_same_v<decltype(&CSndMain::getSampleInfo),
                                 std::optional<CSampleInfo> (CSndMain::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CSndMain::freeAllSamples), void (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::getSoundMemoryStats),
                                 SSoundMemoryStats (CSndMain::*)() const>);
    static_assert(std::is_same_v<decltype(&CSndMain::ensureSoundMemoryAvailable),
                                 bool (CSndMain::*)(std::size_t)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::resetSoundSystemDefaults), void (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::shutdownSoundSystem), void (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::enableSoundSystem), bool (CSndMain::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::isSoundSystemActive), bool (CSndMain::*)() const>);
    static_assert(std::is_same_v<decltype(&CSndMain::isSoundBusy), bool (CSndMain::*)() const>);
    static_assert(std::is_same_v<decltype(&CSndMain::resetSoundDevice), void (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::closeSoundDevice), void (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::initializeSoundDevice), void (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::selectSoundDevice), void (CSndMain::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSndMain::getSoundDeviceCount), int (CSndMain::*)()>);
    static_assert(std::is_same_v<decltype(&CSndMain::getSoundDeviceInfo),
                                 SSoundDeviceInfo (CSndMain::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::getCurrentSoundDevice), int (CSndMain::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setSoundOutputMode), bool (CSndMain::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CSndMain::getAudioBitDepth), int (CSndMain::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::getAudioSampleRate), int (CSndMain::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::getAudioChannelCount), int (CSndMain::*)() const>);
    static_assert(std::is_same_v<decltype(&CSndMain::setAudioBitDepth), void (CSndMain::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::setAudioChannelCount), void (CSndMain::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSndMain::setAudioSampleRate), void (CSndMain::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::readIni), void (CSndMain::*)(const engine::CIniFile &)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::writeIni), void (CSndMain::*)(engine::CIniFile &)>);
    static_assert(
        std::is_same_v<decltype(&CSndMain::logSoundError), void (CSndMain::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CSndMain::analyzeFrequencyBand),
                                 float (CSndMain::*)(int, float, float)>);
}

class CSndMainTest : public CSndMainFixture {};

TEST_F(CSndMainTest, ListsTheDefaultDeviceThenTheHostsUnderItsAudioApi) {
    EXPECT_CALL(audio_device_, getDeviceNames).Times(1);
    ASSERT_EQ(sound_.getSoundDeviceCount(), 3);
    EXPECT_EQ(sound_.getSoundDeviceInfo(0).device_name, "pipewire: Default Device");
    EXPECT_EQ(sound_.getSoundDeviceInfo(0).open_name, "");
    EXPECT_EQ(sound_.getSoundDeviceInfo(2).device_name, "pipewire: Headphones");
    EXPECT_EQ(sound_.getSoundDeviceInfo(2).open_name, "Headphones");
    EXPECT_EQ(sound_.getSoundDeviceCount(), 3);
}

TEST_F(CSndMainTest, KeepsEightDevicesAtMost) {
    ON_CALL(audio_device_, getDeviceNames)
        .WillByDefault(Return(std::vector<std::string>(10, "Speakers")));
    EXPECT_EQ(sound_.getSoundDeviceCount(), 8);
}

TEST_F(CSndMainTest, WithoutAnAudioApiNameTheDevicesAreUnprefixed) {
    ON_CALL(audio_device_, getDriverName).WillByDefault(Return(""));
    EXPECT_EQ(sound_.getSoundDeviceInfo(1).device_name, "Speakers");
}

TEST_F(CSndMainTest, AskingForADeviceThatIsNotThereIsFatal) {
    const auto fatal =
        ThrowsMessage<common::CFatalError>(StrEq("getSoundDeviceInfo - invalid index"));
    EXPECT_THAT([this] { (void)sound_.getSoundDeviceInfo(3); }, fatal);
    EXPECT_THAT([this] { (void)sound_.getSoundDeviceInfo(-1); }, fatal);
}

TEST_F(CSndMainTest, SelectingADeviceThatIsNotThereTakesTheDefault) {
    EXPECT_EQ(sound_.getCurrentSoundDevice(), -1);
    sound_.selectSoundDevice(2);
    EXPECT_EQ(sound_.getCurrentSoundDevice(), 2);
    sound_.selectSoundDevice(-1);
    EXPECT_EQ(sound_.getCurrentSoundDevice(), 2);
    sound_.selectSoundDevice(7);
    EXPECT_EQ(sound_.getCurrentSoundDevice(), 0);
}

TEST_F(CSndMainTest, InitializingTakesUpTheSelectedDeviceOrTheDefault) {
    EXPECT_FALSE(sound_.isSoundSystemActive());
    sound_.initializeSoundDevice();
    EXPECT_TRUE(sound_.isSoundSystemActive());
    EXPECT_EQ(sound_.getCurrentSoundDevice(), 0);
    EXPECT_FALSE(sound_.isSoundBusy());
}

TEST_F(CSndMainTest, SelectingWhileADeviceIsOpenIsFatal) {
    sound_.initializeSoundDevice();
    EXPECT_THAT(
        [this] { sound_.selectSoundDevice(1); },
        ThrowsMessage<common::CFatalError>(StrEq("selectSoundDevice - device already open.")));
}

TEST_F(CSndMainTest, EnablingWithoutADeviceDoesNothing) {
    EXPECT_CALL(audio_device_, open).Times(0);
    EXPECT_FALSE(sound_.enableSoundSystem());
}

TEST_F(CSndMainTest, EnablingOpensTheSelectedDeviceInTheOutputFormat) {
    sound_.selectSoundDevice(1);
    sound_.initializeSoundDevice();
    EXPECT_CALL(audio_device_, open(std::string_view("Speakers"), _, ::testing::Ref(sound_)))
        .WillOnce(
            [](std::string_view, const platform::SAudioFormat &format, platform::IAudioSource &) {
                EXPECT_EQ(format.sample_rate, 22050);
                EXPECT_EQ(format.channel_count, 2);
                return true;
            });
    EXPECT_TRUE(sound_.enableSoundSystem());
    EXPECT_TRUE(sound_.isSoundBusy());
    EXPECT_TRUE(sound_.enableSoundSystem());
}

TEST_F(CSndMainTest, ADeviceThatWontOpenLeavesTheSoundOff) {
    sound_.initializeSoundDevice();
    EXPECT_CALL(audio_device_, open).WillOnce(Return(false));
    EXPECT_FALSE(sound_.enableSoundSystem());
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_THAT(mix(4), Each(0.0F));
}

TEST_F(CSndMainTest, EnablingWhileMutedStopsTheOutput) {
    startOutput();
    sound_.setSoundMuted(true);
    EXPECT_TRUE(sound_.isSoundMuted());
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_CALL(audio_device_, open).Times(0);
    EXPECT_CALL(audio_device_, close).Times(::testing::AtLeast(1));
    EXPECT_TRUE(sound_.enableSoundSystem());
    EXPECT_FALSE(sound_.isSoundBusy());
}

TEST_F(CSndMainTest, UnmutingLeavesTheOutputToBeEnabled) {
    sound_.setSoundMuted(false);
    EXPECT_FALSE(sound_.isSoundMuted());
}

// In hundredths, so the menu's five steps of a fifth land on full.
TEST_F(CSndMainTest, TheMovieVolumeStartsFullAndIsHeldInHundredths) {
    EXPECT_EQ(sound_.getMovieVolume(), 1.0F);
    float volume = 0.0F;
    for (int step = 0; step < 5; ++step) {
        volume += 0.2F;
    }
    sound_.setMovieVolume(volume);
    EXPECT_EQ(sound_.getMovieVolume(), 1.0F);
    sound_.setMovieVolume(0.333F);
    EXPECT_EQ(sound_.getMovieVolume(), 0.33F);
    sound_.setMovieVolume(2.0F);
    EXPECT_EQ(sound_.getMovieVolume(), 1.0F);
    sound_.setMovieVolume(-1.0F);
    EXPECT_EQ(sound_.getMovieVolume(), 0.0F);
}

TEST_F(CSndMainTest, TheOutputFormatIsKeptUntilADeviceOpensInIt) {
    EXPECT_CALL(audio_device_, open).Times(0);
    sound_.setAudioBitDepth(8);
    sound_.setAudioChannelCount(1);
    sound_.setAudioSampleRate(44100);
    EXPECT_EQ(sound_.getAudioBitDepth(), 8);
    EXPECT_EQ(sound_.getAudioChannelCount(), 1);
    EXPECT_EQ(sound_.getAudioSampleRate(), 44100);
}

TEST_F(CSndMainTest, ChangingTheFormatWhileTheOutputRunsIsFatal) {
    startOutput();
    EXPECT_THAT([this] { sound_.setAudioSampleRate(44100); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("setSoundOutputMode - can't do this while sound active!")));
}

TEST_F(CSndMainTest, ResettingStopsTheOutputAndClosingLetsTheDeviceGo) {
    startOutput();
    sound_.resetSoundDevice();
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_TRUE(sound_.isSoundSystemActive());
    sound_.closeSoundDevice();
    EXPECT_FALSE(sound_.isSoundSystemActive());
}

TEST_F(CSndMainTest, TheDefaultsAreFullVolumeOnEveryChannelAndTheListenerAtTheOrigin) {
    sound_.set3DListenerPos(5.0, 6.0, 7.0);
    sound_.resetSoundSystemDefaults();
    for (int channel = 0; channel < CSndMain::kMaxSfxChannels; ++channel) {
        EXPECT_EQ(sound_.getSfxChannelVol(channel), 1.0F);
        EXPECT_TRUE(sound_.isSfxChannelEnabled(channel));
    }
    EXPECT_EQ(sound_.getListenerPosition(), common::CVector3d{});
    EXPECT_EQ(sound_.getListenerVelocity(), common::CVector3d{});
}

TEST_F(CSndMainTest, ShuttingDownStopsTheOutputAndFreesTheSamples) {
    givenSound("pier59.wav", makeConstantWav(100, 1000));
    startOutput();
    ASSERT_NE(sound_.startSfx("pier59.wav"), 0U);
    sound_.shutdownSoundSystem();
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_EQ(sound_.getSoundMemoryStats().unreferenced_count, 0);
}

TEST_F(CSndMainTest, TheDeviceStopsPullingBeforeTheSoundSystemGoes) {
    auto sound =
        std::make_unique<CSndMain>(dosio_, file_system_, audio_device_, console_, &getLocalTime);
    EXPECT_CALL(audio_device_, close);
    sound.reset();
    ::testing::Mock::VerifyAndClearExpectations(&audio_device_);
}

TEST_F(CSndMainTest, WithoutAMixerTheOutputIsSilent) {
    std::vector<float> frames(8, 1.0F);
    sound_.readFrames(frames);
    EXPECT_THAT(frames, Each(0.0F));
}

TEST_F(CSndMainTest, TheSpectrumIsOfWhatWasMixed) {
    startOutput();
    EXPECT_EQ(sound_.analyzeFrequencyBand(0, 0.0F, 11025.0F), 0.0F);
    givenSound("tone.wav", makeConstantWav(10000, 16384));
    sound_.setNextSfxFlags(kSfxNonPositional);
    ASSERT_NE(sound_.startSfx("tone.wav"), 0U);
    (void)mix(4096);
    EXPECT_GT(sound_.analyzeFrequencyBand(0, 0.0F, 20.0F), 0.0F);
}

class CSndMainIniTest : public CSndMainFixture {
protected:
    CSndMainIniTest() {
        ON_CALL(file_system_, readFile(std::string_view("nocturne.ini")))
            .WillByDefault([this](std::string_view) { return std::optional(ini_text_); });
        ON_CALL(file_system_, writeFile(std::string_view("nocturne.ini"), _))
            .WillByDefault([this](std::string_view, std::string_view text) {
                ini_text_ = text;
                return true;
            });
        sound_.resetSoundSystemDefaults();
        sound_.setNumberOfSfxChannels(3);
    }

    std::string ini_text_ = "[Sound]\r\n";
    engine::CIni ini_{file_system_};
    engine::CIniFile ini_file_{ini_, "nocturne.ini", "Sound"};
};

TEST_F(CSndMainIniTest, ReadsTheDeviceFormatMuteAndChannels) {
    ini_text_ = "[Sound]\r\nDeviceName=PIPEWIRE: headphones\r\nBits=8\r\nChannels=1\r\n"
                "Hz=44100\r\nMute=1\r\nSfxChannel1Enabled=0\r\nSfxChannel2Vol=0.25\r\n";
    sound_.readIni(ini_file_);
    EXPECT_EQ(sound_.getCurrentSoundDevice(), 2);
    EXPECT_EQ(sound_.getAudioBitDepth(), 8);
    EXPECT_EQ(sound_.getAudioChannelCount(), 1);
    EXPECT_EQ(sound_.getAudioSampleRate(), 44100);
    EXPECT_TRUE(sound_.isSoundMuted());
    EXPECT_FALSE(sound_.isSfxChannelEnabled(1));
    EXPECT_TRUE(sound_.isSfxChannelEnabled(2));
    EXPECT_EQ(sound_.getSfxChannelVol(2), 0.25F);
    EXPECT_EQ(sound_.getSfxChannelVol(1), 1.0F);
}

TEST_F(CSndMainIniTest, AMissingSectionKeepsEverythingAndAnUnknownDeviceSelectsNothing) {
    ini_text_ = "[Sound]\r\nDeviceName=DirectSound: Primary Sound Driver\r\n";
    sound_.readIni(ini_file_);
    EXPECT_EQ(sound_.getCurrentSoundDevice(), -1);
    EXPECT_EQ(sound_.getAudioSampleRate(), 22050);
    EXPECT_FALSE(sound_.isSoundMuted());
    EXPECT_EQ(sound_.getSfxChannelVol(0), 1.0F);
}

TEST_F(CSndMainIniTest, WritesWhatItReads) {
    sound_.selectSoundDevice(1);
    sound_.setAudioSampleRate(44100);
    sound_.enableSfxChannel(2, false);
    sound_.setSfxChannelVol(1, 0.5F);
    sound_.writeIni(ini_file_);
    EXPECT_EQ(ini_text_, "[Sound]\r\nSfxChannel2Vol=1\r\nSfxChannel2Enabled=0\r\n"
                         "SfxChannel1Vol=0.5\r\nSfxChannel1Enabled=1\r\nSfxChannel0Vol=1\r\n"
                         "SfxChannel0Enabled=1\r\nMovieVolume=100\r\nMute=0\r\nMaxSwLatency=0.5\r\n"
                         "HwMixingEnabled=1\r\nHz=44100\r\nChannels=2\r\nBits=16\r\n"
                         "DeviceName=pipewire: Speakers\r\n");
}

TEST_F(CSndMainIniTest, TheMovieVolumeIsAPercentageHeldAtZeroToAHundred) {
    ini_text_ = "[Sound]\r\nMovieVolume=40\r\n";
    sound_.readIni(ini_file_);
    EXPECT_EQ(sound_.getMovieVolume(), 0.4F);
    ini_text_ = "[Sound]\r\nMovieVolume=150\r\n";
    sound_.readIni(ini_file_);
    EXPECT_EQ(sound_.getMovieVolume(), 1.0F);
    ini_text_ = "[Sound]\r\nMovieVolume=-5\r\n";
    sound_.readIni(ini_file_);
    EXPECT_EQ(sound_.getMovieVolume(), 0.0F);
    sound_.setMovieVolume(0.6F);
    sound_.writeIni(ini_file_);
    EXPECT_THAT(ini_text_, ::testing::HasSubstr("MovieVolume=60\r\n"));
}

TEST_F(CSndMainIniTest, TheOriginalsMixerSettingsAreWrittenBackAsRead) {
    ini_text_ = "[Sound]\r\nHwMixingEnabled=0\r\nMaxSwLatency=0.25\r\n";
    sound_.readIni(ini_file_);
    sound_.writeIni(ini_file_);
    EXPECT_THAT(ini_text_, HasSubstr("HwMixingEnabled=0\r\n"));
    EXPECT_THAT(ini_text_, HasSubstr("MaxSwLatency=0.25\r\n"));
}

// As setMaxSwSoundLatency held it.
TEST_F(CSndMainIniTest, TheLatencyIsHeldBetweenATwentiethAndTwoSeconds) {
    ini_text_ = "[Sound]\r\nMaxSwLatency=0.01\r\n";
    sound_.readIni(ini_file_);
    sound_.writeIni(ini_file_);
    EXPECT_THAT(ini_text_, HasSubstr("MaxSwLatency=0.05\r\n"));
    ini_text_ = "[Sound]\r\nMaxSwLatency=5\r\n";
    sound_.readIni(ini_file_);
    sound_.writeIni(ini_file_);
    EXPECT_THAT(ini_text_, HasSubstr("MaxSwLatency=2\r\n"));
}

TEST_F(CSndMainIniTest, ReadingWhileADeviceIsOpenIsFatal) {
    sound_.initializeSoundDevice();
    EXPECT_THAT([this] { sound_.readIni(ini_file_); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("enableHwSoundMixing - Can't do this while the device is open.")));
}

TEST_F(CSndMainIniTest, AChannelTheIniDoesNotNameKeepsItsSwitch) {
    sound_.enableSfxChannel(1, false);
    sound_.readIni(ini_file_);
    EXPECT_FALSE(sound_.isSfxChannelEnabled(1));
    EXPECT_TRUE(sound_.isSfxChannelEnabled(2));
}

TEST_F(CSndMainIniTest, AnUnknownDeviceDeselectsTheOneSelected) {
    sound_.selectSoundDevice(1);
    ini_text_ = "[Sound]\r\nDeviceName=DirectSound: Primary Sound Driver\r\n";
    sound_.readIni(ini_file_);
    EXPECT_EQ(sound_.getCurrentSoundDevice(), -1);
}

TEST_F(CSndMainIniTest, MutingRoundTrips) {
    sound_.setSoundMuted(true);
    sound_.readIni(ini_file_);
    EXPECT_TRUE(sound_.isSoundMuted());
    sound_.writeIni(ini_file_);
    EXPECT_THAT(ini_text_, HasSubstr("Mute=1\r\n"));
}

TEST_F(CSndMainIniTest, WithNoDeviceSelectedTheNameIsEmpty) {
    sound_.writeIni(ini_file_);
    EXPECT_THAT(ini_text_, HasSubstr("DeviceName=\r\n"));
}

class CSndMainLogTest : public CSndMainFixture {
protected:
    std::string expectReport() {
        std::string report;
        EXPECT_CALL(file_system_, appendFile(std::string_view("sounderr.txt"), _))
            .WillOnce([&report](std::string_view, std::string_view text) {
                report = text;
                return true;
            });
        sound_.logSoundError("startSfx - can't get sample x.wav");
        return report;
    }
};

TEST_F(CSndMainLogTest, ReportsToTheConsoleAndToSounderrTxt) {
    EXPECT_EQ(expectReport(), std::string(64, '-') +
                                  "\nMsg: startSfx - can't get sample x.wav\n"
                                  "Time: Sun Oct  3 07:05:09 1999\n"
                                  "selectedDeviceIndex: -1\nNo device selected.\n"
                                  "Bits: 16\nChannels: 2\nHz: 22050\n");
    EXPECT_EQ(console_.getRow(0), "startSfx - can't get sample x.wav");
}

TEST_F(CSndMainLogTest, NamesTheSelectedDevice) {
    sound_.selectSoundDevice(1);
    EXPECT_THAT(expectReport(), HasSubstr("selectedDeviceIndex: 1\nDevice: pipewire: Speakers.\n"));
}

} // namespace
} // namespace nocturne::sound
