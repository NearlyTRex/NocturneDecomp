#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/fwd.h"

#include <cstdint>
#include <ctime>
#include <functional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::shape {

class CStrList {
public:
    // localtime: a file's time as the player's clock shows it.
    using LocalTime = std::function<std::tm(std::time_t)>;

    CStrList();
    CStrList(const CStrList &other);
    CStrList &operator=(const CStrList &other);
    virtual ~CStrList();

    virtual void remove(int start_index, int end_index);
    // Sorts the strings from start_index to end_index inclusive, ignoring case; an empty or
    // single range is left alone.
    virtual void sort(int start_index, int end_index);
    // An index outside 0 to the count is fatal.
    virtual void insert(int insert_index, std::string_view string_data);
    virtual void swap(int index1, int index2);
    virtual void clear();

    void add(std::string_view string_data);
    void sortAll();
    [[nodiscard]] const std::string &getStringAt(int index) const;
    // The string's tab-separated field, counted from 0; empty past its last.
    [[nodiscard]] std::string getFieldAt(int string_index, int field_number) const;
    // The first string equal to search_string ignoring case, or -1.
    [[nodiscard]] int findString(std::string_view search_string) const;
    // Every string onto the clipboard, each ending in a newline.
    void copyToClipboard(CEditorTools &editor_tools) const;
    // Adds a record for each file matching directory_path\file_pattern, the pods' and then the
    // disk's, in order of file name ignoring case and none twice. A record is upper case: the
    // name, the extension without its dot, the size, the local time as "MM/DD/YY HH:MM:SS AM",
    // and the pod holding the file, tab-separated.
    void populateFromFileSearch(engine::CPod *pod, platform::IFileSystem &file_system,
                                const LocalTime &local_time, std::string_view directory_path,
                                std::string_view file_pattern);
    // Adds the names of the files matching directory_path\file_pattern, the pods' and then the
    // disk's, leaving out any already listed.
    void populateFromFilesNoDuplicates(engine::CPod *pod, platform::IFileSystem &file_system,
                                       std::string_view directory_path,
                                       std::string_view file_pattern);
    [[nodiscard]] int getItemCount() const;

private:
    void insertSortedFileRecord(std::string_view file_name, std::string_view pod_path,
                                std::int64_t file_size, std::time_t timestamp,
                                const LocalTime &local_time);

    std::vector<std::string> strings_;
};

} // namespace nocturne::shape
