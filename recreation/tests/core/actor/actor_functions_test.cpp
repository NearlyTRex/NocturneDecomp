#include "core/actor/actor_functions.h"
#include "core/actor/demonactortype.h"
#include "tests/mocks/core/testactor.h"

#include <gtest/gtest.h>

#include <cstdint>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreActorFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&deleteActor), void (*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&adjustIndentationLevel), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&archiveVector), void (*)(common::CVector3f *, char *)>);
    static_assert(std::is_same_v<decltype(&archiveOrientation), void (*)(COrientation *, char *)>);
    static_assert(
        std::is_same_v<decltype(&archiveQuaternion), void (*)(common::CQuaternion4f *, char *)>);
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
        std::is_same_v<decltype(&isOfClass), bool (*)(const CDemonActor *, std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&isOfClassHash), bool (*)(const CDemonActor *, std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&castToClassHash), CDemonActor *(*)(CDemonActor *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&syncActorTypeIDs), void (*)()>);
    static_assert(std::is_same_v<decltype(&resetActorTypeInfo), void (*)()>);
    static_assert(std::is_same_v<decltype(&normalizeAngleToPi), float (*)(float)>);
    static_assert(
        std::is_same_v<decltype(&crc32ProcessByte), void (*)(std::uint32_t *, std::uint8_t)>);
    static_assert(std::is_same_v<decltype(&crc32ProcessInt), void (*)(std::uint32_t *, int)>);
    static_assert(std::is_same_v<decltype(&crc32ProcessString), void (*)(std::uint32_t *, char *)>);
    static_assert(
        std::is_same_v<decltype(&copyVector), void (*)(common::CVector3f *, common::CVector3f *)>);
}

// The hash skips anything but letters and digits, and ignores case.
TEST(CoreActorFunctions, AClassNameHashesItsLettersAndDigitsInEitherCase) {
    EXPECT_EQ(hashClassName("CTestLeaf"), hashClassName("ctestleaf"));
    EXPECT_EQ(hashClassName("CTestLeaf"), hashClassName("C_Test Leaf!"));
    EXPECT_NE(hashClassName("CTestLeaf"), hashClassName("CTestLea"));
    EXPECT_EQ(hashClassName(""), 0U);
    EXPECT_EQ(hashClassName("a"), static_cast<std::uint32_t>('a') * 0x20001U);
    EXPECT_EQ(hashClassName("ab"), (static_cast<std::uint32_t>('b') * 0x20001U) +
                                       (static_cast<std::uint32_t>('a') * 0x20001U * 0x80U));
    // Digits count; '~', past 'z', and '/', below '0', don't.
    EXPECT_EQ(hashClassName("C2~/"), hashClassName("c2"));
    EXPECT_NE(hashClassName("C2"), hashClassName("C"));
}

TEST(CoreActorFunctions, AClassRecordHashesItsName) {
    const std::string name = "CTestLeaf";
    const CDemonActorType type = makeActorType(name, &kTestBaseType, nullptr, 3);
    EXPECT_EQ(type.class_name, "CTestLeaf");
    EXPECT_EQ(type.parent_type, &kTestBaseType);
    EXPECT_EQ(type.factory_func, nullptr);
    EXPECT_EQ(type.latest_version, 3);
    EXPECT_EQ(type.name_hash, hashClassName("ctestleaf"));
}

// The high bits fold back in, and the sum wraps as 32-bit arithmetic does.
TEST(CoreActorFunctions, ALongNameFoldsItsHighBitsBack) {
    std::uint32_t expected = 0;
    for (const char c : std::string_view("CFrankenstienMachineGenerator")) {
        const auto lowered = static_cast<std::uint32_t>(c >= 'A' && c <= 'Z' ? c + 32 : c);
        expected = (lowered * 0x20001U) + (expected << 7U) + (expected >> 25U);
    }
    EXPECT_EQ(hashClassName("CFrankenstienMachineGenerator"), expected);
}

class CoreActorClassTest : public ::testing::Test {
protected:
    CTestActor leaf_{kTestLeafType};
    CTestActor other_{kTestOtherType};
};

TEST_F(CoreActorClassTest, AnActorIsOfItsClassAndEachItDerivesFrom) {
    EXPECT_TRUE(isOfClassHash(&leaf_, kTestLeafType.name_hash));
    EXPECT_TRUE(isOfClassHash(&leaf_, kTestBaseType.name_hash));
    EXPECT_FALSE(isOfClassHash(&leaf_, kTestOtherType.name_hash));
    EXPECT_FALSE(isOfClassHash(nullptr, kTestBaseType.name_hash));
    EXPECT_EQ(castToClassHash(&leaf_, kTestMiddleType.name_hash), &leaf_);
    EXPECT_EQ(castToClassHash(&other_, kTestMiddleType.name_hash), nullptr);
    EXPECT_EQ(castToClassHash(nullptr, kTestMiddleType.name_hash), nullptr);
}

TEST_F(CoreActorClassTest, ANameMatchesItsClassAndAncestorsInEitherCase) {
    EXPECT_TRUE(isOfClass(&leaf_, "CTestLeaf"));
    EXPECT_TRUE(isOfClass(&leaf_, "  ctestbase  "));
    EXPECT_FALSE(isOfClass(&other_, "CTestBase"));
    EXPECT_FALSE(isOfClass(nullptr, "CTestBase"));
    EXPECT_FALSE(isOfClass(&leaf_, ""));
}

TEST_F(CoreActorClassTest, NotAndBracketsGroupAndNegate) {
    EXPECT_FALSE(isOfClass(&leaf_, "!CTestBase"));
    EXPECT_TRUE(isOfClass(&other_, "!CTestBase"));
    EXPECT_TRUE(isOfClass(&leaf_, "!(CTestOther)"));
    EXPECT_TRUE(isOfClass(&leaf_, "( CTestOther | CTestMiddle )"));
    EXPECT_TRUE(isOfClass(&leaf_, "!!CTestLeaf"));
}

// Left to right, '&' only able to clear the result and '|' only to set it.
TEST_F(CoreActorClassTest, AndAndOrApplyLeftToRight) {
    EXPECT_TRUE(isOfClass(&leaf_, "CTestOther | CTestLeaf"));
    EXPECT_TRUE(isOfClass(&leaf_, "CTestOther || CTestLeaf"));
    EXPECT_FALSE(isOfClass(&leaf_, "CTestLeaf & CTestOther"));
    EXPECT_FALSE(isOfClass(&leaf_, "CTestLeaf && CTestOther"));
    EXPECT_TRUE(isOfClass(&leaf_, "CTestLeaf & CTestBase"));
    EXPECT_FALSE(isOfClass(&leaf_, "CTestOther & CTestLeaf"));
    EXPECT_TRUE(isOfClass(&leaf_, "CTestLeaf & CTestOther | CTestBase"));
    EXPECT_FALSE(isOfClass(&leaf_, "CTestBase | CTestLeaf & CTestOther"));
    // A term with no operator before it sets the result as '|' does.
    EXPECT_TRUE(isOfClass(&leaf_, "CTestOther CTestLeaf"));
    EXPECT_TRUE(isOfClass(&leaf_, "CTestLeaf CTestOther"));
}

// An expression that can't be read matches nothing.
TEST_F(CoreActorClassTest, AnUnreadableExpressionMatchesNothing) {
    EXPECT_FALSE(isOfClass(&leaf_, "CTestLeaf | "));
    EXPECT_FALSE(isOfClass(&leaf_, "CTestLeaf & ?"));
    EXPECT_FALSE(isOfClass(&leaf_, "?"));
    EXPECT_FALSE(isOfClass(&leaf_, "!?"));
    EXPECT_FALSE(isOfClass(&leaf_, "(CTestLeaf"));
    EXPECT_FALSE(isOfClass(&leaf_, "(?)"));
    EXPECT_FALSE(isOfClass(&leaf_, "!"));
}

// A ')' with nothing open ends the expression, whatever follows it.
TEST_F(CoreActorClassTest, AStrayClosingBracketEndsTheExpression) {
    EXPECT_TRUE(isOfClass(&leaf_, "CTestLeaf ) & CTestOther"));
}

} // namespace
} // namespace nocturne::core
