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
  float fVar1;
  CDemonActor *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  SCollisionInfo *in_stack_fffffef4;
  float local_f4;
  byte auStack_d8 [12];
  byte auStack_cc [8];
  CVector3f aCStack_c4 [2];
  byte auStack_ac [8];
  float local_a4;
  byte local_a0 [12];
  float local_94;
  float local_90;
  float local_8c;
  void *local_88;
  void *local_84;
  float local_80;
  byte local_70 [12];
  byte local_64 [8];
  float local_5c;
  CVector3f local_50;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  
  fVar1 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
  if ((fVar1 == 0.0) || (*(int *)((int)fVar1 + 0x2e0) != 0)) {
    in_stack_0000000c = 0;
  }
  iVar4 = 0;
  local_f4 = 0.0;
  if (in_stack_0000000c != 0) {
    iVar5 = 0;
    while (iVar4 < g_CDemonSetPtr->damage_listener_count) {
      this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar5 + -4);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (in_stack_00000004,(CVector3f *)(local_70 + 8),&(this_ptr->location).position);
      if ((((((float)1.5 < ABS((float)local_64._0_4_)) ||
            ((float)4 < ABS((float)local_64._4_4_))) || (local_5c < 0.0)) ||
          ((0x40c00000 < (int)local_5c || (this_ptr == in_stack_00000004)))) ||
         (iVar2 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_fffffef4), iVar2 != 0)) {
LAB_005c4c95:
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      }
      else {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_cc);
        iVar2 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)(auStack_cc + 4));
        if ((iVar2 != 2) ||
           (aCStack_c4[0].y =
                 1.0 - ((local_30 - (float)local_a0._8_4_) + (float)-1.5) *
                       (float)0.40000000000000002, aCStack_c4[0].y < (float)auStack_cc._4_4_))
        goto LAB_005c4c95;
        if (aCStack_c4[0].y < 0.0) {
          aCStack_c4[0].y = 0.0;
        }
        auStack_cc._4_4_ = aCStack_c4[0].y;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      }
    }
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
    aCStack_c4[0].x = 0.0;
    aCStack_c4[0].y = 0.0;
    fStack_40 = 3.5;
    fStack_3c = 1.5;
    aCStack_c4[0].z = 3.5;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (in_stack_00000004,(CVector3f *)(auStack_d8 + 8),aCStack_c4);
    if ((CVector3f *)(auStack_ac + 4) != pCVar3) {
      auStack_ac._4_4_ = pCVar3->x;
      local_a4 = pCVar3->y;
      local_a0._0_4_ = pCVar3->z;
    }
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)auStack_d8,
                        DAT_03f6bad0);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,(CVector3f *)(local_a0 + 8),pCVar3);
    if ((CVector3f *)local_70 != pCVar3) {
      local_70._0_4_ = pCVar3->x;
      local_70._4_4_ = pCVar3->y;
      local_70._8_4_ = pCVar3->z;
    }
    local_88 = (void *)((float)local_70._0_4_ + (float)local_a0._0_4_);
    local_84 = (void *)((float)local_70._4_4_ + (float)local_a0._4_4_);
    local_80 = (float)local_70._8_4_ + (float)local_a0._8_4_;
    if ((void **)auStack_ac != &local_88) {
      auStack_ac._0_4_ = local_88;
      auStack_ac._4_4_ = local_84;
      local_a4 = local_80;
    }
    local_28 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                         (g_CDemonSetPtr,(CVector3f *)local_70,(CVector3f *)auStack_ac);
    local_f4 = local_28;
    if ((0.0 <= local_28) && (local_28 < 1.0)) {
      local_f4 = 1.0 - (local_28 * local_30 - local_2c) / (local_30 - local_2c);
    }
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1),
                        (CVector3f *)(local_64 + 4),DAT_03f6bad4);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,&local_50,pCVar3);
    if ((CVector3f *)local_64 != pCVar3) {
      local_64._0_4_ = pCVar3->x;
      local_64._4_4_ = pCVar3->y;
      local_5c = pCVar3->z;
    }
    fStack_40 = (float)local_64._0_4_ + local_94;
    fStack_3c = (float)local_64._4_4_ + local_90;
    local_38 = local_5c + local_8c;
    if ((float *)local_a0 != &fStack_40) {
      local_a0._0_4_ = fStack_40;
      local_a0._4_4_ = fStack_3c;
      local_a0._8_4_ = local_38;
    }
    local_1c = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                         (g_CDemonSetPtr,(CVector3f *)local_64,(CVector3f *)local_a0);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  }
  if (1.0 < local_f4) {
    local_f4 = 1.0;
  }
  local_f4 = local_f4 - *(float *)(in_stack_00000004[0x17a].create_event + 0x24);
  if (0.0 <= local_f4) {
    if ((0.0 < local_f4) && (in_stack_00000008 / _DAT_0066373c < local_f4)) {
      local_f4 = in_stack_00000008 / _DAT_0066373c;
    }
  }
  else {
    fVar1 = -in_stack_00000008 * (1.0 / _DAT_00663740);
    if (local_f4 < fVar1) {
      local_f4 = fVar1;
    }
  }
  *(float *)(in_stack_00000004[0x17a].create_event + 0x24) =
       *(float *)(in_stack_00000004[0x17a].create_event + 0x24) + local_f4;
  return;
}
