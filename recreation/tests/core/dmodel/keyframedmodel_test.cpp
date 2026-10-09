#include "core/dmodel/keyframedmodel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CKeyFramedModel, IsConcrete) {
    static_assert(!std::is_abstract_v<CKeyFramedModel>);
}

TEST(CKeyFramedModel, Constructors) {
    static_assert(std::is_constructible_v<CKeyFramedModel>);
}

TEST(CKeyFramedModel, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CKeyFramedModel::load), void (CKeyFramedModel::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::free), void (CKeyFramedModel::*)()>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::prepareForRender),
                                 void (CKeyFramedModel::*)(int, CKeyFramedModelInstance *, int)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::getFrameVertices),
                                 common::CVector3i *(CKeyFramedModel::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CKeyFramedModel::captureTextures), void (CKeyFramedModel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CKeyFramedModel::intersectRay),
                       float (CKeyFramedModel::*)(int, common::CVector3f *, common::CVector3f *,
                                                  common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::intersectCylinder),
                                 void (CKeyFramedModel::*)(int, SIntersectXZCylinder *,
                                                           common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::getFloorHeight),
                                 int (CKeyFramedModel::*)(int, common::CVector3f *, float, float *,
                                                          common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
