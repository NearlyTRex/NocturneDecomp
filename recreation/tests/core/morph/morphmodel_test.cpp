#include "core/morph/morphmodel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMorphModel, IsConcrete) {
    static_assert(!std::is_abstract_v<CMorphModel>);
}

TEST(CMorphModel, Constructors) {
    static_assert(std::is_constructible_v<CMorphModel>);
}

TEST(CMorphModel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMorphModel::free), void (CMorphModel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CMorphModel::addPartFromPolygon),
                       void (CMorphModel::*)(int, CVector3i *, int, engine::SMRGLHeaderPrimitive *,
                                             int, SMRGLTextureModel *, int *)>);
    static_assert(std::is_same_v<decltype(&CMorphModel::addPartFromDeformableModel),
                                 void (CMorphModel::*)(CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CMorphModel::addPartFromKeyFramedModel),
                                 void (CMorphModel::*)(CKeyFramedModel *, int)>);
    static_assert(std::is_same_v<decltype(&CMorphModel::animateFromPartVertexBuffer),
                                 void (CMorphModel::*)(int, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CMorphModel::animateFromDeformableModel),
                                 void (CMorphModel::*)(int, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CMorphModel::animateFromKeyframedModel),
                                 void (CMorphModel::*)(int, CKeyFramedModel *, int)>);
    static_assert(std::is_same_v<decltype(&CMorphModel::render),
                                 void (CMorphModel::*)(float, SMorphPoint *)>);
    static_assert(std::is_same_v<decltype(&CMorphModel::findNearestPoint),
                                 int (CMorphModel::*)(CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
