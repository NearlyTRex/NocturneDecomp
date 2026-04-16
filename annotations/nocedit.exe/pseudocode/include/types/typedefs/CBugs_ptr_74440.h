#pragma once

// Forward declarations
struct CBugs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBugs_ptr_74440
// Points to CKeyFramedModelInstance at offset 0x122c8 in CBugs
// 32-bit pointer to CBugs
struct CKeyFramedModelInstance;
struct CBugs_ptr_74440 {
    void *_raw;
    typedef CBugs base_type;
    CBugs_ptr_74440() : _raw(0) {}
    template<typename T> CBugs_ptr_74440(T* p) : _raw((void*)p) {}
    template<typename T> CBugs_ptr_74440& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CBugs* adj() const { return (CBugs*)((char*)_raw - 74440); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

