#include "core/event/rulelist.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CRuleList, IsConcrete) {
    static_assert(!std::is_abstract_v<CRuleList>);
}

TEST(CRuleList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CRuleList::clear), void (CRuleList::*)()>);
    static_assert(std::is_same_v<decltype(&CRuleList::evaluateAndRun), int (CRuleList::*)()>);
}

} // namespace
} // namespace nocturne::core
