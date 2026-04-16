#pragma once

// Forward declarations
struct SScrape;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SScrape_ptr_1020
// Points to SScrape at offset 0x3fc in SScrape
// 32-bit pointer to SScrape
struct SScrape_ptr_1020 {
    void *_raw;
    typedef SScrape base_type;
    SScrape_ptr_1020() : _raw(0) {}
    template<typename T> SScrape_ptr_1020(T* p) : _raw((void*)p) {}
    template<typename T> SScrape_ptr_1020& operator=(T* p) { _raw = (void*)p; return *this; }
    SScrape* operator->() const { return (SScrape*)_raw; }
    SScrape* adj() const { return (SScrape*)((char*)_raw - 1020); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

