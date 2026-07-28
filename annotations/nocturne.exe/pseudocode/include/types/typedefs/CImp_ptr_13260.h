#pragma once

// Forward declarations
struct CImp;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CImp.h"
// Adjusted pointer: CImp_ptr_13260
// Points to CImp at offset 0x33cc in CImp
// 32-bit pointer to CImp
struct CImp_ptr_13260 {
    void *_raw;
    typedef CImp base_type;
    CImp_ptr_13260() : _raw(0) {}
    template<typename T> CImp_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CImp_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CImp* operator->() const { return (CImp*)_raw; }
    CImp* adj() const { return (CImp*)((char*)_raw - offsetof(CImp, base.base.flames[0].base.actor_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

