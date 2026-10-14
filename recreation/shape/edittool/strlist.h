#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/fwd.h"

#include <string>
#include <string_view>
#include <vector>

namespace nocturne::shape {

class CStrList {
public:
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
    void getFieldAt(char *output_buffer, int string_index, int field_number);
    // The first string equal to search_string ignoring case, or -1.
    [[nodiscard]] int findString(std::string_view search_string) const;
    void copyToClipboard();
    void populateFromFileSearch(char *directory_path, char *file_pattern);
    // Adds the names of the files matching directory_path\file_pattern, the pods' and then the
    // disk's, leaving out any already listed.
    void populateFromFilesNoDuplicates(engine::CPod *pod, platform::IFileSystem &file_system,
                                       std::string_view directory_path,
                                       std::string_view file_pattern);
    [[nodiscard]] int getItemCount() const;

private:
    std::vector<std::string> strings_;
};

} // namespace nocturne::shape
