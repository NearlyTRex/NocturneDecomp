#pragma once

// Forward declarations
struct CHostage;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CHostage.h"
// Adjusted pointer: CHostage_ptr_344
// Points to CHostage at offset 0x158 in CHostage
// 32-bit pointer to CHostage
struct CHostage_ptr_344 {
    void *_raw;
    typedef CHostage base_type;
    CHostage_ptr_344() : _raw(0) {}
    template<typename T> CHostage_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CHostage_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CHostage* operator->() const { return (CHostage*)_raw; }
    CHostage* adj() const { return (CHostage*)((char*)_raw - offsetof(CHostage, base.base.model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

