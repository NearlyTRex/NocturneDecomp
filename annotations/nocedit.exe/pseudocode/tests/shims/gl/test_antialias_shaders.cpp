// =============================================================================
// ANTI-ALIASING SHADERS — the fragment program behind each anti-aliasing mode
// =============================================================================
//
// Every mode but Off has a program, written to the one interface gl_blit draws
// with; a mode that does not exist has none. Where glslangValidator is on the
// PATH, each also has to compile, as the version this build targets; without it
// that check is skipped.

#include "gl/antialias.h"
#include "gl/antialias_shaders.h"
#include "nocturne_test.h"

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

NOCTURNE_TEST(every_mode_but_off_has_a_program) {
    CHECK(nocturne_antialias_fragment_source(NOCTURNE_ANTIALIAS_OFF) == nullptr);
    CHECK(nocturne_antialias_fragment_source(NOCTURNE_ANTIALIAS_COUNT) == nullptr);
    CHECK(nocturne_antialias_fragment_source(-1) == nullptr);
    for (int mode = NOCTURNE_ANTIALIAS_FXAA; mode < NOCTURNE_ANTIALIAS_COUNT; mode++) {
        const char *source = nocturne_antialias_fragment_source(mode);
        CHECK_AT(source != nullptr, std::to_string(mode));
        const std::string text = source != nullptr ? source : "";
        CHECK_AT(text.find("#version") == 0, std::to_string(mode));
        CHECK_AT(text.find("uniform sampler2D u_tex;") != std::string::npos, std::to_string(mode));
        CHECK_AT(text.find("uniform vec2  u_src;") != std::string::npos, std::to_string(mode));
        CHECK_AT(text.find("in  vec2 v_uv;") != std::string::npos, std::to_string(mode));
        CHECK_AT(text.find("out vec4 o_color;") != std::string::npos, std::to_string(mode));
    }
}

NOCTURNE_TEST(every_program_compiles) {
    if (std::system("command -v glslangValidator >/dev/null 2>&1") != 0) {
        std::printf("  (glslangValidator not found; compile check skipped)\n");
        return;
    }
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_antialias_shaders_test";
    std::filesystem::create_directories(dir, ec);
    for (int mode = NOCTURNE_ANTIALIAS_FXAA; mode < NOCTURNE_ANTIALIAS_COUNT; mode++) {
        const std::filesystem::path file = dir / ("mode" + std::to_string(mode) + ".frag");
        std::ofstream(file) << nocturne_antialias_fragment_source(mode);
        const std::string command =
            "glslangValidator -S frag \"" + file.string() + "\" >/dev/null 2>&1";
        CHECK_EQ_AT(std::system(command.c_str()), 0, nocturne_antialias_name(mode));
    }
    std::filesystem::remove_all(dir, ec);
}

NOCTURNE_TEST_MAIN()
