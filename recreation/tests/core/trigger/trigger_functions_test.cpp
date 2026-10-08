#include "core/trigger/trigger_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreTriggerFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncTrigger), CTrigger *(*)()>);
}

} // namespace
} // namespace nocturne::core
