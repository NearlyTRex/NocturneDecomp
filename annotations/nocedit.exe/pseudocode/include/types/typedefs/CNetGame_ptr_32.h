#pragma once

// Forward declarations
struct CNetGame;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CNetGame_ptr_32
// 32-bit pointer to CNetGame
struct CNetGame_ptr_32 {
    void *_raw;
    CNetGame_ptr_32() : _raw(0) {}
    template<typename T> CNetGame_ptr_32(T* p) : _raw((void*)p) {}
    template<typename T> CNetGame_ptr_32& operator=(T* p) { _raw = (void*)p; return *this; }
    CNetGame* operator->() const { return (CNetGame*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

