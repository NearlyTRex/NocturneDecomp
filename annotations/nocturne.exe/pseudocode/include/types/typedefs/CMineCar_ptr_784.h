#pragma once

// Forward declarations
struct CMineCar;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CMineCar.h"
// Adjusted pointer: CMineCar_ptr_784
// Points to CMineCar at offset 0x310 in CMineCar
// 32-bit pointer to CMineCar
struct CMineCar_ptr_784 {
    void *_raw;
    typedef CMineCar base_type;
    CMineCar_ptr_784() : _raw(0) {}
    template<typename T> CMineCar_ptr_784(T* p) : _raw((void*)p) {}
    template<typename T> CMineCar_ptr_784& operator=(T* p) { _raw = (void*)p; return *this; }
    CMineCar* operator->() const { return (CMineCar*)_raw; }
    CMineCar* adj() const { return (CMineCar*)((char*)_raw - offsetof(CMineCar, base.course.loop)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

