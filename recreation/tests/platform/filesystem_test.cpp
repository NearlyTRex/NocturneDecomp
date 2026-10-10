#include "platform/filesystem.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IFileSystem, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IFileSystem>);
    static_assert(std::has_virtual_destructor_v<IFileSystem>);
}

TEST(IFileSystem, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IFileSystem::findFiles),
                                 std::vector<SFileInfo> (IFileSystem::*)(std::string_view)>);
}

TEST(SFileInfo, DefaultsToAnEmptyPlainFile) {
    const SFileInfo info;
    EXPECT_TRUE(info.name.empty());
    EXPECT_EQ(info.size, 0U);
    EXPECT_EQ(info.modified, 0);
    EXPECT_FALSE(info.is_directory);
    EXPECT_FALSE(info.is_hidden);
    EXPECT_FALSE(info.is_read_only);
}

} // namespace
} // namespace nocturne::platform
