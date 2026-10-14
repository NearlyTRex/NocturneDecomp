#include "shape/edittool/strlist.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/dosio/filefinder.h"
#include "engine/pod/pod.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <iterator>

namespace nocturne::shape {
namespace {

// nocedit 0x004a2ee0
bool qsortByString(const std::string &a, const std::string &b) {
    return common::compareIgnoringAsciiCase(a, b) < 0;
}

} // namespace

// nocedit 0x004a2a20
CStrList::CStrList() = default;

// nocedit 0x004a2a40
CStrList::~CStrList() = default;

// nocedit 0x004a2bc0
void CStrList::insert(int insert_index, std::string_view string_data) {
    if (insert_index < 0 || insert_index > getItemCount()) {
        common::displayErrorAndQuit("CStrList::insert - invalid index");
    }
    strings_.emplace(std::next(strings_.begin(), insert_index), string_data);
}

// nocedit 0x004a2e00
void CStrList::remove(int start_index, int end_index) {
    if (start_index < 0 || end_index >= getItemCount() || end_index < start_index) {
        common::displayErrorAndQuit("CStrList::remove - invalid range");
    }
    strings_.erase(std::next(strings_.begin(), start_index),
                   std::next(strings_.begin(), end_index + 1));
}

// nocedit 0x004a2f00
void CStrList::sort(int start_index, int end_index) {
    if (start_index >= end_index) {
        return;
    }
    if (start_index < 0 || end_index >= getItemCount()) {
        common::displayErrorAndQuit("CStrList::sort - invalid range!");
    }
    std::sort(std::next(strings_.begin(), start_index), std::next(strings_.begin(), end_index + 1),
              qsortByString);
}

// nocedit 0x004a31f0
void CStrList::swap(int index1, int index2) {
    if (index1 < 0 || index1 >= getItemCount() || index2 < 0 || index2 >= getItemCount()) {
        common::displayErrorAndQuit("CStrList::swap - invalid indices");
    }
    std::swap(strings_[static_cast<std::size_t>(index1)],
              strings_[static_cast<std::size_t>(index2)]);
}

// nocedit 0x004a2b10
void CStrList::clear() {
    strings_.clear();
}

// nocedit 0x004a2b80
void CStrList::add(std::string_view string_data) {
    insert(getItemCount(), string_data);
}

// nocedit 0x004a2f70
const std::string &CStrList::getStringAt(int index) const {
    return strings_.at(static_cast<std::size_t>(index));
}

// nocedit 0x004a3030
int CStrList::findString(std::string_view search_string) const {
    const auto found = std::ranges::find_if(strings_, [search_string](const std::string &item) {
        return common::equalsIgnoringAsciiCase(item, search_string);
    });
    return found == strings_.end() ? -1 : static_cast<int>(std::distance(strings_.begin(), found));
}

// The original checked the disk's names only against what the list held before the disk search,
// so names differing only in case were both added.
// nocedit 0x004a37b0
void CStrList::populateFromFilesNoDuplicates(engine::CPod *pod, platform::IFileSystem &file_system,
                                             std::string_view directory_path,
                                             std::string_view file_pattern) {
    const std::string pattern = directory_path.empty()
                                    ? std::string(file_pattern)
                                    : std::format("{}\\{}", directory_path, file_pattern);
    const auto addNew = [this](std::string_view name) {
        if (findString(name) < 0) {
            add(name);
        }
    };
    if (pod != nullptr) {
        engine::CPodSearchContext search;
        pod->initSearch(pattern, search);
        while (!search.current_file_info.found_path.empty()) {
            addNew(common::pathLeaf(search.current_file_info.found_path));
            static_cast<void>(pod->getNextSearchResult(search));
        }
    }
    engine::CFileFinder finder(file_system);
    finder.openSearch(pattern);
    while (!finder.getFilename().empty()) {
        addNew(finder.getFilename());
        finder.findNext();
    }
    finder.closeSearch();
}

// nocedit 0x004a6ed0
int CStrList::getItemCount() const {
    return static_cast<int>(strings_.size());
}

} // namespace nocturne::shape
