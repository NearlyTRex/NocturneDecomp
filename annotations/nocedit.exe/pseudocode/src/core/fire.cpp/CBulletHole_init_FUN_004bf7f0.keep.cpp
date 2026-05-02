// Name: core_fire.cpp_CBulletHole_init_FUN_004bf7f0
// Address: 004bf7f0
// MANUAL RECONSTRUCTION
// Address Range: [[004bf7f0, 004bf9f4] [03fc453e, 03fc45a2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_init_FUN_004bf7f0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_init_FUN_004bf7f0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

{
  int iVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar1;
  float10 fVar6;
  float10 fVar2;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  
  if (this_ptr != (CBulletHole *)hit_position) {
    (this_ptr->position).x = hit_position->x;
    (this_ptr->position).y = hit_position->y;
    (this_ptr->position).z = hit_position->z;
  }
  local_34 = (this_ptr->position).x + surface_normal->x * 0.1f;
  local_30 = (this_ptr->position).y + surface_normal->y * 0.1f;
  local_2c = (this_ptr->position).z + 0.1f * surface_normal->z;
  if (this_ptr != (CBulletHole *)&local_34) {
    (this_ptr->position).x = local_34;
    (this_ptr->position).y = local_30;
    (this_ptr->position).z = local_2c;
  }
  fVar2 = (float10)fpatan((float10)surface_normal->y,
                          SQRT((float10)surface_normal->x * (float10)surface_normal->x +
                               (float10)surface_normal->z * (float10)surface_normal->z));
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar2;
  fVar6 = (float10)fpatan((float10)surface_normal->x,(float10)surface_normal->z);
  (this_ptr->euler_angles).y = (float)fVar6;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->actor_ptr = hit_actor;
  if (hit_actor != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_10c,&this_ptr->position,&this_ptr->euler_angles);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_dc,&(this_ptr->actor_ptr->location).position,
               &(this_ptr->actor_ptr->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_10c,&local_dc,&local_7c);
    pCVar2 = core_xform_cpp_getTranslation_FUN_005f6110(&local_ac,&local_40);
    if (&this_ptr->transformed_pos != pCVar2) {
      (this_ptr->transformed_pos).x = pCVar2->x;
      (this_ptr->transformed_pos).y = pCVar2->y;
      (this_ptr->transformed_pos).z = pCVar2->z;
    }
    pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_ac,&local_1c);
    if (&this_ptr->euler_angles != pCVar1) {
      (this_ptr->euler_angles).x = pCVar1->x;
      (this_ptr->euler_angles).y = pCVar1->y;
      (this_ptr->euler_angles).z = pCVar1->z;
    }
    pCVar1 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                       (this_ptr->actor_ptr,&local_28,surface_normal);
    if (&this_ptr->actor_local_space != pCVar1) {
      (this_ptr->actor_local_space).x = pCVar1->x;
      (this_ptr->actor_local_space).y = pCVar1->y;
      (this_ptr->actor_local_space).z = pCVar1->z;
      return;
    }
  }
  return;
}
