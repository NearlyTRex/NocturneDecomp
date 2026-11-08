// Name: FUN_004fcc90
// Address: 004fcc90
// Address Range: [[004fcc90, 004fcd23]]
// Convention: unknown
// Signature: void FUN_004fcc90(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fcc90(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_005a3230(param_2,&DAT_005c9d9c);
  *(byte *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 4) = 0xffffffff;
  iVar1 = FUN_005a3230(param_2,"%d,%f",param_1 + 4,param_1 + 8);
  if ((iVar1 != 2) &&
     (iVar1 = FUN_005a3230(param_2,"\"%[^\"]\" , %f",param_1 + 0x30,param_1 + 8), iVar1 != 2)) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x583;
    FUN_004e4330("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
