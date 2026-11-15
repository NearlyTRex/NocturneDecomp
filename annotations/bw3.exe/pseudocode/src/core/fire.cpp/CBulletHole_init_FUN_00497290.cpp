// Name: core_fire.cpp_CBulletHole_init_FUN_00497290
// Address: 00497290
// Address Range: [[00497290, 0049753a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_init_FUN_00497290(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor,int decal_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_init_FUN_00497290(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor,int decal_type)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1078 [967];
  CVector3f *euler_out;
  float fStack_14c;
  CMatrix3x4f CStack_120;
  CMatrix3x4f CStack_f0;
  CMatrix3x4f CStack_c0;
  float fStack_90;
  float afStack_8c [4];
  CBulletHole local_7c;
  CVector3f local_3c;
  CVector3f CStack_30;
  float fStack_24;
  uint auStack_20 [4];
  
  bVar4 = 0;
  if (this_ptr != (CBulletHole *)hit_position) {
    (this_ptr->position).x = hit_position->x;
    (this_ptr->position).y = hit_position->y;
    (this_ptr->position).z = hit_position->z;
  }
  local_7c.actor_local_space.x = surface_normal->x * _DAT_005c0504;
  local_7c.actor_local_space.y = surface_normal->y * _DAT_005c0504;
  local_7c.actor_local_space.z = surface_normal->z * _DAT_005c0504;
  local_7c.position.x = (this_ptr->position).x + local_7c.actor_local_space.x;
  local_7c.position.y = (this_ptr->position).y + local_7c.actor_local_space.y;
  local_7c.position.z = (this_ptr->position).z + local_7c.actor_local_space.z;
  if (this_ptr != &local_7c) {
    (this_ptr->position).x = local_7c.position.x;
    (this_ptr->position).y = local_7c.position.y;
    (this_ptr->position).z = local_7c.position.z;
  }
  fStack_14c = 6.745423e-39;
  local_7c.transformed_pos.x = local_7c.position.x;
  local_7c.transformed_pos.y = local_7c.position.y;
  local_7c.transformed_pos.z = local_7c.position.z;
  local_7c.decal_type = (int)local_7c.actor_local_space.x;
  local_3c.x = local_7c.actor_local_space.y;
  local_3c.y = local_7c.actor_local_space.z;
  fVar5 = atan2
                    ((float10)surface_normal->y,
                     SQRT((float10)surface_normal->x * (float10)surface_normal->x +
                          (float10)surface_normal->z * (float10)surface_normal->z));
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar5;
  euler_out = (CVector3f *)0x497396;
  fVar5 = atan2((float10)surface_normal->x,(float10)surface_normal->z);
  (this_ptr->euler_angles).y = (float)fVar5;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->decal_type = (int)surface_normal;
  this_ptr->actor_ptr = (CDemonActor *)hit_position;
  if (hit_position != (CVector3f *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
              (&CStack_f0,&this_ptr->position,&this_ptr->euler_angles);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_00583800
              (&CStack_c0,&(this_ptr->actor_ptr->location).position,
               &(this_ptr->actor_ptr->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
              (&CStack_f0,&CStack_c0,(CMatrix3x4f *)&stack0xfffffeb0);
    pfVar2 = (float *)&stack0xfffffeb0;
    pCVar3 = &CStack_120;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_00584450(&CStack_120,&local_3c);
    local_7c.actor_ptr = (CDemonActor *)local_3c.x;
    *(uint *)((int)&local_7c + (uint)bVar4 * -8 + 0x14) =
         *(uint *)((int)&local_3c + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0x18) =
         *(uint *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&this_ptr->transformed_pos != (CVector3f *)&local_7c.actor_ptr) {
      (this_ptr->transformed_pos).x = (float)local_7c.actor_ptr;
      (this_ptr->transformed_pos).y = local_7c.euler_angles.x;
      (this_ptr->transformed_pos).z = local_7c.euler_angles.y;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&CStack_120,euler_out);
    local_7c.position.y = fStack_24;
    *(uint *)((int)&local_7c + (uint)bVar4 * -8 + 8) = auStack_20[(uint)bVar4 * -2];
    *(uint *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0xc) =
         auStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&this_ptr->euler_angles != (CVector3f *)&local_7c.position.y) {
      (this_ptr->euler_angles).x = local_7c.position.y;
      (this_ptr->euler_angles).y = local_7c.position.z;
      (this_ptr->euler_angles).z = (float)local_7c.active;
    }
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
              (this_ptr->actor_ptr,surface_normal,&CStack_30);
    fStack_90 = CStack_30.x;
    afStack_8c[(uint)bVar4 * -2] = *(float *)((int)&CStack_30 + (uint)bVar4 * -8 + 4);
    afStack_8c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&CStack_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&this_ptr->actor_local_space != (CVector3f *)&fStack_90) {
      (this_ptr->actor_local_space).x = fStack_90;
      (this_ptr->actor_local_space).y = afStack_8c[0];
      (this_ptr->actor_local_space).z = afStack_8c[1];
      return;
    }
  }
  return;
}
