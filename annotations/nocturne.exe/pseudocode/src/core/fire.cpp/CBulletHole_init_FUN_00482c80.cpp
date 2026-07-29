// Name: core_fire.cpp_CBulletHole_init_FUN_00482c80
// Address: 00482c80
// Address Range: [[00482c80, 00482e84]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_init_FUN_00482c80(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_init_FUN_00482c80(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

{
  int iVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float10 fVar6;
  CMatrix3x4f CStack_114;
  CMatrix3x4f CStack_e4;
  CMatrix3x4f CStack_b4;
  float afStack_84 [14];
  float local_4c;
  CVector3f local_48;
  float local_34;
  CVector3f local_30;
  CVector3f CStack_24;
  
  bVar5 = 0;
  if (this_ptr != (CBulletHole *)hit_position) {
    (this_ptr->position).x = hit_position->x;
    (this_ptr->position).y = hit_position->y;
    (this_ptr->position).z = hit_position->z;
  }
  local_4c = surface_normal->x * 0.1f;
  local_48.x = surface_normal->y * 0.1f;
  local_48.y = 0.1f * surface_normal->z;
  local_34 = (this_ptr->position).x + local_4c;
  local_30.x = (this_ptr->position).y + local_48.x;
  local_30.y = (this_ptr->position).z + local_48.y;
  if (this_ptr != (CBulletHole *)&local_34) {
    (this_ptr->position).x = local_34;
    (this_ptr->position).y = local_30.x;
    (this_ptr->position).z = local_30.y;
  }
  CStack_114.m[0].x = 6.628387e-39;
  fVar6 = atan2
                    ((float10)surface_normal->y,
                     SQRT((float10)surface_normal->x * (float10)surface_normal->x +
                          (float10)surface_normal->z * (float10)surface_normal->z));
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar6;
  CStack_114.m[0].w = 6.628419e-39;
  fVar6 = atan2((float10)surface_normal->x,(float10)surface_normal->z);
  (this_ptr->euler_angles).y = (float)fVar6;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->actor_ptr = (CDemonActor *)hit_position;
  if (hit_position != (CVector3f *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&CStack_114,&this_ptr->position,&this_ptr->euler_angles);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&CStack_e4,&(this_ptr->actor_ptr->location).position,
               &(this_ptr->actor_ptr->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&CStack_114,&CStack_e4);
    pfVar3 = afStack_84;
    pCVar4 = &CStack_b4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    pCVar2 = core_xform_cpp_getTranslation_FUN_0055bc00(&CStack_b4,&local_48);
    if (&this_ptr->transformed_pos != pCVar2) {
      (this_ptr->transformed_pos).x = pCVar2->x;
      (this_ptr->transformed_pos).y = pCVar2->y;
      (this_ptr->transformed_pos).z = pCVar2->z;
    }
    pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&CStack_b4,&CStack_24);
    if (&this_ptr->euler_angles != pCVar2) {
      (this_ptr->euler_angles).x = pCVar2->x;
      (this_ptr->euler_angles).y = pCVar2->y;
      (this_ptr->euler_angles).z = pCVar2->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                       (this_ptr->actor_ptr,&local_30,surface_normal);
    if (&this_ptr->actor_local_space != pCVar2) {
      (this_ptr->actor_local_space).x = pCVar2->x;
      (this_ptr->actor_local_space).y = pCVar2->y;
      (this_ptr->actor_local_space).z = pCVar2->z;
      return;
    }
  }
  return;
}
