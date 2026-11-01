#include "core/event/rulelist.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

TEST(CRuleList, IsConcrete) {
    static_assert(!std::is_abstract_v<CRuleList>);
}

TEST(CRuleList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CRuleList::clear), void (CRuleList::*)()>);
    static_assert(std::is_same_v<decltype(&CRuleList::evaluateAndRun), int (CRuleList::*)()>);
}

TEST(CRuleList, StartsEmpty) {
    const CRuleList rules;
    EXPECT_THAT(rules.getRules(), IsEmpty());
}

TEST(CRuleList, KeepsItsRulesInOrderUntilCleared) {
    CRuleList rules;
    rules.setRules({{.condition = "true", .event = "Open"}, {.condition = "a", .event = "B"}});
    EXPECT_THAT(rules.getRules(), ElementsAre(SRule{.condition = "true", .event = "Open"},
                                              SRule{.condition = "a", .event = "B"}));
    rules.clear();
    EXPECT_THAT(rules.getRules(), IsEmpty());
}

} // namespace
} // namespace nocturne::core
