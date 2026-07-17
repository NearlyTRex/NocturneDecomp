// Name: dll_dx7.cpp_APIDLLclearZBuffer_FUN_10004a70
// Address: 10004a70
// Address Range: [[10004a70, 10004ab6]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLclearZBuffer_FUN_10004a70(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLclearZBuffer_FUN_10004a70(void)

{
  DDBLTFX *pDVar1;
  int iVar2;
  DDBLTFX local_64;
  
                    /* 0x4a70  10  APIDLLclearZBuffer */
  pDVar1 = &local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    pDVar1->dwSize = 0;
    pDVar1 = (DDBLTFX *)((int)pDVar1 + 4);
  }
  local_64.dwSize = 100;
  local_64.dwFillColor = 0xffffffff;
  (*g_ZBufferSurface->vtable->Blt)
            (g_ZBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x3000000,&local_64)
  ;
  return 1;
}
