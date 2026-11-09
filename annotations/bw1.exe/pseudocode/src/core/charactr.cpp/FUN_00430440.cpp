// Name: core_charactr.cpp_FUN_00430440
// Address: 00430440
// Address Range: [[00430440, 00430897]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00430440(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_FUN_00430440(CCharacter *this_ptr)

{
  float fVar1;
  CDemonSet *pCVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1060 [846];
  CVector3f *position;
  CVector3f *euler_angles;
  uint local_318 [12];
  uint local_2e8 [12];
  CMatrix3x4f local_2b8 [48];
  uint local_288 [12];
  uint local_258 [12];
  uint local_228 [12];
  uint local_1f8 [12];
  CMatrix3x4f local_1c8 [48];
  uint local_198 [12];
  uint local_168 [12];
  uint local_138 [12];
  uint local_108 [12];
  uint local_d8 [12];
  uint local_a8 [12];
  float local_78;
  float afStack_74 [2];
  byte local_6c [8];
  float afStack_64 [4];
  CVector3f local_54;
  float local_48;
  float local_44 [5];
  CVector3f local_30;
  float local_20;
  float local_1c;
  uint *local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar8 = 0;
  iVar4 = *(int *)&this_ptr->field_0x3004;
  if ((iVar4 < 5) && (-1 < *(int *)&g_CDemonSetPtr->field_0x14d148)) {
    *(int *)&this_ptr->field_0x3004 = *(int *)&this_ptr->field_0x3004 + 1;
    local_18 = (uint *)(&this_ptr->field_0x3008 + iVar4 * 0x38);
    *local_18 = *(uint *)&pCVar2->field_0x14d148;
    iVar4 = *(int *)&pCVar2->field_0x14d14c;
    local_18[1] = iVar4;
    if (iVar4 < 0) {
      uVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x118))(this_ptr,*local_18);
      local_18[1] = uVar3;
    }
    local_48 = *(float *)&g_CDemonSetPtr->field_0x14d11c - *(float *)&g_CDemonSetPtr->field_0x14d110
    ;
    local_44[0] = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                  *(float *)&g_CDemonSetPtr->field_0x14d114;
    local_44[1] = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                  *(float *)&g_CDemonSetPtr->field_0x14d118;
    local_78 = local_48;
    afStack_74[(uint)bVar8 * -2] = local_44[(uint)bVar8 * -2];
    afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    local_44[2] = local_48;
    local_44[(uint)bVar8 * -2 + 3] = local_44[(uint)bVar8 * -2];
    local_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         local_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    local_20 = SQRT(local_44[4] * local_44[4] +
                    local_44[2] * local_44[2] + local_44[3] * local_44[3]);
    if (local_20 <= 0.0) {
      local_44[3] = 0.0;
      local_44[2] = 0.0;
      local_44[4] = 0.0;
    }
    else {
      fVar1 = 1.0 / local_20;
      local_44[2] = local_44[2] * fVar1;
      local_44[3] = local_44[3] * fVar1;
      local_44[4] = local_44[4] * fVar1;
    }
    local_14 = (float)core_actor_cpp_FUN_0040cc00(0x3e99999a,0x3f19999a);
    local_1c = local_14;
    local_44[2] = local_44[2] * local_14;
    local_44[3] = local_44[3] * local_14;
    local_44[4] = local_44[4] * local_14;
    afStack_64[1] = *(float *)&g_CDemonSetPtr->field_0x14d138 - local_44[2];
    afStack_64[2] = *(float *)&g_CDemonSetPtr->field_0x14d13c - local_44[3];
    afStack_64[3] = *(float *)&g_CDemonSetPtr->field_0x14d140 - local_44[4];
    local_6c._0_4_ = afStack_64[1];
    *(float *)((int)local_6c + (uint)bVar8 * -8 + 4) = afStack_64[(uint)bVar8 * 0xfffffffe + 2];
    *(float *)((int)local_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
    core_vecdir_cpp_FUN_005a7520(&local_78);
    euler_angles = &local_54;
    position = (CVector3f *)local_6c;
    pCVar6 = local_2b8;
    local_54._0_4_ = local_30._0_4_;
    *(uint *)((int)&local_54 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&local_30 + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&local_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&local_30 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    core_xform_cpp_FUN_005b5760(pCVar6,position,euler_angles);
    local_14 = (float)core_actor_cpp_FUN_0040cc00(0xbd0efa35,0x3d0efa35,local_2b8);
    core_xform_cpp_buildRotationY_FUN_005b6e10(local_14);
    puVar5 = local_2e8;
    puVar7 = local_228;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    local_14 = (float)core_actor_cpp_FUN_0040cc00(0xbd0efa35,0x3d0efa35,local_228);
    core_xform_cpp_buildRotationX_FUN_005b6d90(local_14);
    puVar5 = local_288;
    puVar7 = local_258;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_258);
    puVar5 = local_a8;
    puVar7 = local_1f8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_1f8);
    puVar5 = local_108;
    pCVar6 = local_2b8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pCVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      pCVar6 = pCVar6 + ((uint)bVar8 * -2 + 1) * 4;
    }
    core_xform_cpp_FUN_005b5620
              (local_1c8,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
    core_xform_cpp_FUN_005b6380(&this_ptr->field_0xfd8 + local_18[1] * 0x30);
    puVar5 = local_138;
    puVar7 = local_168;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_2b8,local_1c8,local_168);
    puVar5 = local_198;
    puVar7 = local_318;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_318);
    puVar5 = local_d8;
    puVar7 = local_18 + 2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  return;
}
