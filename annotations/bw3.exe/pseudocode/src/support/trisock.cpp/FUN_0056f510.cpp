// Name: FUN_0056f510
// Address: 0056f510
// Address Range: [[0056f510, 0056f574]]
// Convention: unknown
// Signature: undefined4 FUN_0056f510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056f510(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = FUN_0056f630(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    return param_1;
  }
  _DAT_01d71de0 = "..\\support\\trisock.cpp";
  _DAT_01d71de4 = 0x62;
  FUN_004e4330("Invalid IP values: %d, %d, %d, %d",param_2,param_3,param_4,param_5);
  return param_1;
}
