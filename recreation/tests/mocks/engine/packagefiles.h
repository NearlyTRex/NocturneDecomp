#pragma once

#include "common/text/wildcard.h"
#include "platform/filesystem.h"
#include "tests/mocks/platform/memoryfile.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>

#include <ctime>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// XXH3-128 of the test files' contents, from Python's xxhash.
inline constexpr std::string_view kHashOfPodOne = "fed9db5d545bd067ad07fcbefa9ebc16";
inline constexpr std::string_view kHashOfPodTwo = "8c28a73ffb0dadc1028ba4c38e6ca219";

// An install held in memory: files by exact path, each with a time, found by a wildcard in the
// folder it names.
class CPackageFiles {
public:
    CPackageFiles() {
        ON_CALL(file_system_, findFiles).WillByDefault([this](std::string_view pattern) {
            const common::SWildcardPath split = common::splitWildcardPath(pattern);
            std::vector<platform::SFileInfo> found;
            for (const auto &[path, file] : files_) {
                const common::SWildcardPath where = common::splitWildcardPath(path);
                if (where.directory == split.directory &&
                    common::matchesWildcard(split.pattern, where.pattern)) {
                    found.push_back(info(path, file));
                }
            }
            return found;
        });
        ON_CALL(file_system_, getFileInfo).WillByDefault([this](std::string_view path) {
            const auto found = files_.find(std::string(path));
            return found == files_.end() ? std::nullopt
                                         : std::optional(info(found->first, found->second));
        });
        ON_CALL(file_system_, openFile)
            .WillByDefault([this](std::string_view path,
                                  platform::EFileMode) -> std::unique_ptr<platform::IFile> {
                const auto found = files_.find(std::string(path));
                if (found == files_.end() || found->second.unreadable) {
                    return nullptr;
                }
                return std::make_unique<platform::CMemoryFile>(found->second.contents);
            });
    }

    void givenFile(const std::string &path, const std::string &contents,
                   std::time_t modified = kModified) {
        files_[path] = {.contents = contents, .modified = modified, .unreadable = false};
    }

    // Listed and described, but it can't be opened.
    void givenUnreadableFile(const std::string &path, std::size_t size) {
        files_[path] = {
            .contents = std::string(size, '\0'), .modified = kModified, .unreadable = true};
    }

    static constexpr std::time_t kModified = 946627200;

    ::testing::NiceMock<platform::MockFileSystem> file_system_;

private:
    struct SFile {
        std::string contents;
        std::time_t modified = 0;
        bool unreadable = false;
    };

    static platform::SFileInfo info(const std::string &path, const SFile &file) {
        return {.name = std::string(common::splitWildcardPath(path).pattern),
                .size = file.contents.size(),
                .modified = file.modified};
    }

    std::map<std::string, SFile> files_;
};

} // namespace nocturne::engine
