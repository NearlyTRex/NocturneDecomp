// Name: FUN_00488110
// Address: 00488110
// Address Range: [[00488110, 004881a9]]
// Convention: unknown
// Signature: undefined4 FUN_00488110(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00488110(int param_1,uint *param_2,uint param_3,int param_4)

{
  byte bVar1;
  float10 fVar2;
  int aiStackY_1008 [1011];
  uint uVar3;
  int iVar4;
  uint uStack_20;
  int iStack_14;
  
  bVar1 = 0;
  iVar4 = *(int *)(param_1 + 0x10a78);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x108))(iVar4,param_2,param_3,param_4);
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_005d2da9 * (float10)_DAT_005d2db1;
      FUN_005b7ff0(0);
      iVar4 = (int)ROUND(fVar2);
      uVar3 = 0;
      uStack_20 = *param_2;
      iStack_14 = iVar4;
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * 0xfffffffe * 4) =
           param_2[(uint)bVar1 * -2 + 1];
      *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           (param_2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
      FUN_004c9850(0x01CB8284,&stack0xffffffe0,uVar3,iVar4);
      return 1;
    }
  }
  return 0;
}
