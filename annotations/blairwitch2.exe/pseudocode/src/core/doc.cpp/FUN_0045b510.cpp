// Name: core_doc.cpp_FUN_0045b510
// Address: 0045b510
// Address Range: [[0045b510, 0045bb47]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0045b510(CCharacter *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0045b510(CCharacter *param_1,float param_2,int param_3)

{
  int iVar1;
  CCharacter *this_ptr;
  float fVar2;
  EDeathState EVar3;
  ECollisionType EVar4;
  byte bVar5;
  float afStackY_1100 [991];
  CVector3f *pCVar6;
  float local_15c;
  float local_158;
  float fStack_150;
  SCollisionInfo SStack_14c;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114 [4];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  CVector3f local_f4;
  float local_e8;
  float local_e4 [4];
  float local_d4;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c [4];
  uint local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60 [2];
  CVector3f local_58;
  float local_4c;
  float local_48 [2];
  CVector3f local_40 [2];
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  iVar1 = *(int *)(param_1[2].flames[1].off_event + 0x40);
  if (iVar1 == 0) {
    param_3 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x43c);
    if ((iVar1 == 0) || (iVar1 == 5)) {
      param_3 = 1;
    }
  }
  local_158 = 0.0;
  if (param_3 != 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->character_count; local_20 = local_20 + 1) {
      this_ptr = *(CCharacter **)((int)g_CDemonSetPtr->characters + local_1c);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                (&param_1->base,&(this_ptr->base).location.position,&local_70);
      local_100 = local_70.x;
      local_114[(uint)bVar5 * -2 + 6] = *(float *)((int)&local_70 + (uint)bVar5 * -8 + 4);
      local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           *(float *)((int)&local_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      if (((ABS(local_100) <= (float)_DAT_005d05ff) && (ABS(local_fc) <= (float)_DAT_005d0607)) &&
         ((0.0 <= local_f8 &&
          ((((int)local_f8 < 0x40c00001 && (this_ptr != param_1)) &&
           (EVar3 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr),
           EVar3 == DEATH_STATE_ALIVE)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0(&SStack_14c);
        EVar4 = (*((this_ptr->base).vtable._ub)->getCollisionType)(&this_ptr->base,&SStack_14c);
        if ((EVar4 == COLLISION_TYPE_CYLINDER) &&
           (fStack_150 = 1.0 - ((local_f8 - SStack_14c.cylinder_radius) + (float)_DAT_005d060f) *
                               (float)_DAT_005d05f7, local_158 <= fStack_150)) {
          if (fStack_150 < 0.0) {
            fStack_150 = 0.0;
          }
          local_158 = fStack_150;
        }
      }
      local_1c = local_1c + 4;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&param_1->base);
    local_28 = 1.5;
    local_24 = 3.5;
    local_b8.x = 0.0;
    local_b8.y = 0.0;
    local_b8.z = 3.5;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(&param_1->base,&local_b8,&local_ac);
    local_4c = local_ac.x;
    local_48[(uint)bVar5 * -2] = *(float *)((int)&local_ac + (uint)bVar5 * -8 + 4);
    local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&local_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    if (&local_7c != &local_4c) {
      local_7c = local_4c;
      local_78 = local_48[0];
      local_74 = local_48[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (&param_1->model,_DAT_01b4d25c,&local_d0);
    pCVar6 = &local_f4;
    local_f4.x = local_d0.x;
    *(uint *)((int)&local_f4 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_d0 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_f4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_d0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&param_1->base,pCVar6,local_40);
    local_118 = local_40[0].x;
    local_114[(uint)bVar5 * -2] = *(float *)((int)local_40 + (uint)bVar5 * -8 + 4);
    local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)local_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    if (&local_124 != &local_118) {
      local_124 = local_118;
      local_120 = local_114[0];
      local_11c = local_114[1];
    }
    local_e4[3] = local_120 + local_78;
    local_d4 = local_11c + local_74;
    local_e4[2] = local_124 + local_7c;
    local_64 = local_124 + local_7c;
    local_60[(uint)bVar5 * -2] = local_e4[(uint)bVar5 * -2 + 3];
    local_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         local_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (local_9c + 2 != &local_64) {
      local_9c[2] = local_64;
      local_9c[3] = local_60[0];
      local_8c = local_60[1];
    }
    local_18 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&local_124,local_9c + 2);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar2 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar2))
    {
      local_158 = fVar2;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (&param_1->model,_DAT_01b4d260,&local_58);
    pCVar6 = &local_88;
    local_88.x = local_58.x;
    *(uint *)((int)&local_88 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&param_1->base,pCVar6,&local_c4);
    local_a0 = local_c4.x;
    local_9c[(uint)bVar5 * -2] = *(float *)((int)&local_c4 + (uint)bVar5 * -8 + 4);
    local_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&local_c4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    if (&local_124 != &local_a0) {
      local_124 = local_a0;
      local_120 = local_9c[0];
      local_11c = local_9c[1];
    }
    local_114[3] = local_120 + local_78;
    local_104 = local_11c + local_74;
    local_114[2] = local_124 + local_7c;
    local_e8 = local_124 + local_7c;
    local_e4[(uint)bVar5 * -2] = local_114[(uint)bVar5 * -2 + 3];
    local_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (local_9c + 2 != &local_e8) {
      local_9c[2] = local_e8;
      local_9c[3] = local_e4[0];
      local_8c = local_e4[1];
    }
    local_18 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&local_124,local_9c + 2);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar2 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar2))
    {
      local_158 = fVar2;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  }
  if (1.0 < local_158) {
    local_158 = 1.0;
  }
  local_15c = local_158 - *(float *)(param_1[2].flames[2].base.actor_name + 0x14);
  if (0.0 <= local_15c) {
    if ((0.0 < local_15c) && (param_2 / _DAT_005f512c < local_15c)) {
      local_15c = param_2 / _DAT_005f512c;
    }
  }
  else {
    fVar2 = -param_2 * (1.0 / _DAT_005f5130);
    if (local_15c < fVar2) {
      local_15c = fVar2;
    }
  }
  *(float *)(param_1[2].flames[2].base.actor_name + 0x14) =
       *(float *)(param_1[2].flames[2].base.actor_name + 0x14) + local_15c;
  return;
}
