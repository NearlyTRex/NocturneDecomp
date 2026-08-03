#pragma once

// Forward declarations
struct CLightActor;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CLightActor.h"
// Adjusted pointer: CLightActor_ptr_1648
// Points to CLightActor at offset 0x670 in CLightActor
// 32-bit pointer to CLightActor
struct CLightActor_ptr_1648 {
    void *_raw;
    typedef CLightActor base_type;
    CLightActor_ptr_1648() : _raw(0) {}
    template<typename T> CLightActor_ptr_1648(T* p) : _raw((void*)p) {}
    template<typename T> CLightActor_ptr_1648& operator=(T* p) { _raw = (void*)p; return *this; }
    CLightActor* operator->() const { return (CLightActor*)_raw; }
    CLightActor* adj() const { return (CLightActor*)((char*)_raw - offsetof(CLightActor, light.base.camera_name[8])); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

