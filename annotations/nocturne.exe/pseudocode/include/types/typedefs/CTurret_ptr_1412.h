#pragma once

// Forward declarations
struct CTurret;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CTurret.h"
// Adjusted pointer: CTurret_ptr_1412
// Points to CTurret at offset 0x584 in CTurret
// 32-bit pointer to CTurret
struct CTurret_ptr_1412 {
    void *_raw;
    typedef CTurret base_type;
    CTurret_ptr_1412() : _raw(0) {}
    template<typename T> CTurret_ptr_1412(T* p) : _raw((void*)p) {}
    template<typename T> CTurret_ptr_1412& operator=(T* p) { _raw = (void*)p; return *this; }
    CTurret* operator->() const { return (CTurret*)_raw; }
    CTurret* adj() const { return (CTurret*)((char*)_raw - offsetof(CTurret, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

