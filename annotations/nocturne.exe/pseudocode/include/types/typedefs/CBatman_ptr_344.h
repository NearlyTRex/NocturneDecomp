#pragma once

// Forward declarations
struct CBatman;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBatman.h"
// Adjusted pointer: CBatman_ptr_344
// Points to CBatman at offset 0x158 in CBatman
// 32-bit pointer to CBatman
struct CBatman_ptr_344 {
    void *_raw;
    typedef CBatman base_type;
    CBatman_ptr_344() : _raw(0) {}
    template<typename T> CBatman_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBatman_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CBatman* operator->() const { return (CBatman*)_raw; }
    CBatman* adj() const { return (CBatman*)((char*)_raw - offsetof(CBatman, base.base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

