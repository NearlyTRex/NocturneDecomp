#include "common/error/fatalerror.h"
#include "common/serial/binarywriter.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <string>
#include <vector>

namespace nocturne::sound {
namespace {

using ::testing::FloatNear;
using ::testing::HasSubstr;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr float kTolerance = 1e-4F;
// 1.9 MB of 16-bit mono, held whole; two fit the 4 MB budget and three don't.
constexpr std::size_t kLargeFrames = 950000;

std::string toText(std::span<const std::byte> bytes) {
    std::string text(bytes.size(), '\0');
    std::ranges::transform(bytes, text.begin(), [](std::byte b) { return static_cast<char>(b); });
    return text;
}

class CSndMainSamplesTest : public CSndMainFixture {
protected:
    CSndMainSamplesTest() {
        startOutput();
        sound_.setNextSfxFlags(kSfxNonPositional);
    }

    // What logSoundError wrote for the next call, empty when it wrote nothing.
    void expectReport(const std::string &message) {
        EXPECT_CALL(file_system_, appendFile).Times(::testing::AnyNumber());
        EXPECT_CALL(file_system_, appendFile(std::string_view("sounderr.txt"),
                                             HasSubstr("Msg: " + message + "\n")));
    }

    void expectInvalidWav(const std::string &contents, const std::string &reason) {
        givenSound("bad.wav", contents);
        expectReport("WAV file is invalid: " + reason);
        EXPECT_EQ(sound_.getSampleInfo("bad.wav"), std::nullopt);
        ::testing::Mock::VerifyAndClearExpectations(&file_system_);
    }

    void expectSilentlyRefused(const std::string &contents) {
        givenSound("bad.wav", contents);
        EXPECT_CALL(file_system_, appendFile).Times(0);
        EXPECT_EQ(sound_.getSampleInfo("bad.wav"), std::nullopt);
        ::testing::Mock::VerifyAndClearExpectations(&file_system_);
    }

    SWavLayout layout_;
};

TEST_F(CSndMainSamplesTest, AWavesFormatAndLengthComeFromItsChunks) {
    layout_.channels = 2;
    layout_.sample_rate = 11025;
    layout_.leading_chunk = "LIST";
    givenSound("pier59.wav", makeConstantWav(300, 0, layout_));
    const CSampleInfo info = expectInfo(sound_.getSampleInfo("pier59.wav"));
    EXPECT_EQ(info.name, "pier59.wav");
    EXPECT_EQ(info.bit_depth, 16);
    EXPECT_EQ(info.num_channels, 2);
    EXPECT_EQ(info.sample_rate, 11025);
    EXPECT_EQ(info.sample_count, 300);
}

TEST_F(CSndMainSamplesTest, ChunksBetweenTheFormatAndTheDataAreSkipped) {
    layout_.trailing_chunk = "cue ";
    givenSound("pier59.wav", makeConstantWav(300, 0, layout_));
    EXPECT_EQ(expectInfo(sound_.getSampleInfo("pier59.wav")).sample_count, 300);
}

TEST_F(CSndMainSamplesTest, AnInvalidWavIsNotPlayed) {
    layout_.format_tag = 2;
    givenSound("bad.wav", makeConstantWav(10, 0, layout_));
    EXPECT_EQ(sound_.startSfx("bad.wav"), 0U);
}

TEST_F(CSndMainSamplesTest, AnEmptyMp3IsNotPlayed) {
    givenSound("empty.mp3", "");
    EXPECT_EQ(sound_.startSfx("empty.mp3"), 0U);
}

// Places are handed out in turn, passing over one whose sample is still playing.
TEST_F(CSndMainSamplesTest, ANewSamplePassesOverOneStillPlaying) {
    givenSound("held.wav", makeConstantWav(10000, 0));
    const std::uint32_t held = sound_.startSfx("held.wav");
    for (int index = 0; index < 64; ++index) {
        const std::string name = "short" + std::to_string(index) + ".wav";
        givenSound(name, makeConstantWav(10, 0));
        sound_.killSfx(sound_.startSfx(name));
    }
    EXPECT_TRUE(sound_.isSfxPlaying(held));
    EXPECT_EQ(expectInfo(sound_.getSampleInfo("held.wav")).sample_count, 10000);
}

TEST_F(CSndMainSamplesTest, AByteRateOfOneByteASampleIsEightBit) {
    layout_.bits = 8;
    const std::vector<std::byte> data(100, std::byte{0xc0});
    givenSound("click.wav", makeWav(data, layout_));
    EXPECT_EQ(expectInfo(sound_.getSampleInfo("click.wav")).bit_depth, 8);
    const std::uint32_t handle = sound_.startSfx("click.wav");
    ASSERT_NE(handle, 0U);
    EXPECT_THAT(mix(3)[2], FloatNear(0.5F, kTolerance));
}

// The rates are compared in 16 bits and the rate kept is its low half, as the original did.
TEST_F(CSndMainSamplesTest, ARateAboveSixtyFiveThousandWrapsInSixteenBits) {
    layout_.sample_rate = 70000;
    givenSound("odd.wav", makeConstantWav(10, 0, layout_));
    EXPECT_EQ(expectInfo(sound_.getSampleInfo("odd.wav")).sample_rate, 70000 - 65536);
}

TEST_F(CSndMainSamplesTest, AnInvalidWavIsReportedWithWhatIsWrong) {
    layout_.riff = "RIFX";
    expectInvalidWav(makeConstantWav(10, 0, layout_), R"("RIFF" ID not found at offset 00000000h)");
    layout_ = {};
    layout_.wave = "AVI ";
    expectInvalidWav(makeConstantWav(10, 0, layout_), R"("WAVE" ID not found at offset 00000008h)");
    layout_ = {};
    layout_.has_fmt = false;
    expectInvalidWav(makeConstantWav(10, 0, layout_), R"("data" chunk preceeds "fmt" chunk)");
    layout_.has_data = false;
    layout_.leading_chunk = "LIST";
    layout_.riff_size = 4;
    expectInvalidWav(makeConstantWav(10, 0, layout_), R"(Required "fmt" chunk not found)");
    layout_ = {};
    layout_.format_tag = 3;
    expectInvalidWav(makeConstantWav(10, 0, layout_),
                     R"(Invalid "fmt" chunk tag: 0003  (Must be 0001h = Pulse Code Modulation))");
    layout_ = {};
    layout_.channels = 3;
    expectInvalidWav(makeConstantWav(10, 0, layout_),
                     "Invalid number of channels: 3  (must be 1 or 2)");
    layout_.channels = 0;
    expectInvalidWav(makeConstantWav(10, 0, layout_),
                     "Invalid number of channels: 0  (must be 1 or 2)");
    layout_ = {};
    layout_.byte_rate = 1234;
    expectInvalidWav(makeConstantWav(10, 0, layout_), "Invalid bytes/sec value: 1234 (04D2h)");
    layout_ = {};
    layout_.has_data = false;
    layout_.trailing_chunk = "LIST";
    layout_.riff_size = 30;
    expectInvalidWav(makeConstantWav(10, 0, layout_), R"(No "data" chunk found)");
}

TEST_F(CSndMainSamplesTest, AFmtChunkTooShortToHoldTheFormatIsInvalid) {
    common::CBinaryWriter file;
    file.writeBytes(std::as_bytes(std::span(std::string_view("RIFF"))));
    file.write(std::uint32_t{20});
    file.writeBytes(std::as_bytes(std::span(std::string_view("WAVEfmt "))));
    file.write(std::uint32_t{8});
    file.write(std::uint64_t{0});
    expectInvalidWav(toText(file.getData()), R"(File contains invalid "fmt" chunk)");
}

TEST_F(CSndMainSamplesTest, AFileThatEndsTooSoonIsRefusedWithoutAReport) {
    const std::string wav = makeConstantWav(10, 0);
    expectSilentlyRefused(wav.substr(0, 6));
    expectSilentlyRefused(wav.substr(0, 10));
    expectSilentlyRefused(wav.substr(0, 16));
    expectSilentlyRefused(wav.substr(0, 26));
    expectSilentlyRefused(wav.substr(0, 38));
}

TEST_F(CSndMainSamplesTest, AnUnknownKindOfSampleIsFatal) {
    givenSound("theme.ogg", "OggS");
    EXPECT_THAT([this] { (void)sound_.getSampleInfo("theme.ogg"); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Unknown sample file format extension: theme.ogg")));
    EXPECT_THAT([this] { (void)sound_.startSfx("theme.ogg"); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Unknown sample file format extension: theme.ogg")));
}

TEST_F(CSndMainSamplesTest, AMissingOrEmptyFileHasNoInfo) {
    EXPECT_EQ(sound_.getSampleInfo("gone.wav"), std::nullopt);
    givenSound("empty.wav", "");
    EXPECT_EQ(sound_.getSampleInfo("empty.wav"), std::nullopt);
    EXPECT_EQ(sound_.startSfx("empty.wav"), 0U);
}

TEST_F(CSndMainSamplesTest, AnMp3sLengthComesFromItsSfxFile) {
    givenSound("theme.mp3", makeConstantWav(300, 0));
    givenSound("theme.sfx", "length = 44100\n");
    const CSampleInfo info = expectInfo(sound_.getSampleInfo("theme.mp3"));
    EXPECT_EQ(info.bit_depth, 16);
    EXPECT_EQ(info.sample_rate, 22050);
    EXPECT_EQ(info.sample_count, 44100);
}

TEST_F(CSndMainSamplesTest, AnMp3WithoutALengthIsFatal) {
    givenSound("theme.mp3", makeConstantWav(300, 0));
    EXPECT_THAT([this] { (void)sound_.getSampleInfo("theme.mp3"); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("getSampleInfo - can't determine length for theme.mp3")));
}

TEST_F(CSndMainSamplesTest, AnMp3ThatDoesNotDecodeHasNoInfo) {
    givenSound("noise.mp3", "not an mp3");
    EXPECT_EQ(sound_.getSampleInfo("noise.mp3"), std::nullopt);
}

TEST_F(CSndMainSamplesTest, ALoadedSamplesInfoIsTheOneHeld) {
    givenSound("tone.wav", makeConstantWav(100, 0));
    ASSERT_NE(sound_.startSfx("tone.wav"), 0U);
    givenSound("tone.wav", "replaced");
    EXPECT_EQ(expectInfo(sound_.getSampleInfo("TONE.WAV")).sample_count, 100);
}

TEST_F(CSndMainSamplesTest, AShortFileIsReportedWhenItsDataRunsOut) {
    layout_.missing_data = 50;
    givenSound("short.wav", makeConstantWav(100, 0, layout_));
    expectReport("Error reading file data for short.wav");
    EXPECT_EQ(sound_.startSfx("short.wav"), 0U);
}

TEST_F(CSndMainSamplesTest, PlayingTheSameSampleTwiceSharesIt) {
    givenSound("tone.wav", makeConstantWav(1000, 0));
    ASSERT_NE(sound_.startSfx("tone.wav"), 0U);
    ASSERT_NE(sound_.startSfx("Tone.wav"), 0U);
    const SSoundMemoryStats stats = sound_.getSoundMemoryStats();
    EXPECT_EQ(stats.referenced_count, 1);
    EXPECT_EQ(stats.total_bytes_referenced, 2000U);
    EXPECT_EQ(stats.free_slots, 63);
    EXPECT_EQ(stats.available_memory, 0x400000U - 2000U);
}

TEST_F(CSndMainSamplesTest, AStoppedSampleIsKeptUntilTheBudgetNeedsItsRoom) {
    givenSound("a.wav", makeConstantWav(kLargeFrames, 0));
    givenSound("b.wav", makeConstantWav(kLargeFrames, 0));
    givenSound("c.wav", makeConstantWav(kLargeFrames, 0));
    sound_.killSfx(sound_.startSfx("a.wav"));
    sound_.killSfx(sound_.startSfx("b.wav"));
    EXPECT_EQ(sound_.getSoundMemoryStats().unreferenced_count, 2);
    ASSERT_NE(sound_.startSfx("c.wav"), 0U);
    const SSoundMemoryStats stats = sound_.getSoundMemoryStats();
    EXPECT_EQ(stats.unreferenced_count, 1);
    EXPECT_EQ(stats.referenced_count, 1);
    EXPECT_EQ(stats.total_bytes_unreferenced, 2 * kLargeFrames);
}

// The original loaded it anyway, and gave the room back as soon as one was stopped.
TEST_F(CSndMainSamplesTest, PlayingSoundsCanRunOverTheBudgetUntilOneStops) {
    givenSound("a.wav", makeConstantWav(kLargeFrames, 0));
    givenSound("b.wav", makeConstantWav(kLargeFrames, 0));
    givenSound("c.wav", makeConstantWav(kLargeFrames, 0));
    const std::uint32_t a = sound_.startSfx("a.wav");
    ASSERT_NE(sound_.startSfx("b.wav"), 0U);
    ASSERT_NE(sound_.startSfx("c.wav"), 0U);
    EXPECT_EQ(sound_.getSoundMemoryStats().referenced_count, 3);
    EXPECT_EQ(sound_.getSoundMemoryStats().available_memory, 0U);
    sound_.killSfx(a);
    EXPECT_EQ(sound_.getSoundMemoryStats().unreferenced_count, 0);
    EXPECT_EQ(sound_.getSoundMemoryStats().referenced_count, 2);
}

TEST_F(CSndMainSamplesTest, AFileOverTwoMegabytesIsStreamedAndFreedWhenItStops) {
    givenSound("ambient.wav", makeConstantWav(1100000, 16384));
    const std::uint32_t handle = sound_.startSfx("ambient.wav");
    ASSERT_NE(handle, 0U);
    EXPECT_THAT(mix(3)[2], FloatNear(0.5F, kTolerance));
    EXPECT_EQ(sound_.getSoundMemoryStats().referenced_count, 0);
    EXPECT_EQ(expectInfo(sound_.getSfxSampleInfo(handle)).sample_count, 1100000);
    sound_.killSfx(handle);
    EXPECT_EQ(expectInfo(sound_.getSampleInfo("ambient.wav")).sample_count, 1100000);
}

TEST_F(CSndMainSamplesTest, AnMp3IsStreamedAtTheLengthItsSfxFileGives) {
    givenSound("theme.mp3", makeConstantWav(1000, 16384));
    givenSound("theme.sfx", "length = 1000\n");
    const std::uint32_t handle = sound_.startSfx("theme.mp3");
    ASSERT_NE(handle, 0U);
    EXPECT_EQ(expectInfo(sound_.getSfxSampleInfo(handle)).sample_count, 1000);
    EXPECT_THAT(mix(3)[2], FloatNear(0.5F, kTolerance));
}

TEST_F(CSndMainSamplesTest, AStreamThatCantBeHadIsNotPlayed) {
    EXPECT_EQ(sound_.startSfx("gone.mp3"), 0U);
    givenSound("noise.mp3", "not an mp3");
    EXPECT_EQ(sound_.startSfx("noise.mp3"), 0U);
    givenSound("huge.wav", std::string(0x200001, 'x'));
    EXPECT_EQ(sound_.startSfx("huge.wav"), 0U);
}

TEST_F(CSndMainSamplesTest, FreeingAllStopsEverySoundAndEmptiesTheCache) {
    givenSound("tone.wav", makeConstantWav(1000, 0));
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    sound_.freeAllSamples();
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    EXPECT_EQ(sound_.getSoundMemoryStats().free_slots, 64);
}

} // namespace
} // namespace nocturne::sound
