#pragma once

// Forward declarations
struct CCharacter;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCharacter_ptr_10900
// Points to CClothList at offset 0x2a94 in CCharacter
// 32-bit pointer to CCharacter
struct CClothList;
struct CCharacter_ptr_10900 {
    void *_raw;
    typedef CCharacter base_type;
    CCharacter_ptr_10900() : _raw(0) {}
    template<typename T> CCharacter_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CCharacter_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CClothList* operator->() const { return (CClothList*)_raw; }
    CCharacter* adj() const { return (CCharacter*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

