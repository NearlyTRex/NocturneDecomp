#pragma once

// Forward declarations
struct CHealthItem;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHealthItem_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CHealthItem
// 32-bit pointer to CHealthItem
struct CKeyFramedModelInstance;
struct CHealthItem_ptr_344 {
    void *_raw;
    typedef CHealthItem base_type;
    CHealthItem_ptr_344() : _raw(0) {}
    template<typename T> CHealthItem_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CHealthItem_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CHealthItem* adj() const { return (CHealthItem*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

