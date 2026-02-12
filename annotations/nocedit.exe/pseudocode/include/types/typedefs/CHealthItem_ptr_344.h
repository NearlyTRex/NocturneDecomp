#pragma once

// Forward declarations
struct CHealthItem;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHealthItem_ptr_344
// 32-bit pointer to CHealthItem
struct CHealthItem_ptr_344 {
    void *_raw;
    CHealthItem_ptr_344() : _raw(0) {}
    template<typename T> CHealthItem_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CHealthItem_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CHealthItem* operator->() const { return (CHealthItem*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

