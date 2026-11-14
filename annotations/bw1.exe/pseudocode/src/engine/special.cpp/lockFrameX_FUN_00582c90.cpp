// Name: engine_special.cpp_lockFrameX_FUN_00582c90
// Address: 00582c90
// Address Range: [[00582c90, 00582cbf]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrameX_FUN_00582c90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_lockFrameX_FUN_00582c90(void)

{
  int iVar1;
  
  if ((_DAT_02c83438 != (code *)0x0) && (iVar1 = (*_DAT_02c83438)(), iVar1 != 0)) {
    _DAT_02c834cc = DAT_0061b4a0;
    DAT_0061b4a0 = _DAT_02c834d4;
    return 1;
  }
  return 0;
}
