// Name: core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0
// Address: 004bf7f0
// Address Range: [[004bf7f0, 004bf9f4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0(CBulletHole * this_ptr, CVector3f * hit_position, CVector3f * surface_normal, CDemonActor * hit_actor)

#include "nocturne.h"

void __cdecl
core_fire_cpp_CBulletHole_ctor_FUN_004bf7f0
          (CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,
          CDemonActor *hit_actor)

{
  int iVar1;
  float *extraout_EAX;
  CVector3f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float10 fVar5;
  CMatrix3x4f local_114;
  CMatrix3x4f local_e4;
  CVector3f local_b4 [4];
  CMatrix3x4f local_84;
  float local_4c;
  byte local_48 [28];
  float local_2c;
  
  bVar4 = 0;
  if (this_ptr != (CBulletHole *)hit_position) {
    (this_ptr->position).x = hit_position->x;
    (this_ptr->position).y = hit_position->y;
    (this_ptr->position).z = hit_position->z;
  }
  local_4c = surface_normal->x * 0.1f;
  local_48._0_4_ = surface_normal->y * 0.1f;
  local_48._4_4_ = 0.1f * surface_normal->z;
  local_48._20_4_ = (this_ptr->position).x + local_4c;
  local_48._24_4_ = (this_ptr->position).y + (float)local_48._0_4_;
  local_2c = (this_ptr->position).z + (float)local_48._4_4_;
  if (this_ptr != (CBulletHole *)(local_48 + 0x14)) {
    (this_ptr->position).x = (float)local_48._20_4_;
    (this_ptr->position).y = (float)local_48._24_4_;
    (this_ptr->position).z = local_2c;
  }
  local_114.m[0].x = 6.976873e-39;
  fVar5 = crt_math_c_atan2_FUN_006013b1
                    ((float10)surface_normal->y,
                     SQRT((float10)surface_normal->x * (float10)surface_normal->x +
                          (float10)surface_normal->z * (float10)surface_normal->z));
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar5;
  local_114.m[0].w = 6.976905e-39;
  fVar5 = crt_math_c_atan2_FUN_006013b1((float10)surface_normal->x,(float10)surface_normal->z);
  (this_ptr->euler_angles).y = (float)fVar5;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->actor_ptr = (CDemonActor *)hit_position;
  if (hit_position != (CVector3f *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_114,&this_ptr->position,&this_ptr->euler_angles);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_e4,&(this_ptr->actor_ptr->location).position,
               (CVector3f *)&this_ptr->actor_ptr->orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_114,&local_e4,&local_84);
    pCVar3 = &local_84;
    pCVar2 = local_b4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar2->x = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
      pCVar2 = (CVector3f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_005f6110(local_b4,(CMatrix3x4f *)local_48);
    if (&this_ptr->transformed_pos != (CVector3f *)extraout_EAX) {
      (this_ptr->transformed_pos).x = *extraout_EAX;
      (this_ptr->transformed_pos).y = extraout_EAX[1];
      (this_ptr->transformed_pos).z = extraout_EAX[2];
    }
    pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       (local_b4,(CMatrix3x3f *)&stack0xffffffdc);
    if (&this_ptr->euler_angles != pCVar2) {
      (this_ptr->euler_angles).x = pCVar2->x;
      (this_ptr->euler_angles).y = pCVar2->y;
      (this_ptr->euler_angles).z = pCVar2->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                       (this_ptr->actor_ptr,(CVector3f *)(local_48 + 0x18),surface_normal);
    if (&this_ptr->actor_local_space != pCVar2) {
      (this_ptr->actor_local_space).x = pCVar2->x;
      (this_ptr->actor_local_space).y = pCVar2->y;
      (this_ptr->actor_local_space).z = pCVar2->z;
      return;
    }
  }
  return;
}
