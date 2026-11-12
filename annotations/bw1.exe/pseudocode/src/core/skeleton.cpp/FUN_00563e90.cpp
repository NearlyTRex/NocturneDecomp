// Name: core_skeleton.cpp_FUN_00563e90
// Address: 00563e90
// Address Range: [[00563e90, 00563ff1]]
// Convention: unknown
// Signature: undefined4 * core_skeleton_cpp_FUN_00563e90(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

uint * core_skeleton_cpp_FUN_00563e90(int param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  byte bVar5;
  float afStackY_1058 [1016];
  uint uStack_70;
  float fStack_64;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float *pfStack_14;
  float *pfStack_10;
  
  bVar5 = 0;
  pfVar1 = (float *)(*(int *)(param_2 * 4 + param_1 + 0x40) + param_3 * 0x34);
  pfStack_14 = pfVar1 + 4;
  if (*(char *)pfVar1 == '\x01') {
    core_xform_cpp_FUN_005b5080(pfStack_14,(uint)*(byte *)((int)pfVar1 + 1) * 0x30 + param_4);
    puVar4 = (uint *)&stack0xffffffa8;
  }
  else {
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    fStack_40 = 0.0;
    pfVar2 = pfVar1;
    pfStack_10 = pfVar1;
    for (iVar3 = 0; pfVar2 = pfVar2 + 1, iVar3 < (int)(uint)*(byte *)pfVar1; iVar3 = iVar3 + 1) {
      core_xform_cpp_FUN_005b5080(pfStack_14,(uint)*(byte *)((int)pfStack_10 + 1) * 0x30 + param_4);
      fStack_4c = fStack_64;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      pfStack_14 = pfStack_14 + 3;
      fStack_28 = fStack_4c * *pfVar2;
      fStack_24 = fStack_48 * *pfVar2;
      fStack_20 = fStack_44 * *pfVar2;
      fStack_34 = fStack_4c * *pfVar2;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_40 = fStack_40 + fStack_34;
      fStack_3c = fStack_3c + fStack_30;
      pfStack_10 = (float *)((int)pfStack_10 + 1);
      fStack_38 = fStack_38 + fStack_2c;
    }
    puVar4 = &stack0xffffffc0;
  }
  uStack_70 = *puVar4;
  *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8) = puVar4[(uint)bVar5 * -2 + 1];
  *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  *unaff_ESI = uStack_70;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return unaff_ESI;
}
