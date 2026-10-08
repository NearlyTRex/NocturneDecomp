#include "core/event/event.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreEventFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&getSelectedCameraIndex), int (*)(CDemonSet *)>);
}

} // namespace
} // namespace nocturne::core
