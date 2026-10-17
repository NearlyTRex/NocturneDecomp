#include "shape/edittool/strlist.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/dosio/filefinder.h"
#include "engine/pod/pod.h"
#include "shape/edittool/editortools.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <format>
#include <iterator>

namespace nocturne::shape {
namespace {

// A file a search found: its name, the pod holding it (empty on disk), its size and its time.
struct SFileMatch {
    std::string_view name;
    std::string_view pod_path;
    std::int64_t size = 0;
    std::time_t timestamp = 0;
};

// nocedit 0x004a2ee0
bool qsortByString(const std::string &a, const std::string &b) {
    return common::compareIgnoringAsciiCase(a, b) < 0;
}

std::string getSearchPattern(std::string_view directory_path, std::string_view file_pattern) {
    return directory_path.empty() ? std::string(file_pattern)
                                  : std::format("{}\\{}", directory_path, file_pattern);
}

// The pods' matches and then the disk's.
void forEachFileMatch(engine::CPod *pod, platform::IFileSystem &file_system,
                      const std::string &pattern,
                      const std::function<void(const SFileMatch &)> &visit) {
    if (pod != nullptr) {
        engine::CPodSearchContext search;
        pod->initSearch(pattern, search);
        while (!search.current_file_info.found_path.empty()) {
            const engine::SFoundFileInfo &info = search.current_file_info;
            visit({.name = common::pathLeaf(info.found_path),
                   .pod_path = info.target_path,
                   .size = info.file_size,
                   .timestamp = info.timestamp});
            static_cast<void>(pod->getNextSearchResult(search));
        }
    }
    engine::CFileFinder finder(file_system);
    finder.openSearch(pattern);
    while (!finder.getFilename().empty()) {
        visit({.name = finder.getFilename(),
               .pod_path = {},
               .size = finder.getFileSize(),
               .timestamp = finder.getTimestamp()});
        finder.findNext();
    }
    finder.closeSearch();
}

// The file name a file record lists: its name, then its extension after a dot.
std::string getRecordFileName(const CStrList &list, int index) {
    std::string name = list.getFieldAt(index, 0);
    const std::string extension = list.getFieldAt(index, 1);
    if (!extension.empty()) {
        name += '.';
        name += extension;
    }
    return name;
}

std::string formatFileTime(const std::tm &time) {
    std::array<char, 30> text{};
    const std::size_t length =
        std::strftime(text.data(), text.size(), "%m/%d/%y %I:%M:%S %p", &time);
    return {text.data(), length};
}

} // namespace

// nocedit 0x004a2a20
CStrList::CStrList() = default;

// nocedit 0x004a2a40
CStrList::~CStrList() = default;

// allocate grew the array insert fills, which the vector grows itself.
// nocedit 0x004a2bc0
// nocedit 0x004a2cc0
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

// unverified: the order left among strings equal ignoring case, which the original's Watcom
//   _qsort decides, by running its _qsort on such a list in the machine-code oracle
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

// nocedit 0x004a2ec0
void CStrList::sortAll() {
    sort(0, getItemCount() - 1);
}

// nocedit 0x004a2f70
const std::string &CStrList::getStringAt(int index) const {
    return strings_.at(static_cast<std::size_t>(index));
}

// nocedit 0x004a2f80
std::string CStrList::getFieldAt(int string_index, int field_number) const {
    std::string_view rest = getStringAt(string_index);
    for (int field = 0; field < field_number; ++field) {
        const std::size_t tab = rest.find('\t');
        if (tab == std::string_view::npos) {
            return {};
        }
        rest.remove_prefix(tab + 1);
    }
    return std::string(rest.substr(0, rest.find('\t')));
}

// nocedit 0x004a3030
int CStrList::findString(std::string_view search_string) const {
    const auto found = std::ranges::find_if(strings_, [search_string](const std::string &item) {
        return common::equalsIgnoringAsciiCase(item, search_string);
    });
    return found == strings_.end() ? -1 : static_cast<int>(std::distance(strings_.begin(), found));
}

// nocedit 0x004a3270
void CStrList::copyToClipboard(CEditorTools &editor_tools) const {
    std::string text;
    for (const std::string &item : strings_) {
        text += item;
        text += '\n';
    }
    editor_tools.setClipboardText(text);
}

// The original read a record's name back with sscanf, which made it empty for a file with nothing
// before its extension, so the pods and the disk could both list one.
// nocedit 0x004a3360
void CStrList::insertSortedFileRecord(std::string_view file_name, std::string_view pod_path,
                                      std::int64_t file_size, std::time_t timestamp,
                                      const LocalTime &local_time) {
    int low = 0;
    int high = getItemCount() - 1;
    while (low <= high) {
        const int middle = (low + high) / 2;
        const int order =
            common::compareIgnoringAsciiCase(file_name, getRecordFileName(*this, middle));
        if (order == 0) {
            return;
        }
        if (order < 0) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }
    std::string_view extension = common::pathExtension(file_name);
    if (!extension.empty()) {
        extension.remove_prefix(1);
    }
    insert(low, common::toUpperAscii(std::format(
                    "{}\t{}\t{}\t{}\t{}", common::pathStem(file_name), extension, file_size,
                    formatFileTime(local_time(timestamp)), common::pathLeaf(pod_path))));
}

// nocedit 0x004a35b0
void CStrList::populateFromFileSearch(engine::CPod *pod, platform::IFileSystem &file_system,
                                      const LocalTime &local_time, std::string_view directory_path,
                                      std::string_view file_pattern) {
    forEachFileMatch(pod, file_system, getSearchPattern(directory_path, file_pattern),
                     [this, &local_time](const SFileMatch &match) {
                         insertSortedFileRecord(match.name, match.pod_path, match.size,
                                                match.timestamp, local_time);
                     });
}

// The original checked the disk's names only against what the list held before the disk search,
// so names differing only in case were both added.
// nocedit 0x004a37b0
void CStrList::populateFromFilesNoDuplicates(engine::CPod *pod, platform::IFileSystem &file_system,
                                             std::string_view directory_path,
                                             std::string_view file_pattern) {
    forEachFileMatch(pod, file_system, getSearchPattern(directory_path, file_pattern),
                     [this](const SFileMatch &match) {
                         if (findString(match.name) < 0) {
                             add(match.name);
                         }
                     });
}

// nocedit 0x004a6ed0
int CStrList::getItemCount() const {
    return static_cast<int>(strings_.size());
}

} // namespace nocturne::shape
