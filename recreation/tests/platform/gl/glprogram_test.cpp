#include "platform/gl/glprogram.h"
#include "tests/mocks/platform/glrecorder.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <optional>
#include <stdexcept>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;

constexpr std::array<SAttributeBinding, 2> kAttributes = {{
    {.location = 0, .name = "a_pos"},
    {.location = 1, .name = "a_uv"},
}};

std::string thrownBy(CGlRecorder &gl) {
    try {
        const CGlProgram program(gl.getApi(), "vs", "fs", kAttributes);
    } catch (const std::runtime_error &error) {
        return error.what();
    }
    return {};
}

TEST(CGlProgram, CompilesBindsAttributesBeforeLinkingAndFreesTheStages) {
    const CGlRecorder gl;
    const CGlProgram program(gl.getApi(), "vs", "fs", kAttributes);
    // Shaders 1 and 2, program 3.
    EXPECT_THAT(gl.getCalls(),
                ElementsAre(glCall("CreateShader", GL_VERTEX_SHADER, 1),
                            glCall("ShaderSource", 1, 1), glCall("CompileShader", 1),
                            glCall("GetShaderiv", 1, GL_COMPILE_STATUS),
                            glCall("CreateShader", GL_FRAGMENT_SHADER, 2),
                            glCall("ShaderSource", 2, 1), glCall("CompileShader", 2),
                            glCall("GetShaderiv", 2, GL_COMPILE_STATUS), glCall("CreateProgram", 3),
                            glCall("AttachShader", 3, 1), glCall("AttachShader", 3, 2),
                            glCall("BindAttribLocation", 3, 0), glCall("BindAttribLocation", 3, 1),
                            glCall("LinkProgram", 3), glCall("GetProgramiv", 3, GL_LINK_STATUS),
                            glCall("DeleteShader", 2), glCall("DeleteShader", 1)));
    EXPECT_EQ(gl.getCalls("BindAttribLocation")[0].data, textBytes("a_pos"));
    EXPECT_EQ(gl.getCalls("BindAttribLocation")[1].data, textBytes("a_uv"));
}

TEST(CGlProgram, UsesAndLooksUpUniformsOnItsOwnName) {
    CGlRecorder gl;
    const CGlProgram program(gl.getApi(), "vs", "fs", kAttributes);
    gl.clear();
    program.use();
    EXPECT_EQ(program.getUniformLocation("u_tex"), 0);
    EXPECT_EQ(program.getUniformLocation("u_other"), 1);
    EXPECT_THAT(gl.getCalls(),
                ElementsAre(glCall("UseProgram", 3), glCall("GetUniformLocation", 3, 0),
                            glCall("GetUniformLocation", 3, 1)));
}

TEST(CGlProgram, DeletesTheProgramWhenDestroyed) {
    CGlRecorder gl;
    std::optional<CGlProgram> program(std::in_place, gl.getApi(), "vs", "fs", kAttributes);
    gl.clear();
    program.reset();
    EXPECT_THAT(gl.getCalls(), ElementsAre(glCall("DeleteProgram", 3)));
}

TEST(CGlProgram, AVertexStageThatFailsThrowsItsLogAndLeavesNothing) {
    CGlRecorder gl;
    gl.failing_stage = GL_VERTEX_SHADER;
    gl.info_log = "0:3: syntax error";
    EXPECT_EQ(thrownBy(gl), "shader did not compile: 0:3: syntax error");
    EXPECT_THAT(gl.getCalls("DeleteShader"), ElementsAre(glCall("DeleteShader", 1)));
    EXPECT_EQ(gl.count("CreateProgram"), 0U);
}

TEST(CGlProgram, AFragmentStageThatFailsFreesTheVertexStageToo) {
    CGlRecorder gl;
    gl.failing_stage = GL_FRAGMENT_SHADER;
    EXPECT_EQ(thrownBy(gl), "shader did not compile: driver log");
    EXPECT_THAT(gl.getCalls("DeleteShader"),
                ElementsAre(glCall("DeleteShader", 2), glCall("DeleteShader", 1)));
}

TEST(CGlProgram, ALinkFailureThrowsItsLogAndFreesEverything) {
    CGlRecorder gl;
    gl.link_fails = true;
    gl.info_log = std::string(2000, 'x');
    const std::string thrown = thrownBy(gl);
    // The log is cut to the buffer, terminator included.
    EXPECT_EQ(thrown, "program did not link: " + std::string(1023, 'x'));
    EXPECT_THAT(gl.getCalls("DeleteProgram"), ElementsAre(glCall("DeleteProgram", 3)));
    EXPECT_EQ(gl.count("DeleteShader"), 2U);
}

} // namespace
} // namespace nocturne::platform::gl
