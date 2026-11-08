#include "core/event/eventconditions.h"

#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(IEventConditions, IsAnInterface) {
    static_assert(std::is_abstract_v<IEventConditions>);
    static_assert(std::has_virtual_destructor_v<IEventConditions>);
    static_assert(std::is_same_v<decltype(&IEventConditions::evaluateCondition),
                                 bool (IEventConditions::*)(std::string_view)>);
}

} // namespace
} // namespace nocturne::core
