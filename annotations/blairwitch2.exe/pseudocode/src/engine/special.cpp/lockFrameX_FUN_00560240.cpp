// Name: engine_special.cpp_lockFrameX_FUN_00560240
// Address: 00560240
// Address Range: [[00560240, 0056026f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrameX_FUN_00560240(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockFrameX_FUN_00560240(void)

{
  int iVar1;
  
  if ((g_APIDLL_getDisplayContext != (byte *)0x0) &&
     (iVar1 = (*(code *)g_APIDLL_getDisplayContext)(), iVar1 != 0)) {
    g_INT_0264bcfc = g_INT_006141c0;
    g_INT_006141c0 = g_INT_0264bd04;
    return 1;
  }
  return 0;
}
