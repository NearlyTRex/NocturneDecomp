#include "common/video/presentation.h"
#include "platform/gl/glquad.h"
#include "platform/gl/glupscaler.h"
#include "platform/gl/glupscaleshaders.h"
#include "platform/log.h"
#include "platform/upscaler.h"
#include "tests/mocks/platform/glrecorder.h"
#include "tests/mocks/platform/mocklog.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string_view>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;
using ::testing::HasSubstr;
using ::testing::IsEmpty;

// The quad's program is 3; a filter's first is 8.
constexpr GLuint kQuadProgram = 3;
constexpr GLuint kFilterProgram = 8;
constexpr GLuint kTexture = 9;
// u_tex was asked for first, by the quad; then u_src and u_sharp.
constexpr GLint kSourceLocation = 1;
constexpr GLint kSharpnessLocation = 2;

constexpr common::SExtent kFrame{.width = 320, .height = 240};
constexpr common::SViewport kDoubled{.x = 0, .y = 0, .width = 640, .height = 480};
constexpr common::SViewport kStretched{.x = 0, .y = 0, .width = 500, .height = 375};
constexpr common::SViewport kSameSize{.x = 0, .y = 0, .width = 320, .height = 240};

std::vector<SGlCall> sampling(GLint filter) {
    return {glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)};
}

class CGlUpscalerTest : public ::testing::Test {
protected:
    CGlUpscalerTest() {
        gl_.clear();
    }

    void draw(const common::SViewport &viewport, EUpscaler upscaler, int sharpness = 50) {
        upscaler_.draw(kTexture, EQuadRows::TopFirst, kFrame, viewport, upscaler, sharpness);
    }

    [[nodiscard]] std::vector<SGlCall> programsUsed() const {
        return gl_.getCalls("UseProgram");
    }

    CGlRecorder gl_;
    CGlQuad quad_{gl_.getApi()};
    ::testing::NiceMock<MockLog> log_;
    CGlUpscaler upscaler_{gl_.getApi(), quad_, log_};
};

TEST_F(CGlUpscalerTest, StandardIsNearestAtAWholeMultiple) {
    draw(kDoubled, EUpscaler::Standard);
    EXPECT_EQ(gl_.getCalls("TexParameteri"), sampling(GL_NEAREST));
    EXPECT_THAT(programsUsed(), ElementsAre(glCall("UseProgram", kQuadProgram)));
}

TEST_F(CGlUpscalerTest, StandardIsBilinearBetween) {
    draw(kStretched, EUpscaler::Standard);
    EXPECT_EQ(gl_.getCalls("TexParameteri"), sampling(GL_LINEAR));
}

TEST_F(CGlUpscalerTest, AFilterEnlargesThroughItsProgramWithTheFramesSizeAndSharpness) {
    draw(kDoubled, EUpscaler::Fsr, 75);
    EXPECT_EQ(gl_.getCalls("TexParameteri"), sampling(GL_LINEAR));
    EXPECT_THAT(gl_.getCalls("Uniform2f"),
                ElementsAre(glCall("Uniform2f", kSourceLocation, 320, 240)));
    EXPECT_THAT(gl_.getCalls("Uniform1f"),
                ElementsAre(glCall("Uniform1f", kSharpnessLocation, 0.75F)));
    EXPECT_EQ(programsUsed().back(), glCall("UseProgram", kFilterProgram));
}

TEST_F(CGlUpscalerTest, XbrReadsItsTexelsUnfiltered) {
    draw(kStretched, EUpscaler::Xbr);
    EXPECT_EQ(gl_.getCalls("TexParameteri"), sampling(GL_NEAREST));
}

TEST_F(CGlUpscalerTest, EachProgramIsBuiltOnce) {
    draw(kDoubled, EUpscaler::Lanczos);
    draw(kDoubled, EUpscaler::Lanczos);
    EXPECT_EQ(gl_.count("CreateProgram"), 1U);
    draw(kDoubled, EUpscaler::Nis);
    EXPECT_EQ(gl_.count("CreateProgram"), 2U);
}

TEST_F(CGlUpscalerTest, AFrameNotEnlargedTakesStandard) {
    draw(kSameSize, EUpscaler::Gsr);
    EXPECT_EQ(gl_.count("CreateProgram"), 0U);
    EXPECT_THAT(programsUsed(), ElementsAre(glCall("UseProgram", kQuadProgram)));
}

TEST_F(CGlUpscalerTest, AFrameEnlargedOneWayIsEnlarged) {
    draw({.x = 0, .y = 0, .width = 320, .height = 480}, EUpscaler::Gsr);
    EXPECT_EQ(programsUsed().back(), glCall("UseProgram", kFilterProgram));
}

TEST_F(CGlUpscalerTest, AFilterThatWontBuildIsLoggedOnceAndStandardDrawsInstead) {
    gl_.link_fails = true;
    EXPECT_CALL(log_, write(ELogSubsystem::Render, HasSubstr("upscaler 1 could not build")));
    draw(kDoubled, EUpscaler::Fsr);
    draw(kDoubled, EUpscaler::Fsr);
    EXPECT_EQ(gl_.count("CreateProgram"), 1U);
    EXPECT_THAT(gl_.getCalls("Uniform1f"), IsEmpty());
    EXPECT_EQ(programsUsed().back(), glCall("UseProgram", kQuadProgram));
}

TEST(GetUpscaleFragmentSource, EveryFilterButStandardHasAProgram) {
    EXPECT_EQ(getUpscaleFragmentSource(EUpscaler::Standard), nullptr);
    for (const EUpscaler upscaler :
         {EUpscaler::Fsr, EUpscaler::Lanczos, EUpscaler::Gsr, EUpscaler::Nis, EUpscaler::Xbr}) {
        const std::string_view source = getUpscaleFragmentSource(upscaler);
        EXPECT_TRUE(source.starts_with("#version 150 core\n"));
        EXPECT_THAT(source, HasSubstr("uniform sampler2D u_tex;"));
        EXPECT_THAT(source, HasSubstr("out vec4 o_color;"));
    }
}

TEST(GetUpscaleWantsNearest, OnlyXbr) {
    EXPECT_TRUE(getUpscaleWantsNearest(EUpscaler::Xbr));
    EXPECT_FALSE(getUpscaleWantsNearest(EUpscaler::Fsr));
    EXPECT_FALSE(getUpscaleWantsNearest(EUpscaler::Standard));
}

} // namespace
} // namespace nocturne::platform::gl
