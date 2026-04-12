#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/unknwn.h"
#include "system/winbase.h"
#include "system/winnt.h"

// =============================================================================
// KSPROXY - System Header
// =============================================================================

// Structure: IKsPropertySet
#pragma pack(push, 1)
typedef struct IKsPropertySet {
    struct IKsPropertySet_vtable* vtable;
} IKsPropertySet;
#pragma pack(pop)

// Function Definition: IKsPropertySet_Get
typedef HRESULT IKsPropertySet_Get(struct IKsPropertySet* this_ptr, LPGUID rguidPropSet, ulong ulId, LPVOID pInstanceData, ulong ulInstanceLength, LPVOID pPropertyData, ulong ulDataLength, PULONG pulBytesReturned);

// Function Definition: IKsPropertySet_QuerySupport
typedef HRESULT IKsPropertySet_QuerySupport(struct IKsPropertySet* this_ptr, LPGUID rguidPropSet, ulong ulId, PULONG pulTypeSupport);

// Function Definition: IKsPropertySet_Set
typedef HRESULT IKsPropertySet_Set(struct IKsPropertySet* this_ptr, LPGUID rguidPropSet, ulong ulId, LPVOID pInstanceData, ulong ulInstanceLength, LPVOID pPropertyData, ulong ulDataLength);

// Structure: IKsPropertySet_vtable
#pragma pack(push, 1)
typedef struct IKsPropertySet_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IKsPropertySet_Get* Get;
    IKsPropertySet_Set* Set;
    IKsPropertySet_QuerySupport* QuerySupport;
} IKsPropertySet_vtable;
#pragma pack(pop)

