#pragma once

// Forward declarations
struct CBatman;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBatman_ptr_13260
// Points to CBatman at offset 0x33cc in CBatman
// 32-bit pointer to CBatman
struct CBatman_ptr_13260 {
    void *_raw;
    typedef CBatman base_type;
    CBatman_ptr_13260() : _raw(0) {}
    template<typename T> CBatman_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CBatman_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CBatman* operator->() const { return (CBatman*)_raw; }
    CBatman* adj() const { return (CBatman*)((char*)_raw - 13260); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

