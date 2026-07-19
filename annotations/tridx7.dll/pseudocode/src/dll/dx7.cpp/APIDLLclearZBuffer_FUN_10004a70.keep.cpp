// Name: dll_dx7.cpp_APIDLLclearZBuffer_FUN_10004a70
// Address: 10004a70
// MANUAL RECONSTRUCTION
// Address Range: [[10004a70, 10004ab6]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLclearZBuffer_FUN_10004a70(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLclearZBuffer_FUN_10004a70(void)

{
  DDBLTFX local_64;

                    /* 0x4a70  10  APIDLLclearZBuffer */
  memset(&local_64,0,sizeof(local_64));
  local_64.dwSize = 100;
  local_64.dwFillColor = 0xffffffff;
  (*g_ZBufferSurface->vtable->Blt)
            (g_ZBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x3000000,&local_64)
  ;
  return 1;
}
