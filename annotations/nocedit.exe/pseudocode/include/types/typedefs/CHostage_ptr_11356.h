#pragma once

// Forward declarations
struct CHostage;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CHostage_ptr_11356
// Points to CHostage at offset 0x2c5c in CHostage
// 32-bit pointer to CHostage
struct CHostage_ptr_11356 {
    void *_raw;
    typedef CHostage base_type;
    CHostage_ptr_11356() : _raw(0) {}
    template<typename T> CHostage_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CHostage_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CHostage* operator->() const { return (CHostage*)_raw; }
    CHostage* adj() const { return (CHostage*)((char*)_raw - 11356); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

