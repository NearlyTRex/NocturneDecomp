// Name: core_fire.cpp_CStake_spawn_FUN_004bfe90
// Address: 004bfe90
// Address Range: [[004bfe90, 004c00b4] [004c0111, 004c0136]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_spawn_FUN_004bfe90 (CStake *this_ptr,float spawn_scale,CVector3f *orientation_angles, CVector3f *launch_direction,CVector3f *spawn_position,CVector3f *spawn_velocity)

#include "nocturne.h"

void __cdecl
core_fire_cpp_CStake_spawn_FUN_004bfe90
          (CStake *this_ptr,float spawn_scale,CVector3f *orientation_angles,
          CVector3f *launch_direction,CVector3f *spawn_position,CVector3f *spawn_velocity)

{
  CKeyFramedModel *pCVar1;
  CMatrix3x3f local_b4;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  CVector3f local_74;
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b4,orientation_angles);
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_38.z = 10.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_b4,&local_44,&local_38);
  local_14 = (launch_direction->z * local_44.z +
             launch_direction->x * local_44.x + launch_direction->y * local_44.y) * 2.0f;
  local_68 = launch_direction->x * local_14;
  local_64 = launch_direction->y * local_14;
  local_60 = launch_direction->z * local_14;
  local_20.x = local_68 - local_44.x;
  local_20.y = local_64 - local_44.y;
  local_20.z = local_60 - local_44.z;
  if (&local_44 != &local_20) {
    local_44.x = local_20.x;
    local_44.y = local_20.y;
    local_44.z = local_20.z;
  }
  local_50.x = -local_44.x;
  local_50.y = -local_44.y;
  local_50.z = -local_44.z;
  if (&local_44 != &local_50) {
    local_44.x = local_50.x;
    local_44.y = local_50.y;
    local_44.z = local_50.z;
  }
  this_ptr->active = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&g_FireEffectFlamingStakeModel);
  local_8c = (pCVar1->bounds_min).x;
  local_88 = (pCVar1->bounds_min).y;
  local_84 = (pCVar1->bounds_min).z;
  local_80 = (pCVar1->bounds_max).x;
  local_7c = (pCVar1->bounds_max).y;
  local_2c.x = local_80 - local_8c;
  local_2c.y = local_7c - local_88;
  local_78 = (pCVar1->bounds_max).z;
  local_2c.z = local_78 - local_84;
  if (&local_74 != &local_2c) {
    local_74.x = local_2c.x;
    local_74.y = local_2c.y;
    local_74.z = local_2c.z;
  }
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            (&this_ptr->box,(CVector3f *)spawn_scale,orientation_angles,&local_74,2.0);
  local_5c.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
  local_5c.z = 0.0;
  local_10 = local_5c.x;
  local_5c.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
  local_10 = local_5c.y;
  core_box_cpp_CBox_setupVelocities_FUN_00420180(&this_ptr->box,&local_44,&local_5c);
  return;
}
