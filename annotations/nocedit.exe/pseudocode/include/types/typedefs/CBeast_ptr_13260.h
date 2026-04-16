#pragma once

// Forward declarations
struct CBeast;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBeast_ptr_13260
// Points to CBeast at offset 0x33cc in CBeast
// 32-bit pointer to CBeast
struct CBeast_ptr_13260 {
    void *_raw;
    typedef CBeast base_type;
    CBeast_ptr_13260() : _raw(0) {}
    template<typename T> CBeast_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CBeast_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CBeast* operator->() const { return (CBeast*)_raw; }
    CBeast* adj() const { return (CBeast*)((char*)_raw - 13260); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

