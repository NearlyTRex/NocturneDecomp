#pragma once

// Forward declarations
struct CBiggs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBiggs_ptr_11356
// Points to CBiggs at offset 0x2c5c in CBiggs
// 32-bit pointer to CBiggs
struct CBiggs_ptr_11356 {
    void *_raw;
    typedef CBiggs base_type;
    CBiggs_ptr_11356() : _raw(0) {}
    template<typename T> CBiggs_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CBiggs_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CBiggs* operator->() const { return (CBiggs*)_raw; }
    CBiggs* adj() const { return (CBiggs*)((char*)_raw - 11356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

