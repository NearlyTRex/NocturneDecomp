#pragma once

// Forward declarations
struct CHighPriestOfGardath;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHighPriestOfGardath.h"
// Adjusted pointer: CHighPriestOfGardath_ptr_344
// Points to CHighPriestOfGardath at offset 0x158 in CHighPriestOfGardath
// 32-bit pointer to CHighPriestOfGardath
struct CHighPriestOfGardath_ptr_344 {
    void *_raw;
    typedef CHighPriestOfGardath base_type;
    CHighPriestOfGardath_ptr_344() : _raw(0) {}
    template<typename T> CHighPriestOfGardath_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CHighPriestOfGardath_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CHighPriestOfGardath* operator->() const { return (CHighPriestOfGardath*)_raw; }
    CHighPriestOfGardath* adj() const { return (CHighPriestOfGardath*)((char*)_raw - offsetof(CHighPriestOfGardath, base.base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

