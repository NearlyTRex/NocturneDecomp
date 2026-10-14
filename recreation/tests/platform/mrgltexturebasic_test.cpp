#include "platform/mrgltexturebasic.h"

#include <gtest/gtest.h>

namespace nocturne::platform {
namespace {

TEST(SMRGLTextureBasic, StartsUnnamedAtTheFirstSlot) {
    const SMRGLTextureBasic texture;
    EXPECT_TRUE(texture.texture_name.empty());
    EXPECT_EQ(texture.cache_index, 0);
}

} // namespace
} // namespace nocturne::platform
