#include "core/mmx/mmx.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreMmxFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&detectCPUFeatures), void (*)()>);
}

} // namespace
} // namespace nocturne::core
