#include "engine/palette/fontfactory.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(IFontFactory, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IFontFactory>);
    static_assert(std::has_virtual_destructor_v<IFontFactory>);
}

TEST(IFontFactory, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IFontFactory::createWinFont),
                       std::unique_ptr<CFont> (IFontFactory::*)(std::string_view, int, int, int)>);
}

} // namespace
} // namespace nocturne::engine
