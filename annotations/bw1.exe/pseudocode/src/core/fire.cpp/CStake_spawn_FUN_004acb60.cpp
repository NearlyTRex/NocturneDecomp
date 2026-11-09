// Name: core_fire.cpp_CStake_spawn_FUN_004acb60
// Address: 004acb60
// Address Range: [[004acb60, 004ace54]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_spawn_FUN_004acb60(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CStake_spawn_FUN_004acb60(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_109c [997];
  CMatrix3x3f local_f4 [40];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  byte local_84 [4];
  float local_80 [2];
  CVector3f local_78;
  float local_6c;
  float local_68 [4];
  float local_58;
  float local_54;
  byte local_48 [12];
  float local_3c;
  float local_38 [6];
  float local_20 [4];
  
  bVar5 = 0;
  core_dirmat_cpp_FUN_0045f3e0(local_f4,orientation_angles);
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 10.0;
  core_dirmat_cpp_FUN_0045f690(local_f4,local_38 + 2);
  local_84 = (byte  [4])local_54;
  local_80[(uint)bVar5 * -2] = local_68[(uint)bVar5 * -2 + 6];
  local_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  local_20[2] = (*(float *)&surface_normal->field_0x8 * local_80[1] +
                *(float *)surface_normal * (float)local_84 +
                *(float *)&surface_normal->field_0x4 * local_80[0]) * _DAT_005df1d8;
  local_90 = *(float *)surface_normal * local_20[2];
  local_8c = *(float *)&surface_normal->field_0x4 * local_20[2];
  local_88 = *(float *)&surface_normal->field_0x8 * local_20[2];
  local_b4 = *(float *)surface_normal * local_20[2];
  local_b0[(uint)bVar5 * -2] = local_b0[(uint)bVar5 * -2 + 9];
  local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  local_9c = local_b4 - (float)local_84;
  local_98 = local_b0[0] - local_80[0];
  local_94 = local_b0[1] - local_80[1];
  local_68[2] = local_b4 - (float)local_84;
  local_68[(uint)bVar5 * -2 + 3] = local_b0[(uint)bVar5 * -2 + 6];
  local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  if ((float *)local_84 != local_68 + 2) {
    local_84 = (byte  [4])local_68[2];
    local_80[0] = local_68[3];
    local_80[1] = local_58;
  }
  local_68[0] = -local_80[0];
  local_68[1] = -local_80[1];
  local_6c = -(float)local_84;
  local_b0[2] = -(float)local_84;
  local_b0[(uint)bVar5 * -2 + 3] = local_68[(uint)bVar5 * -2];
  local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if ((float *)local_84 != local_b0 + 2) {
    local_84 = (byte  [4])local_b0[2];
    local_80[0] = local_b0[3];
    local_80[1] = local_a0;
  }
  *(uint *)this_ptr = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)0x1c570b8);
  pfVar3 = (float *)&pCVar1->field_0x338;
  pfVar4 = &local_cc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  local_38[5] = local_c0 - local_cc;
  local_20[0] = local_bc - local_c8;
  local_20[1] = local_b8 - local_c4;
  local_3c = local_c0 - local_cc;
  local_38[(uint)bVar5 * -2] = local_20[(uint)bVar5 * -2];
  local_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if ((float *)local_48 != &local_3c) {
    local_48._0_4_ = local_3c;
    local_48._4_4_ = local_38[0];
    local_48._8_4_ = local_38[1];
  }
  core_box_cpp_CBox_setupCorners_FUN_0041dac0
            ((CBox *)&this_ptr->field_0x4,spawn_position,orientation_angles,(CVector3f *)local_48,
             2.0);
  local_78._0_4_ = core_actor_cpp_FUN_0040cc00(0xc116cbe4,0x4116cbe4);
  local_78._8_4_ = 0;
  local_20[3] = (float)local_78._0_4_;
  local_78._4_4_ = core_actor_cpp_FUN_0040cc00(0xc116cbe4,0x4116cbe4);
  local_20[3] = (float)local_78._4_4_;
  core_box_cpp_CBox_setupVelocities_FUN_00420450
            ((CBox *)&this_ptr->field_0x4,(CVector3f *)local_84,&local_78);
  return;
}
