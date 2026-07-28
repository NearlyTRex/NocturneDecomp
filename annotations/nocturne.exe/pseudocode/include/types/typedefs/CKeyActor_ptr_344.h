#pragma once

// Forward declarations
struct CKeyActor;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CKeyActor.h"
// Adjusted pointer: CKeyActor_ptr_344
// Points to CKeyActor at offset 0x158 in CKeyActor
// 32-bit pointer to CKeyActor
struct CKeyActor_ptr_344 {
    void *_raw;
    typedef CKeyActor base_type;
    CKeyActor_ptr_344() : _raw(0) {}
    template<typename T> CKeyActor_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CKeyActor_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyActor* operator->() const { return (CKeyActor*)_raw; }
    CKeyActor* adj() const { return (CKeyActor*)((char*)_raw - offsetof(CKeyActor, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

