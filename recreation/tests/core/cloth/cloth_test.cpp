#include "core/cloth/cloth.h"

#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCloth, IsConcrete) {
    static_assert(!std::is_abstract_v<CCloth>);
}

TEST(CCloth, Constructors) {
    static_assert(std::is_constructible_v<CCloth, const engine::CDosIo &, IKeyFramedModels &>);
}

TEST(CCloth, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCloth::load), void (CCloth::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&CCloth::setup),
                       void (CCloth::*)(const common::CVector3f &, const common::CVector3f &,
                                        CDeformableModelInstance *)>);
    static_assert(
        std::is_same_v<decltype(&CCloth::process),
                       void (CCloth::*)(const common::CVector3f &, const common::CVector3f &, float,
                                        float, CDeformableModelInstance *,
                                        const common::CVector3f &)>);
    static_assert(std::is_same_v<decltype(&CCloth::saveJoinedLight),
                                 int (CCloth::*)(CDeformableModelInstance *)>);
    static_assert(
        std::is_same_v<decltype(&CCloth::render), void (CCloth::*)(CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CCloth::grabCloth), void (CCloth::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CCloth::resetState), void (CCloth::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CCloth::applyRotation), void (CCloth::*)(common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
