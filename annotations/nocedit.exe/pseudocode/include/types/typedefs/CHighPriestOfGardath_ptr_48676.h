#pragma once

// Forward declarations
struct CHighPriestOfGardath;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHighPriestOfGardath_ptr_48676
// Points to CHighPriestOfGardath at offset 0xbe24 in CHighPriestOfGardath
// 32-bit pointer to CHighPriestOfGardath
struct CHighPriestOfGardath_ptr_48676 {
    void *_raw;
    typedef CHighPriestOfGardath base_type;
    CHighPriestOfGardath_ptr_48676() : _raw(0) {}
    template<typename T> CHighPriestOfGardath_ptr_48676(T* p) : _raw((void*)p) {}
    template<typename T> CHighPriestOfGardath_ptr_48676& operator=(T* p) { _raw = (void*)p; return *this; }
    CHighPriestOfGardath* operator->() const { return (CHighPriestOfGardath*)_raw; }
    CHighPriestOfGardath* adj() const { return (CHighPriestOfGardath*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

