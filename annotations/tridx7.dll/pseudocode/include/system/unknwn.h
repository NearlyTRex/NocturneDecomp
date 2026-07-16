#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"

// =============================================================================
// UNKNWN - System Header
// =============================================================================

// Structure: IUnknown
typedef struct IUnknown {
    struct IUnknown_vtable* vtable;
} IUnknown;

// Function Definition: IUnknown_AddRef
typedef ULONG IUnknown_AddRef(struct IUnknown* this_ptr);

// Function Definition: IUnknown_QueryInterface
typedef HRESULT IUnknown_QueryInterface(struct IUnknown* this_ptr, GUID* riid, void** ppv_object);

// Function Definition: IUnknown_Release
typedef ULONG IUnknown_Release(struct IUnknown* this_ptr);

// Structure: IUnknown_vtable
#pragma pack(push, 1)
typedef struct IUnknown_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
} IUnknown_vtable;
#pragma pack(pop)

