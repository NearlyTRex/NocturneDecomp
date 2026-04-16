#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Adjusted pointer: CDemonActor_ptr_296
// Points to CDemonActorTransformState at offset 0x128 in CDemonActor
// 32-bit pointer to CDemonActor
struct CDemonActorTransformState;
struct CDemonActor_ptr_296 {
    void *_raw;
    typedef CDemonActor base_type;
    CDemonActor_ptr_296() : _raw(0) {}
    template<typename T> CDemonActor_ptr_296(T* p) : _raw((void*)p) {}
    template<typename T> CDemonActor_ptr_296& operator=(T* p) { _raw = (void*)p; return *this; }
    CDemonActorTransformState* operator->() const { return (CDemonActorTransformState*)_raw; }
    CDemonActor* adj() const { return (CDemonActor*)((char*)_raw - 296); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

