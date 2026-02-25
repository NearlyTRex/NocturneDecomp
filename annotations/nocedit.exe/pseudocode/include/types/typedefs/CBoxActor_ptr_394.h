#pragma once

// Forward declarations
struct CBoxActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CBoxActor_ptr_394
// Points to CBoxActor at offset 0x18a in CBoxActor
// 32-bit pointer to CBoxActor
struct CBoxActor_ptr_394 {
    void *_raw;
    typedef CBoxActor base_type;
    CBoxActor_ptr_394() : _raw(0) {}
    template<typename T> CBoxActor_ptr_394(T* p) : _raw((void*)p) {}
    template<typename T> CBoxActor_ptr_394& operator=(T* p) { _raw = (void*)p; return *this; }
    CBoxActor* operator->() const { return (CBoxActor*)_raw; }
    CBoxActor* adj() const { return (CBoxActor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

