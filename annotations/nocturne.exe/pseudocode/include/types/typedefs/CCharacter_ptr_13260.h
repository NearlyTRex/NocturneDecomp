#pragma once

// Forward declarations
struct CCharacter;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCharacter.h"
// Adjusted pointer: CCharacter_ptr_13260
// Points to CCharacter at offset 0x33cc in CCharacter
// 32-bit pointer to CCharacter
struct CCharacter_ptr_13260 {
    void *_raw;
    typedef CCharacter base_type;
    CCharacter_ptr_13260() : _raw(0) {}
    template<typename T> CCharacter_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CCharacter_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CCharacter* operator->() const { return (CCharacter*)_raw; }
    CCharacter* adj() const { return (CCharacter*)((char*)_raw - offsetof(CCharacter, flames[0].base.actor_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

