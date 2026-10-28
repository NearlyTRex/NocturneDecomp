#include "core/dmodel/keyframedmodelinstance.h"
#include "core/skeleton/partvisibility.h"

#include <gtest/gtest.h>

#include <cstddef>
#include <string_view>
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
                                 void (CKeyFramedModelInstance::*)(std::string_view)>);
}

TEST(CKeyFramedModelInstance, AnInstanceNamesNoModelAndShowsEveryPart) {
    const CKeyFramedModelInstance instance;
    EXPECT_EQ(instance.getModelName(), "");
    for (std::size_t part = 0; part < CKeyFramedModelInstance::kMaxParts; ++part) {
        EXPECT_EQ(instance.getPartVisibility(part), EPartVisibility::kShown);
    }
}

TEST(CKeyFramedModelInstance, NamingTheModelKeepsItsName) {
    CKeyFramedModelInstance instance;
    instance.setModelName("gat.kfm");
    instance.setModelName("bullet.kfm");
    EXPECT_EQ(instance.getModelName(), "bullet.kfm");
}

} // namespace
} // namespace nocturne::core
