#pragma once

// Forward declarations
struct CCharacter;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCharacter.h"
// Adjusted pointer: CCharacter_ptr_344
// Points to CDeformableModelInstance at offset 0x158 in CCharacter
// 32-bit pointer to CCharacter
struct CDeformableModelInstance;
struct CCharacter_ptr_344 {
    void *_raw;
    typedef CCharacter base_type;
    CCharacter_ptr_344() : _raw(0) {}
    template<typename T> CCharacter_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CCharacter_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CDeformableModelInstance* operator->() const { return (CDeformableModelInstance*)_raw; }
    CCharacter* adj() const { return (CCharacter*)((char*)_raw - offsetof(CCharacter, model)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

