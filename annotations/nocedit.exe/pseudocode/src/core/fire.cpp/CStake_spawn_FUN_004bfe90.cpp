// Name: core_fire.cpp_CStake_spawn_FUN_004bfe90
// Address: 004bfe90
// Address Range: [[004bfe90, 004c00b4] [004c0111, 004c0136]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_spawn_FUN_004bfe90(CStake * this_ptr, float spawn_scale, CVector3f * orientation_angles, CVector3f * launch_direction, CVector3f * spawn_position, CVector3f * spawn_velocity)

#include "nocturne.h"

void __cdecl
core_fire_cpp_CStake_spawn_FUN_004bfe90
          (CStake *this_ptr,float spawn_scale,CVector3f *orientation_angles,
          CVector3f *launch_direction,CVector3f *spawn_position,CVector3f *spawn_velocity)

{
  CKeyFramedModel *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_48;
  byte local_44 [8];
  float local_3c;
  float local_38;
  byte local_34 [20];
  CVector3f local_20;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff4c,orientation_angles);
  local_34._0_4_ = 0.0;
  local_34._4_4_ = 0.0;
  local_34._8_4_ = 10.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&stack0xffffff50,(CVector3f *)(local_44 + 4),(CVector3f *)local_34);
  local_58 = (launch_direction->z * (float)local_34._0_4_ +
             launch_direction->x * local_3c + launch_direction->y * local_38) * 2f;
  local_68.z = launch_direction->x * local_58;
  local_5c = launch_direction->y * local_58;
  local_58 = launch_direction->z * local_58;
  local_20.z = local_68.z - local_3c;
  local_14 = local_5c - local_38;
  local_10 = local_58 - (float)local_34._0_4_;
  if (&local_3c != &local_20.z) {
    local_3c = local_20.z;
    local_38 = local_14;
    local_34._0_4_ = local_10;
  }
  local_48 = -local_3c;
  local_44._0_4_ = -local_38;
  local_44._4_4_ = -(float)local_34._0_4_;
  if (&local_3c != &local_48) {
    local_3c = local_48;
    local_38 = (float)local_44._0_4_;
    local_34._0_4_ = local_44._4_4_;
  }
  orientation_angles->x = 0.0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&g_FireEffectFlamingStakeModel);
  local_20.x = (pCVar1->bounds_max).x - (pCVar1->bounds_min).x;
  local_20.y = (pCVar1->bounds_max).y - (pCVar1->bounds_min).y;
  local_20.z = (pCVar1->bounds_max).z - (pCVar1->bounds_min).z;
  if (&local_68 != &local_20) {
    local_68.x = local_20.x;
    local_68.y = local_20.y;
    local_68.z = local_20.z;
  }
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            ((CBox *)&launch_direction->y,spawn_position,spawn_velocity,&local_68,2.0);
  local_48 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
  local_44._4_4_ = 0.0;
  local_44._4_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
  core_box_cpp_CBox_setupVelocities_FUN_00420180
            ((CBox *)&launch_direction->y,(CVector3f *)(local_34 + 8),(CVector3f *)local_44);
  return;
}
