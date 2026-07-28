#pragma once

// Forward declarations
struct CBugs;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBugs.h"
// Adjusted pointer: CBugs_ptr_10900
// Points to CBugs at offset 0x2a94 in CBugs
// 32-bit pointer to CBugs
struct CBugs_ptr_10900 {
    void *_raw;
    typedef CBugs base_type;
    CBugs_ptr_10900() : _raw(0) {}
    template<typename T> CBugs_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CBugs_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CBugs* operator->() const { return (CBugs*)_raw; }
    CBugs* adj() const { return (CBugs*)((char*)_raw - offsetof(CBugs, base.base.cloth_list.filenames[0][4])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

