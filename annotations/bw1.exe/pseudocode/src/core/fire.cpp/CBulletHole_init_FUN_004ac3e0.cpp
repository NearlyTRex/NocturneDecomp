// Name: core_fire.cpp_CBulletHole_init_FUN_004ac3e0
// Address: 004ac3e0
// Address Range: [[004ac3e0, 004ac683]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_init_FUN_004ac3e0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_init_FUN_004ac3e0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1070 [967];
  CMatrix3x4f local_118;
  CMatrix3x4f local_e8;
  uint local_b8 [12];
  float local_88;
  float afStack_84 [4];
  float local_74;
  float local_70;
  float afStack_6c [2];
  CBulletHole local_64;
  float local_28;
  float afStack_24 [4];
  float local_14;
  
  bVar4 = 0;
  if (this_ptr != (CBulletHole *)hit_position) {
    (this_ptr->position).x = hit_position->x;
    (this_ptr->position).y = hit_position->y;
    (this_ptr->position).z = hit_position->z;
  }
  local_64.transformed_pos.x = surface_normal->x * _DAT_005df1c8;
  local_64.transformed_pos.y = surface_normal->y * _DAT_005df1c8;
  local_64.transformed_pos.z = surface_normal->z * _DAT_005df1c8;
  local_64.position.x = (this_ptr->position).x + local_64.transformed_pos.x;
  local_64.position.y = (this_ptr->position).y + local_64.transformed_pos.y;
  local_64.position.z = (this_ptr->position).z + local_64.transformed_pos.z;
  if (this_ptr != &local_64) {
    (this_ptr->position).x = local_64.position.x;
    (this_ptr->position).y = local_64.position.y;
    (this_ptr->position).z = local_64.position.z;
  }
  fVar5 = (float10)surface_normal->y;
  local_64.euler_angles.y = local_64.position.x;
  local_64.euler_angles.z = local_64.position.y;
  local_64.texture_index = (int)local_64.position.z;
  local_64.actor_local_space.x = local_64.transformed_pos.x;
  local_64.actor_local_space.y = local_64.transformed_pos.y;
  local_64.actor_local_space.z = local_64.transformed_pos.z;
  atan2();
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar5;
  fVar5 = (float10)surface_normal->x;
  atan2();
  (this_ptr->euler_angles).y = (float)fVar5;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->actor_ptr = hit_actor;
  if (hit_actor != (CDemonActor *)0x0) {
    core_xform_cpp_FUN_005b5760(&local_118,&this_ptr->position,&this_ptr->euler_angles);
    core_xform_cpp_FUN_005b5620
              (&local_e8,&(this_ptr->actor_ptr->location).position,
               &(this_ptr->actor_ptr->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_118,&local_e8);
    puVar2 = (uint *)&stack0xfffffeb8;
    puVar3 = local_b8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    core_xform_cpp_FUN_005b6270(local_b8);
    local_64.active = (int)local_70;
    *(float *)((int)&local_64 + (uint)bVar4 * -8 + 0x10) = afStack_6c[(uint)bVar4 * -2];
    *(float *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0x14) =
         afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&this_ptr->transformed_pos != (CVector3f *)&local_64.active) {
      (this_ptr->transformed_pos).x = (float)local_64.active;
      (this_ptr->transformed_pos).y = (float)local_64.actor_ptr;
      (this_ptr->transformed_pos).z = local_64.euler_angles.x;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_b8);
    afStack_84[2] = local_28;
    afStack_84[(uint)bVar4 * -2 + 3] = afStack_24[(uint)bVar4 * -2];
    afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&this_ptr->euler_angles != (CVector3f *)(afStack_84 + 2)) {
      (this_ptr->euler_angles).x = afStack_84[2];
      (this_ptr->euler_angles).y = afStack_84[3];
      (this_ptr->euler_angles).z = local_74;
    }
    core_actor_cpp_FUN_00408b00(this_ptr->actor_ptr,surface_normal);
    afStack_24[2] = local_88;
    afStack_24[(uint)bVar4 * -2 + 3] = afStack_84[(uint)bVar4 * -2];
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&this_ptr->actor_local_space != (CVector3f *)(afStack_24 + 2)) {
      (this_ptr->actor_local_space).x = afStack_24[2];
      (this_ptr->actor_local_space).y = afStack_24[3];
      (this_ptr->actor_local_space).z = local_14;
      return;
    }
  }
  return;
}
