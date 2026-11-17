// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420
// Address: 00429420
// Address Range: [[00429420, 00429b30]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(CCharacter *this_ptr,float delta_time,int disable_search)

#include "nocturne.h"

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
  CVector3f *pCVar7;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  CVector3f CStack_1a4;
  float fStack_198;
  float afStack_194 [4];
  uint uStack_184;
  CVector3f CStack_180;
  float fStack_174;
  float afStack_170 [4];
  float fStack_160;
  CVector3f CStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  CVector3f CStack_138;
  float fStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [4];
  float fStack_dc;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [2];
  CVector3f CStack_3c;
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
        CStack_138.y = 5.5;
        CStack_138.x = 0.0;
        CStack_138.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  (&this_ptr->base,&CStack_138,&CStack_90);
        fStack_198 = CStack_90.x;
        afStack_194[(uint)bVar6 * -2] = *(float *)((int)&CStack_90 + (uint)bVar6 * -8 + 4);
        afStack_194[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             *(float *)((int)&CStack_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        if (&fStack_114 != &fStack_198) {
          fStack_114 = fStack_198;
          fStack_110 = afStack_194[0];
          uStack_10c = afStack_194[1];
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                  (&this_ptr->model,iVar3,&CStack_15c);
        pCVar7 = &CStack_fc;
        CStack_fc.x = CStack_15c.x;
        *(uint *)((int)&CStack_fc + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_15c + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&this_ptr->base,pCVar7,&CStack_d8)
        ;
        fStack_12c = CStack_d8.x;
        afStack_128[(uint)bVar6 * -2] = *(float *)((int)&CStack_d8 + (uint)bVar6 * -8 + 4);
        afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             *(float *)((int)&CStack_d8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        if (&fStack_114 != &fStack_12c) {
          fStack_114 = fStack_12c;
          fStack_110 = afStack_128[0];
          uStack_10c = afStack_128[1];
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
      CStack_3c.x = 0.0;
      CStack_3c.z = 0.0;
      CStack_3c.y = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                (&this_ptr->base,&CStack_3c,&CStack_144);
      afStack_170[2] = CStack_144.x;
      afStack_170[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_144 + (uint)bVar6 * -8 + 4);
      afStack_170[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)((int)&CStack_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (&fStack_150 != afStack_170 + 2) {
        fStack_150 = afStack_170[2];
        fStack_14c = afStack_170[3];
        fStack_148 = fStack_160;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                (&this_ptr->model,iVar3,&CStack_1a4);
      pCVar7 = &CStack_120;
      CStack_120.x = CStack_1a4.x;
      *(uint *)((int)&CStack_120 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_1a4 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_120 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_1a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&this_ptr->base,pCVar7,&CStack_180);
      fStack_cc = CStack_180.x;
      afStack_c8[(uint)bVar6 * -2] = *(float *)((int)&CStack_180 + (uint)bVar6 * -8 + 4);
      afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&CStack_180 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (&fStack_150 != &fStack_cc) {
        fStack_150 = fStack_cc;
        fStack_14c = afStack_c8[0];
        fStack_148 = afStack_c8[1];
      }
    }
    pCStack_1c = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (&this_ptr->look_at_candidate->base,g_CCharacterClassInfo.name_hash);
    pCStack_20 = pCStack_1c;
    if (pCStack_1c == (CCharacter *)0x0) {
      pCVar1 = this_ptr->look_at_candidate;
      pCVar5 = &(pCVar1->base).location;
      if ((CLocation *)&fStack_1b0 != pCVar5) {
        fStack_1b0 = (pCVar5->position).x;
        fStack_1ac = (pCVar1->base).location.position.y;
        afStack_ec[1] = (pCVar1->base).location.position.z;
LAB_00429762:
        fStack_1a8 = afStack_ec[1];
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
          if ((CLocation *)&fStack_1b0 != pCVar5) {
            fStack_1b0 = (pCVar5->position).x;
            fStack_1ac = (pCStack_20->base).location.position.y;
            fStack_1a8 = (pCStack_20->base).location.position.z;
          }
          fStack_1ac = fStack_1ac + 5.5f;
        }
        else {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                    (this_ptr_01,iVar3,&CStack_c0);
          CStack_54.x = CStack_c0.x;
          *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    (&pCStack_20->base,&CStack_54,&CStack_78);
          fStack_f0 = CStack_78.x;
          afStack_ec[(uint)bVar6 * -2] = *(float *)((int)&CStack_78 + (uint)bVar6 * -8 + 4);
          afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               *(float *)((int)&CStack_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          if (&fStack_1b0 != &fStack_f0) {
            fStack_1b0 = fStack_f0;
            fStack_1ac = afStack_ec[0];
            goto LAB_00429762;
          }
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                  (&pCStack_1c->model,0,&CStack_9c);
        pCVar1 = pCStack_1c;
        pCVar7 = &CStack_b4;
        CStack_b4.x = CStack_9c.x;
        *(uint *)((int)&CStack_b4 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&pCVar1->base,pCVar7,&CStack_60);
        fStack_48 = CStack_60.x;
        afStack_44[(uint)bVar6 * -2] = *(float *)((int)&CStack_60 + (uint)bVar6 * -8 + 4);
        afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             *(float *)((int)&CStack_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        if (&fStack_1b0 != &fStack_48) {
          fStack_1b0 = fStack_48;
          fStack_1ac = afStack_44[0];
          afStack_ec[1] = afStack_44[1];
          goto LAB_00429762;
        }
      }
    }
    pCVar7 = &CStack_6c;
    afStack_ec[2] = fStack_1b0 - fStack_150;
    afStack_ec[3] = fStack_1ac - fStack_14c;
    fStack_dc = fStack_1a8 - fStack_148;
    CStack_6c.x = fStack_1b0 - fStack_150;
    *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + 4) = afStack_ec[(uint)bVar6 * -2 + 3];
    *(float *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
              (&this_ptr->base,pCVar7,&CStack_84);
    CStack_108.x = CStack_84.x;
    *(uint *)((int)&CStack_108 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_84 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_108 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_108,&CStack_a8);
    fStack_174 = CStack_a8.x;
    afStack_170[(uint)bVar6 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4);
    afStack_170[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    if (afStack_194 + 2 != &fStack_174) {
      afStack_194[2] = fStack_174;
      afStack_194[3] = afStack_170[0];
      uStack_184 = afStack_170[1];
    }
    if ((float)1.3962634015555599 < ABS(afStack_194[3])) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)0.78539816337500001 < ABS(afStack_194[2])) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
      goto LAB_004294b3;
    }
  }
  if (this_ptr->look_at_candidate != (CCharacter *)0x0) {
    fVar4 = delta_time / 0.5f + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar4;
    if (1.0 < fVar4) {
      this_ptr->look_at_weight = 1.0;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                          (afStack_194[3] - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fStack_18 * (float)0.40000000000000002 + this_ptr->look_at_yaw;
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_194[2] - this_ptr->look_at_pitch)
    ;
    this_ptr->look_at_pitch = fVar4 * (float)0.40000000000000002 + this_ptr->look_at_pitch;
    return;
  }
LAB_004294b3:
  fVar4 = this_ptr->look_at_weight - delta_time / 0.5f;
  this_ptr->look_at_weight = fVar4;
  if (fVar4 < 0.0) {
    this_ptr->look_at_pitch = 0.0;
    this_ptr->look_at_weight = 0.0;
    this_ptr->look_at_yaw = 0.0;
    return;
  }
  return;
}
