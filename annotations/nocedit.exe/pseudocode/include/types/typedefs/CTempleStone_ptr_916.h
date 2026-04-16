#pragma once

// Forward declarations
struct CTempleStone;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CTempleStone_ptr_916
// Points to CTempleStone at offset 0x394 in CTempleStone
// 32-bit pointer to CTempleStone
struct CTempleStone_ptr_916 {
    void *_raw;
    typedef CTempleStone base_type;
    CTempleStone_ptr_916() : _raw(0) {}
    template<typename T> CTempleStone_ptr_916(T* p) : _raw((void*)p) {}
    template<typename T> CTempleStone_ptr_916& operator=(T* p) { _raw = (void*)p; return *this; }
    CTempleStone* operator->() const { return (CTempleStone*)_raw; }
    CTempleStone* adj() const { return (CTempleStone*)((char*)_raw - 916); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

