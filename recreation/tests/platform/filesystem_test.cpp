#include "platform/file.h"
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
    static_assert(std::is_same_v<decltype(&IFileSystem::readFile),
                                 std::optional<std::string> (IFileSystem::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&IFileSystem::appendFile),
                                 bool (IFileSystem::*)(std::string_view, std::string_view)>);
    static_assert(std::is_same_v<decltype(&IFileSystem::removeFile),
                                 bool (IFileSystem::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&IFileSystem::openFile),
                       std::unique_ptr<IFile> (IFileSystem::*)(std::string_view, EFileMode)>);
    static_assert(std::is_same_v<decltype(&IFileSystem::getFullPath),
                                 std::optional<std::string> (IFileSystem::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&IFileSystem::getFileInfo),
                                 std::optional<SFileInfo> (IFileSystem::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&IFileSystem::makeDirectory),
                                 bool (IFileSystem::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&IFileSystem::setModifiedTime),
                                 bool (IFileSystem::*)(std::string_view, std::time_t)>);
    static_assert(std::is_same_v<decltype(&IFileSystem::setReadOnly),
                                 bool (IFileSystem::*)(std::string_view, bool)>);
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
