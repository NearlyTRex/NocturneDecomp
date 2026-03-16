#pragma once

// Forward declarations
struct CBassPlayer;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBassPlayer_ptr_13260
// Points to CBassPlayer at offset 0x33cc in CBassPlayer
// 32-bit pointer to CBassPlayer
struct CBassPlayer_ptr_13260 {
    void *_raw;
    typedef CBassPlayer base_type;
    CBassPlayer_ptr_13260() : _raw(0) {}
    template<typename T> CBassPlayer_ptr_13260(T* p) : _raw((void*)p) {}
    template<typename T> CBassPlayer_ptr_13260& operator=(T* p) { _raw = (void*)p; return *this; }
    CBassPlayer* operator->() const { return (CBassPlayer*)_raw; }
    CBassPlayer* adj() const { return (CBassPlayer*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

