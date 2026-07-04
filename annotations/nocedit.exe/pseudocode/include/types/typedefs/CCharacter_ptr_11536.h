#pragma once

// Forward declarations
struct CCharacter;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCharacter.h"
// Adjusted pointer: CCharacter_ptr_11536
// Points to CVector3f at offset 0x2d10 in CCharacter
// 32-bit pointer to CCharacter
struct CVector3f;
struct CCharacter_ptr_11536 {
    void *_raw;
    typedef CCharacter base_type;
    CCharacter_ptr_11536() : _raw(0) {}
    template<typename T> CCharacter_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CCharacter_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CVector3f* operator->() const { return (CVector3f*)_raw; }
    CCharacter* adj() const { return (CCharacter*)((char*)_raw - offsetof(CCharacter, collision_test_normals)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

