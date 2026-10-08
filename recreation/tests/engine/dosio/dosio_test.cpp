#include "engine/dosio/dosio.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineDosioFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&getRelativeFilePath), void (*)(char *, char *, char *)>);
    static_assert(std::is_same_v<decltype(&addGetFileInfoHook), void (*)(FileSearchHandlerFunc *)>);
    static_assert(std::is_same_v<decltype(&findFile), int (*)(SFoundFileInfo *)>);
    static_assert(std::is_same_v<decltype(&findFileNormally), int (*)(SFoundFileInfo *)>);
    static_assert(std::is_same_v<decltype(&getFileSize), int (*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&getFile), std::FILE *(*)(char *, char *, char *)>);
    static_assert(
        std::is_same_v<decltype(&setReadonlyAttribute), std::uint32_t (*)(char *, std::uint32_t)>);
}

} // namespace
} // namespace nocturne::engine
