#pragma once

// Forward declarations
struct CCryptVessel;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCryptVessel.h"
// Adjusted pointer: CCryptVessel_ptr_1644
// Points to CKeyFramedModelInstance at offset 0x66c in CCryptVessel
// 32-bit pointer to CCryptVessel
struct CKeyFramedModelInstance;
struct CCryptVessel_ptr_1644 {
    void *_raw;
    typedef CCryptVessel base_type;
    CCryptVessel_ptr_1644() : _raw(0) {}
    template<typename T> CCryptVessel_ptr_1644(T* p) : _raw((void*)p) {}
    template<typename T> CCryptVessel_ptr_1644& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CCryptVessel* adj() const { return (CCryptVessel*)((char*)_raw - offsetof(CCryptVessel, orb_model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

