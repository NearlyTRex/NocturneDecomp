#pragma once

// Forward declarations
struct CHighPriestOfGardath;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHighPriestOfGardath.h"
// Adjusted pointer: CHighPriestOfGardath_ptr_11356
// Points to CHighPriestOfGardath at offset 0x2c5c in CHighPriestOfGardath
// 32-bit pointer to CHighPriestOfGardath
struct CHighPriestOfGardath_ptr_11356 {
    void *_raw;
    typedef CHighPriestOfGardath base_type;
    CHighPriestOfGardath_ptr_11356() : _raw(0) {}
    template<typename T> CHighPriestOfGardath_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CHighPriestOfGardath_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CHighPriestOfGardath* operator->() const { return (CHighPriestOfGardath*)_raw; }
    CHighPriestOfGardath* adj() const { return (CHighPriestOfGardath*)((char*)_raw - offsetof(CHighPriestOfGardath, base.base.collision_test_points[0].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

