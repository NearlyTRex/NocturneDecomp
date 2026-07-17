// Name: dll_dx7.cpp_APIDLLGetDisplayContext_FUN_10004d30
// Address: 10004d30
// Address Range: [[10004d30, 10004d9d]]
// Convention: unknown
// Signature: void dll_dx7_cpp_APIDLLGetDisplayContext_FUN_10004d30(undefined4 *param_1)

#include "nocturne.h"

void dll_dx7_cpp_APIDLLGetDisplayContext_FUN_10004d30(uint *param_1)

{
  HRESULT HVar1;
  uint local_4;
  
                    /* 0x4d30  1  APIDLLGetDisplayContext */
  local_4 = 0;
  if (g_BackBufferSurface != (IDirectDrawSurface *)0x0) {
    if (g_BackBufferLocked != 0) {
      (*g_BackBufferSurface->vtable->Unlock)(g_BackBufferSurface,(void *)0x0);
      g_BackBufferLocked = 0;
      DAT_10014230 = 1;
    }
    HVar1 = (*g_BackBufferSurface->vtable->GetDC)(g_BackBufferSurface,&local_4);
    if (HVar1 != 0) {
      local_4 = 0;
    }
  }
  *param_1 = local_4;
  return;
}
