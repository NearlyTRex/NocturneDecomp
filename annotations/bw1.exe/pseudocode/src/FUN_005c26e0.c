// Name: FUN_005c26e0
// Address: 005c26e0
// Address Range: [[005c26e0, 005c2735]]
// Convention: unknown
// Signature: undefined4 FUN_005c26e0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005c26e0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_005c9428();
  uVar1 = *param_1;
  FUN_005c97c0(0x63df,uVar1,DAT_00626998,param_2);
  iVar2 = FUN_005c9ae4(param_2);
  if (iVar2 != 0) {
    FUN_005c97c0(0x63df,uVar1,DAT_00626998 - DAT_006269a0,param_2);
  }
  return param_2;
}
