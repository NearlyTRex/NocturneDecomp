#pragma once

// Forward declarations
struct CCharacter;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCharacter.h"
// Adjusted pointer: CCharacter_ptr_12060
// Points to CCharacter at offset 0x2f1c in CCharacter
// 32-bit pointer to CCharacter
struct CCharacter_ptr_12060 {
    void *_raw;
    typedef CCharacter base_type;
    CCharacter_ptr_12060() : _raw(0) {}
    template<typename T> CCharacter_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CCharacter_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CCharacter* operator->() const { return (CCharacter*)_raw; }
    CCharacter* adj() const { return (CCharacter*)((char*)_raw - offsetof(CCharacter, fires[0].offset)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

