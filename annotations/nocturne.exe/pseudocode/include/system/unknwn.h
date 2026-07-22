#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// UNKNWN - System Header
// =============================================================================

// Structure: IUnknown
typedef struct IUnknown {
    struct IUnknown_vtable* vtable;
} IUnknown;

// Function Definition: IUnknown_AddRef
typedef DWORD IUnknown_AddRef(struct IUnknown* this_ptr);

// Function Definition: IUnknown_QueryInterface
typedef HRESULT IUnknown_QueryInterface(struct IUnknown* this_ptr, void* riid, void** ppv_object);

// Function Definition: IUnknown_Release
typedef DWORD IUnknown_Release(struct IUnknown* this_ptr);

// Structure: IUnknown_vtable
typedef struct IUnknown_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
} IUnknown_vtable;

// Typedef: LPUNKNOWN
// pointer to IUnknown
typedef struct IUnknown* LPUNKNOWN;

