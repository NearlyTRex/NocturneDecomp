#pragma once

// Forward declarations
struct CZombieCow;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CZombieCow.h"
// Adjusted pointer: CZombieCow_ptr_10900
// Points to CZombieCow at offset 0x2a94 in CZombieCow
// 32-bit pointer to CZombieCow
struct CZombieCow_ptr_10900 {
    void *_raw;
    typedef CZombieCow base_type;
    CZombieCow_ptr_10900() : _raw(0) {}
    template<typename T> CZombieCow_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CZombieCow_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CZombieCow* operator->() const { return (CZombieCow*)_raw; }
    CZombieCow* adj() const { return (CZombieCow*)((char*)_raw - offsetof(CZombieCow, base.base.cloth_list.filenames[0][4])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

