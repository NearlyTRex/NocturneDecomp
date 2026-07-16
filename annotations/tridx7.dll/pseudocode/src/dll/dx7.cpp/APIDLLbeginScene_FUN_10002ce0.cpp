// Name: dll_dx7.cpp_APIDLLbeginScene_FUN_10002ce0
// Address: 10002ce0
// Address Range: [[10002ce0, 10002d0d]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLbeginScene_FUN_10002ce0(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLbeginScene_FUN_10002ce0(void)

{
  HRESULT HVar1;
  
                    /* 0x2ce0  6  APIDLLbeginScene */
  if (g_InScene != 0) {
    return 0;
  }
  HVar1 = (*g_Device->vtable->BeginScene)(g_Device);
  if (HVar1 != 0) {
    return 0;
  }
  g_InScene = 1;
  return 1;
}
