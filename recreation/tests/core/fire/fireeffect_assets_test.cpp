#include "common/error/fatalerror.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fire/fireeffect.h"
#include "platform/mrgltexturebasic.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::InSequence;
using ::testing::Return;
using ::testing::ReturnRef;
using ::testing::StartsWith;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The fire effects over the fixture's renderer, their textures on disk, 32 by 32, but for any
// named missing, and every model found as the one model.
class CFireEffectAssetsTest : public engine::CDemonRendererFixture {
protected:
    CFireEffectAssetsTest() {
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette32_)));
        ON_CALL(models_, loadModel(_)).WillByDefault(ReturnRef(model_));
    }

    void givenArt(std::string_view missing = "") {
        std::vector<std::string> names = {"BHOLE.RAW", "SPARK.RAW", "BLUSPARK.RAW"};
        for (int frame = 190; frame < 210; ++frame) {
            names.push_back(std::format("fr46{}.raw", frame));
        }
        for (int bolt = 1; bolt <= 6; ++bolt) {
            names.push_back(std::format("BOLT{}.RAW", bolt));
        }
        for (const std::string &name : names) {
            if (name != missing) {
                givenFile("art\\" + name, std::string(std::size_t{32} * 32, '\x10'));
            }
        }
    }

    std::array<std::uint16_t, 256> palette16_{};
    std::array<std::uint32_t, 256> palette32_{};
    ::testing::NiceMock<MockKeyFramedModels> models_;
    CKeyFramedModel model_{dosio_};
    CFireEffect fire_{{.renderer = demon_renderer_, .keyframed_models = models_}};
};

TEST_F(CFireEffectAssetsTest, TheBoltsAreNamedFromTheStart) {
    EXPECT_EQ(fire_.getLightningBoltTextures()[0].texture_name, "BOLT1.RAW");
    EXPECT_EQ(fire_.getLightningBoltTextures()[5].texture_name, "BOLT6.RAW");
    EXPECT_EQ(fire_.getGunFlameTextures()[0].texture_name, "");
    EXPECT_EQ(fire_.getBlackHoleTexture().texture_name, "BHOLE.RAW");
}

TEST_F(CFireEffectAssetsTest, TheModelsAreFoundInTurn) {
    givenArt();
    {
        InSequence order;
        for (const char *name : {"stake.kfm", "fball.kfm", "smfball.kfm", "grnball.kfm",
                                 "dynamitestick.kfm", "gunflash.kfm", "debris01.kfm",
                                 "debris02.kfm", "debris03.kfm", "debris04.kfm", "debris05.kfm"}) {
            EXPECT_CALL(models_, loadModel(StrEq(name))).WillOnce(ReturnRef(model_));
        }
    }
    fire_.loadAssets();
    EXPECT_EQ(fire_.getStakeModel().getModelName(), "stake.kfm");
    EXPECT_EQ(fire_.getFireballModel().getModelName(), "fball.kfm");
    EXPECT_EQ(fire_.getSmallFireballModel().getModelName(), "smfball.kfm");
    EXPECT_EQ(fire_.getGreenFireballModel().getModelName(), "grnball.kfm");
    EXPECT_EQ(fire_.getGunFlashModel().getModelName(), "gunflash.kfm");
    EXPECT_EQ(fire_.getDebrisModels()[4].getModelName(), "debris05.kfm");
}

// The black hole, spark and blue spark come first, the flames' frames between the stake's and
// the gun flash's models, and the bolts after.
TEST_F(CFireEffectAssetsTest, TheTexturesAreLoaded) {
    givenArt();
    fire_.loadAssets();
    EXPECT_EQ(fire_.getBlackHoleTexture().cache_index, 0);
    EXPECT_EQ(fire_.getSparkTexture().cache_index, 1);
    EXPECT_EQ(fire_.getBlueSparkTexture().cache_index, 2);
    const std::span<const platform::SMRGLTextureBasic> flames = fire_.getGunFlameTextures();
    EXPECT_EQ(flames[0].texture_name, "fr46190.raw");
    EXPECT_EQ(flames[0].cache_index, 3);
    EXPECT_EQ(flames[19].texture_name, "fr46209.raw");
    EXPECT_EQ(fire_.getLightningBoltTextures()[5].cache_index, 28);
}

TEST_F(CFireEffectAssetsTest, AMissingFlameFrameIsFatal) {
    givenArt("fr46200.raw");
    EXPECT_THAT([this] { fire_.loadAssets(); },
                ThrowsMessage<common::CFatalError>(
                    StartsWith("CTextureCache::load - Bad texture length : fr46200.raw")));
}

} // namespace
} // namespace nocturne::core
