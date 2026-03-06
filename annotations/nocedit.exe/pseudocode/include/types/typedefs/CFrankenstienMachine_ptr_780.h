#pragma once

// Forward declarations
struct CFrankenstienMachine;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CFrankenstienMachine_ptr_780
// Points to CKeyFramedModelInstance at offset 0x30c in CFrankenstienMachine
// 32-bit pointer to CFrankenstienMachine
struct CKeyFramedModelInstance;
struct CFrankenstienMachine_ptr_780 {
    void *_raw;
    typedef CFrankenstienMachine base_type;
    CFrankenstienMachine_ptr_780() : _raw(0) {}
    template<typename T> CFrankenstienMachine_ptr_780(T* p) : _raw((void*)p) {}
    template<typename T> CFrankenstienMachine_ptr_780& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CFrankenstienMachine* adj() const { return (CFrankenstienMachine*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

