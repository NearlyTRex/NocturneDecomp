// Name: engine_special.cpp_lockFrameX_FUN_00566560
// Address: 00566560
// Address Range: [[00566560, 0056658f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrameX_FUN_00566560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_lockFrameX_FUN_00566560(void)

{
  int iVar1;
  
  if ((_DAT_02cf6094 != (code *)0x0) && (iVar1 = (*_DAT_02cf6094)(), iVar1 != 0)) {
    _DAT_02cf6128 = DAT_005fba20;
    DAT_005fba20 = _DAT_02cf6130;
    return 1;
  }
  return 0;
}
