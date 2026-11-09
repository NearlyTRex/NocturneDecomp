// Name: core_charactr.cpp_FUN_00426a10
// Address: 00426a10
// Address Range: [[00426a10, 00426e67]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00426a10(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00426a10(CCharacter *this_ptr)

{
  float fVar1;
  CDemonSet *pCVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1060 [846];
  byte *puVar8;
  float *pfVar9;
  float *pfVar10;
  CMatrix3x4f local_1c8 [48];
  uint local_198 [12];
  uint local_168 [12];
  uint local_138 [12];
  uint local_108 [12];
  uint local_d8 [12];
  uint local_a8 [12];
  float local_78;
  float afStack_74 [5];
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [3];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  float local_20;
  float local_1c;
  uint *local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar7 = 0;
  iVar4 = *(int *)&this_ptr->field_0x3448;
  if ((iVar4 < 5) && (-1 < *(int *)&g_CDemonSetPtr->field_0x14d148)) {
    *(int *)&this_ptr->field_0x3448 = *(int *)&this_ptr->field_0x3448 + 1;
    local_18 = (uint *)(&this_ptr->field_0x344c + iVar4 * 0x38);
    *local_18 = *(uint *)&pCVar2->field_0x14d148;
    iVar4 = *(int *)&pCVar2->field_0x14d14c;
    local_18[1] = iVar4;
    if (iVar4 < 0) {
      uVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x120))(this_ptr,*local_18);
      local_18[1] = uVar3;
    }
    local_48 = *(float *)&g_CDemonSetPtr->field_0x14d11c - *(float *)&g_CDemonSetPtr->field_0x14d110
    ;
    local_44 = *(float *)&g_CDemonSetPtr->field_0x14d120 - *(float *)&g_CDemonSetPtr->field_0x14d114
    ;
    local_40 = *(float *)&g_CDemonSetPtr->field_0x14d124 - *(float *)&g_CDemonSetPtr->field_0x14d118
    ;
    local_78 = local_48;
    afStack_74[(uint)bVar7 * -2] = afStack_74[(uint)bVar7 * -2 + 0xc];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_3c = local_48;
    afStack_74[(uint)bVar7 * -2 + 0xf] = afStack_74[(uint)bVar7 * -2 + 0xc];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    local_20 = SQRT(local_34 * local_34 + local_3c * local_3c + local_38 * local_38);
    if (local_20 <= 0.0) {
      local_38 = 0.0;
      local_3c = 0.0;
      local_34 = 0.0;
    }
    else {
      fVar1 = 1.0 / local_20;
      local_3c = local_3c * fVar1;
      local_38 = local_38 * fVar1;
      local_34 = local_34 * fVar1;
    }
    local_14 = (float)core_actor_cpp_FUN_0040cf60(0x3e99999a,0x3f19999a);
    local_1c = local_14;
    local_3c = local_3c * local_14;
    local_38 = local_38 * local_14;
    local_34 = local_34 * local_14;
    local_60 = *(float *)&g_CDemonSetPtr->field_0x14d138 - local_3c;
    local_5c = *(float *)&g_CDemonSetPtr->field_0x14d13c - local_38;
    local_58 = *(float *)&g_CDemonSetPtr->field_0x14d140 - local_34;
    afStack_74[2] = local_60;
    afStack_74[(uint)bVar7 * -2 + 3] = afStack_74[(uint)bVar7 * -2 + 6];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    core_vecdir_cpp_FUN_005838f0(&local_78);
    pfVar10 = afStack_74 + 8;
    pfVar9 = afStack_74 + 2;
    puVar8 = &stack0xfffffd48;
    local_54[0] = (float)local_30;
    afStack_74[(uint)bVar7 * -2 + 9] = afStack_74[(uint)bVar7 * -2 + 0x12];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
    core_xform_cpp_FUN_00591c10(puVar8,pfVar9,pfVar10);
    local_14 = (float)core_actor_cpp_FUN_0040cf60(0xbd0efa35,0x3d0efa35,&stack0xfffffd48);
    core_xform_cpp_buildRotationY_FUN_005932c0(local_14);
    puVar5 = (uint *)&stack0xfffffd18;
    puVar6 = (uint *)&stack0xfffffdd8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_14 = (float)core_actor_cpp_FUN_0040cf60(0xbd0efa35,0x3d0efa35,&stack0xfffffdd8);
    core_xform_cpp_buildRotationX_FUN_00593240(local_14);
    puVar5 = (uint *)&stack0xfffffd78;
    puVar6 = (uint *)&stack0xfffffda8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffda8);
    puVar5 = local_a8;
    puVar6 = (uint *)&stack0xfffffe08;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffe08);
    puVar5 = local_108;
    puVar6 = (uint *)&stack0xfffffd48;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_FUN_00591ad0
              (local_1c8,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
    core_xform_cpp_FUN_00592830(&this_ptr->field_0x1134 + local_18[1] * 0x30);
    puVar5 = local_138;
    puVar6 = local_168;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffd48,local_1c8,local_168);
    puVar5 = local_198;
    puVar6 = (uint *)&stack0xfffffce8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffce8);
    puVar5 = local_d8;
    puVar6 = local_18 + 2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  return;
}
