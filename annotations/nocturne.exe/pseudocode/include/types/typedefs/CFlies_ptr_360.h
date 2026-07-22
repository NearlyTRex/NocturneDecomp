#pragma once

// Forward declarations
struct CFlies;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CFlies.h"
// Adjusted pointer: CFlies_ptr_360
// Points to SFly at offset 0x168 in CFlies
// 32-bit pointer to CFlies
struct SFly;
struct CFlies_ptr_360 {
    void *_raw;
    typedef CFlies base_type;
    CFlies_ptr_360() : _raw(0) {}
    template<typename T> CFlies_ptr_360(T* p) : _raw((void*)p) {}
    template<typename T> CFlies_ptr_360& operator=(T* p) { _raw = (void*)p; return *this; }
    SFly* operator->() const { return (SFly*)_raw; }
    CFlies* adj() const { return (CFlies*)((char*)_raw - offsetof(CFlies, flies)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

