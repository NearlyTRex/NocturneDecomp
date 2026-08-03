#pragma once

// Forward declarations
struct CCloth;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCloth_ptr_249488
// Points to CCloth at offset 0x3ce90 in CCloth
// 32-bit pointer to CCloth
struct CCloth_ptr_249488 {
    void *_raw;
    typedef CCloth base_type;
    CCloth_ptr_249488() : _raw(0) {}
    template<typename T> CCloth_ptr_249488(T* p) : _raw((void*)p) {}
    template<typename T> CCloth_ptr_249488& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CCloth* adj() const { return (CCloth*)((char*)_raw - 249488 /* FIXME(64bit): unresolved field path, 32-bit-only offset */); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

