#include "core/loadingscreen.h"

#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(ILoadingScreen, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<ILoadingScreen>);
    static_assert(std::has_virtual_destructor_v<ILoadingScreen>);
}

TEST(ILoadingScreen, PublicInterface) {
    static_assert(std::is_same_v<decltype(&ILoadingScreen::update),
                                 void (ILoadingScreen::*)(std::string_view, bool)>);
}

} // namespace
} // namespace nocturne::core
