#pragma once

// Forward declarations
struct CBugs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBugs_ptr_74440
// 32-bit pointer to CBugs
struct CBugs_ptr_74440 {
    void *_raw;
    CBugs_ptr_74440() : _raw(0) {}
    template<typename T> CBugs_ptr_74440(T* p) : _raw((void*)p) {}
    template<typename T> CBugs_ptr_74440& operator=(T* p) { _raw = (void*)p; return *this; }
    CBugs* operator->() const { return (CBugs*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

