// Name: FUN_005ba300
// Address: 005ba300
// Address Range: [[005ba300, 005ba355]]
// Convention: unknown
// Signature: undefined4 FUN_005ba300(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005ba300(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_005c1168();
  uVar1 = *param_1;
  FUN_005c1500(0x63df,uVar1,DAT_0061f638,param_2);
  iVar2 = FUN_005c1824(param_2);
  if (iVar2 != 0) {
    FUN_005c1500(0x63df,uVar1,DAT_0061f638 - DAT_0061f640,param_2);
  }
  return param_2;
}
