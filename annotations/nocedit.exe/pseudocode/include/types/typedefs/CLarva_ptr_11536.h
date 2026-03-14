#pragma once

// Forward declarations
struct CLarva;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CLarva_ptr_11536
// Points to CLarva at offset 0x2d10 in CLarva
// 32-bit pointer to CLarva
struct CLarva_ptr_11536 {
    void *_raw;
    typedef CLarva base_type;
    CLarva_ptr_11536() : _raw(0) {}
    template<typename T> CLarva_ptr_11536(T* p) : _raw((void*)p) {}
    template<typename T> CLarva_ptr_11536& operator=(T* p) { _raw = (void*)p; return *this; }
    CLarva* operator->() const { return (CLarva*)_raw; }
    CLarva* adj() const { return (CLarva*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

