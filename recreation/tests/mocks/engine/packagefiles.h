#pragma once

#include "common/text/wildcard.h"
#include "platform/filesystem.h"
#include "tests/mocks/platform/memoryfile.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>

#include <cstddef>
#include <ctime>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::engine {

// XXH3-128 of the test files' contents, from Python's xxhash.
inline constexpr std::string_view kHashOfPodOne = "fed9db5d545bd067ad07fcbefa9ebc16";
inline constexpr std::string_view kHashOfPodTwo = "8c28a73ffb0dadc1028ba4c38e6ca219";

// An install held in memory: files by exact path, each with a time, found by a wildcard in the
// folder it names, with each folder a file is in listed too. A file written is read back. A link
// is read as its target, and its real path is its target's.
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
            for (const auto &[path, target] : links_) {
                const common::SWildcardPath where = common::splitWildcardPath(path);
                const auto file = files_.find(target);
                if (file != files_.end() && where.directory == split.directory &&
                    common::matchesWildcard(split.pattern, where.pattern)) {
                    found.push_back(info(path, file->second));
                }
            }
            for (const std::string &folder : folders()) {
                const common::SWildcardPath where = common::splitWildcardPath(folder);
                if (where.directory == split.directory &&
                    common::matchesWildcard(split.pattern, where.pattern)) {
                    found.push_back({.name = where.pattern, .is_directory = true});
                }
            }
            return found;
        });
        ON_CALL(file_system_, readFile).WillByDefault([this](std::string_view path) {
            const auto found = files_.find(follow(path));
            return found == files_.end() || found->second.unreadable
                       ? std::nullopt
                       : std::optional(found->second.contents);
        });
        ON_CALL(file_system_, getRealPath).WillByDefault([this](std::string_view path) {
            const std::string real = follow(path);
            return files_.contains(real) ? std::optional("/real/" + real) : std::nullopt;
        });
        ON_CALL(file_system_, writeFile)
            .WillByDefault([this](std::string_view path, std::string_view text) {
                files_[std::string(path)] = {
                    .contents = std::string(text), .modified = kModified, .unreadable = false};
                return true;
            });
        ON_CALL(file_system_, removeFile).WillByDefault([this](std::string_view path) {
            return files_.erase(std::string(path)) > 0;
        });
        ON_CALL(file_system_, getFileInfo).WillByDefault([this](std::string_view path) {
            const auto found = files_.find(follow(path));
            return found == files_.end() ? std::nullopt
                                         : std::optional(info(std::string(path), found->second));
        });
        ON_CALL(file_system_, removeDirectory).WillByDefault([this](std::string_view path) {
            const std::string prefix = std::string(path) + "/";
            std::erase_if(files_,
                          [&prefix](const auto &file) { return file.first.starts_with(prefix); });
            return true;
        });
        ON_CALL(file_system_, makeDirectory).WillByDefault(::testing::Return(true));
        ON_CALL(file_system_, openFile)
            .WillByDefault([this](std::string_view path,
                                  platform::EFileMode mode) -> std::unique_ptr<platform::IFile> {
                if (mode == platform::EFileMode::Write) {
                    return std::make_unique<CWrittenFile>(*this, std::string(path));
                }
                const auto found = files_.find(follow(path));
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

    // A symbolic link to target, which is read through it.
    void givenLink(const std::string &path, const std::string &target) {
        links_[path] = target;
    }

    // Listed and described, but it can't be opened.
    void givenUnreadableFile(const std::string &path, std::size_t size) {
        files_[path] = {
            .contents = std::string(size, '\0'), .modified = kModified, .unreadable = true};
    }

    // A file's contents, empty when there is none.
    [[nodiscard]] std::string bytes(const std::string &path) const {
        return contents(path).value_or("");
    }

    // A file's contents, or nothing when there is none.
    [[nodiscard]] std::optional<std::string> contents(const std::string &path) const {
        const auto found = files_.find(path);
        return found == files_.end() ? std::nullopt : std::optional(found->second.contents);
    }

    static constexpr std::time_t kModified = 946627200;

    ::testing::NiceMock<platform::MockFileSystem> file_system_;

private:
    struct SFile {
        std::string contents;
        std::time_t modified = 0;
        bool unreadable = false;
    };

    // Opened to be written: in the install once it is closed.
    class CWrittenFile final : public platform::CMemoryFile {
    public:
        CWrittenFile(CPackageFiles &files, std::string path)
            : files_(files), path_(std::move(path)) {}
        CWrittenFile(const CWrittenFile &) = delete;
        CWrittenFile &operator=(const CWrittenFile &) = delete;
        ~CWrittenFile() override {
            files_.givenFile(path_, contents());
        }

    private:
        CPackageFiles &files_;
        std::string path_;
    };

    static platform::SFileInfo info(const std::string &path, const SFile &file) {
        return {.name = std::string(common::splitWildcardPath(path).pattern),
                .size = file.contents.size(),
                .modified = file.modified};
    }

    // The file a path names, its link followed.
    [[nodiscard]] std::string follow(std::string_view path) const {
        const auto link = links_.find(std::string(path));
        return link == links_.end() ? std::string(path) : link->second;
    }

    // Every folder a file or link is in, each once.
    [[nodiscard]] std::set<std::string> folders() const {
        std::set<std::string> found;
        const auto add = [&found](const std::string &path) {
            for (std::size_t slash = path.find('/'); slash != std::string::npos;
                 slash = path.find('/', slash + 1)) {
                found.insert(path.substr(0, slash));
            }
        };
        for (const auto &[path, file] : files_) {
            add(path);
        }
        for (const auto &[path, target] : links_) {
            add(path);
        }
        return found;
    }

    std::map<std::string, SFile> files_;
    std::map<std::string, std::string> links_;
};

} // namespace nocturne::engine
