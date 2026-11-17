// Name: core_fire.cpp_CBulletHole_init_FUN_00493a40
// Address: 00493a40
// Address Range: [[00493a40, 00493ce3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_init_FUN_00493a40(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_fire_cpp_CBulletHole_init_FUN_00493a40(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

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
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f local_78;
  CBulletHole local_64;
  float local_28 [6];
  
  bVar4 = 0;
  if (this_ptr != (CBulletHole *)hit_position) {
    (this_ptr->position).x = hit_position->x;
    (this_ptr->position).y = hit_position->y;
    (this_ptr->position).z = hit_position->z;
  }
  local_64.transformed_pos.x = surface_normal->x * 0.1f;
  local_64.transformed_pos.y = surface_normal->y * 0.1f;
  local_64.transformed_pos.z = surface_normal->z * 0.1f;
  local_64.position.x = (this_ptr->position).x + local_64.transformed_pos.x;
  local_64.position.y = (this_ptr->position).y + local_64.transformed_pos.y;
  local_64.position.z = (this_ptr->position).z + local_64.transformed_pos.z;
  if (this_ptr != &local_64) {
    (this_ptr->position).x = local_64.position.x;
    (this_ptr->position).y = local_64.position.y;
    (this_ptr->position).z = local_64.position.z;
  }
  fStack_14c = 6.725222e-39;
  local_64.euler_angles.y = local_64.position.x;
  local_64.euler_angles.z = local_64.position.y;
  local_64.texture_index = (int)local_64.position.z;
  local_64.actor_local_space.x = local_64.transformed_pos.x;
  local_64.actor_local_space.y = local_64.transformed_pos.y;
  local_64.actor_local_space.z = local_64.transformed_pos.z;
  fVar5 = atan2
                    ((float10)surface_normal->y,
                     SQRT((float10)surface_normal->x * (float10)surface_normal->x +
                          (float10)surface_normal->z * (float10)surface_normal->z));
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar5;
  euler_out = (CVector3f *)0x493b46;
  fVar5 = atan2((float10)surface_normal->x,(float10)surface_normal->z);
  (this_ptr->euler_angles).y = (float)fVar5;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->actor_ptr = (CDemonActor *)hit_position;
  if (hit_position != (CVector3f *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&CStack_120,&this_ptr->position,&this_ptr->euler_angles);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_00591ad0
              (&CStack_f0,&(this_ptr->actor_ptr->location).position,
               &(this_ptr->actor_ptr->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
              (&CStack_120,&CStack_f0,(CMatrix3x4f *)&stack0xfffffeb0);
    pfVar2 = (float *)&stack0xfffffeb0;
    pCVar3 = &CStack_c0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_00592720(&CStack_c0,&local_78);
    local_64.position.y = local_78.x;
    *(uint *)((int)&local_64 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_78 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0xc) =
         *(uint *)((int)&local_78 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&this_ptr->transformed_pos != (CVector3f *)&local_64.position.y) {
      (this_ptr->transformed_pos).x = local_64.position.y;
      (this_ptr->transformed_pos).y = local_64.position.z;
      (this_ptr->transformed_pos).z = (float)local_64.active;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&CStack_c0,euler_out);
    fStack_84 = local_64.actor_local_space.y;
    afStack_80[(uint)bVar4 * -2] = local_28[(uint)bVar4 * -2 + -1];
    afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_28[(uint)bVar4 * -2 + (uint)bVar4 * -2];
    if (&this_ptr->euler_angles != (CVector3f *)&fStack_84) {
      (this_ptr->euler_angles).x = fStack_84;
      (this_ptr->euler_angles).y = afStack_80[0];
      (this_ptr->euler_angles).z = afStack_80[1];
    }
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
              (this_ptr->actor_ptr,surface_normal,&CStack_90);
    local_28[1] = CStack_90.x;
    local_28[(uint)bVar4 * 0xfffffffe + 2] =
         (float)*(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + 4);
    local_28[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 3] =
         (float)*(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (&this_ptr->actor_local_space != (CVector3f *)(local_28 + 1)) {
      (this_ptr->actor_local_space).x = local_28[1];
      (this_ptr->actor_local_space).y = local_28[2];
      (this_ptr->actor_local_space).z = local_28[3];
      return;
    }
  }
  return;
}
