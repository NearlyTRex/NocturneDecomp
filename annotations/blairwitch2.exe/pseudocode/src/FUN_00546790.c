// Name: FUN_00546790
// Address: 00546790
// Address Range: [[00546790, 0054699c]]
// Convention: unknown
// Signature: void FUN_00546790(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00546790(int param_1,int param_2)

{
  int iVar1;
  float *unaff_ESI;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1010 [980];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_10;
  
  bVar5 = 0;
  if (param_2 < 0) {
    FUN_00591930(&stack0xffffff78);
    local_7c = (float)*(uint *)(param_1 + 0x6a4);
    local_6c = (float)*(uint *)(param_1 + 0x6a8);
    local_5c = (float)*(uint *)(param_1 + 0x6ac);
  }
  else {
    iVar1 = FUN_00547890(param_1);
    iVar1 = *(int *)(iVar1 + 0x1d21c + param_2 * 0x24);
    local_10 = param_2 * 0xc;
    if (iVar1 < 0) {
      local_7c = *(float *)(param_1 + 0x6a4) + *(float *)(param_1 + 0x58 + local_10);
      local_6c = *(float *)(param_1 + 0x6a8) + *(float *)(param_1 + 0x5c + local_10);
      local_5c = *(float *)(param_1 + 0x6ac) + *(float *)(param_1 + 0x60 + local_10);
    }
    else {
      FUN_00546790(param_1,iVar1);
      puVar2 = (uint *)&stack0xffffff48;
      puVar4 = (uint *)&stack0xffffffa8;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_00591530(param_1 + 0x58 + local_10,&stack0xffffffa8);
      local_28 = local_1c;
      (&stack0xffffffdc)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffffdc)[(uint)bVar5 * -2 + 3];
      (&stack0xffffffdc)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (&stack0xffffffdc)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      local_7c = local_28;
      local_6c = local_24;
      local_5c = local_20;
    }
    FUN_005938c0(&stack0xffffff78,param_1 + 0x6b0 + param_2 * 0x10);
    param_1 = param_1 + param_2 * 4;
    if (*(int *)(param_1 + 0xcf0) != 0x3f800000) {
      local_88 = local_88 * *(float *)(param_1 + 0xcf0);
      local_84 = local_84 * *(float *)(param_1 + 0xcf0);
      local_80 = local_80 * *(float *)(param_1 + 0xcf0);
      local_78 = local_78 * *(float *)(param_1 + 0xcf0);
      local_74 = local_74 * *(float *)(param_1 + 0xcf0);
      local_70 = local_70 * *(float *)(param_1 + 0xcf0);
      local_68 = local_68 * *(float *)(param_1 + 0xcf0);
      local_64 = local_64 * *(float *)(param_1 + 0xcf0);
      local_60 = local_60 * *(float *)(param_1 + 0xcf0);
    }
  }
  pfVar3 = &stack0xffffff78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
