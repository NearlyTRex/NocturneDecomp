#pragma once

#include "shape/fwd.h"

namespace nocturne::shape {

class CStrList {
public:
    CStrList();
    CStrList(const CStrList &other);
    CStrList &operator=(const CStrList &other);
    virtual ~CStrList();

    virtual void remove(int start_index, int end_index);
    virtual void sort(int sort_type, int sort_order);
    virtual void insert(int insert_index, char *string_data);
    virtual void swap(int index1, int index2);
    virtual void clear();

    void add(char *string_data);
    void sortAll();
    char *getStringAt(int index);
    void getFieldAt(char *output_buffer, int string_index, int field_number);
    int findString(char *search_string);
    void copyToClipboard();
    void populateFromFileSearch(char *directory_path, char *file_pattern);
    void populateFromFilesNoDuplicates(char *directory_path, char *file_pattern);
    int getItemCount();
};

} // namespace nocturne::shape
