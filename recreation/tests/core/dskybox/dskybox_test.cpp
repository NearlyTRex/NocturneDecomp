#include "core/dskybox/dskybox.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDskyboxFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&renderSkyDome), void (*)(SMRGLSkyTexture *, char *, int)>);
}

} // namespace
} // namespace nocturne::core
