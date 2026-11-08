// Name: FUN_0047cfe0
// Address: 0047cfe0
// Address Range: [[0047cfe0, 0047d1d3]]
// Convention: unknown
// Signature: int FUN_0047cfe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047cfe0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  float fStack_48;
  uint auStack_44 [6];
  uint auStack_2c [7];
  
  bVar5 = 0;
  iVar1 = FUN_00484180(DAT_00612560);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x27bc) = 0;
  }
  if (*(int *)(param_1 + 0xc2f4) != 2) {
    iVar2 = FUN_00483e60(DAT_00612560);
    if ((((iVar2 == 0) || (*(int *)(param_1 + 0xc2f4) == 0)) && (iVar1 == 0)) &&
       (*(int *)(param_1 + 0x24fc) == 0)) {
      FUN_004087b0(param_1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar3 = auStack_2c;
      puVar4 = auStack_44;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = FUN_004207b0(auStack_44);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x27bc) = 1;
        if (*(int *)(param_1 + 0xc2f4) == 0) {
          if (*(int *)(param_1 + 0xc408) == 0) {
            FUN_0042e960(param_1);
          }
        }
        else {
          if (*(int *)(param_1 + 0xc2f4) == 1) {
            fStack_48 = (1.0 - *(float *)(param_1 + 0xc2f8)) / 0x3F800000;
          }
          else {
            fStack_48 = ((float)_DAT_005daebd - *(float *)(param_1 + 0xc2f8)) / 0x3F800000;
            if (fStack_48 < 0.0) {
              fStack_48 = 0.0;
            }
          }
          if (0.0 < (double)fStack_48) {
            FUN_00483dd0(DAT_00612560,0);
            FUN_00483df0(DAT_00612560,fStack_48);
            FUN_00484a40(DAT_00612560,1);
            if ((double)fStack_48 <= _DAT_005daebd) {
              uVar6 = 0x267;
            }
            else {
              uVar6 = 0x2e7;
            }
            FUN_00569810(param_1 + 0x158,0xffffffff,uVar6,1,0);
            FUN_00484e00(DAT_00612560);
          }
        }
        if (_DAT_01d39d34 != 0) {
          iVar2 = FUN_00483e60(DAT_00612560);
          if (iVar2 == 0) {
            FUN_005254b0(param_1 + 0x158,param_1);
            (**(code **)(*(int *)(param_1 + 0x154) + 0x58))(param_1);
          }
        }
      }
      FUN_004087f0(param_1);
      return iVar1;
    }
  }
  return 0;
}
