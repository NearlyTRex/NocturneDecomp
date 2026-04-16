#pragma once

// Forward declarations
struct CBugs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBugs_ptr_48836
// Points to SBug at offset 0xbec4 in CBugs
// 32-bit pointer to CBugs
struct SBug;
struct CBugs_ptr_48836 {
    void *_raw;
    typedef CBugs base_type;
    CBugs_ptr_48836() : _raw(0) {}
    template<typename T> CBugs_ptr_48836(T* p) : _raw((void*)p) {}
    template<typename T> CBugs_ptr_48836& operator=(T* p) { _raw = (void*)p; return *this; }
    SBug* operator->() const { return (SBug*)_raw; }
    CBugs* adj() const { return (CBugs*)((char*)_raw - 48836); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

