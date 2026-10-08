#include "shape/edittool/strlist.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CStrList, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CStrList>);
}

TEST(CStrList, IsConcrete) {
    static_assert(!std::is_abstract_v<CStrList>);
}

TEST(CStrList, Constructors) {
    static_assert(std::is_constructible_v<CStrList>);
}

TEST(CStrList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CStrList::remove), void (CStrList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CStrList::sort), void (CStrList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CStrList::insert), void (CStrList::*)(int, char *)>);
    static_assert(std::is_same_v<decltype(&CStrList::swap), void (CStrList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CStrList::clear), void (CStrList::*)()>);
    static_assert(std::is_same_v<decltype(&CStrList::add), void (CStrList::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CStrList::sortAll), void (CStrList::*)()>);
    static_assert(std::is_same_v<decltype(&CStrList::getStringAt), char *(CStrList::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CStrList::getFieldAt), void (CStrList::*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CStrList::findString), int (CStrList::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CStrList::copyToClipboard), void (CStrList::*)()>);
    static_assert(std::is_same_v<decltype(&CStrList::populateFromFileSearch),
                                 void (CStrList::*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&CStrList::populateFromFilesNoDuplicates),
                                 void (CStrList::*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&CStrList::getItemCount), int (CStrList::*)()>);
}

} // namespace
} // namespace nocturne::shape
