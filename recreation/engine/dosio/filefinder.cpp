#include "engine/dosio/filefinder.h"

#include "common/error/error.h"
#include "platform/filesystem.h"

namespace nocturne::engine {
namespace {

// The game keeps sizes in a signed 32-bit int.
constexpr std::uint64_t kMaxFileSize = 0x7fffffff;
constexpr std::size_t kMaxFilename = 255;

} // namespace

// nocedit 0x00481c30
CFileFinder::CFileFinder(platform::IFileSystem &file_system) : file_system_(file_system) {
    reset();
}

// nocedit 0x00481c50
CFileFinder::~CFileFinder() {
    closeSearch();
}

// nocedit 0x00481c70
bool CFileFinder::openSearch(std::string_view search_pattern) {
    closeSearch();
    matches_ = file_system_.findFiles(search_pattern);
    if (matches_.empty()) {
        reset();
        return false;
    }
    convertStruct(matches_.front());
    next_match_ = 1;
    has_results_ = true;
    return true;
}

// nocedit 0x00481cf0
bool CFileFinder::findNext() {
    if (!has_results_) {
        common::displayErrorAndQuit("CFileFinder::open - search not opened!");
    }
    if (next_match_ < matches_.size()) {
        convertStruct(matches_[next_match_++]);
        return true;
    }
    reset();
    return false;
}

// nocedit 0x00481d70
void CFileFinder::closeSearch() {
    has_results_ = false;
    matches_.clear();
    reset();
}

// nocedit 0x00481db0
void CFileFinder::reset() {
    filename_.clear();
}

// Windows marks nearly every file for archiving, so a plain file carries that bit here too.
// nocedit 0x00481dc0
void CFileFinder::convertStruct(const platform::SFileInfo &find_data) {
    filename_ = find_data.name.substr(0, kMaxFilename);
    attributes_ = find_data.is_directory ? kDirectory : kArchive;
    if (find_data.is_hidden) {
        attributes_ |= kHidden;
    }
    if (find_data.is_read_only) {
        attributes_ |= kReadOnly;
    }
    if (find_data.size > kMaxFileSize) {
        common::displayErrorAndQuit("CFileFinder::convertStruct - file too big!");
    }
    file_size_ = static_cast<std::int64_t>(find_data.size);
    timestamp_ = find_data.modified;
}

const std::string &CFileFinder::getFilename() const {
    return filename_;
}

int CFileFinder::getAttributes() const {
    return attributes_;
}

std::int64_t CFileFinder::getFileSize() const {
    return file_size_;
}

std::time_t CFileFinder::getTimestamp() const {
    return timestamp_;
}

} // namespace nocturne::engine
