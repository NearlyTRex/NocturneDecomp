#pragma once

// Forward declarations
struct CDrummer;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CDrummer.h"
// Adjusted pointer: CDrummer_ptr_344
// Points to CDrummer at offset 0x158 in CDrummer
// 32-bit pointer to CDrummer
struct CDrummer_ptr_344 {
    void *_raw;
    typedef CDrummer base_type;
    CDrummer_ptr_344() : _raw(0) {}
    template<typename T> CDrummer_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CDrummer_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CDrummer* operator->() const { return (CDrummer*)_raw; }
    CDrummer* adj() const { return (CDrummer*)((char*)_raw - offsetof(CDrummer, base.base.model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

