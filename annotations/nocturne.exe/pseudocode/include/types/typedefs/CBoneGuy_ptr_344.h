#pragma once

// Forward declarations
struct CBoneGuy;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBoneGuy.h"
// Adjusted pointer: CBoneGuy_ptr_344
// Points to CBoneGuy at offset 0x158 in CBoneGuy
// 32-bit pointer to CBoneGuy
struct CBoneGuy_ptr_344 {
    void *_raw;
    typedef CBoneGuy base_type;
    CBoneGuy_ptr_344() : _raw(0) {}
    template<typename T> CBoneGuy_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBoneGuy_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CBoneGuy* operator->() const { return (CBoneGuy*)_raw; }
    CBoneGuy* adj() const { return (CBoneGuy*)((char*)_raw - offsetof(CBoneGuy, base.base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

