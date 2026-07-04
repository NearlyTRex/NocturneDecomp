#pragma once

// Forward declarations
struct CCloth;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CCloth.h"
// Adjusted pointer: CCloth_ptr_22232
// Points to SClothVertex at offset 0x56d8 in CCloth
// 32-bit pointer to CCloth
struct SClothVertex;
struct CCloth_ptr_22232 {
    void *_raw;
    typedef CCloth base_type;
    CCloth_ptr_22232() : _raw(0) {}
    template<typename T> CCloth_ptr_22232(T* p) : _raw((void*)p) {}
    template<typename T> CCloth_ptr_22232& operator=(T* p) { _raw = (void*)p; return *this; }
    SClothVertex* operator->() const { return (SClothVertex*)_raw; }
    CCloth* adj() const { return (CCloth*)((char*)_raw - offsetof(CCloth, vertices)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

