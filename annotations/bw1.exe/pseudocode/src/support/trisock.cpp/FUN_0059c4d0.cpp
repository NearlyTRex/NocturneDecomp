// Name: FUN_0059c4d0
// Address: 0059c4d0
// Address Range: [[0059c4d0, 0059c51a]]
// Convention: unknown
// Signature: undefined4 FUN_0059c4d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059c4d0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0059c5d0(param_1,param_2);
  if (iVar1 != 0) {
    return param_1;
  }
  _DAT_01d1d400 = "..\\support\\trisock.cpp";
  _DAT_01d1d404 = 0x57;
  FUN_005030e0("Invalid dotted decimal string: %s",param_2);
  return param_1;
}
