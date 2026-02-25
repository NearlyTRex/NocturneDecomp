#pragma once

// Forward declarations
struct CCharacter;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCharacter_ptr_12060
// Points to SFire at offset 0x2f1c in CCharacter
// 32-bit pointer to CCharacter
struct SFire;
struct CCharacter_ptr_12060 {
    void *_raw;
    typedef CCharacter base_type;
    CCharacter_ptr_12060() : _raw(0) {}
    template<typename T> CCharacter_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CCharacter_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    SFire* operator->() const { return (SFire*)_raw; }
    CCharacter* adj() const { return (CCharacter*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

