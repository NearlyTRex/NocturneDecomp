#pragma once

// Forward declarations
struct CHighPriestOfGardath;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHighPriestOfGardath.h"
// Adjusted pointer: CHighPriestOfGardath_ptr_10900
// Points to CHighPriestOfGardath at offset 0x2a94 in CHighPriestOfGardath
// 32-bit pointer to CHighPriestOfGardath
struct CHighPriestOfGardath_ptr_10900 {
    void *_raw;
    typedef CHighPriestOfGardath base_type;
    CHighPriestOfGardath_ptr_10900() : _raw(0) {}
    template<typename T> CHighPriestOfGardath_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CHighPriestOfGardath_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CHighPriestOfGardath* operator->() const { return (CHighPriestOfGardath*)_raw; }
    CHighPriestOfGardath* adj() const { return (CHighPriestOfGardath*)((char*)_raw - offsetof(CHighPriestOfGardath, base.base.cloth_list.filenames[0][4])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

