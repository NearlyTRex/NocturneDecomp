#pragma once

// Forward declarations
struct CHotDemon;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHotDemon.h"
// Adjusted pointer: CHotDemon_ptr_344
// Points to CHotDemon at offset 0x158 in CHotDemon
// 32-bit pointer to CHotDemon
struct CHotDemon_ptr_344 {
    void *_raw;
    typedef CHotDemon base_type;
    CHotDemon_ptr_344() : _raw(0) {}
    template<typename T> CHotDemon_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CHotDemon_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CHotDemon* operator->() const { return (CHotDemon*)_raw; }
    CHotDemon* adj() const { return (CHotDemon*)((char*)_raw - offsetof(CHotDemon, base.base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

