#pragma once

// Forward declarations
struct CMirrorHack;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMirrorHack_ptr_344
// Points to CKeyFramedModelInstance at offset 0x158 in CMirrorHack
// 32-bit pointer to CMirrorHack
struct CKeyFramedModelInstance;
struct CMirrorHack_ptr_344 {
    void *_raw;
    typedef CMirrorHack base_type;
    CMirrorHack_ptr_344() : _raw(0) {}
    template<typename T> CMirrorHack_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CMirrorHack_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CMirrorHack* adj() const { return (CMirrorHack*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

