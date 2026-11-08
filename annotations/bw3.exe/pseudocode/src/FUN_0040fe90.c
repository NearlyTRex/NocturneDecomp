// Name: FUN_0040fe90
// Address: 0040fe90
// Address Range: [[0040fe90, 0040ff22]]
// Convention: unknown
// Signature: undefined4 FUN_0040fe90(int param_1)

#include "nocturne.h"

uint FUN_0040fe90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x206ac) == 0) {
    if (*(int *)(param_1 + 0x27a8) == 0) {
      uVar2 = FUN_0042e220(param_1);
      return uVar2;
    }
    iVar1 = FUN_0046d540(DAT_005f2afc);
    if ((iVar1 != 0) && (iVar1 = FUN_00491aa0(0x01C6E360,"heroCanSee"), iVar1 == 0)) {
      return 0;
    }
    if (((*(int *)(param_1 + 0x27a8) != 0) && (*(int *)(0x01D2130C + 0x264) != 0)) &&
       (iVar1 = FUN_0040cea0(0,2), iVar1 == 1)) {
      uVar2 = FUN_0042e220(param_1);
      return uVar2;
    }
  }
  return 0;
}
