#pragma once

// Forward declarations
struct CLZWCompress;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CLZWCompress_ptr_4
// Points to CLZWDictionary at offset 0x4 in CLZWCompress
// 32-bit pointer to CLZWCompress
struct CLZWDictionary;
struct CLZWCompress_ptr_4 {
    void *_raw;
    typedef CLZWCompress base_type;
    CLZWCompress_ptr_4() : _raw(0) {}
    template<typename T> CLZWCompress_ptr_4(T* p) : _raw((void*)p) {}
    template<typename T> CLZWCompress_ptr_4& operator=(T* p) { _raw = (void*)p; return *this; }
    CLZWDictionary* operator->() const { return (CLZWDictionary*)_raw; }
    CLZWCompress* adj() const { return (CLZWCompress*)((char*)_raw - 4); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

