#pragma once

// Forward declarations
struct CDraculaBride;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDraculaBride_ptr_344
// Points to CDraculaBride at offset 0x158 in CDraculaBride
// 32-bit pointer to CDraculaBride
struct CDraculaBride_ptr_344 {
    void *_raw;
    typedef CDraculaBride base_type;
    CDraculaBride_ptr_344() : _raw(0) {}
    template<typename T> CDraculaBride_ptr_344(T* p) : _raw((void*)p) {}
    template<typename T> CDraculaBride_ptr_344& operator=(T* p) { _raw = (void*)p; return *this; }
    CDraculaBride* operator->() const { return (CDraculaBride*)_raw; }
    CDraculaBride* adj() const { return (CDraculaBride*)((char*)_raw - 344); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

