#pragma once

// Forward declarations
struct CStake;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CStake_ptr_4
// Points to CBox at offset 0x4 in CStake
// 32-bit pointer to CStake
struct CBox;
struct CStake_ptr_4 {
    void *_raw;
    typedef CStake base_type;
    CStake_ptr_4() : _raw(0) {}
    template<typename T> CStake_ptr_4(T* p) : _raw((void*)p) {}
    template<typename T> CStake_ptr_4& operator=(T* p) { _raw = (void*)p; return *this; }
    CBox* operator->() const { return (CBox*)_raw; }
    CStake* adj() const { return (CStake*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

