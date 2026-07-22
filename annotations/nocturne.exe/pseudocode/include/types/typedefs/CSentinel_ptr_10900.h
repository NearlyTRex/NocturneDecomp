#pragma once

// Forward declarations
struct CSentinel;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSentinel.h"
// Adjusted pointer: CSentinel_ptr_10900
// Points to CSentinel at offset 0x2a94 in CSentinel
// 32-bit pointer to CSentinel
struct CSentinel_ptr_10900 {
    void *_raw;
    typedef CSentinel base_type;
    CSentinel_ptr_10900() : _raw(0) {}
    template<typename T> CSentinel_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CSentinel_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CSentinel* operator->() const { return (CSentinel*)_raw; }
    CSentinel* adj() const { return (CSentinel*)((char*)_raw - offsetof(CSentinel, base.base.cloth_list)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

