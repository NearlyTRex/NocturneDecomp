#include "platform/antialias.h"
#include "platform/gl/glantialiasshaders.h"

#include <gtest/gtest.h>

#include <string_view>

namespace nocturne::platform::gl {
namespace {

TEST(GlAntialiasShaders, OffHasNoProgram) {
    EXPECT_EQ(getAntialiasFragmentSource(EAntialias::Off), nullptr);
}

// The upscalers' interface, so the quad's vertex shader drives it.
TEST(GlAntialiasShaders, FxaaReadsTheSceneAndItsSize) {
    const std::string_view source = getAntialiasFragmentSource(EAntialias::Fxaa);
    EXPECT_TRUE(source.starts_with("#version 150 core\n"));
    EXPECT_NE(source.find("uniform sampler2D u_tex;"), std::string_view::npos);
    EXPECT_NE(source.find("uniform vec2  u_src;"), std::string_view::npos);
    EXPECT_NE(source.find("in  vec2 v_uv;"), std::string_view::npos);
    EXPECT_NE(source.find("out vec4 o_color;"), std::string_view::npos);
}

} // namespace
} // namespace nocturne::platform::gl
