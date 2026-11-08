// Name: FUN_0056f4c0
// Address: 0056f4c0
// Address Range: [[0056f4c0, 0056f50a]]
// Convention: unknown
// Signature: undefined4 FUN_0056f4c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056f4c0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056f5c0(param_1,param_2);
  if (iVar1 != 0) {
    return param_1;
  }
  _DAT_01d71de0 = "..\\support\\trisock.cpp";
  _DAT_01d71de4 = 0x57;
  FUN_004e4330("Invalid dotted decimal string: %s",param_2);
  return param_1;
}
