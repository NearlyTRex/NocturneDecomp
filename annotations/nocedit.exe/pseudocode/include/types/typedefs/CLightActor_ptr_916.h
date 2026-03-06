#pragma once

// Forward declarations
struct CLightActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CLightActor_ptr_916
// Points to CLightActor at offset 0x394 in CLightActor
// 32-bit pointer to CLightActor
struct CLightActor_ptr_916 {
    void *_raw;
    typedef CLightActor base_type;
    CLightActor_ptr_916() : _raw(0) {}
    template<typename T> CLightActor_ptr_916(T* p) : _raw((void*)p) {}
    template<typename T> CLightActor_ptr_916& operator=(T* p) { _raw = (void*)p; return *this; }
    CLightActor* operator->() const { return (CLightActor*)_raw; }
    CLightActor* adj() const { return (CLightActor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

