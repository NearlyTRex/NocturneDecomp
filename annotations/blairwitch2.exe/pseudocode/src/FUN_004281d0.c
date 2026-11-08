// Name: FUN_004281d0
// Address: 004281d0
// Address Range: [[004281d0, 00428252]]
// Convention: unknown
// Signature: undefined4 FUN_004281d0(int param_1)

#include "nocturne.h"

uint FUN_004281d0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  param_1 = param_1 + 0x2b4;
  uVar1 = FUN_00503870(param_1,&DAT_005ccdff,3);
  iVar2 = FUN_005b8da0(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_00503870(param_1,&DAT_005cce03);
  iVar2 = FUN_005b8130(uVar1);
  if (iVar2 == 0) {
    return 2;
  }
  uVar1 = FUN_00503870(param_1,"DEAD_POSSUM");
  iVar2 = FUN_005b8130(uVar1);
  if (iVar2 == 0) {
    return 0xfffffffe;
  }
  return 0;
}
