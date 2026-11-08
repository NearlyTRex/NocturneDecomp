// Name: FUN_004123c0
// Address: 004123c0
// Address Range: [[004123c0, 00412523]]
// Convention: unknown
// Signature: void FUN_004123c0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004123c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_00560d70();
  FUN_0040d6f0(param_1 + 1,0,0,0xffff);
  piVar1 = param_1;
  for (iVar2 = 0; iVar2 < param_1[7] + 1; iVar2 = iVar2 + 1) {
    if (piVar1[0x1f] == 1) {
      FUN_0040d6f0(param_1 + iVar2 * 0xb + 0x15,piVar1[0x1b],piVar1[0x1c],0xffff);
    }
    piVar1 = piVar1 + 0xb;
  }
  if (param_1[0xd] == 0) {
    param_1[0x14] =
         (int)((float)(param_1[0x11] + 1) * *(float *)(0x01D2130C + 0x314) * (float)_DAT_005b678e
              + (float)param_1[0x14]);
  }
  if (param_1[0xd] == 2) {
    param_1[0x14] =
         (int)((float)param_1[0x14] -
              (float)(param_1[0x11] + 1) * *(float *)(0x01D2130C + 0x314) * (float)_DAT_005b678e);
  }
  iVar2 = FUN_0040cfa0(param_1[0x14]);
  param_1[0x14] = iVar2;
  (**(code **)(*param_1 + 0x3c))(param_1,1,0x10,param_1[0x14],0);
  (**(code **)(*param_1 + 0x3c))(param_1,4,4,param_1[0x14],1);
  (**(code **)(*param_1 + 0x3c))(param_1,0x17d,0x10,param_1[0x14],0);
  (**(code **)(*param_1 + 0x3c))(param_1,0x181,4,param_1[0x14],1);
  iVar2 = param_1[6];
  FUN_0040d6f0(iVar2 * 0x14 + 0x7dffc0,_DAT_01c5fadc - param_1[iVar2 + 0x2f9],
               _DAT_01c5fae0 - param_1[iVar2 + 0x2fd],0xffff);
  return;
}
