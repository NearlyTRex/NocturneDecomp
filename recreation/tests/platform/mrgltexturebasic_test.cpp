#include "platform/mrgltexturebasic.h"

#include <gtest/gtest.h>

#include <array>
#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(SMRGLTextureBasic, NameIsSixteenCharactersOfZeroPadding) {
    static_assert(std::is_same_v<decltype(SMRGLTextureBasic::texture_name), std::array<char, 16>>);
    const SMRGLTextureBasic texture;
    for (const char c : texture.texture_name) {
        EXPECT_EQ(c, '\0');
    }
}

} // namespace
} // namespace nocturne::platform
