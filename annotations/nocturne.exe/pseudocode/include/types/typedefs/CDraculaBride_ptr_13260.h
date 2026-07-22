#pragma once

// Forward declarations
struct CDraculaBride;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CDraculaBride.h"
// Adjusted pointer: CDraculaBride_ptr_13260
// Points to CDraculaBride at offset 0x33cc in CDraculaBride
// 32-bit pointer to CDraculaBride
struct CDraculaBride_ptr_13260 {
    void *_raw;
    typedef CDraculaBride base_type;
    CDraculaBride_ptr_13260() : _raw(0) {}
    template<typename T> CDraculaBride_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CDraculaBride_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CDraculaBride* operator->() const { return (CDraculaBride*)_raw; }
    CDraculaBride* adj() const { return (CDraculaBride*)((char*)_raw - offsetof(CDraculaBride, base.base.flames)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

