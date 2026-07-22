#pragma once

// Forward declarations
struct CChain;

// Dependencies
#include "system/basetypes.h"

#include <cstddef> // offsetof
// Full base definition required for offsetof() in adj().
#include "types/classes/CChain.h"
// Adjusted pointer: CChain_ptr_652
// Points to SChainVertex at offset 0x28c in CChain
// 32-bit pointer to CChain
struct SChainVertex;
struct CChain_ptr_652 {
    void *_raw;
    typedef CChain base_type;
    CChain_ptr_652() : _raw(0) {}
    template<typename T> CChain_ptr_652(T* p) : _raw((void*)p) {}
    template<typename T> CChain_ptr_652& operator=(T* p) { _raw = (void*)p; return *this; }
    SChainVertex* operator->() const { return (SChainVertex*)_raw; }
    CChain* adj() const { return (CChain*)((char*)_raw - offsetof(CChain, vertices)); }
    template<typename T> operator T*() const { return (T*)_raw; }
    explicit operator bool() const { return _raw != 0; }
};

