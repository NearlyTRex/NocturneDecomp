#include "core/menu/menupage.h"
#include "core/menu/soundoptionspage.h"
#include "core/sound/sound.h"
#include "engine/ini/inifile.h"
#include "engine/keys/inputcodetype.h"
#include "tests/mocks/core/menufixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::Return;

// The lines' ids, in the order they are listed.
constexpr int kMute = 0;
constexpr int kEffects = 1;
constexpr int kDialog = 2;
constexpr int kMusic = 3;
constexpr int kMovie = 4;
constexpr int kRate = 5;
constexpr int kQuality = 6;
constexpr int kType = 7;
constexpr int kDevice = 8;

TEST(CSoundOptionsPage, PublicInterface) {
    static_assert(std::is_base_of_v<CMenuPage, CSoundOptionsPage>);
    static_assert(std::is_final_v<CSoundOptionsPage>);
    static_assert(std::is_constructible_v<CSoundOptionsPage, CMenu &, const SMenuOwners &>);
}

// As under the main menu: its music playing, on the default device at 22050Hz, with an effects
// shot on disk.
class CSoundOptionsPageTest : public CMenuFixture {
protected:
    CSoundOptionsPageTest() {
        givenFile("sound\\colt45-0.wav", sound::makeConstantWav(1000, 0));
        givenFile("sound\\splash-music-44.wav", sound::makeConstantWav(1000, 0));
        ON_CALL(audio_device_, getDeviceNames)
            .WillByDefault(Return(std::vector<std::string>{"Speakers", "Headphones"}));
        ON_CALL(audio_device_, getDriverName).WillByDefault(Return("pipewire"));
        sound_.configure();
    }

    // A device is chosen while none is open.
    void selectDevice(int device) {
        sound_main_.closeSoundDevice();
        sound_main_.selectSoundDevice(device);
        sound_main_.initializeSoundDevice();
    }

    [[nodiscard]] std::string text(int id) {
        std::vector<SMenuLine> lines;
        page_.build(lines);
        for (const SMenuLine &line : lines) {
            if (line.id == id) {
                return line.text;
            }
        }
        return "";
    }

    void choose(int id, EMenuStep step = EMenuStep::On) {
        EXPECT_EQ(page_.choose(id, step), EMenuOutcome::Stay);
    }

    CSoundOptionsPage page_{menu_, menu_owners_};
};

TEST_F(CSoundOptionsPageTest, TheTitleIsSoundOptions) {
    EXPECT_EQ(page_.title(), std::optional<std::string>("Sound Options"));
}

// No Hardware mixing line: there is no hardware mixing.
TEST_F(CSoundOptionsPageTest, TheLinesShowTheSettings) {
    sound_main_.setSfxChannelVol(CSound::kEffectsChannel, 0.15F);
    sound_main_.setSfxChannelVol(CSound::kDialogChannel, 0.4F);
    sound_main_.setSfxChannelVol(CSound::kMusicChannel, 0.25F);
    sound_main_.setMovieVolume(0.8F);
    std::vector<SMenuLine> lines;
    page_.build(lines);
    std::vector<std::string> texts;
    texts.reserve(lines.size());
    for (const SMenuLine &line : lines) {
        texts.push_back(line.text);
    }
    EXPECT_EQ(texts, (std::vector<std::string>{
                         "Sound : On", "Sound effects : 60%.", "Dialog : 40%.", "Music Vol : 100%.",
                         "Movie Vol : 80%.", "Output rate : 22050hz", "Output quality : 16bit",
                         "Output type : STEREO", "Device : pipewire: Default Device"}));
}

TEST_F(CSoundOptionsPageTest, ASwitchedOffChannelAndNoMovieVolumeReadOff) {
    sound_main_.enableSfxChannel(CSound::kEffectsChannel, false);
    sound_main_.enableSfxChannel(CSound::kDialogChannel, false);
    sound_main_.enableSfxChannel(CSound::kMusicChannel, false);
    sound_main_.setMovieVolume(0.0F);
    EXPECT_EQ(text(kEffects), "Sound effects : Off");
    EXPECT_EQ(text(kDialog), "Dialog : Off");
    EXPECT_EQ(text(kMusic), "Music Vol : Off");
    EXPECT_EQ(text(kMovie), "Movie Vol : Off");
}

TEST_F(CSoundOptionsPageTest, TheMuteTogglesAndUnmutingStartsTheMusic) {
    choose(kMute);
    EXPECT_TRUE(sound_main_.isSoundMuted());
    EXPECT_EQ(text(kMute), "Sound : Muted");
    EXPECT_EQ(sound_main_.countActiveSfx(), 0);
    choose(kMute);
    EXPECT_FALSE(sound_main_.isSoundMuted());
    EXPECT_EQ(sound_main_.countActiveSfx(), 1);
}

// The effects' full scale is a quarter of the mixer's, and each change fires a shot.
TEST_F(CSoundOptionsPageTest, TheEffectsStepInFifthsAndFireAShot) {
    sound_main_.setSfxChannelVol(CSound::kEffectsChannel, 0.1F);
    choose(kEffects);
    EXPECT_FLOAT_EQ(sound_main_.getSfxChannelVol(CSound::kEffectsChannel), 0.15F);
    EXPECT_EQ(sound_main_.countActiveSfx(), 2);
    choose(kEffects, EMenuStep::Back);
    choose(kEffects, EMenuStep::Back);
    EXPECT_FLOAT_EQ(sound_main_.getSfxChannelVol(CSound::kEffectsChannel), 0.05F);
    choose(kEffects, EMenuStep::Back);
    EXPECT_FALSE(sound_main_.isSfxChannelEnabled(CSound::kEffectsChannel));
    EXPECT_EQ(sound_main_.getSfxChannelVol(CSound::kEffectsChannel), 0.0F);
}

TEST_F(CSoundOptionsPageTest, FromOffBackIsFullAndOnIsTheLowestStep) {
    sound_main_.enableSfxChannel(CSound::kDialogChannel, false);
    choose(kDialog, EMenuStep::Back);
    EXPECT_TRUE(sound_main_.isSfxChannelEnabled(CSound::kDialogChannel));
    EXPECT_EQ(sound_main_.getSfxChannelVol(CSound::kDialogChannel), 1.0F);
    sound_main_.enableSfxChannel(CSound::kDialogChannel, false);
    choose(kDialog);
    EXPECT_FLOAT_EQ(sound_main_.getSfxChannelVol(CSound::kDialogChannel), 0.2F);
}

TEST_F(CSoundOptionsPageTest, PastFullAChannelSwitchesOffAndNearFullIsFull) {
    sound_main_.setSfxChannelVol(CSound::kDialogChannel, 0.795F);
    choose(kDialog);
    EXPECT_EQ(sound_main_.getSfxChannelVol(CSound::kDialogChannel), 1.0F);
    choose(kDialog);
    EXPECT_FALSE(sound_main_.isSfxChannelEnabled(CSound::kDialogChannel));
    EXPECT_EQ(text(kDialog), "Dialog : Off");
}

// The music has to be started again to be heard.
TEST_F(CSoundOptionsPageTest, SwitchingTheMusicBackOnStartsIt) {
    sound_main_.enableSfxChannel(CSound::kMusicChannel, false);
    choose(kMusic);
    EXPECT_TRUE(sound_main_.isSfxChannelEnabled(CSound::kMusicChannel));
    EXPECT_FLOAT_EQ(sound_main_.getSfxChannelVol(CSound::kMusicChannel), 0.05F);
    EXPECT_EQ(sound_main_.countActiveSfx(), 1);
}

TEST_F(CSoundOptionsPageTest, TheMovieVolumeStepsInFifthsWithOffBelowTheLowest) {
    sound_main_.setMovieVolume(0.6F);
    choose(kMovie);
    EXPECT_EQ(sound_main_.getMovieVolume(), 0.8F);
    EXPECT_EQ(text(kMovie), "Movie Vol : 80%.");
    choose(kMovie);
    EXPECT_EQ(sound_main_.getMovieVolume(), 1.0F);
    choose(kMovie);
    EXPECT_EQ(sound_main_.getMovieVolume(), 0.0F);
    choose(kMovie, EMenuStep::Back);
    EXPECT_EQ(sound_main_.getMovieVolume(), 1.0F);
    sound_main_.setMovieVolume(0.2F);
    choose(kMovie, EMenuStep::Back);
    EXPECT_EQ(sound_main_.getMovieVolume(), 0.0F);
    sound_main_.setMovieVolume(0.6F);
    choose(kMovie, EMenuStep::Back);
    EXPECT_EQ(sound_main_.getMovieVolume(), 0.4F);
}

// The lowest rate is the original's 11050, not 11025.
TEST_F(CSoundOptionsPageTest, TheRateStepsThroughTheThreeEitherWay) {
    std::vector<int> on;
    for (int i = 0; i < 3; ++i) {
        choose(kRate);
        on.push_back(sound_main_.getAudioSampleRate());
    }
    EXPECT_EQ(on, (std::vector<int>{44100, 11050, 22050}));
    std::vector<int> back;
    for (int i = 0; i < 3; ++i) {
        choose(kRate, EMenuStep::Back);
        back.push_back(sound_main_.getAudioSampleRate());
    }
    EXPECT_EQ(back, (std::vector<int>{11050, 44100, 22050}));
}

// The output starts again in its new format, with the music.
TEST_F(CSoundOptionsPageTest, AnotherFormatRestartsTheOutputWithTheMusic) {
    choose(kRate);
    EXPECT_EQ(sound_main_.countActiveSfx(), 1);
    choose(kQuality);
    EXPECT_EQ(sound_main_.getAudioBitDepth(), 8);
    EXPECT_EQ(text(kQuality), "Output quality : 8bit");
    choose(kQuality);
    EXPECT_EQ(sound_main_.getAudioBitDepth(), 16);
    choose(kType);
    EXPECT_EQ(sound_main_.getAudioChannelCount(), 1);
    EXPECT_EQ(text(kType), "Output type : MONO");
    choose(kType);
    EXPECT_EQ(sound_main_.getAudioChannelCount(), 2);
    EXPECT_EQ(sound_main_.countActiveSfx(), 1);
}

// An out-of-range rate steps on to the middle one, and an unchanged rate leaves the output be.
TEST_F(CSoundOptionsPageTest, ARateBelowTheMiddleStepsToIt) {
    sound_main_.resetSoundDevice();
    sound_main_.setAudioSampleRate(8000);
    choose(kRate);
    EXPECT_EQ(sound_main_.getAudioSampleRate(), 22050);
}

TEST_F(CSoundOptionsPageTest, TheDeviceLineNamesTheCurrentDevice) {
    selectDevice(2);
    EXPECT_EQ(text(kDevice), "Device : pipewire: Headphones");
}

// The device the INI names is gone.
TEST_F(CSoundOptionsPageTest, WithoutACurrentDeviceTheDeviceLineNamesNone) {
    sound_main_.closeSoundDevice();
    ini_text_ = "[Sound]\r\nDeviceName=Gone\r\n";
    const engine::CIniFile file(ini_, kIniFile, "Sound");
    sound_main_.readIni(file);
    EXPECT_EQ(text(kDevice), "Device : ");
}

// The picker opens on the current device; Down and Confirm take the next, with the music.
TEST_F(CSoundOptionsPageTest, TheDevicePickerTakesTheChosenDevice) {
    on_frame_ = [&](int frame) {
        press(frame == 1 ? EInputCodeType::DIK_DOWN : EInputCodeType::DIK_RETURN);
    };
    choose(kDevice);
    EXPECT_EQ(sound_main_.getCurrentSoundDevice(), 1);
    EXPECT_EQ(sound_main_.countActiveSfx(), 1);
}

TEST_F(CSoundOptionsPageTest, CancellingThePickerKeepsTheDevice) {
    selectDevice(1);
    on_frame_ = [&](int /*frame*/) { press(EInputCodeType::DIK_ESCAPE); };
    choose(kDevice);
    EXPECT_EQ(sound_main_.getCurrentSoundDevice(), 1);
}

} // namespace
} // namespace nocturne::core
