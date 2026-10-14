#pragma once

#include "platform/fwd.h"

#include <cstddef>
#include <cstdint>
#include <ctime>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// FindFirstFile and FindNextFile over the disk: one match at a time.
class CFileFinder {
public:
    // The attribute bits, as FindFirstFile's translated.
    static constexpr int kArchive = 1;
    static constexpr int kHidden = 2;
    static constexpr int kDirectory = 4;
    static constexpr int kReadOnly = 8;

    explicit CFileFinder(platform::IFileSystem &file_system);
    ~CFileFinder();
    CFileFinder(const CFileFinder &) = delete;
    CFileFinder &operator=(const CFileFinder &) = delete;

    // True with the first match current.
    bool openSearch(std::string_view search_pattern);
    // True with the next match current; false, and no name, once they run out.
    bool findNext();
    void closeSearch();

    [[nodiscard]] const std::string &getFilename() const;
    [[nodiscard]] int getAttributes() const;
    [[nodiscard]] std::int64_t getFileSize() const;
    [[nodiscard]] std::time_t getTimestamp() const;

private:
    void reset();
    void convertStruct(const platform::SFileInfo &find_data);

    platform::IFileSystem &file_system_;
    std::vector<platform::SFileInfo> matches_;
    std::size_t next_match_ = 0;
    bool has_results_ = false;
    std::string filename_;
    int attributes_ = 0;
    std::int64_t file_size_ = 0;
    std::time_t timestamp_ = 0;
};

} // namespace nocturne::engine
