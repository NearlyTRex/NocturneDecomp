// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00432330
// Address: 00432330
// Address Range: [[00432330, 00432ffc]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00432330(CCharacter *this_ptr,float delta_time,int disable_search)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00432330(CCharacter *this_ptr,float delta_time,int disable_search)

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
  float fStack_234;
  float afStack_230 [4];
  float fStack_220;
  CVector3f CStack_21c;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  CVector3f CStack_1ec;
  float fStack_1e0;
  float afStack_1dc [2];
  CVector3f CStack_1d4;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  CVector3f CStack_1bc;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float afStack_1a0 [4];
  float fStack_190;
  CVector3f CStack_18c;
  CVector3f CStack_180;
  CVector3f CStack_174;
  CVector3f CStack_168;
  CVector3f CStack_15c;
  CVector3f CStack_150;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_34;
  CSkeleton *pCStack_30;
  CCharacter *pCStack_2c;
  int iStack_28;
  CCharacter *pCStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (EVar1 != DEATH_STATE_ALIVE) {
    disable_search = 1;
  }
  pCStack_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         (&this_ptr->model);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
  if (iVar2 == -1) {
    disable_search = 1;
  }
  pCStack_24 = (CCharacter *)0x0;
  pCVar4 = pCStack_24;
  if ((disable_search == 0) &&
     (pCVar4 = this_ptr->look_at_target, this_ptr->look_at_target == (CCharacter *)0x0)) {
    if (this_ptr->look_at_search_timer <= 0.0) {
      iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
      if (iVar2 == -1) {
        CStack_c0.y = 5.5;
        CStack_c0.x = 0.0;
        CStack_c0.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  (&this_ptr->base,&CStack_c0,&CStack_12c);
        CStack_1bc.x = CStack_12c.x;
        *(uint *)((int)&CStack_1bc + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_1bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        if (&CStack_180 != &CStack_1bc) {
          CStack_180.x = CStack_1bc.x;
          CStack_180.y = CStack_1bc.y;
          CStack_180.z = CStack_1bc.z;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&this_ptr->model,iVar2,&CStack_d8);
        pCVar10 = &CStack_120;
        CStack_120.x = CStack_d8.x;
        *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_d8 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_d8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  (&this_ptr->base,pCVar10,&CStack_15c);
        CStack_60.x = CStack_15c.x;
        *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_15c + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_15c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        if (&CStack_180 != &CStack_60) {
          CStack_180.x = CStack_60.x;
          CStack_180.y = CStack_60.y;
          CStack_180.z = CStack_60.z;
        }
      }
      iStack_28 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                            (g_CEventListPtr,"heroCanSee");
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->character_count; iStack_1c = iStack_1c + 1) {
        pCVar4 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_20);
        if (((pCVar4 != this_ptr) &&
            (((((pCVar4->is_spectral == 0 || (iStack_28 != 0)) &&
               (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CBugsClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0)) &&
              ((pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CTVBatClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0 &&
               (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CPryeMorphClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0)))) &&
             (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar4->base,g_CSpiritEagleClassInfo.name_hash),
             pCVar3 == (CDemonActor *)0x0)))) &&
           ((((pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (&pCVar4->base,g_CSpiritBearClassInfo.name_hash),
              pCVar3 == (CDemonActor *)0x0 &&
              (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (&pCVar4->base,g_CSpiritIndianClassInfo.name_hash),
              pCVar3 == (CDemonActor *)0x0)) &&
             (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar4->base,g_CStylerClassInfo.name_hash),
             pCVar3 == (CDemonActor *)0x0)) &&
            ((((pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CStylerDemonClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0 &&
               (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                   (&pCVar4->base,g_CDarkwolfClassInfo.name_hash),
               pCVar3 == (CDemonActor *)0x0)) &&
              (iVar2 = (*((pCVar4->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar4->base),
              iVar2 == 0)) &&
             (EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
             EVar1 == DEATH_STATE_ALIVE)))))) {
          iVar2 = -1;
          if ((pCVar4->model).model_name[0] != '\0') {
            iVar2 = 0;
            pcVar9 = "Bip01 head";
            pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                               (&pCVar4->model);
            iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar5,pcVar9,iVar2);
          }
          if (iVar2 < 0) {
            pCVar7 = &(pCVar4->base).location;
            if ((CLocation *)&CStack_150 != pCVar7) {
              CStack_150.x = (pCVar7->position).x;
              CStack_150.y = (pCVar4->base).location.position.y;
              CStack_150.z = (pCVar4->base).location.position.z;
            }
            CStack_150.y = CStack_150.y + 5.5f;
          }
          else {
            core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                      (&pCVar4->model,iVar2,&CStack_6c);
            pCVar10 = &CStack_108;
            CStack_108.x = CStack_6c.x;
            *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)&CStack_6c + (uint)bVar8 * -8 + 4);
            *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      (&pCVar4->base,pCVar10,&CStack_cc);
            CStack_21c.x = CStack_cc.x;
            afStack_230[(uint)bVar8 * -2 + 6] = *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + 4);
            afStack_230[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                 *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            if (&CStack_150 != (CVector3f *)(afStack_230 + 5)) {
              CStack_150.x = CStack_21c.x;
              CStack_150.y = CStack_21c.y;
              CStack_150.z = CStack_21c.z;
            }
          }
          pCVar10 = &CStack_f0;
          afStack_230[2] = CStack_150.x - CStack_180.x;
          afStack_230[3] = CStack_150.y - CStack_180.y;
          fStack_220 = CStack_150.z - CStack_180.z;
          CStack_f0.x = CStack_150.x - CStack_180.x;
          *(float *)((int)&CStack_f0 + (uint)bVar8 * -8 + 4) = afStack_230[(uint)bVar8 * -2 + 3];
          *(float *)((int)&CStack_f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_230[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
                    (&this_ptr->base,pCVar10,&CStack_240);
          CStack_1d4.x = CStack_240.x;
          *(uint *)((int)&CStack_1d4 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_240 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_1d4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_240 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if ((0.0 <= CStack_1d4.z) &&
             (fStack_248 = CStack_1d4.z * CStack_1d4.z +
                           CStack_1d4.x * CStack_1d4.x + CStack_1d4.y * CStack_1d4.y,
             fStack_34 = fStack_248, (int)fStack_248 < 0x44610001)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                      (&CStack_1d4,&CStack_1f8);
            fStack_1e0 = CStack_1f8.x;
            afStack_1dc[(uint)bVar8 * -2] = *(float *)((int)&CStack_1f8 + (uint)bVar8 * -8 + 4);
            afStack_1dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(float *)((int)&CStack_1f8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            if ((ABS(afStack_1dc[0]) <= (float)1.2217304763611101) &&
               (ABS(fStack_1e0) <= (float)0.87266462597222205)) {
              fStack_244 = 10.0;
              pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (&pCVar4->base,g_CEnemyClassInfo.name_hash);
              if ((pCVar3 != (CDemonActor *)0x0) &&
                 (fStack_244 = 30.0, (CCharacter *)pCVar3[0x99].orient_matrix.m[1].y == this_ptr)) {
                fStack_244 = 40.0;
              }
              if ((fStack_244 < (float)10) &&
                 (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(&pCVar4->base,"CHero"),
                 iVar2 != 0)) {
                fStack_244 = 15.0;
              }
              fStack_244 = ((float)20 / (SQRT(fStack_248) + (float)20)
                           ) * fStack_244;
              if (pCVar4 == this_ptr->look_at_candidate) {
                fStack_244 = fStack_244 * (float)1.1000000000000001;
              }
              if (((pCVar3 != (CDemonActor *)0x0) && (pCVar3[0x99].orient.vec.z == 1.4013e-45)) ||
                 (-1.0f <= fStack_244)) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&this_ptr->base);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&pCVar4->base);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,2);
                iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                  (g_CDemonSetPtr,&CStack_180,&CStack_150);
                if ((iVar2 == 0) && (pCStack_24 = pCVar4, &fStack_1c8 != &fStack_1e0)) {
                  fStack_1c8 = fStack_1e0;
                  fStack_1c4 = afStack_1dc[0];
                  uStack_1c0 = afStack_1dc[1];
                }
              }
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,2.0);
      this_ptr->look_at_search_timer = fStack_18;
    }
    else {
      pCStack_24 = this_ptr->look_at_candidate;
      this_ptr->look_at_search_timer = this_ptr->look_at_search_timer - delta_time;
    }
  }
  else {
    pCStack_24 = pCVar4;
    this_ptr->look_at_search_timer = 0.0;
  }
  this_ptr->look_at_candidate = pCStack_24;
  if (pCStack_24 != (CCharacter *)0x0) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCStack_30,"Bip01 head",0);
    if (iVar2 == -1) {
      CStack_b4.x = 0.0;
      CStack_b4.y = 5.5;
      CStack_b4.z = 0.0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                (&this_ptr->base,&CStack_b4,&CStack_204);
      fStack_210 = CStack_204.x;
      afStack_230[(uint)bVar8 * -2 + 9] = *(float *)((int)&CStack_204 + (uint)bVar8 * -8 + 4);
      afStack_230[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           *(float *)((int)&CStack_204 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&fStack_1b0 != afStack_230 + 8) {
        fStack_1b0 = fStack_210;
        fStack_1ac = fStack_20c;
        fStack_1a8 = fStack_208;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                (&this_ptr->model,iVar2,&CStack_e4);
      pCVar10 = &CStack_48;
      CStack_48.x = CStack_e4.x;
      *(uint *)((int)&CStack_48 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_e4 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(&this_ptr->base,pCVar10,&CStack_a8);
      fStack_114 = CStack_a8.x;
      afStack_110[(uint)bVar8 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar8 * -8 + 4);
      afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           *(float *)((int)&CStack_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&fStack_1b0 != &fStack_114) {
        fStack_1b0 = fStack_114;
        fStack_1ac = afStack_110[0];
        fStack_1a8 = afStack_110[1];
      }
    }
    pCVar4 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c840
                       (&this_ptr->look_at_candidate->base,g_CCharacterClassInfo.name_hash);
    pCStack_2c = pCVar4;
    if (pCVar4 == (CCharacter *)0x0) {
      pCVar4 = this_ptr->look_at_candidate;
      pCVar7 = &(pCVar4->base).location;
      if ((CLocation *)(afStack_1a0 + 2) != pCVar7) {
        afStack_1a0[2] = (pCVar7->position).x;
        afStack_1a0[3] = (pCVar4->base).location.position.y;
        afStack_230[1] = (pCVar4->base).location.position.z;
LAB_00432bcb:
        fStack_190 = afStack_230[1];
      }
    }
    else {
      EVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
      if ((EVar1 == DEATH_STATE_ALIVE) || ((pCVar4->model).model_name[0] == '\0')) {
        iVar2 = 0;
        pcVar9 = "Bip01 head";
        this_ptr_00 = &pCStack_2c->model;
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00)
        ;
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(pCVar5,pcVar9,iVar2);
        if (iVar2 == -1) {
          pCVar7 = &(pCStack_2c->base).location;
          if ((CLocation *)(afStack_1a0 + 2) != pCVar7) {
            afStack_1a0[2] = (pCVar7->position).x;
            afStack_1a0[3] = (pCStack_2c->base).location.position.y;
            fStack_190 = (pCStack_2c->base).location.position.z;
          }
          afStack_1a0[3] = afStack_1a0[3] + 5.5f;
        }
        else {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                    (this_ptr_00,iVar2,&CStack_18c);
          CStack_144.x = CStack_18c.x;
          *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_18c + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_18c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (&pCStack_2c->base,&CStack_144,&CStack_78);
          fStack_234 = CStack_78.x;
          afStack_230[(uint)bVar8 * -2] = *(float *)((int)&CStack_78 + (uint)bVar8 * -8 + 4);
          afStack_230[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&CStack_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if (afStack_1a0 + 2 != &fStack_234) {
            afStack_1a0[2] = fStack_234;
            afStack_1a0[3] = afStack_230[0];
            goto LAB_00432bcb;
          }
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (&pCVar4->model,0,&CStack_54);
        pCVar10 = &CStack_1ec;
        CStack_1ec.x = CStack_54.x;
        *(uint *)((int)&CStack_1ec + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_1ec + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)pCVar4,pCVar10,&CStack_fc);
        fStack_84 = CStack_fc.x;
        afStack_80[(uint)bVar8 * -2] = *(float *)((int)&CStack_fc + (uint)bVar8 * -8 + 4);
        afStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             *(float *)((int)&CStack_fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        if (afStack_1a0 + 2 != &fStack_84) {
          afStack_1a0[2] = fStack_84;
          afStack_1a0[3] = afStack_80[0];
          afStack_230[1] = afStack_80[1];
          goto LAB_00432bcb;
        }
      }
    }
    fStack_1a4 = afStack_1a0[2] - fStack_1b0;
    afStack_1a0[0] = afStack_1a0[3] - fStack_1ac;
    afStack_1a0[1] = fStack_190 - fStack_1a8;
    CStack_168.x = afStack_1a0[2] - fStack_1b0;
    *(float *)((int)&CStack_168 + (uint)bVar8 * -8 + 4) = afStack_1a0[(uint)bVar8 * -2];
    *(float *)((int)&CStack_168 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b40
              (&this_ptr->base,&CStack_168,&CStack_9c);
    CStack_174.x = CStack_9c.x;
    *(uint *)((int)&CStack_174 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&CStack_174 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_174,&CStack_90);
    fStack_138 = CStack_90.x;
    afStack_134[(uint)bVar8 * -2] = *(float *)((int)&CStack_90 + (uint)bVar8 * -8 + 4);
    afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&CStack_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    if (&fStack_1c8 != &fStack_138) {
      fStack_1c8 = fStack_138;
      fStack_1c4 = afStack_134[0];
      uStack_1c0 = afStack_134[1];
    }
    if ((float)1.3962634015555599 < ABS(fStack_1c4)) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)0.78539816337500001 < ABS(fStack_1c8)) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
      goto LAB_004323d1;
    }
  }
  if (this_ptr->look_at_candidate != (CCharacter *)0x0) {
    fVar6 = delta_time / 0.5f + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar6;
    if (1.0 < fVar6) {
      this_ptr->look_at_weight = 1.0;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_1c4 - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fStack_18 * (float)0.40000000000000002 + this_ptr->look_at_yaw;
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_1c8 - this_ptr->look_at_pitch);
    this_ptr->look_at_pitch = fVar6 * (float)0.40000000000000002 + this_ptr->look_at_pitch;
    return;
  }
LAB_004323d1:
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
