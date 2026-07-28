#pragma once

// Forward declarations
struct CSpike;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSpike.h"
// Adjusted pointer: CSpike_ptr_344
// Points to CSpike at offset 0x158 in CSpike
// 32-bit pointer to CSpike
struct CSpike_ptr_344 {
    void *_raw;
    typedef CSpike base_type;
    CSpike_ptr_344() : _raw(0) {}
    template<typename T> CSpike_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CSpike_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CSpike* operator->() const { return (CSpike*)_raw; }
    CSpike* adj() const { return (CSpike*)((char*)_raw - offsetof(CSpike, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

