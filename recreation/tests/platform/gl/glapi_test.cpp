#include "platform/gl/glapi.h"

#include <gtest/gtest.h>

#include <bit>
#include <cstdint>
#include <set>
#include <stdexcept>
#include <string>

namespace nocturne::platform::gl {
namespace {

void entryPoint() {}

TEST(SGlApi, LoadResolvesEveryEntryPointByItsGlName) {
    std::set<std::string> asked;
    SGlApi api;
    api.load([&asked](const char *name) -> GlProc {
        asked.insert(name);
        return entryPoint;
    });
    EXPECT_EQ(asked.size(), 65U);
    EXPECT_TRUE(asked.contains("glBlitFramebuffer"));
    EXPECT_TRUE(asked.contains("glUniformMatrix4fv"));
    EXPECT_EQ(std::bit_cast<GlProc>(api.ActiveTexture), &entryPoint);
    EXPECT_EQ(std::bit_cast<GlProc>(api.Viewport), &entryPoint);
}

TEST(SGlApi, LoadNamesTheEntryPointTheDriverLacks) {
    SGlApi api;
    try {
        api.load([](const char *name) -> GlProc {
            return std::string(name) == "glGenerateMipmap" ? nullptr : entryPoint;
        });
        FAIL() << "load did not throw";
    } catch (const std::runtime_error &error) {
        EXPECT_STREQ(error.what(), "OpenGL entry point missing: glGenerateMipmap");
    }
}

TEST(BufferOffset, IsTheOffsetAsAPointer) {
    EXPECT_EQ(bufferOffset(0), nullptr);
    EXPECT_EQ(std::bit_cast<std::uintptr_t>(bufferOffset(24)), 24U);
}

} // namespace
} // namespace nocturne::platform::gl
