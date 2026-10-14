#include "sound/sndmain/sfxstream.h"
#include "tests/mocks/sound/wavfile.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSfxStream, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSfxStream>);
    static_assert(!std::is_move_constructible_v<CSfxStream>);
}

TEST(CSfxStream, DecodesAWaveFileAtItsOwnFormat) {
    SWavLayout layout;
    layout.channels = 2;
    layout.sample_rate = 11025;
    CSfxStream stream(makeConstantWav(100, 1000, layout));
    ASSERT_TRUE(stream.isOpen());
    EXPECT_EQ(stream.getChannelCount(), 2);
    EXPECT_EQ(stream.getSampleRate(), 11025);
    ma_uint64 length = 0;
    ma_decoder_get_length_in_pcm_frames(&stream.getDecoder(), &length);
    EXPECT_EQ(length, 100U);
}

TEST(CSfxStream, BytesInNoKnownFormatDoNotOpen) {
    const CSfxStream stream("not audio at all");
    EXPECT_FALSE(stream.isOpen());
}

} // namespace
} // namespace nocturne::sound
