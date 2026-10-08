#include "core/xform/xform.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreXformFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&transformVector3x4),
                                 CVector3f *(*)(CVector3f *, CVector3f *, CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&transformVector3x4InPlace),
                                 CVector3f *(*)(CVector3f *, CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&multiplyMatrix3x4),
                                 CMatrix3x4f *(*)(CMatrix3x4f *, CMatrix3x4f *, CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&setIdentityMatrix3x4), void (*)(CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&setRotationScaleIdentity), void (*)(CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&clearTranslation), void (*)(CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&buildMatrixFromEulerAndPosition),
                                 void (*)(CMatrix3x4f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&buildMatrixFromEulerAndPositionDirect),
                                 void (*)(CMatrix3x4f *, CVector3f *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&matrixToEulerAngles), CVector3f *(*)(CMatrix3x4f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&matrixToEulerAnglesZYX),
                                 CVector3f *(*)(CMatrix3x4f *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&getTranslation), CVector3f *(*)(CMatrix3x4f *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&inverse), CMatrix3x4f *(*)(CMatrix3x4f *, CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&buildRotationX), CMatrix3x4f *(*)(float, CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&buildRotationY), CMatrix3x4f *(*)(float, CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&buildXFlipMatrix), CMatrix3x4f *(*)(float, CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&buildZFlipMatrix), CMatrix3x4f *(*)(float, CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&lerpMatrix3x4),
                       CMatrix3x4f *(*)(CMatrix3x4f *, CMatrix3x4f *, float, CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionToMatrix3x3),
                                 CQuaternion4f *(*)(CMatrix3x4f *, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionToMatrix3x4),
                                 CMatrix3x4f *(*)(CQuaternion4f *, CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&negateFirstComponent),
                                 CQuaternion4f *(*)(CQuaternion4f *, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&setIdentityQuaternion), void (*)(CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&multiplyQuaternion),
                       CQuaternion4f *(*)(CQuaternion4f *, CQuaternion4f *, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionToAxisAngle),
                                 void (*)(CQuaternion4f *, float *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&slerpQuaternion),
                                 CQuaternion4f *(*)(CQuaternion4f *, CQuaternion4f *, float,
                                                    CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleX),
                                 CQuaternion4f *(*)(float, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleY),
                                 CQuaternion4f *(*)(float, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAngleZ),
                                 CQuaternion4f *(*)(float, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionFromAxisAngle),
                                 CQuaternion4f *(*)(float, CVector3f *, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&quaternionToEulerAngles),
                                 CVector3f *(*)(CVector3f *, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&eulerToQuaternion),
                                 CQuaternion4f *(*)(CVector3f *, CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&transformAndClipGeometry), void (*)(int, int *)>);
}

} // namespace
} // namespace nocturne::core
