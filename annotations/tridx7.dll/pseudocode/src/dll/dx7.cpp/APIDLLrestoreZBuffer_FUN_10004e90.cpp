// Name: dll_dx7.cpp_APIDLLrestoreZBuffer_FUN_10004e90
// Address: 10004e90
// Address Range: [[10004e90, 10004efd]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLrestoreZBuffer_FUN_10004e90(int left,int top,int mode,int right,int bottom)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLrestoreZBuffer_FUN_10004e90(int left,int top,int mode,int right,int bottom)

{
  HRESULT HVar1;
  RECT local_10;
  
                    /* 0x4e90  25  APIDLLrestoreZBuffer */
  if (g_MasterZBufferSurfaces[left] == (IDirectDrawSurface *)0x0) {
    return 0;
  }
  local_10.left = top;
  local_10.top = mode;
  local_10.right = right + 1;
  local_10.bottom = bottom + 1;
  HVar1 = (*g_ZBufferSurface->vtable->Blt)
                    (g_ZBufferSurface,&local_10,g_MasterZBufferSurfaces[left],&local_10,0,
                     (void *)0x0);
  if (HVar1 != 0) {
    dll_dx7_cpp_FUN_10002340("restoreZBuffer failed!");
  }
  return 1;
}
