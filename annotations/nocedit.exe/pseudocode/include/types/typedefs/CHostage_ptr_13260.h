#pragma once

// Forward declarations
struct CHostage;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHostage_ptr_13260
// Points to CHostage at offset 0x33cc in CHostage
// 32-bit pointer to CHostage
struct CHostage_ptr_13260 {
    void *_raw;
    typedef CHostage base_type;
    CHostage_ptr_13260() : _raw(0) {}
    template<typename T> CHostage_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CHostage_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CHostage* operator->() const { return (CHostage*)_raw; }
    CHostage* adj() const { return (CHostage*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

