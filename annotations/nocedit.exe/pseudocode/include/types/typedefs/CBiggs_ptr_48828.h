#pragma once

// Forward declarations
struct CBiggs;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBiggs_ptr_48828
// Points to CKeyFramedModelInstance at offset 0xbebc in CBiggs
// 32-bit pointer to CBiggs
struct CKeyFramedModelInstance;
struct CBiggs_ptr_48828 {
    void *_raw;
    typedef CBiggs base_type;
    CBiggs_ptr_48828() : _raw(0) {}
    template<typename T> CBiggs_ptr_48828(T* p) : _raw((void*)p) {}
    template<typename T> CBiggs_ptr_48828& operator=(T* p) { _raw = (void*)p; return *this; }
    CKeyFramedModelInstance* operator->() const { return (CKeyFramedModelInstance*)_raw; }
    CBiggs* adj() const { return (CBiggs*)((char*)_raw - 48828); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

