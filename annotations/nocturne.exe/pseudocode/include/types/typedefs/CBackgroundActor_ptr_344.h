#pragma once

// Forward declarations
struct CBackgroundActor;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBackgroundActor.h"
// Adjusted pointer: CBackgroundActor_ptr_344
// Points to CBackgroundActor at offset 0x158 in CBackgroundActor
// 32-bit pointer to CBackgroundActor
struct CBackgroundActor_ptr_344 {
    void *_raw;
    typedef CBackgroundActor base_type;
    CBackgroundActor_ptr_344() : _raw(0) {}
    template<typename T> CBackgroundActor_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CBackgroundActor_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CBackgroundActor* operator->() const { return (CBackgroundActor*)_raw; }
    CBackgroundActor* adj() const { return (CBackgroundActor*)((char*)_raw - offsetof(CBackgroundActor, model.part_visibility_flags[2])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

