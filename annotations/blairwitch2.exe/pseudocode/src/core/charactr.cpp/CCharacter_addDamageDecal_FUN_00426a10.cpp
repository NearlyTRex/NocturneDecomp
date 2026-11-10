// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00426a10
// Address: 00426a10
// Address Range: [[00426a10, 00426e67]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00426a10(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00426a10(CCharacter *this_ptr)

{
  float fVar1;
  CDemonSet *pCVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  byte bVar8;
  float afStackY_1060 [846];
  byte *puVar9;
  float *pfVar10;
  float *pfVar11;
  CMatrix3x4f local_1c8;
  uint local_198 [12];
  uint local_168 [12];
  uint local_138 [12];
  uint local_108 [12];
  int local_d8 [12];
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
  int *local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar8 = 0;
  iVar3 = *(int *)&this_ptr->field_0x3448;
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->collision_part_index)) {
    *(int *)&this_ptr->field_0x3448 = *(int *)&this_ptr->field_0x3448 + 1;
    local_18 = (int *)(&this_ptr->field_0x344c + iVar3 * 0x38);
    *local_18 = pCVar2->collision_part_index;
    iVar3 = pCVar2->collision_bone_index;
    local_18[1] = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).getPartDominantBone)(this_ptr,*local_18);
      local_18[1] = iVar3;
    }
    local_48 = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    local_44 = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    local_40 = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    local_78 = local_48;
    afStack_74[(uint)bVar8 * -2] = afStack_74[(uint)bVar8 * -2 + 0xc];
    afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    local_3c = local_48;
    afStack_74[(uint)bVar8 * -2 + 0xf] = afStack_74[(uint)bVar8 * -2 + 0xc];
    afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
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
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
    local_1c = local_14;
    local_3c = local_3c * local_14;
    local_38 = local_38 * local_14;
    local_34 = local_34 * local_14;
    local_60 = (g_CDemonSetPtr->collision_impact_position).x - local_3c;
    local_5c = (g_CDemonSetPtr->collision_impact_position).y - local_38;
    local_58 = (g_CDemonSetPtr->collision_impact_position).z - local_34;
    afStack_74[2] = local_60;
    afStack_74[(uint)bVar8 * -2 + 3] = afStack_74[(uint)bVar8 * -2 + 6];
    afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_78);
    pfVar11 = afStack_74 + 8;
    pfVar10 = afStack_74 + 2;
    puVar9 = &stack0xfffffd48;
    local_54[0] = (float)local_30;
    afStack_74[(uint)bVar8 * -2 + 9] = afStack_74[(uint)bVar8 * -2 + 0x12];
    afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
    core_xform_cpp_FUN_00591c10(puVar9,pfVar10,pfVar11);
    puVar9 = &stack0xfffffd48;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005932c0(local_14,puVar9);
    puVar9 = &stack0xfffffdd8;
    puVar4 = (uint *)&stack0xfffffd18;
    puVar6 = (uint *)&stack0xfffffdd8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_00593240(local_14,puVar9);
    puVar4 = (uint *)&stack0xfffffd78;
    puVar6 = (uint *)&stack0xfffffda8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffda8);
    puVar4 = local_a8;
    puVar6 = (uint *)&stack0xfffffe08;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffe08);
    puVar4 = local_108;
    puVar6 = (uint *)&stack0xfffffd48;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_FUN_00591ad0
              (&local_1c8,(CVector3f *)&(this_ptr->base).field_0x20,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_00592830(&(this_ptr->model).field_0xe80 + local_18[1] * 0x30);
    puVar4 = local_138;
    puVar6 = local_168;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffd48,&local_1c8,local_168);
    puVar4 = local_198;
    puVar6 = (uint *)&stack0xfffffce8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffce8);
    piVar5 = local_d8;
    piVar7 = local_18 + 2;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  return;
}
