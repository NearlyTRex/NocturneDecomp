#include "core/dlight/dlight.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDlightFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&resetRestoreMemoryAllocator), void (*)()>);
    static_assert(std::is_same_v<decltype(&captureLightTextures), void (*)()>);
    static_assert(std::is_same_v<decltype(&renderConeLightGeometry),
                                 void (*)(CVector3f *, CVector3f *, float, float)>);
}

} // namespace
} // namespace nocturne::core
