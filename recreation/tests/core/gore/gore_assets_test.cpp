#include "common/error/fatalerror.h"
#include "core/gore/gore.h"
#include "platform/mrgltexturebasic.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::Return;
using ::testing::StartsWith;
using ::testing::ThrowsMessage;

// The gore over the fixture's renderer, each of its textures on disk, 32 by 32, but for any named
// missing.
class CGoreAssetsTest : public engine::CDemonRendererFixture {
protected:
    CGoreAssetsTest() {
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette32_)));
    }

    void givenArt(std::string_view missing = "") {
        const auto give = [this, missing](const platform::SMRGLTextureBasic &texture) {
            if (texture.texture_name != missing) {
                givenFile("art\\" + texture.texture_name,
                          std::string(std::size_t{32} * 32, '\x10'));
            }
        };
        give(gore_.getBloodParticleTexture());
        for (const std::span<const platform::SMRGLTextureBasic> textures :
             {gore_.getSplatTextures(), gore_.getSplatFrameTextures(),
              gore_.getPoolFrameTextures()}) {
            for (const platform::SMRGLTextureBasic &texture : textures) {
                give(texture);
            }
        }
        give(gore_.getFootstepTexture());
    }

    std::array<std::uint16_t, 256> palette16_{};
    std::array<std::uint32_t, 256> palette32_{};
    CGore gore_{demon_renderer_};
};

TEST_F(CGoreAssetsTest, EachTextureIsNamedForItsShapeAndFrame) {
    EXPECT_EQ(gore_.getBloodParticleTexture().texture_name, "BGLOB.RAW");
    EXPECT_EQ(gore_.getSplatTextures()[3].texture_name, "BHSP4.RAW");
    EXPECT_EQ(gore_.getSplatFrameTextures().size(), 64U);
    EXPECT_EQ(gore_.getSplatFrameTextures()[0].texture_name, "BVSP1-01.RAW");
    EXPECT_EQ(gore_.getSplatFrameTextures()[17].texture_name, "BVSP2-02.RAW");
    EXPECT_EQ(gore_.getPoolFrameTextures().size(), 116U);
    EXPECT_EQ(gore_.getPoolFrameTextures()[28].texture_name, "BPOL1-29.RAW");
    EXPECT_EQ(gore_.getPoolFrameTextures()[115].texture_name, "BPOL4-29.RAW");
    EXPECT_EQ(gore_.getFootstepTexture().texture_name, "FOOTSTEP.RAW");
}

// The blood particle first, then the splats, their frames, the pools' frames and the footstep.
TEST_F(CGoreAssetsTest, TheTexturesAreLoadedInTurn) {
    givenArt();
    gore_.loadAssets();
    EXPECT_EQ(gore_.getBloodParticleTexture().cache_index, 0);
    EXPECT_EQ(gore_.getSplatTextures()[0].cache_index, 1);
    EXPECT_EQ(gore_.getSplatFrameTextures()[0].cache_index, 5);
    EXPECT_EQ(gore_.getPoolFrameTextures()[0].cache_index, 69);
}

TEST_F(CGoreAssetsTest, AMissingFootstepIsFatal) {
    givenArt("FOOTSTEP.RAW");
    EXPECT_THAT([this] { gore_.loadAssets(); },
                ThrowsMessage<common::CFatalError>(
                    StartsWith("CTextureCache::load - Bad texture length : FOOTSTEP.RAW")));
}

} // namespace
} // namespace nocturne::core
