// Name: core_fire.cpp_CStake_spawn_FUN_004bfe90
// Address: 004bfe90
// MANUAL RECONSTRUCTION
// Address Range: [[004bfe90, 004c0136]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_spawn_FUN_004bfe90(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_spawn_FUN_004bfe90(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)

{
  float fVar1;
  CKeyFramedModel *pCVar1;
  CMatrix3x3f local_b4;
  CVector3f local_74;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b4,orientation_angles);
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_38.z = 10.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_b4,&local_44,&local_38);
  fVar1 = (surface_normal->z * local_44.z +
          surface_normal->x * local_44.x + surface_normal->y * local_44.y) * 2.0f;
  local_20.x = surface_normal->x * fVar1 - local_44.x;
  local_20.y = surface_normal->y * fVar1 - local_44.y;
  local_20.z = surface_normal->z * fVar1 - local_44.z;
  local_44 = local_20;
  local_50.x = -local_44.x;
  local_50.y = -local_44.y;
  local_50.z = -local_44.z;
  local_44 = local_50;
  this_ptr->active = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&g_FireEffectFlamingStakeModel);
  local_2c.x = (pCVar1->bounds.max).x - (pCVar1->bounds.min).x;
  local_2c.y = (pCVar1->bounds.max).y - (pCVar1->bounds.min).y;
  local_2c.z = (pCVar1->bounds.max).z - (pCVar1->bounds.min).z;
  local_74 = local_2c;
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            (&this_ptr->physics_box,spawn_position,orientation_angles,&local_74,2.0);
  local_5c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-9.424778,9.424778);
  local_5c.z = 0.0;
  local_5c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-9.424778,9.424778);
  core_box_cpp_CBox_setupVelocities_FUN_00420180(&this_ptr->physics_box,&local_44,&local_5c);
  return;
}
