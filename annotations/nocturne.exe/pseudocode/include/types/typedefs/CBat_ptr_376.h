#pragma once

// Forward declarations
struct CBat;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBat.h"
// Adjusted pointer: CBat_ptr_376
// Points to CCourse at offset 0x178 in CBat
// 32-bit pointer to CBat
struct CCourse;
struct CBat_ptr_376 {
    void *_raw;
    typedef CBat base_type;
    CBat_ptr_376() : _raw(0) {}
    template<typename T> CBat_ptr_376(T* p) : _raw((void*)p) {}
    template<typename T> CBat_ptr_376& operator=(T* p) { _raw = (void*)p; return *this; }
    CCourse* operator->() const { return (CCourse*)_raw; }
    CBat* adj() const { return (CBat*)((char*)_raw - offsetof(CBat, course)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

