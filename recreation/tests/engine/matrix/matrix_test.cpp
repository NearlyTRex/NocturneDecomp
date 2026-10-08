#include "engine/matrix/matrix.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineMatrixFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&initializeTrigTables), void (*)()>);
    static_assert(std::is_same_v<decltype(&doNothing), void (*)()>);
    static_assert(std::is_same_v<decltype(&interpolatedSin), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&interpolatedCos), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&invertTransformMatrix), void (*)()>);
    static_assert(std::is_same_v<decltype(&transformToCache), void (*)(int, core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&projectCachedPoint), void (*)(int)>);
    static_assert(
        std::is_same_v<decltype(&projectTransformedPoint), void (*)(core::SProjectedVertex *)>);
    static_assert(std::is_same_v<decltype(&projectCachedPointUnchecked), void (*)(int)>);
    static_assert(
        std::is_same_v<decltype(&matrixPushAndTransform), void (*)(int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&matrixPush), void (*)()>);
    static_assert(std::is_same_v<decltype(&pop), void (*)()>);
    static_assert(std::is_same_v<decltype(&normalizeVector3DFixed),
                                 core::CVector3i *(*)(core::CVector3i *, core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&normalizeVector3DFloat),
                                 core::CVector3i *(*)(core::CVector3i *, core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&setCameraOrigin), void (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&setCameraRotation), void (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&getCameraOrigin), void (*)(core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&getCameraRotation), void (*)(core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&pushViewport), void (*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&popViewport), void (*)()>);
}

} // namespace
} // namespace nocturne::engine
