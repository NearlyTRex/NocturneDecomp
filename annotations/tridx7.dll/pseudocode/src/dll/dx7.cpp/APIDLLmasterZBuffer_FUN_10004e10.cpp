// Name: dll_dx7.cpp_APIDLLmasterZBuffer_FUN_10004e10
// Address: 10004e10
// Address Range: [[10004e10, 10004e75] [10004e79, 10004e87]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLmasterZBuffer_FUN_10004e10(int z_buffer_mode)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLmasterZBuffer_FUN_10004e10(int z_buffer_mode)

{
  IDirectDrawSurface *this_ptr;
  HRESULT HVar1;
  RECT local_10;
  
                    /* 0x4e10  23  APIDLLmasterZBuffer */
  if ((z_buffer_mode < 0) || ((int)g_MasterZBufferCount <= z_buffer_mode)) {
    return 0;
  }
  this_ptr = g_MasterZBufferSurfaces[z_buffer_mode];
  if (this_ptr == (IDirectDrawSurface *)0x0) {
    return 0;
  }
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = g_ScreenWidth;
  local_10.bottom = g_ScreenHeight;
  HVar1 = (*this_ptr->vtable->Blt)(this_ptr,&local_10,g_ZBufferSurface,&local_10,0,(DDBLTFX *)0x0);
  if (HVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    dll_dx7_cpp_fatalError_FUN_10002340("masterZ blt failed");
  }
  return 1;
}
