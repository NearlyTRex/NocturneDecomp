#pragma once

// Forward declarations
struct CSimBox;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CSimBox_ptr_856
// Points to CBox at offset 0x358 in CSimBox
// 32-bit pointer to CSimBox
struct CBox;
struct CSimBox_ptr_856 {
    void *_raw;
    typedef CSimBox base_type;
    CSimBox_ptr_856() : _raw(0) {}
    template<typename T> CSimBox_ptr_856(T* p) : _raw((void*)p) {}
    template<typename T> CSimBox_ptr_856& operator=(T* p) { _raw = (void*)p; return *this; }
    CBox* operator->() const { return (CBox*)_raw; }
    CSimBox* adj() const { return (CSimBox*)((char*)_raw - 856); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

