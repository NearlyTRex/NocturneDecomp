// Name: core_zombie.cpp_FUN_0058beb0
// Address: 0058beb0
// Address Range: [[0058beb0, 0058c051]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0058beb0(int param_1)

#include "nocturne.h"

void core_zombie_cpp_FUN_0058beb0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_10dc [990];
  CVector3f *position;
  CVector3f *rotation;
  float fov;
  float *pfVar5;
  byte *puVar6;
  float falloff;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [9];
  float afStack_c0 [5];
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  float afStack_90 [5];
  float afStack_7c [3];
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [2];
  CVector3f CStack_58;
  CVector3f CStack_4c;
  uint uStack_40;
  float afStack_3c [4];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x27bc) != 0) && (*(int *)(param_1 + 0xd0d8) != 0)) {
    core_skeleton_cpp_FUN_0054d9c0(param_1 + 0x158,*(uint *)(param_1 + 0xd0e8));
    puVar2 = (uint *)&stack0xfffffeac;
    puVar3 = (uint *)&stack0xfffffedc;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    afStack_e4[3] = 0.5;
    afStack_e4[4] = 0.5;
    afStack_e4[2] = 0.0;
    core_xform_cpp_FUN_00583260(afStack_e4 + 2,&stack0xfffffedc);
    pfVar5 = afStack_c0 + 2;
    afStack_c0[2] = afStack_e4[8];
    afStack_c0[(uint)bVar4 * -2 + 3] = afStack_c0[(uint)bVar4 * -2];
    afStack_c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b80(param_1,pfVar5);
    puVar6 = &stack0xfffffedc;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    CStack_f4._0_4_ = CStack_58._0_4_;
    *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_FUN_00583260(afStack_c0 + 8,puVar6);
    pfVar5 = afStack_90 + 5;
    afStack_7c[0] = (float)uStack_ac;
    afStack_90[(uint)bVar4 * -2 + 6] = afStack_c0[(uint)bVar4 * -2 + 6];
    afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_c0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    core_actor_cpp_FUN_00408b00(param_1,pfVar5);
    puVar6 = &stack0xfffffedc;
    afStack_e4[7] = 1.0;
    afStack_e4[5] = 0.0;
    afStack_e4[6] = 0.0;
    afStack_3c[2] = fStack_1c;
    afStack_3c[(uint)bVar4 * -2 + 3] = afStack_3c[(uint)bVar4 * -2 + 9];
    afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    core_xform_cpp_FUN_00583260(afStack_e4 + 5,puVar6);
    puVar2 = &uStack_40;
    uStack_40 = uStack_94;
    afStack_3c[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
    afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b00(param_1,puVar2);
    fStack_28 = afStack_90[2];
    afStack_3c[(uint)bVar4 * -2 + 6] = afStack_90[(uint)bVar4 * -2 + 3];
    afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_64 = fStack_28 - afStack_3c[2];
    afStack_60[0] = fStack_24 - afStack_3c[3];
    afStack_60[1] = fStack_20 - fStack_2c;
    fStack_e8 = fStack_28 - afStack_3c[2];
    afStack_e4[(uint)bVar4 * -2] = afStack_60[(uint)bVar4 * -2];
    afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_vecdir_cpp_FUN_00576250(&fStack_e8);
    falloff = 6.0;
    rotation = &CStack_70;
    fov = 56.0;
    position = &CStack_f4;
    CStack_70._0_4_ = CStack_4c._0_4_;
    *(uint *)((int)&CStack_70 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_dlight_cpp_FUN_0045f5a0(position,rotation,fov,falloff);
  }
  core_charactr_cpp_FUN_0042f510(param_1);
  return;
}
