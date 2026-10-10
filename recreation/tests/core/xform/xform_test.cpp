#include "core/xform/xform.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreXformFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&transformVector3x4),
                                 common::CVector3f *(*)(common::CVector3f *, common::CVector3f *,
                                                        common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&transformVector3x4InPlace),
                       common::CVector3f *(*)(common::CVector3f *, common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&multiplyMatrix3x4),
                       common::CMatrix3x4f *(*)(common::CMatrix3x4f *, common::CMatrix3x4f *,
                                                common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&setIdentityMatrix3x4), void (*)(common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&setRotationScaleIdentity), void (*)(common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&clearTranslation), void (*)(common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&buildMatrixFromEulerAndPosition),
                       void (*)(common::CMatrix3x4f *, common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&buildMatrixFromEulerAndPositionDirect),
                       void (*)(common::CMatrix3x4f *, common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&matrixToEulerAngles),
                       common::CVector3f *(*)(common::CMatrix3x4f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&matrixToEulerAnglesZYX),
                       common::CVector3f *(*)(common::CMatrix3x4f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&getTranslation),
                       common::CVector3f *(*)(common::CMatrix3x4f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&inverse),
                       common::CMatrix3x4f *(*)(common::CMatrix3x4f *, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildRotationX),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildRotationY),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildXFlipMatrix),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildZFlipMatrix),
                                 common::CMatrix3x4f *(*)(float, common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&lerpMatrix3x4),
                       common::CMatrix3x4f *(*)(common::CMatrix3x4f *, common::CMatrix3x4f *, float,
                                                common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&quaternionToMatrix3x3),
                       common::CQuaternion4f *(*)(common::CMatrix3x4f *, common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&quaternionToMatrix3x4),
                       common::CMatrix3x4f *(*)(common::CQuaternion4f *, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&negateFirstComponent),
                                 common::CQuaternion4f *(*)(common::CQuaternion4f *,
                                                            common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&setIdentityQuaternion), void (*)(common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&multiplyQuaternion),
                       common::CQuaternion4f *(*)(common::CQuaternion4f *, common::CQuaternion4f *,
                                                  common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionToAxisAngle),
                                 void (*)(common::CQuaternion4f *, float *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&slerpQuaternion),
                       common::CQuaternion4f *(*)(common::CQuaternion4f *, common::CQuaternion4f *,
                                                  float, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleX),
                                 common::CQuaternion4f *(*)(float, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleY),
                                 common::CQuaternion4f *(*)(float, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleZ),
                                 common::CQuaternion4f *(*)(float, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAxisAngle),
                                 common::CQuaternion4f *(*)(float, common::CVector3f *,
                                                            common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&quaternionToEulerAngles),
                       common::CVector3f *(*)(common::CVector3f *, common::CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&eulerToQuaternion),
                       common::CQuaternion4f *(*)(common::CVector3f *, common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&transformAndClipGeometry), void (*)(int, int *)>);
}

} // namespace
} // namespace nocturne::core
