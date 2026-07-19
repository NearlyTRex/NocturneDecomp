// Name: dll_dx7.cpp_APIDLLclearZBox_FUN_10004ac0
// Address: 10004ac0
// MANUAL RECONSTRUCTION
// Address Range: [[10004ac0, 10004b2e]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLclearZBox_FUN_10004ac0(int left,int right,int top,int bottom)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLclearZBox_FUN_10004ac0(int left,int right,int top,int bottom)

{
  RECT local_74;
  DDBLTFX local_64;
  
                    /* 0x4ac0  9  APIDLLclearZBox */
  local_74.top = top;
  local_74.left = left;
  local_74.bottom = bottom + 1;
  local_74.right = right + 1;
  memset(&local_64,0,sizeof(local_64));
  local_64.dwSize = 100;
  local_64.dwFillColor = 0xffffffff;
  (*g_ZBufferSurface->vtable->Blt)
            (g_ZBufferSurface,&local_74,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x3000000,&local_64);
  return 1;
}
