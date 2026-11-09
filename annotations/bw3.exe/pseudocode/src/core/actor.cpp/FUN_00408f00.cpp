// Name: core_actor.cpp_FUN_00408f00
// Address: 00408f00
// Address Range: [[00408f00, 0040912a]]
// Convention: unknown
// Signature: undefined4 * core_actor_cpp_FUN_00408f00(int param_1,int param_2,uint param_3)

#include "nocturne.h"

uint * core_actor_cpp_FUN_00408f00(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1058 [998];
  CBoundingBox3D *this_ptr;
  float *pfVar5;
  CVector3f *point;
  byte local_b8 [4];
  uint local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0 [6];
  uint local_88 [6];
  uint uStack_70;
  float afStack_6c [5];
  CVector3f CStack_58;
  uint uStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  uint uStack_34;
  float afStack_30 [4];
  float fStack_20;
  float fStack_1c;
  
  bVar4 = 0;
  if (param_3 < 2) {
    if (param_3 != 1) {
LAB_004090fc:
      local_b4 = 1e+08;
      local_b8 = (byte  [4])0x4cbebc20;
      local_b0 = 1e+08;
      if (&local_ac != (float *)local_b8) {
        local_a8 = 1e+08;
        local_a4 = 1e+08;
        local_ac = 1e+08;
      }
      goto LAB_0040907e;
    }
LAB_00408f37:
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar2 = local_a0;
    puVar3 = local_88;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    core_box_cpp_FUN_0041d8b0(local_88,0);
    puVar2 = &uStack_34;
    uStack_34 = uStack_70;
    afStack_30[(uint)bVar4 * -2] = afStack_6c[(uint)bVar4 * -2];
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b00(param_1,puVar2);
    afStack_30[2] = fStack_1c;
    afStack_30[(uint)bVar4 * -2 + 3] = afStack_30[(uint)bVar4 * -2 + 6];
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    if ((float *)local_b8 != afStack_30 + 2) {
      local_b8 = (byte  [4])afStack_30[2];
      local_b4 = afStack_30[3];
      local_b0 = fStack_20;
    }
    if (&local_ac != afStack_30 + 2) {
      local_ac = afStack_30[2];
      local_a8 = afStack_30[3];
      local_a4 = fStack_20;
    }
    iVar1 = 1;
    do {
      core_box_cpp_FUN_0041d8b0(local_88,iVar1);
      pfVar5 = afStack_6c + 2;
      afStack_6c[2] = (float)uStack_4c;
      afStack_6c[(uint)bVar4 * -2 + 3] = afStack_48[(uint)bVar4 * -2];
      afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_actor_cpp_FUN_00408b00(param_1,pfVar5);
      point = &CStack_58;
      iVar1 = iVar1 + 1;
      CStack_58._0_4_ = CStack_40._0_4_;
      *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4);
      this_ptr = (CBoundingBox3D *)local_b8;
      *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(this_ptr,point);
    } while (iVar1 < 8);
    local_b8 = (byte  [4])((float)local_b8 + *(float *)(param_1 + 0x20));
    local_b4 = local_b4 + *(float *)(param_1 + 0x24);
    local_b0 = local_b0 + *(float *)(param_1 + 0x28);
    local_ac = local_ac + *(float *)(param_1 + 0x20);
    local_a8 = local_a8 + *(float *)(param_1 + 0x24);
    local_a4 = local_a4 + *(float *)(param_1 + 0x28);
  }
  else {
    if (2 < param_3) {
      if (param_3 != 3) goto LAB_004090fc;
      goto LAB_00408f37;
    }
    local_b8 = (byte  [4])(*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x1c));
    local_b4 = *(float *)(param_1 + 0x24) + *(float *)(param_2 + 0x14);
    local_b0 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x1c);
    local_ac = *(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x1c);
    local_a8 = *(float *)(param_1 + 0x24) + *(float *)(param_2 + 0x18);
    local_a4 = *(float *)(param_1 + 0x28) + *(float *)(param_2 + 0x1c);
  }
LAB_0040907e:
  puVar2 = (uint *)local_b8;
  puVar3 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return unaff_ESI;
}
