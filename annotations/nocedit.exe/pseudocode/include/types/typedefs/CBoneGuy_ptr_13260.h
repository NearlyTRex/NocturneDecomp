#pragma once

// Forward declarations
struct CBoneGuy;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBoneGuy_ptr_13260
// Points to CBoneGuy at offset 0x33cc in CBoneGuy
// 32-bit pointer to CBoneGuy
struct CBoneGuy_ptr_13260 {
    void *_raw;
    typedef CBoneGuy base_type;
    CBoneGuy_ptr_13260() : _raw(0) {}
    template<typename T> CBoneGuy_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CBoneGuy_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CBoneGuy* operator->() const { return (CBoneGuy*)_raw; }
    CBoneGuy* adj() const { return (CBoneGuy*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

