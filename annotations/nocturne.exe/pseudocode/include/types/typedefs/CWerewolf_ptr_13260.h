#pragma once

// Forward declarations
struct CWerewolf;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CWerewolf.h"
// Adjusted pointer: CWerewolf_ptr_13260
// Points to CWerewolf at offset 0x33cc in CWerewolf
// 32-bit pointer to CWerewolf
struct CWerewolf_ptr_13260 {
    void *_raw;
    typedef CWerewolf base_type;
    CWerewolf_ptr_13260() : _raw(0) {}
    template<typename T> CWerewolf_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CWerewolf_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CWerewolf* operator->() const { return (CWerewolf*)_raw; }
    CWerewolf* adj() const { return (CWerewolf*)((char*)_raw - offsetof(CWerewolf, base.base.flames[0].base.actor_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

