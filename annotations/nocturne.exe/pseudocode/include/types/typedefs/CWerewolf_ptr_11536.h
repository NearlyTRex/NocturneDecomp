#pragma once

// Forward declarations
struct CWerewolf;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CWerewolf.h"
// Adjusted pointer: CWerewolf_ptr_11536
// Points to CWerewolf at offset 0x2d10 in CWerewolf
// 32-bit pointer to CWerewolf
struct CWerewolf_ptr_11536 {
    void *_raw;
    typedef CWerewolf base_type;
    CWerewolf_ptr_11536() : _raw(0) {}
    template<typename T> CWerewolf_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CWerewolf_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CWerewolf* operator->() const { return (CWerewolf*)_raw; }
    CWerewolf* adj() const { return (CWerewolf*)((char*)_raw - offsetof(CWerewolf, base.base.collision_test_normals[0].z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

