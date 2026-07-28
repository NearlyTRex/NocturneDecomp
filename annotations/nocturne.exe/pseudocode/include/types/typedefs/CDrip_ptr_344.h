#pragma once

// Forward declarations
struct CDrip;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CDrip.h"
// Adjusted pointer: CDrip_ptr_344
// Points to CDrip at offset 0x158 in CDrip
// 32-bit pointer to CDrip
struct CDrip_ptr_344 {
    void *_raw;
    typedef CDrip base_type;
    CDrip_ptr_344() : _raw(0) {}
    template<typename T> CDrip_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CDrip_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CDrip* operator->() const { return (CDrip*)_raw; }
    CDrip* adj() const { return (CDrip*)((char*)_raw - offsetof(CDrip, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

