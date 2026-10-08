#include "core/bodypart/bodypart_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBodypartFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&createBodyPart),
                                 CBodyPart *(*)(CVector3f *, UOrientationVector *, CVector3f *,
                                                CDemonActor *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&factoryFuncBodyPart), CBodyPart *(*)()>);
    static_assert(
        std::is_same_v<decltype(&scaleVector), CVector3f *(*)(CVector3f *, CVector3f *, float *)>);
    static_assert(std::is_same_v<decltype(&subtractVector),
                                 CVector3f *(*)(CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&addVector),
                                 CVector3f *(*)(CVector3f *, CVector3f *, CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
