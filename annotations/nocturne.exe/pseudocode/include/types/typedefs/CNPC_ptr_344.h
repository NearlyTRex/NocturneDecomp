#pragma once

// Forward declarations
struct CNPC;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CNPC.h"
// Adjusted pointer: CNPC_ptr_344
// Points to CNPC at offset 0x158 in CNPC
// 32-bit pointer to CNPC
struct CNPC_ptr_344 {
    void *_raw;
    typedef CNPC base_type;
    CNPC_ptr_344() : _raw(0) {}
    template<typename T> CNPC_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CNPC_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CNPC* operator->() const { return (CNPC*)_raw; }
    CNPC* adj() const { return (CNPC*)((char*)_raw - offsetof(CNPC, base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

