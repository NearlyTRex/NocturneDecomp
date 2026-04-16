#pragma once

// Forward declarations
struct CGabriella;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CGabriella_ptr_130068
// Points to CCloth at offset 0x1fc14 in CGabriella
// 32-bit pointer to CGabriella
struct CCloth;
struct CGabriella_ptr_130068 {
    void *_raw;
    typedef CGabriella base_type;
    CGabriella_ptr_130068() : _raw(0) {}
    template<typename T> CGabriella_ptr_130068(T* p) : _raw((void*)p) {}
    template<typename T> CGabriella_ptr_130068& operator=(T* p) { _raw = (void*)p; return *this; }
    CCloth* operator->() const { return (CCloth*)_raw; }
    CGabriella* adj() const { return (CGabriella*)((char*)_raw - 130068); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

