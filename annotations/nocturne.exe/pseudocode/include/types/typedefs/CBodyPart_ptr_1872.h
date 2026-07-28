#pragma once

// Forward declarations
struct CBodyPart;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CBodyPart.h"
// Adjusted pointer: CBodyPart_ptr_1872
// Points to CBodyPart at offset 0x750 in CBodyPart
// 32-bit pointer to CBodyPart
struct CBodyPart_ptr_1872 {
    void *_raw;
    typedef CBodyPart base_type;
    CBodyPart_ptr_1872() : _raw(0) {}
    template<typename T> CBodyPart_ptr_1872(T* p) : _raw((void*)p) {}
    template<typename T> CBodyPart_ptr_1872& operator=(T* p) { _raw = (void*)p; return *this; }
    CBodyPart* operator->() const { return (CBodyPart*)_raw; }
    CBodyPart* adj() const { return (CBodyPart*)((char*)_raw - offsetof(CBodyPart, fires[0].local_position.z)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

