// Name: FUN_00566590
// Address: 00566590
// Address Range: [[00566590, 005665e5]]
// Convention: unknown
// Signature: undefined4 FUN_00566590(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00566590(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_0056d608();
  uVar1 = *param_1;
  FUN_0056d340(0x63df,uVar1,DAT_005c1f14,param_2);
  iVar2 = FUN_0056d034(param_2);
  if (iVar2 != 0) {
    FUN_0056d340(0x63df,uVar1,DAT_005c1f14 - DAT_005c1f1c,param_2);
  }
  return param_2;
}
