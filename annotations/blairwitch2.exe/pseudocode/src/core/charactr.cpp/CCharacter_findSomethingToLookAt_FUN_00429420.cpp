// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420
// Address: 00429420
// Address Range: [[00429420, 00429b30]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(CCharacter *this_ptr,float delta_time,int disable_search)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(CCharacter *this_ptr,float delta_time,int disable_search)

{
  CCharacter *pCVar1;
  EDeathState EVar2;
  int iVar3;
  CSkeleton *this_ptr_00;
  float fVar4;
  CLocation *pCVar5;
  CDeformableModelInstance *this_ptr_01;
  byte bVar6;
  float afStackY_118c [1012];
  char *bone_name;
  uint *puVar7;
  float *pfVar8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  float fStack_18c;
  float fStack_188;
  uint uStack_184;
  float fStack_180;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_b4;
  float fStack_a8;
  uint uStack_9c;
  uint uStack_90;
  uint uStack_84;
  float fStack_78;
  float fStack_6c;
  float fStack_60;
  uint uStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  CSkeleton *pCStack_28;
  CCharacter *pCStack_24;
  CCharacter *pCStack_20;
  CCharacter *pCStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (EVar2 != DEATH_STATE_ALIVE) {
    disable_search = 1;
  }
  pCStack_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         (&this_ptr->model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_28,"Bip01 head",0);
  if (iVar3 == -1) {
    disable_search = 1;
  }
  pCStack_24 = (CCharacter *)0x0;
  pCVar1 = pCStack_24;
  if ((disable_search == 0) &&
     (pCVar1 = this_ptr->look_at_target, this_ptr->look_at_target == (CCharacter *)0x0)) {
    if (this_ptr->look_at_search_timer <= 0.0) {
      iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_28,"Bip01 head",0);
      if (iVar3 == -1) {
        uStack_134 = 0x40b00000;
        uStack_138 = 0;
        uStack_130 = 0;
        core_actor_cpp_FUN_00408d70(this_ptr,&stack0xfffffec8);
        uStack_198 = uStack_90;
        (&stack0xfffffe6c)[(uint)bVar6 * 0xfffffffe] =
             *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xfffffe70 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffeec != &stack0xfffffe68) {
          uStack_114 = uStack_198;
          uStack_110 = uStack_194;
          uStack_10c = uStack_190;
        }
      }
      else {
        core_skeleton_cpp_FUN_00546a90(&this_ptr->model,iVar3);
        puVar7 = &stack0xffffff04;
        uStack_fc = uStack_15c;
        *(uint *)((int)&stack0xffffff08 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xfffffea8 + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffff0c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xfffffeac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        core_actor_cpp_FUN_00408d70(this_ptr,puVar7);
        uStack_12c = uStack_d8;
        (&stack0xfffffed8)[(uint)bVar6 * 0xfffffffe] =
             *(uint *)(&stack0xffffff2c + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xfffffedc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff30 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffeec != &stack0xfffffed4) {
          uStack_114 = uStack_12c;
          uStack_110 = uStack_128;
          uStack_10c = uStack_124;
        }
      }
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->character_count; iVar3 = iVar3 + 1) {
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
      this_ptr->look_at_search_timer = fStack_18;
    }
    else {
      pCStack_24 = this_ptr->look_at_candidate;
      this_ptr->look_at_search_timer = this_ptr->look_at_search_timer - delta_time;
    }
  }
  else {
    pCStack_24 = pCVar1;
    this_ptr->look_at_search_timer = 0.0;
  }
  this_ptr->look_at_candidate = pCStack_24;
  if (pCStack_24 != (CCharacter *)0x0) {
    iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_28,"Bip01 head",0);
    if (iVar3 == -1) {
      uStack_3c = 0;
      uStack_34 = 0;
      uStack_38 = 0x40b00000;
      core_actor_cpp_FUN_00408d70(this_ptr,&stack0xffffffc4);
      fStack_168 = fStack_144;
      (&stack0xfffffe9c)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffec0 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xfffffea0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffec4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffeb0 != &stack0xfffffe98) {
        fStack_150 = fStack_168;
        fStack_14c = fStack_164;
        fStack_148 = fStack_160;
      }
    }
    else {
      core_skeleton_cpp_FUN_00546a90(&this_ptr->model,iVar3);
      puVar7 = &stack0xfffffee0;
      uStack_120 = uStack_1a4;
      *(uint *)((int)&stack0xfffffee4 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xfffffe60 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)(&stack0xfffffee8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe64 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      core_actor_cpp_FUN_00408d70(this_ptr,puVar7);
      fStack_cc = fStack_180;
      (&stack0xffffff38)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffe84 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffff3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xfffffe88 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xfffffeb0 != &stack0xffffff34) {
        fStack_150 = fStack_cc;
        fStack_14c = fStack_c8;
        fStack_148 = fStack_c4;
      }
    }
    pCStack_1c = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (&this_ptr->look_at_candidate->base,g_CCharacterClassInfo.name_hash);
    pCStack_20 = pCStack_1c;
    if (pCStack_1c == (CCharacter *)0x0) {
      pCVar1 = this_ptr->look_at_candidate;
      pCVar5 = &(pCVar1->base).location;
      if ((CLocation *)&stack0xfffffe50 != pCVar5) {
        fStack_1b0 = (pCVar5->position).x;
        fStack_1ac = (pCVar1->base).location.position.y;
        fStack_e8 = (pCVar1->base).location.position.z;
LAB_00429762:
        fStack_1a8 = fStack_e8;
      }
    }
    else {
      EVar2 = (*(((pCStack_1c->base).vtable._uc)->_uc).getDeathState)(pCStack_1c);
      if ((EVar2 == DEATH_STATE_ALIVE) || ((pCStack_1c->model).model_name[0] == '\0')) {
        iVar3 = 0;
        bone_name = "Bip01 head";
        this_ptr_01 = &pCStack_20->model;
        this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                                (this_ptr_01);
        iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,bone_name,iVar3);
        if (iVar3 == -1) {
          pCVar5 = &(pCStack_20->base).location;
          if ((CLocation *)&stack0xfffffe50 != pCVar5) {
            fStack_1b0 = (pCVar5->position).x;
            fStack_1ac = (pCStack_20->base).location.position.y;
            fStack_1a8 = (pCStack_20->base).location.position.z;
          }
          fStack_1ac = fStack_1ac + _DAT_005cd0ba;
        }
        else {
          core_skeleton_cpp_FUN_00546a90(this_ptr_01,iVar3);
          uStack_54 = uStack_c0;
          *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          core_actor_cpp_FUN_00408d70(pCStack_20,&stack0xffffffac);
          fStack_f0 = fStack_78;
          (&stack0xffffff14)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff8c + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffff18 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if (&stack0xfffffe50 != &stack0xffffff10) {
            fStack_1b0 = fStack_f0;
            fStack_1ac = fStack_ec;
            goto LAB_00429762;
          }
        }
      }
      else {
        core_skeleton_cpp_FUN_00546a90(&pCStack_1c->model,0);
        pCVar1 = pCStack_1c;
        puVar7 = &stack0xffffff4c;
        uStack_b4 = uStack_9c;
        *(uint *)((int)&stack0xffffff50 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff68 + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffff54 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        core_actor_cpp_FUN_00408d70(pCVar1,puVar7);
        fStack_48 = fStack_60;
        (&stack0xffffffbc)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffa4 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xfffffe50 != &stack0xffffffb8) {
          fStack_1b0 = fStack_48;
          fStack_1ac = fStack_44;
          fStack_e8 = fStack_40;
          goto LAB_00429762;
        }
      }
    }
    pfVar8 = &stack0xffffff94;
    fStack_e4 = fStack_1b0 - fStack_150;
    fStack_e0 = fStack_1ac - fStack_14c;
    fStack_dc = fStack_1a8 - fStack_148;
    fStack_6c = fStack_1b0 - fStack_150;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff20 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff24 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    core_actor_cpp_FUN_00408d30(this_ptr,pfVar8);
    uStack_108 = uStack_84;
    *(uint *)((int)&stack0xfffffefc + (uint)bVar6 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffff00 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xfffffef8);
    fStack_174 = fStack_a8;
    (&stack0xfffffe90)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffff5c + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xfffffe94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffff60 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (&stack0xfffffe74 != &stack0xfffffe8c) {
      fStack_18c = fStack_174;
      fStack_188 = fStack_170;
      uStack_184 = uStack_16c;
    }
    if ((float)_DAT_005cd0be < ABS(fStack_188)) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)_DAT_005cd0c6 < ABS(fStack_18c)) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
      goto LAB_004294b3;
    }
  }
  if (this_ptr->look_at_candidate != (CCharacter *)0x0) {
    fVar4 = delta_time / _DAT_005cd0ce + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar4;
    if (1.0 < fVar4) {
      this_ptr->look_at_weight = 1.0;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_188 - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fStack_18 * (float)_DAT_005cd0d6 + this_ptr->look_at_yaw;
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_18c - this_ptr->look_at_pitch);
    this_ptr->look_at_pitch = fVar4 * (float)_DAT_005cd0d6 + this_ptr->look_at_pitch;
    return;
  }
LAB_004294b3:
  fVar4 = this_ptr->look_at_weight - delta_time / _DAT_005cd0ce;
  this_ptr->look_at_weight = fVar4;
  if (fVar4 < 0.0) {
    this_ptr->look_at_pitch = 0.0;
    this_ptr->look_at_weight = 0.0;
    this_ptr->look_at_yaw = 0.0;
    return;
  }
  return;
}
