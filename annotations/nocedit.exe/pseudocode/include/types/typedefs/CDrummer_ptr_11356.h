#pragma once

// Forward declarations
struct CDrummer;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDrummer_ptr_11356
// Points to CDrummer at offset 0x2c5c in CDrummer
// 32-bit pointer to CDrummer
struct CDrummer_ptr_11356 {
    void *_raw;
    typedef CDrummer base_type;
    CDrummer_ptr_11356() : _raw(0) {}
    template<typename T> CDrummer_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CDrummer_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CDrummer* operator->() const { return (CDrummer*)_raw; }
    CDrummer* adj() const { return (CDrummer*)((char*)_raw - 11356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

