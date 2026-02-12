#pragma once

// Forward declarations
struct CBoneGuy;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBoneGuy_ptr_48956
// 32-bit pointer to CBoneGuy
struct CBoneGuy_ptr_48956 {
    void *_raw;
    CBoneGuy_ptr_48956() : _raw(0) {}
    template<typename T> CBoneGuy_ptr_48956(T* p) : _raw((void*)p) {}
    template<typename T> CBoneGuy_ptr_48956& operator=(T* p) { _raw = (void*)p; return *this; }
    CBoneGuy* operator->() const { return (CBoneGuy*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

