#pragma once

// Forward declarations
struct CLightActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CLightActor_ptr_1648
// 32-bit pointer to CLightActor
struct CLightActor_ptr_1648 {
    void *_raw;
    CLightActor_ptr_1648() : _raw(0) {}
    template<typename T> CLightActor_ptr_1648(T* p) : _raw((void*)p) {}
    template<typename T> CLightActor_ptr_1648& operator=(T* p) { _raw = (void*)p; return *this; }
    CLightActor* operator->() const { return (CLightActor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

