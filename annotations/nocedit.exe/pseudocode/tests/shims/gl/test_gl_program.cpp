// =============================================================================
// GL PROGRAM — a vertex and a fragment shader linked with a_pos at 0, or nothing
// =============================================================================
//
// Every way a build can fail hands back 0 and leaves nothing behind: each
// shader made is deleted, and a program that will not be used is too. The
// failures are the driver's, so each case swaps one entry of the recorder's
// table for one that says no.

#include "gl/gl_program.h"
#include "nocturne_test.h"
#include "shims/renderer/gl_recorder.h"

namespace {

gl_recorder::State &start() {
    gl_recorder::install();
    return gl_recorder::state();
}

GLuint build() {
    return nocturne_gl_build_program("vs", "fs", "test");
}

GLuint APIENTRY no_shader(GLenum) {
    return 0;
}
GLuint APIENTRY no_program(void) {
    return 0;
}
void APIENTRY failed(GLuint, GLenum, GLint *out) {
    *out = GL_FALSE;
}
GLint APIENTRY elsewhere(GLuint, const GLchar *) {
    return 3;
}

// Fails the second shader only, the fragment one.
GLuint APIENTRY second_shader_fails(GLenum type) {
    static GLuint next = 100;
    return type == GL_FRAGMENT_SHADER ? 0 : next++;
}

} // namespace

NOCTURNE_TEST(two_shaders_link_into_a_program_with_a_pos_first) {
    gl_recorder::State &s = start();
    const GLuint program = build();
    CHECK(program != 0);
    CHECK_EQ(s.count("CreateShader"), 2);
    CHECK_EQ(s.count("AttachShader"), 2);
    // Pinned before the link, which is when it takes effect.
    CHECK(s.index_of_last("BindAttribLocation") < s.index_of_last("LinkProgram"));
    // The program holds the shaders now, so they are released.
    CHECK_EQ(s.count("DeleteShader"), 2);
    CHECK_EQ(s.count("DeleteProgram"), 0);
}

// A context without glBindAttribLocation can still land a_pos at 0 by itself.
NOCTURNE_TEST(without_a_way_to_pin_a_pos_the_link_is_trusted) {
    gl_recorder::State &s = start();
    gl.BindAttribLocation = nullptr;
    CHECK(build() != 0);
    CHECK_EQ(s.count("BindAttribLocation"), 0);
}

NOCTURNE_TEST(no_shader_object_is_no_program) {
    gl_recorder::State &s = start();
    gl.CreateShader = no_shader;
    CHECK_EQ(build(), 0u);
    CHECK_EQ(s.count("DeleteShader"), 0);
    CHECK_EQ(s.count("CreateProgram"), 0);
}

NOCTURNE_TEST(a_shader_that_will_not_compile_is_deleted) {
    gl_recorder::State &s = start();
    gl.GetShaderiv = failed;
    CHECK_EQ(build(), 0u);
    CHECK_EQ(s.count("DeleteShader"), 1);
    CHECK_EQ(s.count("CreateProgram"), 0);

    // And with no way to read the driver's reason, the failure still is one.
    start();
    gl.GetShaderiv = failed;
    gl.GetShaderInfoLog = nullptr;
    CHECK_EQ(build(), 0u);
}

// The vertex shader compiled; it does not outlive the fragment one's failure.
NOCTURNE_TEST(a_failed_fragment_shader_takes_the_vertex_one_with_it) {
    gl_recorder::State &s = start();
    gl.CreateShader = second_shader_fails;
    CHECK_EQ(build(), 0u);
    CHECK_EQ(s.count("DeleteShader"), 1);
    CHECK_EQ(s.count("CreateProgram"), 0);
}

NOCTURNE_TEST(no_program_object_releases_both_shaders) {
    gl_recorder::State &s = start();
    gl.CreateProgram = no_program;
    CHECK_EQ(build(), 0u);
    CHECK_EQ(s.count("DeleteShader"), 2);
    CHECK_EQ(s.count("AttachShader"), 0);
}

NOCTURNE_TEST(a_program_that_will_not_link_is_deleted) {
    gl_recorder::State &s = start();
    gl.GetProgramiv = failed;
    CHECK_EQ(build(), 0u);
    CHECK_EQ(s.count("DeleteProgram"), 1);

    start();
    gl.GetProgramiv = failed;
    gl.GetProgramInfoLog = nullptr;
    gl.DeleteProgram = nullptr;
    CHECK_EQ(build(), 0u);
}

// Every draw feeds positions to attribute 0; a program with them anywhere else
// would draw nothing, so it is refused rather than used.
NOCTURNE_TEST(a_program_with_a_pos_elsewhere_is_refused) {
    gl_recorder::State &s = start();
    gl.GetAttribLocation = elsewhere;
    CHECK_EQ(build(), 0u);
    CHECK_EQ(s.count("DeleteProgram"), 1);
}

NOCTURNE_TEST_MAIN()
