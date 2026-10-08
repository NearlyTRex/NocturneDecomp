#include "core/dirmat/matrix3x3f.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMatrix3x3f, IsConcrete) {
    static_assert(!std::is_abstract_v<CMatrix3x3f>);
}

TEST(CMatrix3x3f, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMatrix3x3f::buildRotationMatrix),
                                 void (CMatrix3x3f::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CMatrix3x3f::transformVector),
                                 CVector3f *(CMatrix3x3f::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CMatrix3x3f::transformVectorTranspose),
                                 CVector3f *(CMatrix3x3f::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CMatrix3x3f::getEulerAngles),
                                 CVector3f *(CMatrix3x3f::*)(CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
