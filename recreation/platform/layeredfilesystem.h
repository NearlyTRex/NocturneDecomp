#pragma once

#include "platform/filesystem.h"

#include <ctime>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::platform {

// Folders laid over one another: a relative path is read from the first folder that has it and
// written to the first folder, a file the first doesn't have yet copied there before it is
// changed, so the folders under it are never written. A listing is every folder's, each name
// once, as the first holding it has it. A delete or rename in the first can't hide a file the
// others have. "" is the working directory. Absolute paths, and every path while there are no
// folders, are the host's as given.
class CLayeredFileSystem : public IFileSystem {
public:
    explicit CLayeredFileSystem(IFileSystem &host, std::vector<std::string> folders = {});

    // The one written first; none leaves every path as given.
    void setFolders(std::vector<std::string> folders);
    [[nodiscard]] const std::vector<std::string> &getFolders() const;

    [[nodiscard]] std::vector<SFileInfo> findFiles(std::string_view pattern) override;
    [[nodiscard]] std::optional<std::string> readFile(std::string_view path) override;
    bool appendFile(std::string_view path, std::string_view text) override;
    bool writeFile(std::string_view path, std::string_view text) override;
    bool removeFile(std::string_view path) override;
    bool removeDirectory(std::string_view path) override;
    [[nodiscard]] std::unique_ptr<IFile> openFile(std::string_view path, EFileMode mode) override;
    [[nodiscard]] std::optional<std::string> getFullPath(std::string_view path) override;
    [[nodiscard]] std::optional<std::string> getRealPath(std::string_view path) override;
    [[nodiscard]] std::optional<SFileInfo> getFileInfo(std::string_view path) override;
    bool makeDirectory(std::string_view path) override;
    [[nodiscard]] std::optional<std::string> getCacheFolder(std::string_view title) override;
    bool setModifiedTime(std::string_view path, std::time_t modified) override;
    bool setReadOnly(std::string_view path, bool read_only) override;

private:
    // Where the path is read from: the first folder holding it, else where it would be written.
    [[nodiscard]] std::string findPath(std::string_view path);
    // Where the path is written, the folder above it made.
    [[nodiscard]] std::string makeWritePath(std::string_view path);
    // Where the path is written, holding what the folders under it had of it first.
    [[nodiscard]] std::string copyForChange(std::string_view path);
    [[nodiscard]] static std::string inFolder(const std::string &folder, std::string_view path);
    [[nodiscard]] bool isLayered(std::string_view path) const;

    IFileSystem &host_;
    std::vector<std::string> folders_;
};

} // namespace nocturne::platform
