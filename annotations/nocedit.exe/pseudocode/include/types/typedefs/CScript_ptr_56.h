#pragma once

// Forward declarations
struct CScript;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CScript_ptr_56
// Points to CStrList at offset 0x38 in CScript
// 32-bit pointer to CScript
struct CStrList;
struct CScript_ptr_56 {
    void *_raw;
    typedef CScript base_type;
    CScript_ptr_56() : _raw(0) {}
    template<typename T> CScript_ptr_56(T* p) : _raw((void*)p) {}
    template<typename T> CScript_ptr_56& operator=(T* p) { _raw = (void*)p; return *this; }
    CStrList* operator->() const { return (CStrList*)_raw; }
    CScript* adj() const { return (CScript*)((char*)_raw - 56); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

