#pragma once

// Forward declarations
struct CBugs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBugs_ptr_12060
// Points to CBugs at offset 0x2f1c in CBugs
// 32-bit pointer to CBugs
struct CBugs_ptr_12060 {
    void *_raw;
    typedef CBugs base_type;
    CBugs_ptr_12060() : _raw(0) {}
    template<typename T> CBugs_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CBugs_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CBugs* operator->() const { return (CBugs*)_raw; }
    CBugs* adj() const { return (CBugs*)((char*)_raw - 12060); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

