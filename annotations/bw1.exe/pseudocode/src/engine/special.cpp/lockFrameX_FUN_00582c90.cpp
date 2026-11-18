// Name: engine_special.cpp_lockFrameX_FUN_00582c90
// Address: 00582c90
// Address Range: [[00582c90, 00582cbf]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrameX_FUN_00582c90(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockFrameX_FUN_00582c90(void)

{
  int iVar1;
  
  if ((g_PTR_02c83438 != (byte *)0x0) && (iVar1 = (*(code *)g_PTR_02c83438)(), iVar1 != 0)) {
    g_INT_02c834cc = g_INT_0061b4a0;
    g_INT_0061b4a0 = g_INT_02c834d4;
    return 1;
  }
  return 0;
}
