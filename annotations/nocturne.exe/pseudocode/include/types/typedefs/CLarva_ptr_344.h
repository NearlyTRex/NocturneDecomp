#pragma once

// Forward declarations
struct CLarva;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CLarva.h"
// Adjusted pointer: CLarva_ptr_344
// Points to CLarva at offset 0x158 in CLarva
// 32-bit pointer to CLarva
struct CLarva_ptr_344 {
    void *_raw;
    typedef CLarva base_type;
    CLarva_ptr_344() : _raw(0) {}
    template<typename T> CLarva_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CLarva_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CLarva* operator->() const { return (CLarva*)_raw; }
    CLarva* adj() const { return (CLarva*)((char*)_raw - offsetof(CLarva, base.base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

