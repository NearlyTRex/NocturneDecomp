#pragma once

// Forward declarations
struct CBatman;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBatman_ptr_11356
// Points to CBatman at offset 0x2c5c in CBatman
// 32-bit pointer to CBatman
struct CBatman_ptr_11356 {
    void *_raw;
    typedef CBatman base_type;
    CBatman_ptr_11356() : _raw(0) {}
    template<typename T> CBatman_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CBatman_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CBatman* operator->() const { return (CBatman*)_raw; }
    CBatman* adj() const { return (CBatman*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

