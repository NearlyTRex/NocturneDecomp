#pragma once

// Forward declarations
struct CBoneGuy;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBoneGuy_ptr_12060
// Points to CBoneGuy at offset 0x2f1c in CBoneGuy
// 32-bit pointer to CBoneGuy
struct CBoneGuy_ptr_12060 {
    void *_raw;
    typedef CBoneGuy base_type;
    CBoneGuy_ptr_12060() : _raw(0) {}
    template<typename T> CBoneGuy_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CBoneGuy_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CBoneGuy* operator->() const { return (CBoneGuy*)_raw; }
    CBoneGuy* adj() const { return (CBoneGuy*)((char*)_raw - 12060); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

