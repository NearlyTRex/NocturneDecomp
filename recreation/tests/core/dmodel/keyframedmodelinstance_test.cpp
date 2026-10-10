#include "core/dmodel/keyframedmodelinstance.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CKeyFramedModelInstance, IsConcrete) {
    static_assert(!std::is_abstract_v<CKeyFramedModelInstance>);
}

TEST(CKeyFramedModelInstance, Constructors) {
    static_assert(std::is_constructible_v<CKeyFramedModelInstance>);
}

TEST(CKeyFramedModelInstance, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::prepareForRendering),
                                 void (CKeyFramedModelInstance::*)(float, int)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::preCache),
                                 CKeyFramedModel *(CKeyFramedModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::getModelPtr),
                                 CKeyFramedModel *(CKeyFramedModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::setModelName),
                                 void (CKeyFramedModelInstance::*)(char *)>);
}

} // namespace
} // namespace nocturne::core
