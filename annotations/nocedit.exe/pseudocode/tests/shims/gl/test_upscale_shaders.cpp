// =============================================================================
// UPSCALE SHADERS — the fragment program behind each upscaler
// =============================================================================
//
// Every filter but Standard has a program, written to the one interface gl_blit
// draws with; a mode that does not exist has none. Only xBR reads its source
// unfiltered. Where glslangValidator is on the PATH, each also has to compile,
// as the version this build targets; without it that check is skipped.

#include "gl/upscale_shaders.h"
#include "gl/upscaler.h"
#include "nocturne_test.h"

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <system_error>

NOCTURNE_TEST(every_filter_but_standard_has_a_program) {
    CHECK(nocturne_upscale_fragment_source(NOCTURNE_UPSCALER_STANDARD) == nullptr);
    CHECK(nocturne_upscale_fragment_source(NOCTURNE_UPSCALER_COUNT) == nullptr);
    CHECK(nocturne_upscale_fragment_source(-1) == nullptr);
    for (int mode = NOCTURNE_UPSCALER_FSR; mode < NOCTURNE_UPSCALER_COUNT; mode++) {
        const char *source = nocturne_upscale_fragment_source(mode);
        CHECK_AT(source != nullptr, std::to_string(mode));
        const std::string text = source != nullptr ? source : "";
        CHECK_AT(text.find("#version") == 0, std::to_string(mode));
        CHECK_AT(text.find("uniform sampler2D u_tex;") != std::string::npos, std::to_string(mode));
        CHECK_AT(text.find("uniform vec2  u_src;") != std::string::npos, std::to_string(mode));
        CHECK_AT(text.find("in  vec2 v_uv;") != std::string::npos, std::to_string(mode));
        CHECK_AT(text.find("out vec4 o_color;") != std::string::npos, std::to_string(mode));
        // A filter the sharpness tunes reads it.
        CHECK_EQ_AT(text.find("u_sharp") != std::string::npos,
                    nocturne_upscaler_sharpens(mode) != 0, std::to_string(mode));
    }
}

NOCTURNE_TEST(every_program_compiles) {
    if (std::system("command -v glslangValidator >/dev/null 2>&1") != 0) {
        std::printf("  (glslangValidator not found; compile check skipped)\n");
        return;
    }
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_upscale_shaders_test";
    std::filesystem::create_directories(dir, ec);
    for (int mode = NOCTURNE_UPSCALER_FSR; mode < NOCTURNE_UPSCALER_COUNT; mode++) {
        const std::filesystem::path file = dir / ("filter" + std::to_string(mode) + ".frag");
        std::ofstream(file) << nocturne_upscale_fragment_source(mode);
        const std::string command =
            "glslangValidator -S frag \"" + file.string() + "\" >/dev/null 2>&1";
        CHECK_EQ_AT(std::system(command.c_str()), 0, nocturne_upscaler_name(mode));
    }
    std::filesystem::remove_all(dir, ec);
}

NOCTURNE_TEST(only_xbr_reads_its_source_unfiltered) {
    for (int mode = -1; mode <= NOCTURNE_UPSCALER_COUNT; mode++)
        CHECK_EQ_AT(nocturne_upscale_wants_nearest(mode), mode == NOCTURNE_UPSCALER_XBR ? 1 : 0,
                    std::to_string(mode));
}

NOCTURNE_TEST_MAIN()
