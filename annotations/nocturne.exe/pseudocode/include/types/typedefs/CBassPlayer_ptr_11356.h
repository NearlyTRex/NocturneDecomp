#pragma once

// Forward declarations
struct CBassPlayer;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBassPlayer.h"
// Adjusted pointer: CBassPlayer_ptr_11356
// Points to CBassPlayer at offset 0x2c5c in CBassPlayer
// 32-bit pointer to CBassPlayer
struct CBassPlayer_ptr_11356 {
    void *_raw;
    typedef CBassPlayer base_type;
    CBassPlayer_ptr_11356() : _raw(0) {}
    template<typename T> CBassPlayer_ptr_11356(T* p) : _raw((void*)p) {}
    template<typename T> CBassPlayer_ptr_11356& operator=(T* p) { _raw = (void*)p; return *this; }
    CBassPlayer* operator->() const { return (CBassPlayer*)_raw; }
    CBassPlayer* adj() const { return (CBassPlayer*)((char*)_raw - offsetof(CBassPlayer, base.base.collision_test_points)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

