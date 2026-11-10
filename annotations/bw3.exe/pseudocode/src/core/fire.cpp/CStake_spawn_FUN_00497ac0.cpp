// Name: core_fire.cpp_CStake_spawn_FUN_00497ac0
// Address: 00497ac0
// Address Range: [[00497ac0, 00497db4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_spawn_FUN_00497ac0(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CStake_spawn_FUN_00497ac0(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_109c [997];
  CMatrix3x3f local_f4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [2];
  CVector3f local_a8;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68 [2];
  CVector3f local_60;
  float local_54;
  CVector3f local_48;
  CVector3f local_3c;
  float local_30 [4];
  float local_20 [4];
  
  bVar5 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_f4,orientation_angles);
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_30[2] = 10.0;
  core_dirmat_cpp_FUN_0045b800(&local_f4,local_30);
  local_84.x = local_54;
  *(float *)((int)&local_84 + (uint)bVar5 * -8 + 4) = local_68[(uint)bVar5 * -2 + 6];
  *(float *)((int)&local_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  local_20[2] = (surface_normal->z * local_84.z +
                surface_normal->x * local_84.x + surface_normal->y * local_84.y) * _DAT_005c0514;
  local_90 = surface_normal->x * local_20[2];
  local_8c = surface_normal->y * local_20[2];
  local_88 = surface_normal->z * local_20[2];
  local_b4 = local_90;
  local_b0[(uint)bVar5 * -2] = local_b0[(uint)bVar5 * -2 + 9];
  local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  local_9c = local_b4 - local_84.x;
  local_98 = local_b0[0] - local_84.y;
  local_94 = local_b0[1] - local_84.z;
  local_60.x = local_b4 - local_84.x;
  local_68[(uint)bVar5 * -2 + 3] = local_b0[(uint)bVar5 * -2 + 6];
  local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  if (&local_84 != (CVector3f *)(local_68 + 2)) {
    local_84.x = local_60.x;
    local_84.y = local_60.y;
    local_84.z = local_60.z;
  }
  local_68[0] = -local_84.y;
  local_68[1] = -local_84.z;
  local_6c = -local_84.x;
  local_a8.x = -local_84.x;
  local_b0[(uint)bVar5 * -2 + 3] = local_68[(uint)bVar5 * -2];
  local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (&local_84 != (CVector3f *)(local_b0 + 2)) {
    local_84.x = local_a8.x;
    local_84.y = local_a8.y;
    local_84.z = local_a8.z;
  }
  this_ptr->active = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)0x1c73698);
  pCVar3 = &pCVar1->bounds;
  pfVar4 = &local_cc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  local_30[3] = local_c0 - local_cc;
  local_20[0] = local_bc - local_c8;
  local_20[1] = local_b8 - local_c4;
  local_3c.x = local_c0 - local_cc;
  *(float *)((int)&local_3c + (uint)bVar5 * -8 + 4) = local_20[(uint)bVar5 * -2];
  *(float *)((int)&local_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       local_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (&local_48 != &local_3c) {
    local_48.x = local_3c.x;
    local_48.y = local_3c.y;
    local_48.z = local_3c.z;
  }
  core_box_cpp_CBox_setupCorners_FUN_0041ae00
            (&this_ptr->physics_box,spawn_position,orientation_angles,&local_48,2.0);
  local_78.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-9.424778,9.424778);
  local_78.z = 0.0;
  local_20[3] = local_78.x;
  local_78.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-9.424778,9.424778);
  local_20[3] = local_78.y;
  core_box_cpp_CBox_setupVelocities_FUN_0041d790(&this_ptr->physics_box,&local_84,&local_78);
  return;
}
