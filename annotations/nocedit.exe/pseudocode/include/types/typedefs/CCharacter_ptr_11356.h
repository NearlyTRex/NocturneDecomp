#pragma once

// Forward declarations
struct CCharacter;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCharacter_ptr_11356
// 32-bit pointer to CCharacter
struct CCharacter_ptr_11356 {
    void *_raw;
    CCharacter_ptr_11356() : _raw(0) {}
    template<typename T> CCharacter_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CCharacter_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CCharacter* operator->() const { return (CCharacter*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

