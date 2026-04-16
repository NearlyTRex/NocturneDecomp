#pragma once

// Forward declarations
struct SBitBuffer;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: SBitBuffer_ptr_8
// Points to SBitBuffer at offset 0x8 in SBitBuffer
// 32-bit pointer to SBitBuffer
struct SBitBuffer_ptr_8 {
    void *_raw;
    typedef SBitBuffer base_type;
    SBitBuffer_ptr_8() : _raw(0) {}
    template<typename T> SBitBuffer_ptr_8(T* p) : _raw((void*)p) {}
    template<typename T> SBitBuffer_ptr_8& operator=(T* p) { _raw = (void*)p; return *this; }
    SBitBuffer* operator->() const { return (SBitBuffer*)_raw; }
    SBitBuffer* adj() const { return (SBitBuffer*)((char*)_raw - 8); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

