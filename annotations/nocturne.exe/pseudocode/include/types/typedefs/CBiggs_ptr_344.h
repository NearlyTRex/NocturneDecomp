#pragma once

// Forward declarations
struct CBiggs;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBiggs.h"
// Adjusted pointer: CBiggs_ptr_344
// Points to CBiggs at offset 0x158 in CBiggs
// 32-bit pointer to CBiggs
struct CBiggs_ptr_344 {
    void *_raw;
    typedef CBiggs base_type;
    CBiggs_ptr_344() : _raw(0) {}
    template<typename T> CBiggs_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBiggs_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CBiggs* operator->() const { return (CBiggs*)_raw; }
    CBiggs* adj() const { return (CBiggs*)((char*)_raw - offsetof(CBiggs, base.base.model.motion_controller.current_frame_number)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

