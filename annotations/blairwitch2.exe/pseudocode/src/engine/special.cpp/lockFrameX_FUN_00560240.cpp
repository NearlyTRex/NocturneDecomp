// Name: engine_special.cpp_lockFrameX_FUN_00560240
// Address: 00560240
// Address Range: [[00560240, 0056026f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockFrameX_FUN_00560240(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_lockFrameX_FUN_00560240(void)

{
  int iVar1;
  
  if ((_DAT_0264bc68 != (code *)0x0) && (iVar1 = (*_DAT_0264bc68)(), iVar1 != 0)) {
    _DAT_0264bcfc = DAT_006141c0;
    DAT_006141c0 = _DAT_0264bd04;
    return 1;
  }
  return 0;
}
