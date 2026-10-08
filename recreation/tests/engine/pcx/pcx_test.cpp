#include "engine/pcx/pcx.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EnginePcxFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&saveScreenshotGeneral), void (*)(char *)>);
}

} // namespace
} // namespace nocturne::engine
