#pragma once

// Forward declarations
struct CScript;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CScript_ptr_56
// 32-bit pointer to CScript
struct CScript_ptr_56 {
    void *_raw;
    CScript_ptr_56() : _raw(0) {}
    template<typename T> CScript_ptr_56(T* p) : _raw((void*)p) {}
    template<typename T> CScript_ptr_56& operator=(T* p) { _raw = (void*)p; return *this; }
    CScript* operator->() const { return (CScript*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

