#pragma once

// Forward declarations
struct CCryptVessel;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCryptVessel.h"
// Adjusted pointer: CCryptVessel_ptr_964
// Points to CFlame at offset 0x3c4 in CCryptVessel
// 32-bit pointer to CCryptVessel
struct CFlame;
struct CCryptVessel_ptr_964 {
    void *_raw;
    typedef CCryptVessel base_type;
    CCryptVessel_ptr_964() : _raw(0) {}
    template<typename T> CCryptVessel_ptr_964(T* p) : _raw((void*)p) {}
    template<typename T> CCryptVessel_ptr_964& operator=(T* p) { _raw = (void*)p; return *this; }
    CFlame* operator->() const { return (CFlame*)_raw; }
    CCryptVessel* adj() const { return (CCryptVessel*)((char*)_raw - offsetof(CCryptVessel, flame)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

