#pragma once

// Forward declarations
struct CWerewolf;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CWerewolf_ptr_10900
// Points to CWerewolf at offset 0x2a94 in CWerewolf
// 32-bit pointer to CWerewolf
struct CWerewolf_ptr_10900 {
    void *_raw;
    typedef CWerewolf base_type;
    CWerewolf_ptr_10900() : _raw(0) {}
    template<typename T> CWerewolf_ptr_10900(T* p) : _raw((void*)p) {}
    template<typename T> CWerewolf_ptr_10900& operator=(T* p) { _raw = (void*)p; return *this; }
    CWerewolf* operator->() const { return (CWerewolf*)_raw; }
    CWerewolf* adj() const { return (CWerewolf*)((char*)_raw - 10900); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

