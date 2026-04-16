#pragma once

// Forward declarations
struct CWaterActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CWaterActor_ptr_668
// Points to SWaterVertex at offset 0x29c in CWaterActor
// 32-bit pointer to CWaterActor
struct SWaterVertex;
struct CWaterActor_ptr_668 {
    void *_raw;
    typedef CWaterActor base_type;
    CWaterActor_ptr_668() : _raw(0) {}
    template<typename T> CWaterActor_ptr_668(T* p) : _raw((void*)p) {}
    template<typename T> CWaterActor_ptr_668& operator=(T* p) { _raw = (void*)p; return *this; }
    SWaterVertex* operator->() const { return (SWaterVertex*)_raw; }
    CWaterActor* adj() const { return (CWaterActor*)((char*)_raw - 668); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

