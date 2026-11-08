// Name: FUN_00578bf0
// Address: 00578bf0
// Address Range: [[00578bf0, 00578c3a]]
// Convention: unknown
// Signature: undefined4 FUN_00578bf0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00578bf0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00578cf0(param_1,param_2);
  if (iVar1 != 0) {
    return param_1;
  }
  _DAT_01d046a0 = "..\\support\\trisock.cpp";
  _DAT_01d046a4 = 0x55;
  FUN_004e4500("Invalid dotted decimal string: %s",param_2);
  return param_1;
}
