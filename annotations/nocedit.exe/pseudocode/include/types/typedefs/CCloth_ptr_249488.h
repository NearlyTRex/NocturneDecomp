#pragma once

// Forward declarations
struct CCloth;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CCloth_ptr_249488
// Points to SClothBone at offset 0x3ce90 in CCloth
// 32-bit pointer to CCloth
struct SClothBone;
struct CCloth_ptr_249488 {
    void *_raw;
    typedef CCloth base_type;
    CCloth_ptr_249488() : _raw(0) {}
    template<typename T> CCloth_ptr_249488(T* p) : _raw((void*)p) {}
    template<typename T> CCloth_ptr_249488& operator=(T* p) { _raw = (void*)p; return *this; }
    SClothBone* operator->() const { return (SClothBone*)_raw; }
    CCloth* adj() const { return (CCloth*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

