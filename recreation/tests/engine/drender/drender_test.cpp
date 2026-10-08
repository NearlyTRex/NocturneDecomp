#include "engine/drender/drender.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineDrenderFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&qsortByCapturedFaceDepthAscending), int (*)(SFace **, SFace **)>);
    static_assert(
        std::is_same_v<decltype(&qsortByCapturedFaceDepthDescending), int (*)(SFace **, SFace **)>);
}

} // namespace
} // namespace nocturne::engine
