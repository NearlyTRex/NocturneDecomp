// Name: FUN_005041b0
// Address: 005041b0
// Address Range: [[005041b0, 00504243]]
// Convention: unknown
// Signature: void FUN_005041b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005041b0(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_005b8100(param_2,&DAT_005dfd30);
  *(byte *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 4) = 0xffffffff;
  iVar1 = FUN_005b8100(param_2,"%d,%f",param_1 + 4,param_1 + 8);
  if ((iVar1 != 2) &&
     (iVar1 = FUN_005b8100(param_2,"\"%[^\"]\" , %f",param_1 + 0x30,param_1 + 8), iVar1 != 2)) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x569;
    FUN_004e4500("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
