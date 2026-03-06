#pragma once

// Forward declarations
struct CBatman;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBatman_ptr_11536
// Points to CBatman at offset 0x2d10 in CBatman
// 32-bit pointer to CBatman
struct CBatman_ptr_11536 {
    void *_raw;
    typedef CBatman base_type;
    CBatman_ptr_11536() : _raw(0) {}
    template<typename T> CBatman_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CBatman_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CBatman* operator->() const { return (CBatman*)_raw; }
    CBatman* adj() const { return (CBatman*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

