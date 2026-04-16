#pragma once

// Forward declarations
struct CCryptVessel;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCryptVessel_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CCryptVessel
// 32-bit pointer to CCryptVessel
struct CKeyFramedModelInstance;
struct CCryptVessel_ptr_344 {
    void *_raw;
    typedef CCryptVessel base_type;
    CCryptVessel_ptr_344() : _raw(0) {}
    template<typename T> CCryptVessel_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CCryptVessel_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CCryptVessel* adj() const { return (CCryptVessel*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

