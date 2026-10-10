#include "common/render/screenvertex.h"
#include "platform/gl/glpipeline.h"
#include "tests/mocks/platform/glrecorder.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <functional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::DoubleNear;
using ::testing::ElementsAre;
using ::testing::ElementsAreArray;
using ::testing::Pointwise;

// Shaders 1 and 2, program 3, then the stream's vertex array.
constexpr GLuint kProgram = 3;
constexpr GLuint kVertexArray = 4;
// Uniform locations in the order the constructor asks for them.
constexpr GLint kProjection = 0;
constexpr GLint kTextureEnabled = 1;
constexpr GLint kModulateAlpha = 2;
constexpr GLint kAlphaTest = 3;
constexpr GLint kFogEnabled = 4;
constexpr GLint kFogColor = 5;
constexpr GLint kReflection = 6;
constexpr GLint kSampler = 7;

// Opaque, depth tested and written, textured, fogged.
common::SPipelineState solidState() {
    return {.texture_enabled = true,
            .source_blend = common::EBlendFactor::One,
            .destination_blend = common::EBlendFactor::Zero,
            .fog_enabled = true,
            .depth_test_enabled = true,
            .depth_write_enabled = true,
            .depth_function = common::EDepthFunction::LessEqual};
}

// A column-major matrix applied to (x, y, z, 1), less the w it leaves at 1.
std::array<double, 3> project(std::span<const double, 16> matrix, std::array<double, 3> point) {
    std::array<double, 3> out{};
    for (std::size_t row = 0; row < 3; ++row) {
        out[row] = (matrix[row] * point[0]) + (matrix[4 + row] * point[1]) +
                   (matrix[8 + row] * point[2]) + matrix[12 + row];
    }
    return out;
}

std::vector<SGlCall> appliedFrom(CGlPipeline &pipeline, CGlRecorder &gl,
                                 const common::SPipelineState &state) {
    gl.clear();
    pipeline.apply(state);
    return gl.getCalls();
}

TEST(CGlPipeline, PointsTheSamplerAtUnitZero) {
    const CGlRecorder gl;
    const CGlPipeline pipeline(gl.getApi());
    EXPECT_THAT(gl.getCalls("Uniform1i"), ElementsAre(glCall("Uniform1i", kSampler, 0)));
    EXPECT_EQ(gl.getCalls().back(), glCall("Uniform1i", kSampler, 0));
}

TEST(CGlPipeline, BindsTheStreamsAttributeLocations) {
    const CGlRecorder gl;
    const CGlPipeline pipeline(gl.getApi());
    EXPECT_THAT(gl.getCalls("BindAttribLocation"),
                ElementsAre(glCall("BindAttribLocation", kProgram, 0),
                            glCall("BindAttribLocation", kProgram, 1),
                            glCall("BindAttribLocation", kProgram, 2),
                            glCall("BindAttribLocation", kProgram, 3)));
}

TEST(CGlPipeline, FirstApplyStatesEverything) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    EXPECT_THAT(
        appliedFrom(pipeline, gl, solidState()),
        ElementsAre(glCall("Disable", GL_BLEND), glCall("BlendFunc", GL_ONE, GL_ZERO),
                    glCall("Enable", GL_DEPTH_TEST), glCall("DepthMask", GL_TRUE),
                    glCall("DepthFunc", GL_LEQUAL), glCall("Disable", GL_POLYGON_OFFSET_FILL),
                    glCall("PolygonOffset", -1.0F, -1.0F), glCall("UseProgram", kProgram),
                    glCall("Uniform1i", kTextureEnabled, 1), glCall("Uniform1i", kModulateAlpha, 0),
                    glCall("Uniform1i", kAlphaTest, 0), glCall("Uniform1i", kFogEnabled, 1)));
    EXPECT_EQ(pipeline.getState(), solidState());
}

TEST(CGlPipeline, ARepeatedStateOnlySelectsTheProgram) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    pipeline.apply(solidState());
    EXPECT_THAT(appliedFrom(pipeline, gl, solidState()),
                ElementsAre(glCall("UseProgram", kProgram)));
}

struct SChange {
    std::string name;
    std::function<void(common::SPipelineState &)> change;
    std::vector<SGlCall> calls;
};

TEST(CGlPipeline, AChangeStatesOnlyWhatChanged) {
    const std::vector<SChange> changes = {
        {"source blend",
         [](auto &s) { s.source_blend = common::EBlendFactor::SourceAlpha; },
         {glCall("BlendFunc", GL_SRC_ALPHA, GL_ZERO)}},
        {"destination blend",
         [](auto &s) { s.destination_blend = common::EBlendFactor::InverseSourceAlpha; },
         {glCall("BlendFunc", GL_ONE, GL_ONE_MINUS_SRC_ALPHA)}},
        {"depth write",
         [](auto &s) { s.depth_write_enabled = false; },
         {glCall("DepthMask", GL_FALSE)}},
        {"depth function",
         [](auto &s) { s.depth_function = common::EDepthFunction::Always; },
         {glCall("DepthFunc", GL_ALWAYS)}},
        {"texture",
         [](auto &s) { s.texture_enabled = false; },
         {glCall("Uniform1i", kTextureEnabled, 0)}},
        {"texture alpha",
         [](auto &s) { s.modulate_texture_alpha = true; },
         {glCall("Uniform1i", kModulateAlpha, 1)}},
        {"alpha test",
         [](auto &s) { s.alpha_test_enabled = true; },
         {glCall("Uniform1i", kAlphaTest, 1)}},
        {"fog", [](auto &s) { s.fog_enabled = false; }, {glCall("Uniform1i", kFogEnabled, 0)}},
        // Without a depth test a blend is no overlay, so the bias stays off.
        {"depth test",
         [](auto &s) { s.depth_test_enabled = false; },
         {glCall("Disable", GL_DEPTH_TEST)}},
        {"blend without depth test",
         [](auto &s) {
             s.blend_enabled = true;
             s.depth_test_enabled = false;
         },
         {glCall("Enable", GL_BLEND), glCall("Disable", GL_DEPTH_TEST)}},
        {"filters", [](auto &s) { s.min_filter = common::ETextureFilter::Linear; }, {}},
    };
    for (const SChange &change : changes) {
        SCOPED_TRACE(change.name);
        CGlRecorder gl;
        CGlPipeline pipeline(gl.getApi());
        pipeline.apply(solidState());
        common::SPipelineState state = solidState();
        change.change(state);
        std::vector<SGlCall> applied = appliedFrom(pipeline, gl, state);
        std::erase(applied, glCall("UseProgram", kProgram));
        EXPECT_THAT(applied, ElementsAreArray(change.calls));
    }
}

TEST(CGlPipeline, ABlendOverADepthTestedSurfaceIsBiasedTowardTheViewer) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    pipeline.apply(solidState());
    common::SPipelineState overlay = solidState();
    overlay.blend_enabled = true;
    EXPECT_THAT(appliedFrom(pipeline, gl, overlay),
                ElementsAre(glCall("Enable", GL_BLEND), glCall("Enable", GL_POLYGON_OFFSET_FILL),
                            glCall("PolygonOffset", -1.0F, -1.0F), glCall("UseProgram", kProgram)));
    EXPECT_THAT(appliedFrom(pipeline, gl, solidState()),
                ElementsAre(glCall("Disable", GL_BLEND), glCall("Disable", GL_POLYGON_OFFSET_FILL),
                            glCall("PolygonOffset", -1.0F, -1.0F), glCall("UseProgram", kProgram)));
}

TEST(CGlPipeline, InvalidatingRestatesEverythingAndMovesTheEpoch) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    pipeline.apply(solidState());
    const std::uint32_t epoch = pipeline.getEpoch();
    pipeline.invalidate();
    EXPECT_EQ(pipeline.getEpoch(), epoch + 1);
    EXPECT_EQ(appliedFrom(pipeline, gl, solidState()).size(), 12U);
}

// A clear turns depth writes on behind the cache's back; the next draw that wants them off must
// still turn them off, or it writes depth it should only test.
TEST(CGlPipeline, ADepthClearDoesNotLeaveWritesOnForTheNextDraw) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    common::SPipelineState tested_only = solidState();
    tested_only.depth_write_enabled = false;
    pipeline.apply(tested_only);
    gl.clear();
    pipeline.enableDepthWrite();
    EXPECT_THAT(gl.getCalls(), ElementsAre(glCall("DepthMask", GL_TRUE)));
    EXPECT_THAT(appliedFrom(pipeline, gl, tested_only),
                ElementsAre(glCall("DepthMask", GL_FALSE), glCall("UseProgram", kProgram)));
}

TEST(CGlPipeline, TheProjectionMapsPixelsYDownOntoClipSpace) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    gl.clear();
    pipeline.setTargetSize(640, 480);
    ASSERT_EQ(gl.getCalls().size(), 2U);
    EXPECT_EQ(gl.getCalls()[0], glCall("UseProgram", kProgram));
    const std::vector<double> &args = gl.getCalls()[1].args;
    ASSERT_EQ(args.size(), 19U);
    EXPECT_EQ(std::vector(args.begin(), args.begin() + 3),
              (std::vector<double>{kProjection, 1, GL_FALSE}));
    const std::span<const double, 16> matrix(args.data() + 3, 16);
    EXPECT_THAT(project(matrix, {0, 0, 0}),
                Pointwise(DoubleNear(1e-6), std::array{-1.0, 1.0, -1.0}));
    EXPECT_THAT(project(matrix, {640, 480, 1}),
                Pointwise(DoubleNear(1e-6), std::array{1.0, -1.0, 1.0}));
    EXPECT_THAT(project(matrix, {320, 240, 0.5}),
                Pointwise(DoubleNear(1e-6), std::array{0.0, 0.0, 0.0}));
}

TEST(CGlPipeline, FogColourGoesToTheProgram) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    gl.clear();
    pipeline.setFogColor(0.25F, 0.5F, 1.0F);
    EXPECT_THAT(gl.getCalls(), ElementsAre(glCall("UseProgram", kProgram),
                                           glCall("Uniform3f", kFogColor, 0.25F, 0.5F, 1.0F)));
}

TEST(CGlPipeline, ReflectionIsToldOnlyWhenItChanges) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    gl.clear();
    pipeline.setReflection(false);
    pipeline.setReflection(true);
    pipeline.setReflection(true);
    pipeline.setReflection(false);
    EXPECT_THAT(gl.getCalls(),
                ElementsAre(glCall("UseProgram", kProgram), glCall("Uniform1i", kReflection, 1),
                            glCall("UseProgram", kProgram), glCall("Uniform1i", kReflection, 0)));
}

TEST(CGlPipeline, DrawStatesTheTargetViewportAndItsProgram) {
    CGlRecorder gl;
    CGlPipeline pipeline(gl.getApi());
    pipeline.setTargetSize(800, 600);
    gl.clear();
    const std::array<common::SScreenVertex, 3> vertices{};
    const std::array<std::uint16_t, 3> indices = {0, 1, 2};
    pipeline.draw(vertices, indices);
    const std::vector<SGlCall> &calls = gl.getCalls();
    ASSERT_GE(calls.size(), 3U);
    EXPECT_EQ(calls[0], glCall("Viewport", 0, 0, 800, 600));
    EXPECT_EQ(calls[1], glCall("UseProgram", kProgram));
    EXPECT_EQ(calls[2], glCall("BindVertexArray", kVertexArray));
    EXPECT_EQ(gl.count("DrawElements"), 1U);
}

} // namespace
} // namespace nocturne::platform::gl
