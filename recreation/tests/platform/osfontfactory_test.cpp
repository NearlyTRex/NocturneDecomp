#include "platform/osfont.h"
#include "platform/osfontfactory.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IOsFontFactory, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IOsFontFactory>);
    static_assert(std::has_virtual_destructor_v<IOsFontFactory>);
}

TEST(IOsFontFactory, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IOsFontFactory::createOsFont),
                       std::unique_ptr<IOsFont> (IOsFontFactory::*)(std::string_view, int)>);
}

} // namespace
} // namespace nocturne::platform
