// Name: dll_dx7.cpp_createDirect3D_FUN_10002f40
// Address: 10002f40
// MANUAL RECONSTRUCTION
// Address Range: [[10002f40, 10002f5b]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_createDirect3D_FUN_10002f40(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_createDirect3D_FUN_10002f40(void)

{
  HRESULT HVar1;
  
  HVar1 = (*g_DirectDraw4->vtable->QueryInterface)
                    ((IUnknown *)g_DirectDraw4,(GUID *)&g_IID_IDirect3D3,(void **)&g_Direct3D3);
  return (uint)(HVar1 == 0);
}
