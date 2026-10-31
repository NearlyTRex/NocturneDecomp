#include "common/math/matrix3x3f.h"
#include "common/math/vector3i.h"
#include "common/random/watcomrandom.h"
#include "core/color3i.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/dcamera/fog.h"
#include "core/dcamera/foggrid.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstdint>
#include <numeric>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

TEST(CDemonCamera, DerivesFromCCameraView) {
    static_assert(std::is_base_of_v<CCameraView, CDemonCamera>);
}

TEST(CDemonCamera, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDemonCamera>);
}

TEST(CDemonCamera, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonCamera>);
}

TEST(CDemonCamera, Constructors) {
    static_assert(std::is_constructible_v<CDemonCamera, const SDemonCameraOwners &>);
    static_assert(!std::is_default_constructible_v<CDemonCamera>);
}

TEST(CDemonCamera, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::setupPerspectiveAndFog),
                       void (CDemonCamera::*)(common::CVector3f *, platform::SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::getFogValueAtPosition),
                       int (CDemonCamera::*)(common::CVector3i *, platform::SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::saveAlphaTransform), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::initLookupTable), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::init), void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::free), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::setSceneCamera), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::resetSceneCamera), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::beginScene), void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::pushRect),
                                 void (CDemonCamera::*)(int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::restoreZBufferRectArray), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::endScene), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::beginBackgroundScene), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::endBackgroundScene), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::updateTransformMatrices), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::screenToWorldCoord),
                                 int (CDemonCamera::*)(int, int, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::screenToWorldTransform),
                                 common::CVector3i *(CDemonCamera::*)(common::CVector3i *,
                                                                      common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::worldToScreenWithFrustumCull),
                                 common::CVector3i *(CDemonCamera::*)(common::CVector3i *,
                                                                      common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::precomputeLight),
                                 void (CDemonCamera::*)(CDemonLight *, CRect *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::precomputeNormals), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::calculateAttenuatedDirectionalLight),
                                 int (CDemonCamera::*)(common::CVector3i *, CDemonLight *,
                                                       common::CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::loadImage), void (CDemonCamera::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::renderLightCoronas),
                                 void (CDemonCamera::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::addLightmapToCorona),
                                 void (CDemonCamera::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::isCoronaSufficientlyVisible),
                                 int (CDemonCamera::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::computeLightExtentBounds),
                                 CRect *(CDemonCamera::*)(CDemonLight *, CRect *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::processCorona), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::lockAndRenderToBuffer), int (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::renderGlobeCoronas),
                                 void (CDemonCamera::*)(CDemonGlobe *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::isBoundingBoxVisible),
                                 int (CDemonCamera::*)(common::CVector3f *, common::CVector3f *,
                                                       common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::isSphereVisible),
                                 int (CDemonCamera::*)(common::CVector3f *, float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::setEffectIntensity), void (CDemonCamera::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::initCameraFog),
                                 void (CDemonCamera::*)(const SFog &)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::generateGammaPalette), void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::clearFramebufferAndWorkBuffers),
                                 void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::initCameraShake),
                                 void (CDemonCamera::*)(float, float, float, float)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::computeVisibleFrustumBounds),
                                 common::CVector3f *(CDemonCamera::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::saveZBufferScanlines), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::restoreZBufferScanlines), void (CDemonCamera::*)()>);
}

using ::testing::Return;

// The level each palette entry repeats in all four bytes.
std::vector<int> paletteLevels(const SCameraTables &tables) {
    std::vector<int> levels;
    for (const std::uint32_t entry : tables.lightmap_palette) {
        EXPECT_EQ(entry, (entry & 0xffU) * 0x01010101U);
        levels.push_back(static_cast<int>(entry & 0xffU));
    }
    return levels;
}

class CDemonCameraTest : public engine::CDemonRendererFixture {
protected:
    SCameraTables tables_;
    common::CWatcomRandom crt_;
    CDemonCamera camera_{
        {.tables = tables_, .screen = screen_, .special = special_, .crt_random = crt_}};
};

TEST_F(CDemonCameraTest, ACameraStartsWithNoBuffersAndItsLens) {
    EXPECT_EQ(camera_.getFocalLength(), 28.0F);
    EXPECT_EQ(camera_.getFixedPointScale(), 256.0F);
    EXPECT_EQ(camera_.getMaxDistance(), 999.9F);
    EXPECT_EQ(camera_.getCameraName(), "");
    EXPECT_TRUE(camera_.getFramebuffer().empty());
    EXPECT_EQ(camera_.getCoronaBlendFactor(), 0);
    EXPECT_EQ(tables_.fog_color_index, (CColor3i{.r = 0x40, .g = 0x40, .b = 0x40}));
}

// Four thirds of the height wide, no taller than 480, the display halved until 320 wide.
TEST_F(CDemonCameraTest, ATallScreenGetsAFrameOf480LinesDrawnAtHalfSize) {
    camera_.init(600);
    EXPECT_EQ(tables_.screen_width, 800);
    EXPECT_EQ(tables_.screen_height, 600);
    EXPECT_EQ(camera_.getFramebufferWidth(), 640);
    EXPECT_EQ(camera_.getFramebufferHeight(), 480);
    EXPECT_EQ(camera_.getDisplayWidth(), 320);
    EXPECT_EQ(camera_.getDisplayHeight(), 240);
    EXPECT_EQ(camera_.getScaleFactor(), 2);
    EXPECT_EQ(tables_.downscale_iterations, 1);
    EXPECT_EQ(camera_.getFramebuffer().size(), 640U * 480U);
    EXPECT_EQ(camera_.getZBuffer().size(), 640U * 480U);
    EXPECT_TRUE(std::ranges::all_of(camera_.getFramebuffer(), [](auto p) { return p == 0; }));
}

TEST_F(CDemonCameraTest, AScreen240LinesTallIsDrawnAtFullSize) {
    camera_.init(600);
    camera_.init(240);
    EXPECT_EQ(camera_.getFramebufferWidth(), 320);
    EXPECT_EQ(camera_.getDisplayWidth(), 320);
    EXPECT_EQ(camera_.getScaleFactor(), 1);
    EXPECT_EQ(tables_.downscale_iterations, 0);
    EXPECT_EQ(camera_.getFramebuffer().size(), 320U * 240U);
    camera_.free();
    EXPECT_TRUE(camera_.getFramebuffer().empty());
    EXPECT_TRUE(camera_.getZBuffer().empty());
}

// A gamma of one is the identity, where the original's chopped pow moved some levels by one.
TEST_F(CDemonCameraTest, TheLookupTableSetsAGammaOfOneBuffersAFogGridAndProducts) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(480));
    camera_.initLookupTable();
    std::vector<int> identity(256);
    std::ranges::iota(identity, 0);
    EXPECT_EQ(paletteLevels(tables_), identity);
    EXPECT_EQ(camera_.getFramebufferHeight(), 480);
    EXPECT_EQ(tables_.lookup_table[0], 0);
    EXPECT_EQ(tables_.lookup_table[(63 * 64) + 63], 62);
    EXPECT_EQ(tables_.lookup_table[(8 * 64) + 8], 1);
    EXPECT_EQ(tables_.lookup_table[(7 * 64) + 9], 0);
}

// The levels nocedit's own code gives at a gamma of a half.
TEST_F(CDemonCameraTest, AGammaOfAHalfBrightensEachLevelAsTheOriginalDoes) {
    camera_.generateGammaPalette(0x8000);
    const std::vector<int> expected = {
        0,   15,  22,  27,  31,  35,  39,  42,  45,  47,  50,  52,  55,  57,  59,  61,  63,  65,
        67,  69,  71,  73,  74,  76,  78,  79,  81,  82,  84,  85,  87,  88,  90,  91,  93,  94,
        95,  97,  98,  99,  100, 102, 103, 104, 105, 107, 108, 109, 110, 111, 112, 114, 115, 116,
        117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
        135, 136, 137, 138, 139, 140, 141, 141, 142, 143, 144, 145, 146, 147, 148, 148, 149, 150,
        151, 152, 153, 153, 154, 155, 156, 157, 158, 158, 159, 160, 161, 162, 162, 163, 164, 165,
        165, 166, 167, 168, 168, 169, 170, 171, 171, 172, 173, 174, 174, 175, 176, 177, 177, 178,
        179, 179, 180, 181, 182, 182, 183, 184, 184, 185, 186, 186, 187, 188, 188, 189, 190, 190,
        191, 192, 192, 193, 194, 194, 195, 196, 196, 197, 198, 198, 199, 200, 200, 201, 201, 202,
        203, 203, 204, 205, 205, 206, 206, 207, 208, 208, 209, 210, 210, 211, 211, 212, 213, 213,
        214, 214, 215, 216, 216, 217, 217, 218, 218, 219, 220, 220, 221, 221, 222, 222, 223, 224,
        224, 225, 225, 226, 226, 227, 228, 228, 229, 229, 230, 230, 231, 231, 232, 233, 233, 234,
        234, 235, 235, 236, 236, 237, 237, 238, 238, 239, 240, 240, 241, 241, 242, 242, 243, 243,
        244, 244, 245, 245, 246, 246, 247, 247, 248, 248, 249, 249, 250, 250, 251, 251, 252, 252,
        253, 253, 254, 255};
    EXPECT_EQ(paletteLevels(tables_), expected);
}

// The fog's palette levels go to the running renderer, after each new palette too.
TEST_F(CDemonCameraTest, TheFogColourIsTheGammaCorrectedLevelsOfItsIndices) {
    startRenderer();
    camera_.generateGammaPalette(0xc000);
    SFog fog;
    fog.color_index = {.r = 1, .g = 2, .b = 255};
    EXPECT_CALL(renderer_, setFogColor(3, 6, 255));
    camera_.initCameraFog(fog);
    EXPECT_CALL(renderer_, setFogColor(1, 2, 255));
    camera_.generateGammaPalette(0x10000);
    fog.color_index = {.r = -1, .g = 0, .b = 300};
    EXPECT_CALL(renderer_, setFogColor(0, 0, 255));
    camera_.initCameraFog(fog);
}

// The drift is 16.16, the thinning height 24.8 and the density 16.16, each chopped.
TEST_F(CDemonCameraTest, TheFogsMovementIsHeldInFixedPoint) {
    SFog fog;
    fog.scroll = {.x = 1.5F, .y = -0.25F, .z = 0.00001F};
    fog.height_threshold = 2.999F;
    fog.density_multiplier = 0.5F;
    camera_.initCameraFog(fog);
    const SFogGrid &grid = tables_.fog_grid;
    EXPECT_EQ(grid.scroll_vector.x, 0x18000);
    EXPECT_EQ(grid.scroll_vector.y, -0x4000);
    EXPECT_EQ(grid.scroll_vector.z, 0);
    EXPECT_EQ(grid.height_threshold, 767);
    EXPECT_EQ(grid.density_multiplier, 0x8000);
}

TEST_F(CDemonCameraTest, TheEffectIntensityIsChoppedTo65535ths) {
    camera_.setEffectIntensity(1.0F);
    EXPECT_EQ(camera_.getCoronaBlendFactor(), 0xffff);
    camera_.setEffectIntensity(0.3F);
    EXPECT_EQ(camera_.getCoronaBlendFactor(), 19660);
}

// FNV-1a over the densities, plane by plane, row by row.
std::uint64_t hashOf(const SFogGrid &grid) {
    std::uint64_t hash = 1469598103934665603ULL;
    for (const SFogGrid::Plane &plane : grid.planes) {
        for (const SFogGrid::Row &row : plane) {
            for (const std::uint8_t density : row) {
                hash = (hash ^ density) * 1099511628211ULL;
            }
        }
    }
    return hash;
}

// From the CRT stream seeded with 12345, the grid nocedit's own code makes: its hash and some
// densities; the sampling offset starts at the origin.
TEST_F(CDemonCameraTest, TheFogGridIsTheOriginalsSmoothingOfTheCrtStream) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(240));
    tables_.fog_grid.sampling_offset = {.x = 5, .y = 5, .z = 5};
    crt_.srand(12345);
    camera_.initLookupTable();
    const SFogGrid &grid = tables_.fog_grid;
    EXPECT_EQ(hashOf(grid), 5462439094239740714ULL);
    EXPECT_EQ(grid.planes[0][0][0], 132);
    EXPECT_EQ(grid.planes[0][0][1], 128);
    EXPECT_EQ(grid.planes[1][0][0], 80);
    EXPECT_EQ(grid.planes[15][15][15], 141);
    EXPECT_EQ(grid.sampling_offset, (common::CVector3i{}));
}

TEST_F(CDemonCameraTest, ANameAndRangeCanBeGiven) {
    camera_.setCameraName("Flashlight");
    camera_.setMaxDistance(64.0F);
    camera_.setFocalLength(35.0F);
    camera_.setPosition({.x = 1.0F});
    common::CMatrix3x3f turned;
    turned.m[0].x = 2.0F;
    camera_.setRotationMatrix(turned);
    EXPECT_EQ(camera_.getCameraName(), "Flashlight");
    EXPECT_EQ(camera_.getMaxDistance(), 64.0F);
    EXPECT_EQ(camera_.getFocalLength(), 35.0F);
    EXPECT_EQ(camera_.getPosition().x, 1.0F);
    EXPECT_EQ(camera_.getRotationMatrix().m[0].x, 2.0F);
}

TEST_F(CDemonCameraTest, TheOverridesNotPortedYetQuit) {
    const NotPortedCalls calls = {
        {"setupPerspectiveAndFog", [&] { camera_.setupPerspectiveAndFog(nullptr, nullptr); }},
        {"getFogValueAtPosition",
         [&] { static_cast<void>(camera_.getFogValueAtPosition(nullptr, nullptr)); }},
        {"saveAlphaTransform", [&] { camera_.saveAlphaTransform(0); }},
    };
    expectEachQuitsNotPorted("CDemonCamera", calls);
}

} // namespace
} // namespace nocturne::core
