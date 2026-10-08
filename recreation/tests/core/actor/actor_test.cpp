#include "core/actor/actor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreActorFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&deleteActor), void (*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&adjustIndentationLevel), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&archiveVector), void (*)(CVector3f *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveOrientation), void (*)(COrientation *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveQuaternion), void (*)(CQuaternion4f *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveString), void (*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveLocalizedString), void (*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveFloat), void (*)(float *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveInteger), void (*)(int *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveActor), void (*)(CDemonActor **, char *)>);
    static_assert(std::is_same_v<decltype(&archiveKeyframedModelInstance),
                                 void (*)(CKeyFramedModelInstance *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveDeformableModelInstance),
                                 void (*)(CDeformableModelInstance *, char *)>);
    static_assert(
        std::is_same_v<decltype(&archiveMotionState), void (*)(CMotionController *, char *)>);
    static_assert(
        std::is_same_v<decltype(&archivePartStatus), void (*)(CDeformableModelInstance *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveBox), void (*)(CBox *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveClothList), void (*)(CClothList *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveRules), void (*)(CRuleList *, char *)>);
    static_assert(
        std::is_same_v<decltype(&registerActorClass),
                       CDemonActorType *(*)(CDemonActorType *, char *, CDemonActor::FactoryFunc *,
                                            int *, int, CDemonActorType *)>);
    static_assert(std::is_same_v<decltype(&getActorClassByName), CDemonActorType *(*)(char *)>);
    static_assert(std::is_same_v<decltype(&createActorByName), CDemonActor *(*)(char *)>);
    static_assert(std::is_same_v<decltype(&isOfClass), int (*)(CDemonActor *, char *)>);
    static_assert(std::is_same_v<decltype(&isOfClassHash), int (*)(CDemonActor *, std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&castToClassHash), CDemonActor *(*)(CDemonActor *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&syncActorTypeIDs), void (*)()>);
    static_assert(std::is_same_v<decltype(&resetActorTypeInfo), void (*)()>);
    static_assert(std::is_same_v<decltype(&setRandomSeed), void (*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&getRandomFloatFromRange), float (*)(float, float)>);
    static_assert(std::is_same_v<decltype(&getRandomInt), int (*)(int, int)>);
    static_assert(std::is_same_v<decltype(&randomChance), int (*)(float)>);
    static_assert(std::is_same_v<decltype(&normalizeAngleToPi), float (*)(float)>);
    static_assert(
        std::is_same_v<decltype(&crc32ProcessByte), void (*)(std::uint32_t *, std::uint8_t)>);
    static_assert(std::is_same_v<decltype(&crc32ProcessInt), void (*)(std::uint32_t *, int)>);
    static_assert(std::is_same_v<decltype(&crc32ProcessString), void (*)(std::uint32_t *, char *)>);
    static_assert(std::is_same_v<decltype(&copyVector), void (*)(CVector3f *, CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
