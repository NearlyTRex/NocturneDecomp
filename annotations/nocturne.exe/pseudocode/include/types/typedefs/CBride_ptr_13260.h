#pragma once

// Forward declarations
struct CBride;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBride.h"
// Adjusted pointer: CBride_ptr_13260
// Points to CBride at offset 0x33cc in CBride
// 32-bit pointer to CBride
struct CBride_ptr_13260 {
    void *_raw;
    typedef CBride base_type;
    CBride_ptr_13260() : _raw(0) {}
    template<typename T> CBride_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CBride_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CBride* operator->() const { return (CBride*)_raw; }
    CBride* adj() const { return (CBride*)((char*)_raw - offsetof(CBride, base.base.flames)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

