#pragma once

// Forward declarations
struct CNetGame;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CNetGame.h"
// Adjusted pointer: CNetGame_ptr_32
// Points to SNetPlayer at offset 0x20 in CNetGame
// 32-bit pointer to CNetGame
struct SNetPlayer;
struct CNetGame_ptr_32 {
    void *_raw;
    typedef CNetGame base_type;
    CNetGame_ptr_32() : _raw(0) {}
    template<typename T> CNetGame_ptr_32(T* p) : _raw((void*)p) {}
    template<typename T> CNetGame_ptr_32& operator=(T* p) { _raw = (void*)p; return *this; }
    SNetPlayer* operator->() const { return (SNetPlayer*)_raw; }
    CNetGame* adj() const { return (CNetGame*)((char*)_raw - offsetof(CNetGame, players)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

