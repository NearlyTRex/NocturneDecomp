// Name: dll_dx7.cpp_APIDLLclearZBox_FUN_10004ac0
// Address: 10004ac0
// Address Range: [[10004ac0, 10004b2e]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLclearZBox_FUN_10004ac0(int left,int right,int top,int bottom)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLclearZBox_FUN_10004ac0(int left,int right,int top,int bottom)

{
  int iVar1;
  uint *puVar2;
  RECT local_74;
  uint local_64 [20];
  uint local_14;
  
                    /* 0x4ac0  9  APIDLLclearZBox */
  local_74.top = top;
  local_74.left = left;
  local_74.bottom = bottom + 1;
  local_74.right = right + 1;
  puVar2 = local_64;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_64[0] = 100;
  local_14 = 0xffffffff;
  (*g_ZBufferSurface->vtable->Blt)
            (g_ZBufferSurface,&local_74,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x3000000,local_64);
  return 1;
}
