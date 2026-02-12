#pragma once

// Forward declarations
struct SScrape;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SScrape_ptr_1020
// 32-bit pointer to SScrape
struct SScrape_ptr_1020 {
    void *_raw;
    SScrape_ptr_1020() : _raw(0) {}
    template<typename T> SScrape_ptr_1020(T* p) : _raw((void*)p) {}
    template<typename T> SScrape_ptr_1020& operator=(T* p) { _raw = (void*)p; return *this; }
    SScrape* operator->() const { return (SScrape*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

