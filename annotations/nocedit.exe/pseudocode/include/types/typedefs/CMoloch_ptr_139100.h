#pragma once

// Forward declarations
struct CMoloch;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CMoloch_ptr_139100
// Points to CMorph at offset 0x21f5c in CMoloch
// 32-bit pointer to CMoloch
struct CMorph;
struct CMoloch_ptr_139100 {
    void *_raw;
    typedef CMoloch base_type;
    CMoloch_ptr_139100() : _raw(0) {}
    template<typename T> CMoloch_ptr_139100(T* p) : _raw((void*)p) {}
    template<typename T> CMoloch_ptr_139100& operator=(T* p) { _raw = (void*)p; return *this; }
    CMorph* operator->() const { return (CMorph*)_raw; }
    CMoloch* adj() const { return (CMoloch*)((char*)_raw - 139100); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

