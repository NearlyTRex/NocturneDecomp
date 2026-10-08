#include "core/slew/slew.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSlew, IsConcrete) {
    static_assert(!std::is_abstract_v<CSlew>);
}

TEST(CSlew, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSlew::processInput), void (CSlew::*)()>);
}

} // namespace
} // namespace nocturne::core
