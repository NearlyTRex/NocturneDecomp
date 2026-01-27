// Name: core_stranger.cpp_CStranger_FUN_005c4c20
// Address: 005c4c20
// Address Range: [[005c4c20, 005c516b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c4c20()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c4c20(uint param_1,
   uint param_2, uint param_3) */

void core_stranger_cpp_CStranger_FUN_005c4c20(void)

{
  CCharacter *this_ptr;
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  float local_f8;
  float local_f4;
  float local_ec;
  float fStack_e4;
  byte auStack_e0 [48];
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38 [2];
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x554c) == 0) ||
     (*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x554c) + 0x2e0) != 0)) {
    in_stack_0000000c = 0;
  }
  iVar4 = 0;
  local_f8 = 0.0;
  if (in_stack_0000000c != 0) {
    iVar5 = 0;
LAB_005c4c51:
    do {
      if (g_CDemonSetPtr->damage_listener_count <= iVar4) goto LAB_005c4d62;
      this_ptr = *(CCharacter **)(g_CDemonSetPtr->unk4 + iVar5 + -4);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (&in_stack_00000004->base,&local_68,&(this_ptr->base).location.position);
      if (((ABS(local_68.x) <= (float)1.5) &&
          (ABS(local_68.y) <= (float)4)) &&
         ((0.0 <= local_68.z &&
          ((((int)local_68.z < 0x40c00001 && (this_ptr != in_stack_00000004)) &&
           (iVar2 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr), iVar2 == 0))))))
      {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_e0);
        iVar2 = (*((this_ptr->base).vtable._ub)->hasCollision)
                          (&this_ptr->base,(SCollisionInfo *)auStack_e0);
        if ((iVar2 == 2) &&
           (fStack_e4 = 1.0 - ((local_5c.z - (float)auStack_e0._36_4_) + (float)-1.5) *
                              (float)0.40000000000000002, local_ec <= fStack_e4)) {
          if (fStack_e4 < 0.0) {
            fStack_e4 = 0.0;
          }
          local_ec = fStack_e4;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 4;
          goto LAB_005c4c51;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while( true );
  }
LAB_005c50a7:
  if (1.0 < local_f8) {
    local_f8 = 1.0;
  }
  local_f4 = local_f8 - *(float *)(in_stack_00000004[2].cloth_data + 0x55ac);
  if (0.0 <= local_f4) {
    if ((0.0 < local_f4) && (in_stack_00000008 / 0.05f < local_f4)) {
      local_f4 = in_stack_00000008 / 0.05f;
    }
  }
  else {
    fVar1 = -in_stack_00000008 * (1.0 / 0.5f);
    if (local_f4 < fVar1) {
      local_f4 = fVar1;
    }
  }
  *(float *)(in_stack_00000004[2].cloth_data + 0x55ac) =
       *(float *)(in_stack_00000004[2].cloth_data + 0x55ac) + local_f4;
  return;
LAB_005c4d62:
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&in_stack_00000004->base);
  local_a4.x = 0.0;
  local_a4.y = 0.0;
  local_20 = 3.5;
  local_1c = 1.5;
  local_a4.z = 3.5;
  pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (&in_stack_00000004->base,&local_b0,&local_a4);
  if (&local_8c != pCVar3) {
    local_8c.x = pCVar3->x;
    local_8c.y = pCVar3->y;
    local_8c.z = pCVar3->z;
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&in_stack_00000004->model,(CVector3f *)(auStack_e0 + 0x24),INT_03f6bad0);
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&in_stack_00000004->base,&local_80,pCVar3);
  if (&local_5c != pCVar3) {
    local_5c.x = pCVar3->x;
    local_5c.y = pCVar3->y;
    local_5c.z = pCVar3->z;
  }
  local_74.x = local_5c.x + local_8c.x;
  local_74.y = local_5c.y + local_8c.y;
  local_74.z = local_5c.z + local_8c.z;
  if (&local_98 != &local_74) {
    local_98.x = local_74.x;
    local_98.y = local_74.y;
    local_98.z = local_74.z;
  }
  local_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_5c,&local_98);
  if (((0.0 <= local_18) && (local_18 < 1.0)) &&
     (fVar1 = 1.0 - (local_18 * local_20 - local_1c) / (local_20 - local_1c), 0.0 < fVar1)) {
    local_f8 = fVar1;
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&in_stack_00000004->model,&local_50,INT_03f6bad4);
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&in_stack_00000004->base,&local_44,pCVar3);
  if (&local_5c != pCVar3) {
    local_5c.x = pCVar3->x;
    local_5c.y = pCVar3->y;
    local_5c.z = pCVar3->z;
  }
  local_38[0].x = local_5c.x + local_8c.x;
  local_38[0].y = local_5c.y + local_8c.y;
  local_38[0].z = local_5c.z + local_8c.z;
  if (&local_98 != local_38) {
    local_98.x = local_38[0].x;
    local_98.y = local_38[0].y;
    local_98.z = local_38[0].z;
  }
  local_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_5c,&local_98);
  if (((0.0 <= local_18) && (local_18 < 1.0)) &&
     (fVar1 = 1.0 - (local_18 * local_20 - local_1c) / (local_20 - local_1c), local_f8 < fVar1)) {
    local_f8 = fVar1;
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  goto LAB_005c50a7;
}
