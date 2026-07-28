#pragma once

// Forward declarations
struct CWaterActor;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CWaterActor.h"
// Adjusted pointer: CWaterActor_ptr_668
// Points to CWaterActor at offset 0x29c in CWaterActor
// 32-bit pointer to CWaterActor
struct CWaterActor_ptr_668 {
    void *_raw;
    typedef CWaterActor base_type;
    CWaterActor_ptr_668() : _raw(0) {}
    template<typename T> CWaterActor_ptr_668(T* p) : _raw((void*)p) {}
    template<typename T> CWaterActor_ptr_668& operator=(T* p) { _raw = (void*)p; return *this; }
    CWaterActor* operator->() const { return (CWaterActor*)_raw; }
    CWaterActor* adj() const { return (CWaterActor*)((char*)_raw - offsetof(CWaterActor, vertices[0].local_position.z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

