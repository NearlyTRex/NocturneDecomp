// Name: engine_special.cpp_lockFrameX_FUN_00566560
// Address: 00566560
// Address Range: [[00566560, 0056658f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrameX_FUN_00566560(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockFrameX_FUN_00566560(void)

{
  int iVar1;
  
  if ((g_PTR_02cf6094 != (byte *)0x0) && (iVar1 = (*(code *)g_PTR_02cf6094)(), iVar1 != 0)) {
    g_INT_02cf6128 = g_INT_005fba20;
    g_INT_005fba20 = g_INT_02cf6130;
    return 1;
  }
  return 0;
}
