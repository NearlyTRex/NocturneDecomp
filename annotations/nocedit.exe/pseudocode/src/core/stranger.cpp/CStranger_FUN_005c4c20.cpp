// Name: core_stranger.cpp_CStranger_FUN_005c4c20
// Address: 005c4c20
// Address Range: [[005c4c20, 005c516b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c4c20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c4c20(uint param_1,
   uint param_2, uint param_3) */

void core_stranger_cpp_CStranger_FUN_005c4c20
               (uint param_1,uint param_2,float unaff_EBX,uint param_4,
               CDemonActor *param_5,float param_6,float param_7)

{
  CDemonActor *pCVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  float unaff_retaddr;
  SCollisionInfo *in_stack_fffffef4;
  ulonglong in_stack_ffffff0c;
  float fVar7;
  byte auStack_e0 [8];
  double dStack_d8;
  float fStack_d0;
  CDemonActor *pCStack_cc;
  CDemonActor *pCStack_c8;
  float fStack_c4;
  byte auStack_ac [20];
  CVector3f local_98 [2];
  byte local_80 [8];
  float fStack_78;
  byte local_74 [12];
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54;
  CVector3f local_44;
  byte local_38 [8];
  float local_30;
  CVector3f local_24;
  float fStack_14;
  
  fVar7 = param_5[0x17a].orient_matrix.m[0].x;
  if ((fVar7 == 0.0) || (fVar2 = param_7, *(int *)((int)fVar7 + 0x2e0) != 0)) {
    fVar2 = 0.0;
  }
  iVar5 = 0;
  if (fVar2 != 0.0) {
    iVar6 = 0;
LAB_005c4c51:
    do {
      if (g_CDemonSetPtr->damage_listener_count <= iVar5) goto LAB_005c4d62;
      pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar6 + -4);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (param_5,&local_64,&(pCVar1->location).position);
      if (((((ABS(local_64.x) <= (float)1.5) &&
            (ABS(local_64.y) <= (float)4)) && (0.0 <= local_64.z)) &&
          (((int)local_64.z < 0x40c00001 && (pCVar1 != param_5)))) &&
         (iVar3 = (*pCVar1->vtable[1].hasCollision)(pCVar1,in_stack_fffffef4), iVar3 == 0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_e0);
        in_stack_fffffef4 = (SCollisionInfo *)(auStack_e0 + 4);
        iVar3 = (*pCVar1->vtable->hasCollision)(pCVar1,in_stack_fffffef4);
        if ((iVar3 == 2) &&
           (fVar7 = 1.0 - ((local_64.z - fStack_c4) + (float)-1.5) *
                          (float)0.40000000000000002, (float)in_stack_ffffff0c <= fVar7)) {
          if (fVar7 < 0.0) {
            fVar7 = 0.0;
          }
          in_stack_ffffff0c = (ulonglong)(uint)fVar7;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
          goto LAB_005c4c51;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while( true );
  }
LAB_005c50a7:
  if (1.0 < (float)pCStack_cc) {
    pCStack_cc = (CDemonActor *)0x3f800000;
  }
  pCStack_c8 = (CDemonActor *)((float)pCStack_cc - *(float *)(param_5[0x17a].create_event + 0x24));
  if (0.0 <= (float)pCStack_c8) {
    if ((0.0 < (float)pCStack_c8) &&
       (param_5 = (CDemonActor *)(param_6 / _DAT_0066373c), (float)param_5 < (float)pCStack_c8)) {
      pCStack_c8 = param_5;
    }
  }
  else {
    pCVar1 = (CDemonActor *)(-param_6 * (1.0 / _DAT_00663740));
    if ((float)pCStack_c8 < (float)pCVar1) {
      pCStack_c8 = pCVar1;
    }
  }
  *(float *)(param_5[0x17a].create_event + 0x24) =
       *(float *)(param_5[0x17a].create_event + 0x24) + (float)pCStack_c8;
  return;
LAB_005c4d62:
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,param_5);
  local_98[0].x = 0.0;
  local_98[0].y = 0.0;
  fStack_14 = 3.5;
  local_98[0].z = 3.5;
  pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (param_5,(CVector3f *)(auStack_ac + 8),local_98);
  if ((CVector3f *)(local_80 + 4) != pCVar4) {
    local_80._4_4_ = pCVar4->x;
    fStack_78 = pCVar4->y;
    local_74._0_4_ = pCVar4->z;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(param_5 + 1),(CVector3f *)auStack_ac,DAT_03f6bad0
                     );
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (param_5,(CVector3f *)(local_74 + 8),pCVar4);
  if (&local_44 != pCVar4) {
    local_44.x = pCVar4->x;
    local_44.y = pCVar4->y;
    local_44.z = pCVar4->z;
  }
  local_64.z = local_44.x + (float)local_74._0_4_;
  local_58 = local_44.y + (float)local_74._4_4_;
  local_54 = local_44.z + (float)local_74._8_4_;
  if ((float *)local_80 != &local_64.z) {
    local_80._0_4_ = local_64.z;
    local_80._4_4_ = local_58;
    fStack_78 = local_54;
  }
  param_5 = (CDemonActor *)
            core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,&local_44,(CVector3f *)local_80);
  pCStack_cc = param_5;
  if (((0.0 <= (float)param_5) && ((float)param_5 < 1.0)) &&
     (pCStack_cc = (CDemonActor *)
                   (1.0 - ((float)param_5 * unaff_EBX - unaff_retaddr) / (unaff_EBX - unaff_retaddr)
                   ), (float)auStack_e0._4_4_ < (float)pCStack_cc)) {
    auStack_e0._4_4_ = pCStack_cc;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(param_5 + 1),(CVector3f *)(local_38 + 4),
                      DAT_03f6bad4);
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(param_5,&local_24,pCVar4);
  if ((CVector3f *)local_38 != pCVar4) {
    local_38._0_4_ = pCVar4->x;
    local_38._4_4_ = pCVar4->y;
    local_30 = pCVar4->z;
  }
  fStack_14 = (float)local_38._0_4_ + local_68;
  if ((float *)local_74 != &fStack_14) {
    local_74._0_4_ = fStack_14;
    local_74._4_4_ = (float)local_38._4_4_ + local_64.x;
    local_74._8_4_ = local_30 + local_64.y;
  }
  fStack_c4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                        (g_CDemonSetPtr,(CVector3f *)local_38,(CVector3f *)local_74);
  dStack_d8 = (double)fStack_c4;
  if (((0.0 <= dStack_d8) && (dStack_d8 < 1.0)) &&
     (fStack_c4 = 1.0 - (fStack_c4 * param_6 - param_7) / (param_6 - param_7), fStack_d0 < fStack_c4
     )) {
    fStack_d0 = fStack_c4;
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  goto LAB_005c50a7;
}
