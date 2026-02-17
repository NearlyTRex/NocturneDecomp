// Name: core_fire.cpp_CBulletHole_init_FUN_004bf7f0
// Address: 004bf7f0
// Address Range: [[004bf7f0, 004bf9f4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_init_FUN_004bf7f0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

void __cdecl core_fire_cpp_CBulletHole_init_FUN_004bf7f0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

{
  int iVar1;
  CVector3f *pCVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float10 fVar6;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar5 = 0;
  if (this_ptr != (CBulletHole *)hit_position) {
    (this_ptr->position).x = hit_position->x;
    (this_ptr->position).y = hit_position->y;
    (this_ptr->position).z = hit_position->z;
  }
  local_4c = surface_normal->x * 0.1f;
  local_48 = surface_normal->y * 0.1f;
  local_44 = 0.1f * surface_normal->z;
  local_34 = (this_ptr->position).x + local_4c;
  local_30 = (this_ptr->position).y + local_48;
  local_2c = (this_ptr->position).z + local_44;
  if (this_ptr != (CBulletHole *)&local_34) {
    (this_ptr->position).x = local_34;
    (this_ptr->position).y = local_30;
    (this_ptr->position).z = local_2c;
  }
  fVar6 = (float10)fpatan((float10)surface_normal->y,
                          SQRT((float10)surface_normal->x * (float10)surface_normal->x +
                               (float10)surface_normal->z * (float10)surface_normal->z));
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar6;
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
    pCVar3 = &local_7c;
    pCVar4 = &local_ac;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    pCVar2 = core_xform_cpp_getTranslation_FUN_005f6110(&local_ac,&local_40);
    if (&this_ptr->transformed_pos != pCVar2) {
      (this_ptr->transformed_pos).x = pCVar2->x;
      (this_ptr->transformed_pos).y = pCVar2->y;
      (this_ptr->transformed_pos).z = pCVar2->z;
    }
    pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_ac,&local_1c);
    if (&this_ptr->euler_angles != pCVar2) {
      (this_ptr->euler_angles).x = pCVar2->x;
      (this_ptr->euler_angles).y = pCVar2->y;
      (this_ptr->euler_angles).z = pCVar2->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                       (this_ptr->actor_ptr,&local_28,surface_normal);
    if (&this_ptr->actor_local_space != pCVar2) {
      (this_ptr->actor_local_space).x = pCVar2->x;
      (this_ptr->actor_local_space).y = pCVar2->y;
      (this_ptr->actor_local_space).z = pCVar2->z;
      return;
    }
  }
  return;
}
