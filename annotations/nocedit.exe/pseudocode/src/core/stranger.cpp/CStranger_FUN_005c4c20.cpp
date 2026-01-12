// Name: core_stranger.cpp_CStranger_FUN_005c4c20
// Address: 005c4c20
// Address Range: [[005c4c20, 005c516b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c4c20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c4c20(uint param_1,
   uint param_2, uint param_3) */

void core_stranger_cpp_CStranger_FUN_005c4c20(void)

{
  CDemonActor *this_ptr;
  int iVar1;
  CVector3f *pCVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  ulonglong in_stack_fffffef4;
  float local_f4;
  float fStack_f0;
  float local_ec;
  SCollisionInfo SStack_e0;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f local_a0;
  CVector3f local_94;
  float local_88;
  byte local_84 [20];
  CVector3f local_70;
  CVector3f local_64;
  byte local_58 [8];
  float local_50;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f local_34 [2];
  float local_1c;
  float local_18;
  
  fVar3 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
  if ((fVar3 == 0.0) || (*(int *)((int)fVar3 + 0x2e0) != 0)) {
    in_stack_0000000c = 0;
  }
  iVar4 = 0;
  local_f4 = 0.0;
  if (in_stack_0000000c != 0) {
    iVar5 = 0;
LAB_005c4c51:
    do {
      if (g_CDemonSetPtr->damage_listener_count <= iVar4) goto LAB_005c4d62;
      this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar5 + -4);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (in_stack_00000004,&local_64,&(this_ptr->location).position);
      if (((((ABS(local_64.x) <= (float)1.5) &&
            (ABS(local_64.y) <= (float)4)) && (0.0 <= local_64.z)) &&
          (((int)local_64.z < 0x40c00001 && (this_ptr != in_stack_00000004)))) &&
         (iVar1 = (*this_ptr->vtable[1].hasCollision)(this_ptr,(SCollisionInfo *)in_stack_fffffef4),
         iVar1 == 0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_e0);
        iVar1 = (*this_ptr->vtable->hasCollision)(this_ptr,&SStack_e0);
        if ((iVar1 == 2) &&
           (local_ec = 1.0 - ((local_64.z - SStack_e0.cylinder_radius) + (float)-1.5) *
                             (float)0.40000000000000002, local_f4 <= local_ec)) {
          if (local_ec < 0.0) {
            local_ec = 0.0;
          }
          local_f4 = local_ec;
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
  if (1.0 < local_f4) {
    local_f4 = 1.0;
  }
  fStack_f0 = local_f4 - *(float *)(in_stack_00000004[0x17a].create_event + 0x24);
  if (0.0 <= fStack_f0) {
    if ((0.0 < fStack_f0) && (in_stack_00000008 / _DAT_0066373c < fStack_f0)) {
      fStack_f0 = in_stack_00000008 / _DAT_0066373c;
    }
  }
  else {
    fVar3 = -in_stack_00000008 * (1.0 / _DAT_00663740);
    if (fStack_f0 < fVar3) {
      fStack_f0 = fVar3;
    }
  }
  *(float *)(in_stack_00000004[0x17a].create_event + 0x24) =
       *(float *)(in_stack_00000004[0x17a].create_event + 0x24) + fStack_f0;
  return;
LAB_005c4d62:
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  local_a0.x = 0.0;
  local_a0.y = 0.0;
  local_1c = 3.5;
  local_18 = 1.5;
  local_a0.z = 3.5;
  pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&CStack_ac,&local_a0);
  if ((CVector3f *)local_84 != pCVar2) {
    local_88 = pCVar2->x;
    local_84._0_4_ = pCVar2->y;
    local_84._4_4_ = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_b8,DAT_03f6bad0);
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,(CVector3f *)(local_84 + 8),pCVar2);
  if ((CVector3f *)(local_58 + 4) != pCVar2) {
    local_58._0_4_ = pCVar2->x;
    local_58._4_4_ = pCVar2->y;
    local_50 = pCVar2->z;
  }
  local_70.x = (float)local_58._0_4_ + local_88;
  local_70.y = (float)local_58._4_4_ + (float)local_84._0_4_;
  local_70.z = local_50 + (float)local_84._4_4_;
  if (&local_94 != &local_70) {
    local_94.x = local_70.x;
    local_94.y = local_70.y;
    local_94.z = local_70.z;
  }
  fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,(CVector3f *)local_58,&local_94);
  if (((0.0 <= fVar3) && (fVar3 < 1.0)) &&
     (fVar3 = 1.0 - (fVar3 * local_1c - local_18) / (local_1c - local_18), local_f4 < fVar3)) {
    local_f4 = fVar3;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_4c,DAT_03f6bad4);
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&CStack_40,pCVar2);
  if ((CVector3f *)(local_58 + 4) != pCVar2) {
    local_58._0_4_ = pCVar2->x;
    local_58._4_4_ = pCVar2->y;
    local_50 = pCVar2->z;
  }
  local_34[0].x = (float)local_58._0_4_ + local_88;
  local_34[0].y = (float)local_58._4_4_ + (float)local_84._0_4_;
  local_34[0].z = local_50 + (float)local_84._4_4_;
  if (&local_94 != local_34) {
    local_94.x = local_34[0].x;
    local_94.y = local_34[0].y;
    local_94.z = local_34[0].z;
  }
  fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                    (g_CDemonSetPtr,(CVector3f *)local_58,&local_94);
  if (((0.0 <= fVar3) && (fVar3 < 1.0)) &&
     (fVar3 = 1.0 - (fVar3 * local_1c - local_18) / (local_1c - local_18), local_f4 < fVar3)) {
    local_f4 = fVar3;
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  goto LAB_005c50a7;
}
