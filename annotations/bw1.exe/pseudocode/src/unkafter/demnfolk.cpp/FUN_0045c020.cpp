// Name: unkafter_demnfolk.cpp_FUN_0045c020
// Address: 0045c020
// Address Range: [[0045c020, 0045c1de]]
// Convention: unknown
// Signature: undefined4 unkafter_demnfolk_cpp_FUN_0045c020(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint unkafter_demnfolk_cpp_FUN_0045c020(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_10dc [990];
  CVector3f *position;
  CVector3f *rotation;
  float fov;
  byte *puVar5;
  float *pfVar6;
  float falloff;
  uint auStack_154 [12];
  uint auStack_124 [12];
  uint uStack_f4;
  float afStack_f0 [2];
  CVector3f CStack_e8;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_cc [6];
  float afStack_b4 [2];
  CVector3f CStack_ac;
  uint uStack_a0;
  float afStack_9c [6];
  float afStack_84 [5];
  float afStack_70 [3];
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CVector3f CStack_40;
  uint uStack_34;
  float afStack_30 [5];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x27bc) != 0) && (*(int *)(param_1 + 0xc2ec) != 0)) {
    core_skeleton_cpp_FUN_00568e30(param_1 + 0x158,*(uint *)(param_1 + 0xc2fc));
    puVar2 = auStack_124;
    puVar3 = auStack_154;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    uStack_d8 = 0x3f000000;
    uStack_d4 = 0x3f000000;
    uStack_dc = 0;
    core_xform_cpp_FUN_005b5080(&uStack_dc,auStack_154);
    puVar5 = (byte *)&uStack_f4;
    uStack_f4 = afStack_cc[5];
    *(float *)((int)afStack_f0 + (uint)bVar4 * 0xfffffff8) = afStack_b4[(uint)bVar4 * -2];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
         afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b40(param_1,puVar5);
    puVar5 = (byte *)auStack_154;
    afStack_9c[2] = 0.0;
    afStack_9c[3] = 0.0;
    afStack_9c[4] = 0.0;
    CStack_e8._0_4_ = CStack_ac._0_4_;
    *(uint *)((int)&CStack_e8 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_e8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_FUN_005b5080(afStack_9c + 2,puVar5);
    pfVar6 = afStack_84 + 5;
    afStack_70[0] = (float)uStack_a0;
    afStack_84[(uint)bVar4 * -2 + 6] = afStack_9c[(uint)bVar4 * -2];
    afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408ac0(param_1,pfVar6);
    puVar5 = (byte *)auStack_154;
    afStack_cc[4] = 1.0;
    afStack_cc[2] = 0.0;
    afStack_cc[3] = 0.0;
    fStack_d0 = afStack_30[2];
    afStack_cc[(uint)bVar4 * -2] = afStack_30[(uint)bVar4 * -2 + 3];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_xform_cpp_FUN_005b5080(afStack_cc + 2,puVar5);
    puVar2 = &uStack_34;
    uStack_34 = afStack_9c[5];
    afStack_30[(uint)bVar4 * -2] = afStack_84[(uint)bVar4 * -2];
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408ac0(param_1,puVar2);
    fStack_1c = afStack_84[2];
    afStack_30[(uint)bVar4 * -2 + 6] = afStack_84[(uint)bVar4 * -2 + 3];
    afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    afStack_54[2] = fStack_1c - fStack_d0;
    afStack_54[3] = fStack_18 - afStack_cc[0];
    fStack_44 = fStack_14 - afStack_cc[1];
    fStack_58 = fStack_1c - fStack_d0;
    afStack_54[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 3];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    core_vecdir_cpp_FUN_005a7520(&fStack_58);
    falloff = 6.0;
    rotation = &CStack_64;
    fov = 56.0;
    position = &CStack_e8;
    CStack_64._0_4_ = CStack_40._0_4_;
    *(uint *)((int)&CStack_64 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_dlight_cpp_FUN_00465890(position,rotation,fov,falloff);
  }
  if (*(int *)(param_1 + 0x27bc) == 0) {
    return *(uint *)(param_1 + 0x27bc);
  }
  core_charactr_cpp_FUN_004301e0(param_1);
  return *(uint *)(param_1 + 0x27bc);
}
