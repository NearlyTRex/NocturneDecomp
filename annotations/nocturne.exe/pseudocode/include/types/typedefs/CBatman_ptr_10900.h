#pragma once

// Forward declarations
struct CBatman;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBatman.h"
// Adjusted pointer: CBatman_ptr_10900
// Points to CBatman at offset 0x2a94 in CBatman
// 32-bit pointer to CBatman
struct CBatman_ptr_10900 {
    void *_raw;
    typedef CBatman base_type;
    CBatman_ptr_10900() : _raw(0) {}
    template<typename T> CBatman_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CBatman_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CBatman* operator->() const { return (CBatman*)_raw; }
    CBatman* adj() const { return (CBatman*)((char*)_raw - offsetof(CBatman, base.base.cloth_list)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

