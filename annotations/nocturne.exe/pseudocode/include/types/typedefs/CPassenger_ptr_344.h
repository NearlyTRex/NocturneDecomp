#pragma once

// Forward declarations
struct CPassenger;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CPassenger.h"
// Adjusted pointer: CPassenger_ptr_344
// Points to CPassenger at offset 0x158 in CPassenger
// 32-bit pointer to CPassenger
struct CPassenger_ptr_344 {
    void *_raw;
    typedef CPassenger base_type;
    CPassenger_ptr_344() : _raw(0) {}
    template<typename T> CPassenger_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CPassenger_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CPassenger* operator->() const { return (CPassenger*)_raw; }
    CPassenger* adj() const { return (CPassenger*)((char*)_raw - offsetof(CPassenger, base.base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

