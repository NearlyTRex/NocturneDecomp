// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00432f10
// Address: 00432f10
// Address Range: [[00432f10, 00433b27]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00432f10(CCharacter *this_ptr,float delta_time,int disable_search)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00432f10(CCharacter *this_ptr,float delta_time,int disable_search)

{
  EDeathState EVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CCharacter *pCVar4;
  CSkeleton *pCVar5;
  float fVar6;
  CLocation *pCVar7;
  CDeformableModelInstance *this_ptr_00;
  byte bVar8;
  float afStackY_1228 [1013];
  char *pcVar9;
  CVector3f *pCVar10;
  float fStack_248;
  float fStack_244;
  CVector3f CStack_240;
  CVector3f CStack_234;
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [4];
  float fStack_208;
  CVector3f CStack_204;
  float fStack_1f8;
  float afStack_1f4 [2];
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  float fStack_1d4;
  float afStack_1d0 [4];
  uint uStack_1c0;
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  CVector3f CStack_198;
  CVector3f CStack_18c;
  CVector3f CStack_180;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [4];
  float fStack_154;
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CSkeleton *pCStack_34;
  CCharacter *pCStack_30;
  int iStack_2c;
  CCharacter *pCStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (EVar1 != DEATH_STATE_ALIVE) {
    disable_search = 1;
  }
  pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         (&this_ptr->model);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
  if (iVar2 == -1) {
    disable_search = 1;
  }
  pCStack_28 = (CCharacter *)0x0;
  pCVar4 = pCStack_28;
  if ((disable_search == 0) &&
     (pCVar4 = this_ptr->look_at_target, this_ptr->look_at_target == (CCharacter *)0x0)) {
    if (this_ptr->look_at_search_timer <= 0.0) {
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
      if (iVar2 == -1) {
        CStack_fc.y = 5.5;
        CStack_fc.x = 0.0;
        CStack_fc.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (&this_ptr->base,&CStack_fc,&CStack_78);
        CStack_18c.x = CStack_78.x;
        *(uint *)((int)&CStack_18c + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_78 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_18c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        if (&CStack_12c != &CStack_18c) {
          CStack_12c.x = CStack_18c.x;
          CStack_12c.y = CStack_18c.y;
          CStack_12c.z = CStack_18c.z;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (&this_ptr->model,iVar2,&CStack_d8);
        pCVar10 = &CStack_1a4;
        CStack_1a4.x = CStack_d8.x;
        *(uint *)((int)&CStack_1a4 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_d8 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_1a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_d8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  (&this_ptr->base,pCVar10,&CStack_cc);
        CStack_198.x = CStack_cc.x;
        *(uint *)((int)&CStack_198 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_198 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        if (&CStack_12c != &CStack_198) {
          CStack_12c.x = CStack_198.x;
          CStack_12c.y = CStack_198.y;
          CStack_12c.z = CStack_198.z;
        }
      }
      iStack_2c = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                            (g_CEventListPtr,"heroCanSee");
      iStack_24 = 0;
      for (iStack_20 = 0; iStack_20 < g_CDemonSetPtr->character_count; iStack_20 = iStack_20 + 1) {
        pCVar4 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_24);
        if ((((pCVar4 != this_ptr) &&
             (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (&pCVar4->base,g_CTVBatClassInfo.name_hash),
             pCVar3 == (CDemonActor *)0x0)) && ((pCVar4->is_spectral == 0 || (iStack_2c != 0)))) &&
           ((iVar2 = (*((pCVar4->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar4->base),
            iVar2 == 0 &&
            (EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
            EVar1 == DEATH_STATE_ALIVE)))) {
          iVar2 = -1;
          if ((pCVar4->model).model_name[0] != '\0') {
            iVar2 = 0;
            pcVar9 = "Bip01 head";
            pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                               (&pCVar4->model);
            iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar5,pcVar9,iVar2);
          }
          if (iVar2 < 0) {
            pCVar7 = &(pCVar4->base).location;
            if ((CLocation *)&CStack_144 != pCVar7) {
              CStack_144.x = (pCVar7->position).x;
              CStack_144.y = (pCVar4->base).location.position.y;
              CStack_144.z = (pCVar4->base).location.position.z;
            }
            CStack_144.y = CStack_144.y + 5.5f;
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                      (&pCVar4->model,iVar2,&CStack_114);
            pCVar10 = &CStack_1ec;
            CStack_1ec.x = CStack_114.x;
            *(uint *)((int)&CStack_1ec + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)&CStack_114 + (uint)bVar8 * -8 + 4);
            *(uint *)((int)&CStack_1ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)((int)&CStack_114 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      (&pCVar4->base,pCVar10,&CStack_108);
            CStack_138.x = CStack_108.x;
            *(uint *)((int)&CStack_138 + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + 4);
            *(uint *)((int)&CStack_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            if (&CStack_144 != &CStack_138) {
              CStack_144.x = CStack_138.x;
              CStack_144.y = CStack_138.y;
              CStack_144.z = CStack_138.z;
            }
          }
          pCVar10 = &CStack_f0;
          fStack_21c = CStack_144.x - CStack_12c.x;
          afStack_218[0] = CStack_144.y - CStack_12c.y;
          afStack_218[1] = CStack_144.z - CStack_12c.z;
          CStack_f0.x = CStack_144.x - CStack_12c.x;
          *(float *)((int)&CStack_f0 + (uint)bVar8 * -8 + 4) = afStack_218[(uint)bVar8 * -2];
          *(float *)((int)&CStack_f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_218[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
                    (&this_ptr->base,pCVar10,&CStack_180);
          CStack_234.x = CStack_180.x;
          *(uint *)((int)&CStack_234 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_180 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_234 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_180 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if ((0.0 <= CStack_234.z) &&
             (fStack_244 = CStack_234.z * CStack_234.z +
                           CStack_234.x * CStack_234.x + CStack_234.y * CStack_234.y,
             fStack_1c = fStack_244, (int)fStack_244 < 0x44610001)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                      (&CStack_234,&CStack_1bc);
            fStack_b4 = CStack_1bc.x;
            afStack_b0[(uint)bVar8 * -2] = *(float *)((int)&CStack_1bc + (uint)bVar8 * -8 + 4);
            afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(float *)((int)&CStack_1bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            if ((ABS(afStack_b0[0]) <= (float)1.2217304763611101) &&
               (ABS(fStack_b4) <= (float)0.87266462597222205)) {
              fStack_248 = 10.0;
              pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (&pCVar4->base,g_CEnemyClassInfo.name_hash);
              if ((pCVar3 != (CDemonActor *)0x0) &&
                 (fStack_248 = 30.0, (CCharacter *)pCVar3[0x90].validation_magic == this_ptr)) {
                fStack_248 = 40.0;
              }
              if ((fStack_248 < (float)10) &&
                 (iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(&pCVar4->base,"CHero"),
                 iVar2 != 0)) {
                fStack_248 = 15.0;
              }
              fStack_248 = ((float)20 / (SQRT(fStack_244) + (float)20)
                           ) * fStack_248;
              if (pCVar4 == this_ptr->look_at_candidate) {
                fStack_248 = fStack_248 * (float)1.1000000000000001;
              }
              if (((pCVar3 != (CDemonActor *)0x0) &&
                  (pCVar3[0x90].orient_matrix.m[2].x == 1.4013e-45)) ||
                 (-1.0f <= fStack_248)) {
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&this_ptr->base);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&pCVar4->base);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                  (g_CDemonSetPtr,&CStack_12c,&CStack_144);
                if ((iVar2 == 0) && (pCStack_28 = pCVar4, afStack_1d0 + 2 != &fStack_b4)) {
                  afStack_1d0[2] = fStack_b4;
                  afStack_1d0[3] = afStack_b0[0];
                  uStack_1c0 = afStack_b0[1];
                }
              }
            }
          }
        }
        iStack_24 = iStack_24 + 4;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,2.0);
      this_ptr->look_at_search_timer = fStack_18;
    }
    else {
      pCStack_28 = this_ptr->look_at_candidate;
      this_ptr->look_at_search_timer = this_ptr->look_at_search_timer - delta_time;
    }
  }
  else {
    pCStack_28 = pCVar4;
    this_ptr->look_at_search_timer = 0.0;
  }
  this_ptr->look_at_candidate = pCStack_28;
  if (pCStack_28 != (CCharacter *)0x0) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCStack_34,"Bip01 head",0);
    if (iVar2 == -1) {
      CStack_48.x = 0.0;
      CStack_48.y = 5.5;
      CStack_48.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                (&this_ptr->base,&CStack_48,&CStack_240);
      fStack_e4 = CStack_240.x;
      afStack_e0[(uint)bVar8 * -2] = *(float *)((int)&CStack_240 + (uint)bVar8 * -8 + 4);
      afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_240 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&fStack_9c != &fStack_e4) {
        fStack_9c = fStack_e4;
        fStack_98 = afStack_e0[0];
        fStack_94 = afStack_e0[1];
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                (&this_ptr->model,iVar2,&CStack_90);
      pCVar10 = &CStack_174;
      CStack_174.x = CStack_90.x;
      *(uint *)((int)&CStack_174 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_174 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&this_ptr->base,pCVar10,&CStack_84);
      fStack_168 = CStack_84.x;
      afStack_164[(uint)bVar8 * -2] = *(float *)((int)&CStack_84 + (uint)bVar8 * -8 + 4);
      afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_84 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&fStack_9c != &fStack_168) {
        fStack_9c = fStack_168;
        fStack_98 = afStack_164[0];
        fStack_94 = afStack_164[1];
      }
    }
    pCVar4 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c600
                       (&this_ptr->look_at_candidate->base,g_CCharacterClassInfo.name_hash);
    pCStack_30 = pCVar4;
    if (pCVar4 == (CCharacter *)0x0) {
      pCVar4 = this_ptr->look_at_candidate;
      pCVar7 = &(pCVar4->base).location;
      if ((CLocation *)&fStack_6c != pCVar7) {
        fStack_6c = (pCVar7->position).x;
        fStack_68 = (pCVar4->base).location.position.y;
        fStack_154 = (pCVar4->base).location.position.z;
LAB_0043370e:
        fStack_64 = fStack_154;
      }
    }
    else {
      EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
      if ((EVar1 == DEATH_STATE_ALIVE) || ((pCVar4->model).model_name[0] == '\0')) {
        iVar2 = 0;
        pcVar9 = "Bip01 head";
        this_ptr_00 = &pCStack_30->model;
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00)
        ;
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar5,pcVar9,iVar2);
        if (iVar2 == -1) {
          pCVar7 = &(pCStack_30->base).location;
          if ((CLocation *)&fStack_6c != pCVar7) {
            fStack_6c = (pCVar7->position).x;
            fStack_68 = (pCStack_30->base).location.position.y;
            fStack_64 = (pCStack_30->base).location.position.z;
          }
          fStack_68 = fStack_68 + 5.5f;
        }
        else {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                    (this_ptr_00,iVar2,&CStack_228);
          CStack_204.x = CStack_228.x;
          *(uint *)((int)&CStack_204 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_228 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_204 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_228 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    (&pCStack_30->base,&CStack_204,&CStack_120);
          afStack_164[2] = CStack_120.x;
          afStack_164[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + 4);
          afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if (&fStack_6c != afStack_164 + 2) {
            fStack_6c = afStack_164[2];
            fStack_68 = afStack_164[3];
            goto LAB_0043370e;
          }
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (&pCVar4->model,0,&CStack_54);
        pCVar10 = &CStack_1e0;
        CStack_1e0.x = CStack_54.x;
        *(uint *)((int)&CStack_1e0 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_1e0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)pCVar4,pCVar10,&CStack_60);
        afStack_218[2] = CStack_60.x;
        afStack_218[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_60 + (uint)bVar8 * -8 + 4);
        afStack_218[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             *(float *)((int)&CStack_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        if (&fStack_6c != afStack_218 + 2) {
          fStack_6c = afStack_218[2];
          fStack_68 = afStack_218[3];
          fStack_154 = fStack_208;
          goto LAB_0043370e;
        }
      }
    }
    fStack_1f8 = fStack_6c - fStack_9c;
    afStack_1f4[0] = fStack_68 - fStack_98;
    afStack_1f4[1] = fStack_64 - fStack_94;
    CStack_1b0.x = fStack_6c - fStack_9c;
    *(float *)((int)&CStack_1b0 + (uint)bVar8 * -8 + 4) = afStack_1f4[(uint)bVar8 * -2];
    *(float *)((int)&CStack_1b0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_1f4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
              (&this_ptr->base,&CStack_1b0,&CStack_c0);
    CStack_a8.x = CStack_c0.x;
    *(uint *)((int)&CStack_a8 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_c0 + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&CStack_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&CStack_c0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_a8,&CStack_150);
    fStack_1d4 = CStack_150.x;
    afStack_1d0[(uint)bVar8 * -2] = *(float *)((int)&CStack_150 + (uint)bVar8 * -8 + 4);
    afStack_1d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&CStack_150 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    if (afStack_1d0 + 2 != &fStack_1d4) {
      afStack_1d0[2] = fStack_1d4;
      afStack_1d0[3] = afStack_1d0[0];
      uStack_1c0 = afStack_1d0[1];
    }
    if ((float)1.3962634015555599 < ABS(afStack_1d0[3])) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)0.78539816337500001 < ABS(afStack_1d0[2])) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
      goto LAB_00432fb1;
    }
  }
  if (this_ptr->look_at_candidate != (CCharacter *)0x0) {
    fVar6 = delta_time / 0.5f + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar6;
    if (1.0 < fVar6) {
      this_ptr->look_at_weight = 1.0;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          (afStack_1d0[3] - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fStack_18 * (float)0.40000000000000002 + this_ptr->look_at_yaw;
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_1d0[2] - this_ptr->look_at_pitch)
    ;
    this_ptr->look_at_pitch = fVar6 * (float)0.40000000000000002 + this_ptr->look_at_pitch;
    return;
  }
LAB_00432fb1:
  fVar6 = this_ptr->look_at_weight - delta_time / 0.5f;
  this_ptr->look_at_weight = fVar6;
  if (fVar6 < 0.0) {
    this_ptr->look_at_pitch = 0.0;
    this_ptr->look_at_weight = 0.0;
    this_ptr->look_at_yaw = 0.0;
    return;
  }
  return;
}
