#pragma once

// Forward declarations
struct CSimBox;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CSimBox.h"
// Adjusted pointer: CSimBox_ptr_344
// Points to CSimBox at offset 0x158 in CSimBox
// 32-bit pointer to CSimBox
struct CSimBox_ptr_344 {
    void *_raw;
    typedef CSimBox base_type;
    CSimBox_ptr_344() : _raw(0) {}
    template<typename T> CSimBox_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CSimBox_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CSimBox* operator->() const { return (CSimBox*)_raw; }
    CSimBox* adj() const { return (CSimBox*)((char*)_raw - offsetof(CSimBox, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

