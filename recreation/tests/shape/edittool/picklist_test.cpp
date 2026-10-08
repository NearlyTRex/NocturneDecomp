#include "shape/edittool/picklist.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CPickList, DerivesFromCStrList) {
    static_assert(std::is_base_of_v<CStrList, CPickList>);
}

TEST(CPickList, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPickList>);
}

TEST(CPickList, IsConcrete) {
    static_assert(!std::is_abstract_v<CPickList>);
}

TEST(CPickList, Constructors) {
    static_assert(std::is_constructible_v<CPickList>);
}

TEST(CPickList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPickList::remove), void (CPickList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CPickList::sort), void (CPickList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CPickList::insert), void (CPickList::*)(int, char *)>);
    static_assert(std::is_same_v<decltype(&CPickList::swap), void (CPickList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CPickList::clear), void (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::handleInput), int (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::displayChoicesAndWaitForInput),
                                 int (CPickList::*)(char *, int, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CPickList::initializeDialog),
                                 void (CPickList::*)(char *, int, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CPickList::handleDialogInput), int (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::renderDialog), void (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::enableItem), void (CPickList::*)(int, int)>);
}

} // namespace
} // namespace nocturne::shape
