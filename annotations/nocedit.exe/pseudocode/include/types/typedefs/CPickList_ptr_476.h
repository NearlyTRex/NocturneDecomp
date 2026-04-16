#pragma once

// Forward declarations
struct CPickList;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CPickList_ptr_476
// Points to CEdButton at offset 0x1dc in CPickList
// 32-bit pointer to CPickList
struct CEdButton;
struct CPickList_ptr_476 {
    void *_raw;
    typedef CPickList base_type;
    CPickList_ptr_476() : _raw(0) {}
    template<typename T> CPickList_ptr_476(T* p) : _raw((void*)p) {}
    template<typename T> CPickList_ptr_476& operator=(T* p) { _raw = (void*)p; return *this; }
    CEdButton* operator->() const { return (CEdButton*)_raw; }
    CPickList* adj() const { return (CPickList*)((char*)_raw - 476); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

