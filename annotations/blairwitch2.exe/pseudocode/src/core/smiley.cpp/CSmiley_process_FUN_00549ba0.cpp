// Name: core_smiley.cpp_CSmiley_process_FUN_00549ba0
// Address: 00549ba0
// Address Range: [[00549ba0, 0054a636]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_process_FUN_00549ba0(CSmiley *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_smiley_cpp_CSmiley_process_FUN_00549ba0(CSmiley *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  byte *puVar1;
  byte *puVar2;
  uint uVar3;
  CCharacter *pCVar4;
  EWalkState EVar5;
  EDeathState EVar6;
  int iVar7;
  uint bone_index;
  int iVar8;
  CPathMap *path_map;
  CSmiley *pCVar9;
  byte bVar10;
  float afStackY_115c [952];
  float *pfVar11;
  uint *puVar12;
  CVector3f *pCVar13;
  float fVar14;
  SDamageInfo *pSVar15;
  EBloodType blood_type;
  float fVar16;
  SDamageInfo aSStack_264 [4];
  uint uStack_260;
  uint uStack_234;
  CSmiley *pCStack_230;
  CSmiley *pCStack_22c;
  SDamageInfo aSStack_228 [48];
  uint uStack_1f8;
  SDamageInfo aSStack_1ec [4];
  uint *puStack_1e8;
  CSmiley *pCStack_1b8;
  CSmiley *pCStack_1b4;
  SDamageInfo aSStack_1b0 [4];
  uint *puStack_1ac;
  CSmiley *pCStack_17c;
  CSmiley *pCStack_178;
  float fStack_174;
  float afStack_170 [4];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  CVector3f CStack_150;
  uint uStack_144;
  float afStack_140 [5];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [3];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  uint uStack_54;
  float afStack_50 [5];
  CVector3f CStack_3c;
  float afStack_30 [2];
  float fStack_28;
  int iStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  uint *puStack_14;
  
  bVar10 = 0;
  fVar14 = this_ptr->dismember_cooldown - delta_time;
  this_ptr->dismember_cooldown = fVar14;
  if (fVar14 < 0.0) {
    this_ptr->dismember_cooldown = 0.0;
  }
  if ((*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[10] * 4) == 0) &&
     (EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar6 == DEATH_STATE_ALIVE)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_264);
    uStack_234 = 0;
    pCStack_230 = this_ptr;
    pCStack_22c = this_ptr;
    uStack_260 = 0x461c3f9a;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,aSStack_264);
  }
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  afStack_30[0] = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < afStack_30[0]) {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           ((CMotionController *)this_ptr_00,afStack_30);
    if (bone_index < 0x66) {
      if (bone_index == 0x65) {
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,1,1);
        }
        else {
          iVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)(pCVar4,(CDemonActor *)this_ptr,0)
          ;
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)this_ptr_00,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (bone_index < 0x67) {
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 != (CCharacter *)0x0) {
        (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
      }
    }
    else if (bone_index == 0x67) {
      iVar7 = this_ptr->attack_hit_count + 1;
      this_ptr->attack_hit_count = iVar7;
      if (2 < iVar7) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          (**(code **)(iRam000002b0 + 0xf8))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_228);
          uStack_1f8 = 4;
          pCVar4 = (this_ptr->base).victim;
          (*(((pCVar4->base).vtable._uc)->_uc).processDamage)(pCVar4,aSStack_228);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
    }
  }
  fVar14 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar14);
  pCStack_1c = (CMotionController *)&(this_ptr->base).base.model;
  iVar7 = core_motion_cpp_FUN_005035c0(pCStack_1c);
  iVar7 = *(int *)(iVar7 + 0x24);
  iStack_24 = iVar7;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar7) {
    case 1:
      iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"Capture");
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 != (CCharacter *)0x0) {
          fStack_84 = *(float *)&(pCVar4->base).field_0x20 -
                      *(float *)&(this_ptr->base).base.base.field_0x20;
          fStack_80 = *(float *)&(pCVar4->base).field_0x24 -
                      *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_7c = *(float *)&(pCVar4->base).field_0x28 -
                      *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_108 = fStack_84;
          afStack_11c[(uint)bVar10 * -2 + 6] = afStack_e0[(uint)bVar10 * -2 + 0x18];
          afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
          fStack_28 = SQRT(fStack_100 * fStack_100 +
                           fStack_108 * fStack_108 + fStack_104 * fStack_104);
          fStack_18 = fStack_28;
          if (fStack_28 < 0x40200000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_11c + 5);
            uStack_144 = uStack_90;
            afStack_140[(uint)bVar10 * -2] = afStack_e0[(uint)bVar10 * -2 + 0x15];
            afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
            puStack_14 = (uint *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                   (afStack_140[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS((float)puStack_14) < (float)_DAT_005e77fd) {
              this_ptr->attack_hit_count = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,9,1);
            }
          }
          if (fStack_28 < this_ptr->guard_distance) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,2,1);
          }
        }
      }
      break;
    case 2:
      iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"Capture");
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
        else {
          if (this_ptr == (CSmiley *)pCVar4->grabbed_by) {
            (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
          }
          CStack_3c.z = 0x40200000;
          fStack_20 = 0x40200000;
          *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
          *(uint *)&(this_ptr->base).base.model.field_0x2258 =
               *(uint *)&(this_ptr->base).base.model.field_0x225c;
          *(uint *)&(this_ptr->base).base.model.field_0x2254 =
               *(uint *)&(this_ptr->base).base.model.field_0x2258;
          CStack_3c.x = 0.0;
          CStack_3c.y = 0.0;
          fVar16 = 0.17453292;
          pCVar13 = &CStack_3c;
          fVar14 = 0.5;
          pCVar4 = (this_ptr->base).victim;
          path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)this_ptr,
                             (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                             pCVar13,fVar14,fVar16);
          if ((-1 < iVar7) && (0 < iVar7)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_b4 = *(float *)&(pCVar4->base).field_0x20 -
                        *(float *)&(this_ptr->base).base.base.field_0x20;
            fStack_b0 = *(float *)&(pCVar4->base).field_0x24 -
                        *(float *)&(this_ptr->base).base.base.field_0x24;
            fStack_ac = *(float *)&(pCVar4->base).field_0x28 -
                        *(float *)&(this_ptr->base).base.base.field_0x28;
            fStack_6c = fStack_b4;
            afStack_e0[(uint)bVar10 * -2 + 0x1e] = afStack_e0[(uint)bVar10 * -2 + 0xc];
            afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
                 afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
            if ((SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c + fStack_68 * fStack_68) <
                 fStack_20 + 1.0) && (this_ptr->attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,6,1);
              this_ptr->attack_cooldown = 1.0;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      break;
    case 6:
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        (**(code **)(iRam000002b0 + 0xf8))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1ec);
        puStack_1e8 = (uint *)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
        pSVar15 = aSStack_1ec;
        pCStack_1b8 = this_ptr;
        pCStack_1b4 = this_ptr;
        fVar14 = 1.0;
        puStack_14 = puStack_1e8;
        core_xform_cpp_FUN_00591530
                  (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_02628618 * 0x30);
        pfVar11 = afStack_11c + 8;
        afStack_fc[0] = afStack_11c[2];
        afStack_11c[(uint)bVar10 * -2 + 9] = afStack_11c[(uint)bVar10 * -2 + 3];
        afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar11);
        pCVar13 = &CStack_f0;
        CStack_f0.x = fStack_174;
        *(float *)((int)&CStack_f0 + (uint)bVar10 * -8 + 4) = afStack_170[(uint)bVar10 * -2];
        pCVar9 = this_ptr;
        *(float *)((int)&CStack_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_170[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar13,fVar14,pSVar15);
      }
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(pCStack_1c,0);
        pfVar11 = afStack_e0 + 5;
        afStack_cc[0] = afStack_140[2];
        afStack_e0[(uint)bVar10 * -2 + 6] = afStack_140[(uint)bVar10 * -2 + 3];
        afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar11);
        blood_type = BLOOD_TYPE_RED;
        CStack_150.x = afStack_50[2];
        *(float *)((int)&CStack_150 + (uint)bVar10 * -8 + 4) = afStack_50[(uint)bVar10 * -2 + 3];
        *(float *)((int)&CStack_150 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_150,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else if (pCVar4->grabbed_by == (CDemonActor *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
      else {
        EVar6 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
        if (EVar6 == DEATH_STATE_ALIVE) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1b0);
          puStack_1ac = (uint *)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
          pSVar15 = aSStack_1b0;
          pCStack_17c = this_ptr;
          pCStack_178 = this_ptr;
          fVar14 = 1.0;
          puStack_14 = puStack_1ac;
          core_xform_cpp_FUN_00591530
                    (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_02628618 * 0x30);
          puVar12 = &uStack_54;
          uStack_54 = uStack_c0;
          afStack_50[(uint)bVar10 * -2] = afStack_e0[(uint)bVar10 * -2 + 9];
          afStack_50[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar12);
          pCVar13 = &CStack_60;
          CStack_60.x = fStack_120;
          *(float *)((int)&CStack_60 + (uint)bVar10 * -8 + 4) = afStack_11c[(uint)bVar10 * -2];
          pCVar9 = this_ptr;
          *(float *)((int)&CStack_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar13,fVar14,pSVar15);
        }
        else {
          pCVar4 = (this_ptr->base).victim;
          (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
      break;
    case 10:
      pCVar4 = (this_ptr->base).victim;
      EVar6 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
      if (EVar6 != DEATH_STATE_ALIVE) {
        pCVar4 = (this_ptr->base).victim;
        (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
      }
    }
    goto switchD_0054a4fd_caseD_3;
  }
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_00549e39:
      iVar7 = 2;
    }
    else {
LAB_00549f5a:
      iVar7 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar7,1);
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_00549e39;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_00549f5a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,1,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_0054a4fd_caseD_3:
  if (0.0 < this_ptr->attack_cooldown) {
    this_ptr->attack_cooldown = this_ptr->attack_cooldown - delta_time;
  }
  if (iStack_24 == 0xb) {
    puStack_14 = (uint *)&(this_ptr->base).base.model.field_0x2254;
    core_actor_cpp_FUN_00408cf0(this_ptr,puStack_14);
    puVar1 = &(this_ptr->base).base.base.field_0x20;
    fStack_15c = fStack_78;
    afStack_170[(uint)bVar10 * -2 + 6] = afStack_e0[(uint)bVar10 * -2 + 0x1b];
    afStack_170[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
    fVar14 = *(float *)&(this_ptr->base).base.base.field_0x24;
    fVar16 = *(float *)&(this_ptr->base).base.base.field_0x28;
    *(float *)puVar1 = *(float *)puVar1 + fStack_15c;
    *(float *)&(this_ptr->base).base.base.field_0x24 = fVar14 + fStack_158;
    *(float *)&(this_ptr->base).base.base.field_0x28 = fVar16 + fStack_154;
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  else {
    iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
    if (iVar7 != 0) {
      pCVar4 = (this_ptr->base).victim;
      if ((pCVar4 != (CCharacter *)0x0) &&
         (pCVar9 = (CSmiley *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
         pCVar9 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_e4 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
      afStack_e0[0] = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
      afStack_e0[1] = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
      afStack_e0[2] = fStack_e4;
      afStack_e0[(uint)bVar10 * -2 + 3] = afStack_e0[(uint)bVar10 * -2];
      afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      puVar1 = &(this_ptr->base).base.field_0x257c;
      fStack_a8 = afStack_e0[2] + *(float *)puVar1;
      fStack_a4 = afStack_e0[3] + *(float *)&(this_ptr->base).base.field_0x2580;
      fStack_a0 = fStack_d0 + *(float *)&(this_ptr->base).base.field_0x2584;
      afStack_170[2] = fStack_a8;
      afStack_170[(uint)bVar10 * -2 + 3] = afStack_e0[(uint)bVar10 * -2 + 0xf];
      afStack_170[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      puVar2 = &(this_ptr->base).base.model.field_0x2254;
      fStack_9c = afStack_170[2] + *(float *)puVar2;
      fStack_98 = afStack_170[3] + *(float *)&(this_ptr->base).base.model.field_0x2258;
      fStack_94 = fStack_160 + *(float *)&(this_ptr->base).base.model.field_0x225c;
      CStack_12c.x = fStack_9c;
      *(float *)((int)&CStack_12c + (uint)bVar10 * -8 + 4) = afStack_e0[(uint)bVar10 * -2 + 0x12];
      *(float *)((int)&CStack_12c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
      *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
      *(uint *)&(this_ptr->base).base.field_0x2580 =
           *(uint *)&(this_ptr->base).base.field_0x2584;
      *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
      *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
      uVar3 = *(uint *)&(this_ptr->base).base.model.field_0x225c;
      *(uint *)&(this_ptr->base).base.model.field_0x2258 = uVar3;
      *(uint *)puVar2 = uVar3;
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_12c);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
