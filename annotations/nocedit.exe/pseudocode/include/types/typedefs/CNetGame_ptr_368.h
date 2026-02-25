#pragma once

// Forward declarations
struct CNetGame;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CNetGame_ptr_368
// Points to CNetGame at offset 0x170 in CNetGame
// 32-bit pointer to CNetGame
struct CNetGame_ptr_368 {
    void *_raw;
    typedef CNetGame base_type;
    CNetGame_ptr_368() : _raw(0) {}
    template<typename T> CNetGame_ptr_368(T* p) : _raw((void*)p) {}
    template<typename T> CNetGame_ptr_368& operator=(T* p) { _raw = (void*)p; return *this; }
    CNetGame* operator->() const { return (CNetGame*)_raw; }
    CNetGame* adj() const { return (CNetGame*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

