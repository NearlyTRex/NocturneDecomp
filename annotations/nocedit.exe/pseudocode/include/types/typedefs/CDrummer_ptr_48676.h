#pragma once

// Forward declarations
struct CDrummer;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDrummer_ptr_48676
// Points to CDrummer at offset 0xbe24 in CDrummer
// 32-bit pointer to CDrummer
struct CDrummer_ptr_48676 {
    void *_raw;
    typedef CDrummer base_type;
    CDrummer_ptr_48676() : _raw(0) {}
    template<typename T> CDrummer_ptr_48676(T* p) : _raw((void*)p) {}
    template<typename T> CDrummer_ptr_48676& operator=(T* p) { _raw = (void*)p; return *this; }
    CDrummer* operator->() const { return (CDrummer*)_raw; }
    CDrummer* adj() const { return (CDrummer*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

