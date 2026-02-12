#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDemonActor_ptr_296
// 32-bit pointer to CDemonActor
struct CDemonActor_ptr_296 {
    void *_raw;
    CDemonActor_ptr_296() : _raw(0) {}
    template<typename T> CDemonActor_ptr_296(T* p) : _raw((void*)p) {}
    template<typename T> CDemonActor_ptr_296& operator=(T* p) { _raw = (void*)p; return *this; }
    CDemonActor* operator->() const { return (CDemonActor*)_raw; }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

