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
  CMatrix3x4f *pCVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1070 [967];
  CMatrix3x4f local_148;
  uint local_118 [12];
  CMatrix3x4f local_e8;
  CMatrix3x4f local_b8;
  float local_88;
  float local_84 [2];
  CBulletHole local_7c;
  float local_3c;
  float local_38;
  float local_34;
  float afStack_30 [5];
  float local_1c;
  
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
  fVar5 = (float10)surface_normal->y;
  local_7c.transformed_pos.x = local_7c.position.x;
  local_7c.transformed_pos.y = local_7c.position.y;
  local_7c.transformed_pos.z = local_7c.position.z;
  local_7c.decal_type = (int)local_7c.actor_local_space.x;
  local_3c = local_7c.actor_local_space.y;
  local_38 = local_7c.actor_local_space.z;
  atan2();
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = (float)-fVar5;
  fVar5 = (float10)surface_normal->x;
  atan2();
  (this_ptr->euler_angles).y = (float)fVar5;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  this_ptr->active = 1;
  this_ptr->texture_index = iVar1;
  this_ptr->decal_type = decal_type;
  this_ptr->actor_ptr = hit_actor;
  if (hit_actor != (CDemonActor *)0x0) {
    core_xform_cpp_FUN_00583940(&local_e8,this_ptr,&this_ptr->euler_angles);
    core_xform_cpp_FUN_00583800
              (&local_b8,&(this_ptr->actor_ptr->location).position,
               &(this_ptr->actor_ptr->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_e8,&local_b8,&local_148);
    pCVar2 = &local_148;
    puVar3 = local_118;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(uint *)pCVar2;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    core_xform_cpp_FUN_00584450(local_118);
    local_7c.euler_angles.y = local_34;
    *(float *)((int)&local_7c + (uint)bVar4 * -8 + 0x1c) = afStack_30[(uint)bVar4 * -2];
    *(float *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0x20) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&this_ptr->transformed_pos != (CVector3f *)&local_7c.euler_angles.y) {
      (this_ptr->transformed_pos).x = local_7c.euler_angles.y;
      (this_ptr->transformed_pos).y = local_7c.euler_angles.z;
      (this_ptr->transformed_pos).z = (float)local_7c.texture_index;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(local_118);
    local_7c.active = (int)local_1c;
    *(float *)((int)&local_7c + (uint)bVar4 * -8 + 0x10) = afStack_30[(uint)bVar4 * -2 + 6];
    *(float *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0x14) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    if (&this_ptr->euler_angles != (CVector3f *)&local_7c.active) {
      (this_ptr->euler_angles).x = (float)local_7c.active;
      (this_ptr->euler_angles).y = (float)local_7c.actor_ptr;
      (this_ptr->euler_angles).z = local_7c.euler_angles.x;
    }
    core_actor_cpp_FUN_00408b40(this_ptr->actor_ptr,surface_normal);
    local_88 = afStack_30[2];
    local_84[(uint)bVar4 * -2] = afStack_30[(uint)bVar4 * -2 + 3];
    local_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (&this_ptr->actor_local_space != (CVector3f *)&local_88) {
      (this_ptr->actor_local_space).x = local_88;
      (this_ptr->actor_local_space).y = local_84[0];
      (this_ptr->actor_local_space).z = local_84[1];
      return;
    }
  }
  return;
}
