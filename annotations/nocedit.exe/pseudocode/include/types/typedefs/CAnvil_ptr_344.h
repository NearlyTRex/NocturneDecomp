#pragma once

// Forward declarations
struct CAnvil;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CAnvil.h"
// Adjusted pointer: CAnvil_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CAnvil
// 32-bit pointer to CAnvil
struct CKeyFramedModelInstance;
struct CAnvil_ptr_344 {
    void *_raw;
    typedef CAnvil base_type;
    CAnvil_ptr_344() : _raw(0) {}
    template<typename T> CAnvil_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CAnvil_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CAnvil* adj() const { return (CAnvil*)((char*)_raw - offsetof(CAnvil, model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

