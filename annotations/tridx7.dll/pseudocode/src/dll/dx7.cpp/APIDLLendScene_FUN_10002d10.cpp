// Name: dll_dx7.cpp_APIDLLendScene_FUN_10002d10
// Address: 10002d10
// Address Range: [[10002d10, 10002d43]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLendScene_FUN_10002d10(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLendScene_FUN_10002d10(void)

{
  HRESULT HVar1;
  
                    /* 0x2d10  15  APIDLLendScene */
  if (g_InScene == 0) {
    return 0;
  }
  dll_dx7_cpp_FUN_10002d50();
  dll_dx7_cpp_FUN_100047b0();
  g_InScene = 0;
  HVar1 = (*g_Device->vtable->EndScene)(g_Device);
  return (uint)(HVar1 == 0);
}
