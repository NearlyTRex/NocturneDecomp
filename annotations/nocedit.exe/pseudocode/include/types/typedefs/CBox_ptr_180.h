#pragma once

// Forward declarations
struct CBox;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBox_ptr_180
// Points to SScrape at offset 0xb4 in CBox
// 32-bit pointer to CBox
struct SScrape;
struct CBox_ptr_180 {
    void *_raw;
    typedef CBox base_type;
    CBox_ptr_180() : _raw(0) {}
    template<typename T> CBox_ptr_180(T* p) : _raw((void*)p) {}
    template<typename T> CBox_ptr_180& operator=(T* p) { _raw = (void*)p; return *this; }
    SScrape* operator->() const { return (SScrape*)_raw; }
    CBox* adj() const { return (CBox*)((char*)_raw - 180); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

