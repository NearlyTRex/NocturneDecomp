#pragma once

// Forward declarations
struct SBitBuffer;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SBitBuffer_ptr_8
// 32-bit pointer to SBitBuffer
struct SBitBuffer_ptr_8 {
    void *_raw;
    SBitBuffer_ptr_8() : _raw(0) {}
    template<typename T> SBitBuffer_ptr_8(T* p) : _raw((void*)p) {}
    template<typename T> SBitBuffer_ptr_8& operator=(T* p) { _raw = (void*)p; return *this; }
    SBitBuffer* operator->() const { return (SBitBuffer*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

