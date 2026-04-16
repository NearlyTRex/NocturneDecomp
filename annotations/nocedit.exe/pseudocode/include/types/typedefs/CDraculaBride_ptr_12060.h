#pragma once

// Forward declarations
struct CDraculaBride;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDraculaBride_ptr_12060
// Points to CDraculaBride at offset 0x2f1c in CDraculaBride
// 32-bit pointer to CDraculaBride
struct CDraculaBride_ptr_12060 {
    void *_raw;
    typedef CDraculaBride base_type;
    CDraculaBride_ptr_12060() : _raw(0) {}
    template<typename T> CDraculaBride_ptr_12060(T* p) : _raw((void*)p) {}
    template<typename T> CDraculaBride_ptr_12060& operator=(T* p) { _raw = (void*)p; return *this; }
    CDraculaBride* operator->() const { return (CDraculaBride*)_raw; }
    CDraculaBride* adj() const { return (CDraculaBride*)((char*)_raw - 12060); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

