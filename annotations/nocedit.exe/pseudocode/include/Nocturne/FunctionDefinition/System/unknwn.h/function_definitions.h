#pragma once

// Function Definition: IUnknown_AddRef
typedef DWORD (*IUnknown_AddRef)(IUnknown* this_ptr);

// Function Definition: IUnknown_QueryInterface
typedef HRESULT (*IUnknown_QueryInterface)(IUnknown* this_ptr, void* riid, void** ppv_object);

// Function Definition: IUnknown_Release
typedef DWORD (*IUnknown_Release)(IUnknown* this_ptr);

