#pragma once

// Structure: IKsPropertySet
typedef struct IKsPropertySet {
    IKsPropertySet_vtable* vtable;
} IKsPropertySet;

// Structure: IKsPropertySet_vtable
typedef struct IKsPropertySet_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IKsPropertySet_Get* Get;
    IKsPropertySet_Set* Set;
    IKsPropertySet_QuerySupport* QuerySupport;
} IKsPropertySet_vtable;

