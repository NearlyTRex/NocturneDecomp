#include "platform/file.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IFile, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IFile>);
    static_assert(std::has_virtual_destructor_v<IFile>);
}

TEST(IFile, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IFile::read), std::size_t (IFile::*)(std::span<std::byte>)>);
    static_assert(
        std::is_same_v<decltype(&IFile::write), bool (IFile::*)(std::span<const std::byte>)>);
    static_assert(std::is_same_v<decltype(&IFile::seek), bool (IFile::*)(std::int64_t)>);
    static_assert(std::is_same_v<decltype(&IFile::tell), std::int64_t (IFile::*)()>);
}

} // namespace
} // namespace nocturne::platform
