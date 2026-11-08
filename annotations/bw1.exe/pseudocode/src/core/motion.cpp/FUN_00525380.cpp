// Name: FUN_00525380
// Address: 00525380
// Address Range: [[00525380, 00525413]]
// Convention: unknown
// Signature: void FUN_00525380(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00525380(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_005c04b0(param_2,&DAT_005eaf8b);
  *(byte *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 4) = 0xffffffff;
  iVar1 = FUN_005c04b0(param_2,"%d,%f",param_1 + 4,param_1 + 8);
  if ((iVar1 != 2) &&
     (iVar1 = FUN_005c04b0(param_2,"\"%[^\"]\" , %f",param_1 + 0x30,param_1 + 8), iVar1 != 2)) {
    _DAT_01d1d400 = "..\\core\\motion.cpp";
    _DAT_01d1d404 = 0x57e;
    FUN_005030e0("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = FUN_005c0530(param_2);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
