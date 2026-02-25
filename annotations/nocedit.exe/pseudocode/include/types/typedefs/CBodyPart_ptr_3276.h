#pragma once

// Forward declarations
struct CBodyPart;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBodyPart_ptr_3276
// Points to CBox at offset 0xccc in CBodyPart
// 32-bit pointer to CBodyPart
struct CBox;
struct CBodyPart_ptr_3276 {
    void *_raw;
    typedef CBodyPart base_type;
    CBodyPart_ptr_3276() : _raw(0) {}
    template<typename T> CBodyPart_ptr_3276(T* p) : _raw((void*)p) {}
    template<typename T> CBodyPart_ptr_3276& operator=(T* p) { _raw = (void*)p; return *this; }
    CBox* operator->() const { return (CBox*)_raw; }
    CBodyPart* adj() const { return (CBodyPart*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

