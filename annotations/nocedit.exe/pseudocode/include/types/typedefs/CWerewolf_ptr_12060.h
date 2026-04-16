#pragma once

// Forward declarations
struct CWerewolf;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CWerewolf_ptr_12060
// Points to CWerewolf at offset 0x2f1c in CWerewolf
// 32-bit pointer to CWerewolf
struct CWerewolf_ptr_12060 {
    void *_raw;
    typedef CWerewolf base_type;
    CWerewolf_ptr_12060() : _raw(0) {}
    template<typename T> CWerewolf_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CWerewolf_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CWerewolf* operator->() const { return (CWerewolf*)_raw; }
    CWerewolf* adj() const { return (CWerewolf*)((char*)_raw - 12060); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

