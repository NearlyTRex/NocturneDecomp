// Name: FUN_00416620
// Address: 00416620
// Address Range: [[00416620, 00416786]]
// Convention: unknown
// Signature: void FUN_00416620(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416620(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0057dc40();
  FUN_0040d4b0(param_1 + 1,0,0,0xffff);
  piVar1 = param_1;
  for (iVar2 = 0; iVar2 < param_1[7] + 1; iVar2 = iVar2 + 1) {
    if (piVar1[0x22] == 1) {
      FUN_0040d4b0(param_1 + iVar2 * 0xb + 0x18,piVar1[0x1e],piVar1[0x1f],0xffff);
    }
    piVar1 = piVar1 + 0xb;
  }
  if (param_1[0xd] == 0) {
    param_1[0x17] =
         (int)((float)(param_1[0x11] + 1) * *(float *)(0x01CCF390 + 0x294) * (float)_DAT_005d3f42
              + (float)param_1[0x17]);
  }
  if (param_1[0xd] == 2) {
    param_1[0x17] =
         (int)((float)param_1[0x17] -
              (float)(param_1[0x11] + 1) * *(float *)(0x01CCF390 + 0x294) * (float)_DAT_005d3f42);
  }
  iVar2 = FUN_0040cd60(param_1[0x17]);
  param_1[0x17] = iVar2;
  (**(code **)(*param_1 + 0x3c))(param_1,1,0x10,param_1[0x17],0);
  (**(code **)(*param_1 + 0x3c))(param_1,4,4,param_1[0x17],1);
  (**(code **)(*param_1 + 0x3c))(param_1,0x17d,0x10,param_1[0x17],0);
  (**(code **)(*param_1 + 0x3c))(param_1,0x181,4,param_1[0x17],1);
  iVar2 = param_1[6];
  FUN_0040d4b0(iVar2 * 0x14 + 0x7c3984,_DAT_01c4353c - param_1[iVar2 + 0x2fc],
               _DAT_01c43540 - param_1[iVar2 + 0x300],0xffff);
  return;
}
