#pragma once

// Forward declarations
struct CConveyor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CConveyor_ptr_784
// Points to CConveyor at offset 0x310 in CConveyor
// 32-bit pointer to CConveyor
struct CConveyor_ptr_784 {
    void *_raw;
    typedef CConveyor base_type;
    CConveyor_ptr_784() : _raw(0) {}
    template<typename T> CConveyor_ptr_784(T* p) : _raw((void*)p) {}
    template<typename T> CConveyor_ptr_784& operator=(T* p) { _raw = (void*)p; return *this; }
    CConveyor* operator->() const { return (CConveyor*)_raw; }
    CConveyor* adj() const { return (CConveyor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

