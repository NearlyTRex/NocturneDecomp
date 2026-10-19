#include "common/error/fatalerror.h"
#include "common/math/vector2i.h"
#include "common/text/textscanner.h"
#include "core/rect.h"
#include "core/setutil/3dslight.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::Each;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A light as a file of the version holds it, its visibility section given.
std::string light(int version, const std::string &visibility) {
    const std::string label = version >= 11 ? "label\n" : "";
    std::string text =
        label + "moon light\n" + label + "1,2,3\n" + label + "0.1,0.2,0.3\n" + label + "30\n";
    if (version >= 21) {
        text += "aspect\n1.5\n";
    }
    if (version >= 22) {
        text += "intensity\n0.25\n";
    }
    text +=
        label + "2\n" + label + "0.5,0.6,0.7,10,4\n" + label + "512,128\n" + label + "2\n" + label;
    if (version >= 9) {
        text += "0\n";
    }
    text += version >= 16 ? "1.5,3,glow.raw\n2.5,4,dim.raw\n" : "1.5,glow.raw\n2.5,dim.raw\n";
    text += label + "1\n";
    if (version >= 19) {
        text += "move\n1,2,3,4,5\n";
    }
    return text + label + "0.5,2\nvisible\n" + visibility + "next";
}

// The visibility of a version 11 or later file: cameras 0 and 249.
const std::string kListed = "2\n0,1,319,1,239\n249,10,20,30,40\n";

// One line for each camera, as files before 11 held them.
std::string everyCamera(int count, const std::string &line) {
    std::string lines;
    for (int i = 0; i < count; ++i) {
        lines += line;
    }
    return lines;
}

C3DSLight load(const std::string &text, int version, common::CTextScanner *rest = nullptr) {
    common::CTextScanner scanner(text);
    C3DSLight loaded;
    loaded.load(scanner, version);
    if (rest != nullptr) {
        *rest = scanner;
    }
    return loaded;
}

TEST(C3DSLightLoad, ReadsTheLightAfterEachLabel) {
    common::CTextScanner rest("");
    const C3DSLight loaded = load(light(26, kListed), 26, &rest);
    EXPECT_EQ(loaded.getName(), "moon light");
    EXPECT_FLOAT_EQ(loaded.getPos().z, 3.0F);
    EXPECT_FLOAT_EQ(loaded.getOrient().y, 0.3F);
    EXPECT_FLOAT_EQ(loaded.getOrient().z, 0.2F);
    EXPECT_FLOAT_EQ(loaded.getFov(), 30.0F);
    EXPECT_FLOAT_EQ(loaded.getAspect(), 1.5F);
    EXPECT_FLOAT_EQ(loaded.getIntensity(), 0.25F);
    EXPECT_EQ(loaded.getLightType(), 2);
    EXPECT_FLOAT_EQ(loaded.getColor().b, 0.7F);
    EXPECT_FLOAT_EQ(loaded.getAttenStart(), 10.0F);
    EXPECT_FLOAT_EQ(loaded.getAttenEnd(), 4.0F);
    EXPECT_FLOAT_EQ(loaded.getAttenEndSquared(), 16.0F);
    EXPECT_FLOAT_EQ(loaded.getAttenEndReciprocal(), 0.25F);
    EXPECT_EQ(loaded.getSize(), (common::CVector2i{.x = 512, .y = 128}));
    EXPECT_EQ(loaded.getCurrentFilterFrame(), 1);
    EXPECT_FLOAT_EQ(loaded.getOnTime(), 0.5F);
    EXPECT_FLOAT_EQ(loaded.getCycleTime(), 2.0F);
    EXPECT_EQ(rest.readLine(), "next");
}

TEST(C3DSLightLoad, ReadsTheFilters) {
    const C3DSLight loaded = load(light(26, kListed), 26);
    EXPECT_EQ(loaded.getFilterCount(), 2);
    EXPECT_EQ(loaded.getBlendFilter(), 0);
    EXPECT_THAT(loaded.getFilterNames(), ElementsAre("glow.raw", "dim.raw"));
    EXPECT_THAT(loaded.getFilterDurations(), ElementsAre(1.5F, 2.5F));
    EXPECT_THAT(loaded.getFilterIndices(), ElementsAre(3, 4));
    EXPECT_EQ(loaded.getMoveFilter(), 1);
    EXPECT_EQ(loaded.getFilterVel(), (common::CVector2i{.x = 2, .y = 3}));
    EXPECT_EQ(loaded.getFilterPos(), (common::CVector2i{.x = 4, .y = 5}));
}

TEST(C3DSLightLoad, ListsOnlyTheCamerasThatSeeTheLight) {
    const C3DSLight loaded = load(light(26, kListed), 26);
    const std::span<const std::uint8_t> flags = loaded.getVisibleFlags();
    EXPECT_EQ(flags[0], 1);
    EXPECT_EQ(flags[1], 0);
    EXPECT_EQ(flags[249], 1);
    EXPECT_EQ(loaded.getCameraLightBounds()[0],
              (CRect{.x_min = 1, .x_max = 319, .y_min = 1, .y_max = 239}));
    EXPECT_EQ(loaded.getCameraLightBounds()[249],
              (CRect{.x_min = 10, .x_max = 20, .y_min = 30, .y_max = 40}));
}

TEST(C3DSLightLoad, AListClearsWhatTheLightSawBefore) {
    common::CTextScanner scanner(light(26, kListed) + "\n" + light(26, "1\n5,1,2,3,4\n"));
    C3DSLight reloaded;
    reloaded.load(scanner, 26);
    scanner.skipLine();
    reloaded.load(scanner, 26);
    EXPECT_EQ(reloaded.getVisibleFlags()[0], 0);
    EXPECT_EQ(reloaded.getVisibleFlags()[5], 1);
    EXPECT_EQ(reloaded.getCameraLightBounds()[249], CRect{});
}

TEST(C3DSLightLoad, ACameraPastTheListIsFatal) {
    EXPECT_THAT(
        [] { static_cast<void>(load(light(26, "1\n250,1,2,3,4\n"), 26)); },
        ThrowsMessage<common::CFatalError>(StrEq("Invalid camera number in visiblilty list!")));
}

TEST(C3DSLightLoad, ANegativeCameraIsFatal) {
    EXPECT_THAT(
        [] { static_cast<void>(load(light(26, "1\n-1,1,2,3,4\n"), 26)); },
        ThrowsMessage<common::CFatalError>(StrEq("Invalid camera number in visiblilty list!")));
}

TEST(C3DSLightLoad, BeforeTwentyTwoTheIntensityIsOne) {
    const C3DSLight loaded = load(light(21, kListed), 21);
    EXPECT_FLOAT_EQ(loaded.getAspect(), 1.5F);
    EXPECT_FLOAT_EQ(loaded.getIntensity(), 1.0F);
    EXPECT_EQ(loaded.getLightType(), 2);
}

TEST(C3DSLightLoad, BeforeTwentyOneTheAspectIsOne) {
    const C3DSLight loaded = load(light(20, kListed), 20);
    EXPECT_FLOAT_EQ(loaded.getAspect(), 1.0F);
    EXPECT_EQ(loaded.getLightType(), 2);
}

TEST(C3DSLightLoad, BeforeNineteenNoFilterMoves) {
    common::CTextScanner scanner(light(26, kListed) + "\n" + light(18, kListed));
    C3DSLight reloaded;
    reloaded.load(scanner, 26);
    scanner.skipLine();
    reloaded.load(scanner, 18);
    EXPECT_EQ(reloaded.getMoveFilter(), 0);
    EXPECT_EQ(reloaded.getFilterVel(), common::CVector2i{});
    EXPECT_EQ(reloaded.getFilterPos(), common::CVector2i{});
    EXPECT_FLOAT_EQ(reloaded.getCycleTime(), 2.0F);
}

TEST(C3DSLightLoad, BeforeSixteenFiltersHaveNoIndex) {
    const C3DSLight loaded = load(light(15, kListed), 15);
    EXPECT_THAT(loaded.getFilterNames(), ElementsAre("glow.raw", "dim.raw"));
    EXPECT_THAT(loaded.getFilterIndices(), ElementsAre(0, 0));
}

TEST(C3DSLightLoad, BeforeNineFiltersBlend) {
    const C3DSLight loaded = load(light(8, everyCamera(200, "1,1,2,3,4\n")), 8);
    EXPECT_EQ(loaded.getBlendFilter(), 1);
    EXPECT_THAT(loaded.getFilterDurations(), ElementsAre(1.5F, 2.5F));
}

TEST(C3DSLightLoad, BeforeElevenEachOfTwoHundredCamerasHasALine) {
    common::CTextScanner rest("");
    const C3DSLight loaded = load(light(7, everyCamera(200, "257,1,2,3,4\n")), 7, &rest);
    const std::span<const std::uint8_t> flags = loaded.getVisibleFlags();
    EXPECT_THAT(flags.first(200), Each(1));
    EXPECT_EQ(flags[200], 0);
    EXPECT_EQ(loaded.getCameraLightBounds()[199],
              (CRect{.x_min = 1, .x_max = 2, .y_min = 3, .y_max = 4}));
    EXPECT_EQ(rest.readLine(), "next");
}

TEST(C3DSLightLoad, BeforeSevenOnlyAHundredCamerasHaveLines) {
    common::CTextScanner rest("");
    const C3DSLight loaded = load(light(6, everyCamera(100, "1,1,2,3,4\n")), 6, &rest);
    EXPECT_EQ(loaded.getVisibleFlags()[99], 1);
    EXPECT_EQ(loaded.getVisibleFlags()[100], 0);
    EXPECT_EQ(rest.readLine(), "next");
}

TEST(C3DSLightLoad, BeforeTwoACameraSeesTheLightInTheWholeView) {
    const C3DSLight loaded = load(light(1, everyCamera(100, "1\n")), 1);
    EXPECT_EQ(loaded.getVisibleFlags()[0], 1);
    EXPECT_EQ(loaded.getCameraLightBounds()[99],
              (CRect{.x_min = 1, .x_max = 318, .y_min = 1, .y_max = 238}));
}

TEST(C3DSLightLoad, ANegativeFilterCountReadsNoFilters) {
    const std::string count = "label\n2\nlabel\n0\n";
    const std::string filters = "1.5,3,glow.raw\n2.5,4,dim.raw\n";
    std::string text = light(26, kListed);
    text.replace(text.find(count), count.size(), "label\n-1\nlabel\n0\n");
    text.replace(text.find(filters), filters.size(), "");
    common::CTextScanner rest("");
    const C3DSLight loaded = load(text, 26, &rest);
    EXPECT_EQ(loaded.getFilterCount(), -1);
    EXPECT_THAT(loaded.getFilterNames(), IsEmpty());
    EXPECT_EQ(rest.readLine(), "next");
}

TEST(C3DSLight, StartsWithTheDefaultLens) {
    const C3DSLight fresh;
    EXPECT_FLOAT_EQ(fresh.getFov(), 28.0F);
    EXPECT_FLOAT_EQ(fresh.getAspect(), 1.0F);
    EXPECT_FLOAT_EQ(fresh.getIntensity(), 1.0F);
    EXPECT_EQ(fresh.getSize(), (common::CVector2i{.x = 256, .y = 256}));
    EXPECT_FLOAT_EQ(fresh.getOnTime(), 1.0F);
    EXPECT_EQ(fresh.getFilterCount(), 0);
}

} // namespace
} // namespace nocturne::core
