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
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  CMatrix3x4f *in_stack_fffffef8;
  byte local_dc [52];
  uint uStack_a8;
  byte auStack_a4 [48];
  uint auStack_74 [10];
  float local_4c;
  float local_48;
  float local_44;
  float local_34;
  float local_30;
  float local_2c;
  
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
  fVar6 = crt_math_c_atan2_FUN_006013b1
                    ((float10)surface_normal->y,
                     SQRT((float10)surface_normal->x * (float10)surface_normal->x +
                          (float10)surface_normal->z * (float10)surface_normal->z));
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar6;
  fVar6 = crt_math_c_atan2_FUN_006013b1((float10)surface_normal->x,(float10)surface_normal->z);
  (this_ptr->euler_angles).y = (float)fVar6;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->actor_ptr = (CDemonActor *)surface_normal;
  if (surface_normal != (CVector3f *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xfffffef0,&this_ptr->position,&this_ptr->euler_angles);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)local_dc,&(this_ptr->actor_ptr->location).position,
               (CVector3f *)&this_ptr->actor_ptr->orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)&stack0xfffffef8,(CMatrix3x4f *)(local_dc + 4),in_stack_fffffef8);
    puVar3 = auStack_74;
    puVar4 = &uStack_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_getTranslation_FUN_005f6110
              ((CVector3f *)auStack_a4,(CMatrix3x4f *)&stack0xffffffc8);
    if (&this_ptr->transformed_pos != (CVector3f *)extraout_EAX) {
      (this_ptr->transformed_pos).x = *extraout_EAX;
      (this_ptr->transformed_pos).y = extraout_EAX[1];
      (this_ptr->transformed_pos).z = extraout_EAX[2];
    }
    pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       ((CVector3f *)(auStack_a4 + 4),(CMatrix3x3f *)&stack0xfffffff0);
    if (&this_ptr->euler_angles != pCVar2) {
      (this_ptr->euler_angles).x = pCVar2->x;
      (this_ptr->euler_angles).y = pCVar2->y;
      (this_ptr->euler_angles).z = pCVar2->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                       (this_ptr->actor_ptr,(CVector3f *)&stack0xffffffe8,surface_normal);
    if (&this_ptr->actor_local_space != pCVar2) {
      (this_ptr->actor_local_space).x = pCVar2->x;
      (this_ptr->actor_local_space).y = pCVar2->y;
      (this_ptr->actor_local_space).z = pCVar2->z;
      return;
    }
  }
  return;
}
