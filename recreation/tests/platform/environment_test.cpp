#include "platform/environment.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IEnvironment, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IEnvironment>);
    static_assert(std::has_virtual_destructor_v<IEnvironment>);
}

TEST(IEnvironment, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IEnvironment::getVariable),
                                 std::optional<std::string> (IEnvironment::*)(std::string_view)>);
}

} // namespace
} // namespace nocturne::platform
