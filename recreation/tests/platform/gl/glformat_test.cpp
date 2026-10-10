#include "common/video/framebuffer.h"
#include "platform/gl/glformat.h"

#include <gtest/gtest.h>

#include <stdexcept>

namespace nocturne::platform::gl {
namespace {

TEST(GetGlPixelFormat, Rgb565IsPackedShorts) {
    EXPECT_EQ(getGlPixelFormat(common::EPixelLayout::Rgb565),
              (SGlPixelFormat{.format = GL_RGB, .type = GL_UNSIGNED_SHORT_5_6_5}));
}

TEST(GetGlPixelFormat, Bgra8888IsBgraBytes) {
    EXPECT_EQ(getGlPixelFormat(common::EPixelLayout::Bgra8888),
              (SGlPixelFormat{.format = GL_BGRA, .type = GL_UNSIGNED_BYTE}));
}

TEST(GetGlPixelFormat, Indexed8HasNone) {
    EXPECT_THROW((void)getGlPixelFormat(common::EPixelLayout::Indexed8), std::invalid_argument);
}

} // namespace
} // namespace nocturne::platform::gl
