#pragma once

// Forward declarations
struct CHighPriestOfGardath;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHighPriestOfGardath_ptr_12060
// Points to CHighPriestOfGardath at offset 0x2f1c in CHighPriestOfGardath
// 32-bit pointer to CHighPriestOfGardath
struct CHighPriestOfGardath_ptr_12060 {
    void *_raw;
    typedef CHighPriestOfGardath base_type;
    CHighPriestOfGardath_ptr_12060() : _raw(0) {}
    template<typename T> CHighPriestOfGardath_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CHighPriestOfGardath_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CHighPriestOfGardath* operator->() const { return (CHighPriestOfGardath*)_raw; }
    CHighPriestOfGardath* adj() const { return (CHighPriestOfGardath*)((char*)_raw - 12060); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

