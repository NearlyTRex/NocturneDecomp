#pragma once

// Forward declarations
struct CLZWDecompress;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CLZWDecompress.h"
// Adjusted pointer: CLZWDecompress_ptr_4
// Points to CLZWDictionary at offset 0x4 in CLZWDecompress
// 32-bit pointer to CLZWDecompress
struct CLZWDictionary;
struct CLZWDecompress_ptr_4 {
    void *_raw;
    typedef CLZWDecompress base_type;
    CLZWDecompress_ptr_4() : _raw(0) {}
    template<typename T> CLZWDecompress_ptr_4(T* p) : _raw((void*)p) {}
    template<typename T> CLZWDecompress_ptr_4& operator=(T* p) { _raw = (void*)p; return *this; }
    CLZWDictionary* operator->() const { return (CLZWDictionary*)_raw; }
    CLZWDecompress* adj() const { return (CLZWDecompress*)((char*)_raw - offsetof(CLZWDecompress, lzw_dict)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

