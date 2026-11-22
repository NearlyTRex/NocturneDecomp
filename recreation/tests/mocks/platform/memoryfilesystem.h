#pragma once

#include "common/text/wildcard.h"
#include "platform/filesystem.h"
#include "tests/mocks/platform/memoryfile.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>

#include <algorithm>
#include <ctime>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::platform {

// Files held in memory by exact path, '/' between components, with every folder above a file
// and every folder made there. A file written, appended to or opened to be written is read back.
// A full path is the path under /full/.
class CMemoryFileSystem {
public:
    CMemoryFileSystem() {
        ON_CALL(host_, findFiles).WillByDefault([this](std::string_view pattern) {
            const common::SWildcardPath split = common::splitWildcardPath(pattern);
            std::vector<SFileInfo> found;
            for (const auto &[path, file] : files_) {
                const common::SWildcardPath where = common::splitWildcardPath(path);
                if (where.directory == split.directory &&
                    common::matchesWildcard(split.pattern, where.pattern)) {
                    found.push_back(describe(path));
                }
            }
            for (const std::string &folder : getFolders()) {
                const common::SWildcardPath where = common::splitWildcardPath(folder);
                if (where.directory == split.directory &&
                    common::matchesWildcard(split.pattern, where.pattern)) {
                    found.push_back({.name = std::string(where.pattern),
                                     .is_directory = true,
                                     .is_hidden = where.pattern.starts_with('.')});
                }
            }
            return found;
        });
        ON_CALL(host_, readFile).WillByDefault([this](std::string_view path) {
            return contents(std::string(path));
        });
        ON_CALL(host_, writeFile)
            .WillByDefault([this](std::string_view path, std::string_view text) {
                files_[std::string(path)] = {.contents = std::string(text)};
                return true;
            });
        ON_CALL(host_, appendFile)
            .WillByDefault([this](std::string_view path, std::string_view text) {
                files_[std::string(path)].contents += text;
                return true;
            });
        ON_CALL(host_, removeFile).WillByDefault([this](std::string_view path) {
            return files_.erase(std::string(path)) > 0;
        });
        ON_CALL(host_, getFileInfo).WillByDefault([this](std::string_view path) {
            const std::string key(path);
            if (files_.contains(key)) {
                return std::optional(describe(key));
            }
            if (getFolders().contains(key)) {
                return std::optional(SFileInfo{.name = key, .is_directory = true});
            }
            return std::optional<SFileInfo>();
        });
        ON_CALL(host_, getFullPath).WillByDefault([](std::string_view path) {
            return path.starts_with('/') ? std::optional(std::string(path))
                                         : std::optional("/full/" + std::string(path));
        });
        ON_CALL(host_, getRealPath).WillByDefault([this](std::string_view path) {
            return files_.contains(std::string(path)) ? std::optional("/real/" + std::string(path))
                                                      : std::nullopt;
        });
        ON_CALL(host_, makeDirectory).WillByDefault([this](std::string_view path) {
            made_.insert(std::string(path));
            return true;
        });
        ON_CALL(host_, removeDirectory).WillByDefault([this](std::string_view path) {
            const std::string prefix = std::string(path) + "/";
            std::erase_if(files_,
                          [&prefix](const auto &file) { return file.first.starts_with(prefix); });
            made_.erase(std::string(path));
            return true;
        });
        ON_CALL(host_, setModifiedTime)
            .WillByDefault([this](std::string_view path, std::time_t modified) {
                const auto found = files_.find(std::string(path));
                if (found == files_.end()) {
                    return false;
                }
                found->second.modified = modified;
                return true;
            });
        ON_CALL(host_, setReadOnly).WillByDefault([this](std::string_view path, bool) {
            return files_.contains(std::string(path));
        });
        ON_CALL(host_, openFile)
            .WillByDefault([this](std::string_view path, EFileMode mode) -> std::unique_ptr<IFile> {
                const std::string key(path);
                if (mode == EFileMode::Write) {
                    files_[key] = {};
                    return std::make_unique<CMemoryFile>();
                }
                const std::optional<std::string> held = contents(key);
                return held ? std::make_unique<CMemoryFile>(*held) : nullptr;
            });
    }

    void givenFile(const std::string &path, const std::string &text, std::time_t modified = 0) {
        files_[path] = {.contents = text, .modified = modified};
    }

    [[nodiscard]] std::optional<std::string> contents(const std::string &path) const {
        const auto found = files_.find(path);
        return found == files_.end() ? std::nullopt : std::optional(found->second.contents);
    }

    [[nodiscard]] std::time_t modified(const std::string &path) const {
        const auto found = files_.find(path);
        return found == files_.end() ? 0 : found->second.modified;
    }

    // The folders made, as asked for.
    [[nodiscard]] const std::set<std::string> &made() const {
        return made_;
    }

    ::testing::NiceMock<MockFileSystem> host_;

private:
    struct SFile {
        std::string contents;
        std::time_t modified = 0;
    };

    [[nodiscard]] SFileInfo describe(const std::string &path) const {
        const SFile &file = files_.at(path);
        return {.name = std::string(common::splitWildcardPath(path).pattern),
                .size = file.contents.size(),
                .modified = file.modified};
    }

    [[nodiscard]] std::set<std::string> getFolders() const {
        std::set<std::string> folders = made_;
        for (const auto &[path, file] : files_) {
            for (std::size_t slash = path.find('/', 1); slash != std::string::npos;
                 slash = path.find('/', slash + 1)) {
                folders.insert(path.substr(0, slash));
            }
        }
        return folders;
    }

    std::map<std::string, SFile> files_;
    std::set<std::string> made_;
};

} // namespace nocturne::platform
