// Name: core_hostage.cpp_CHostage_process_FUN_004d1660
// Address: 004d1660
// Address Range: [[004d1660, 004d2c42]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_process_FUN_004d1660(CHostage *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hostage_cpp_CHostage_process_FUN_004d1660(CHostage *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  byte *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  EWalkState EVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  CConsole *pCVar12;
  CCharacter_full_vtable *pCVar13;
  int iVar14;
  uint uVar15;
  CDoor *pCVar16;
  CSkeleton *this_ptr_00;
  CDemonActor *pCVar17;
  float *pfVar18;
  byte bVar19;
  float afStackY_121c [987];
  CGore *this_ptr_01;
  CVector3f *position;
  CCharacter *pCVar20;
  char *bone_name;
  CVector3f *pCVar21;
  CHostage *pCVar22;
  EBloodType blood_type;
  float fStack_274;
  SDamageInfo aSStack_270 [4];
  float fStack_26c;
  CHostage *pCStack_23c;
  CHostage *pCStack_238;
  uint uStack_234;
  float afStack_230 [5];
  float fStack_21c;
  uint uStack_218;
  float fStack_214;
  CVector3f CStack_210;
  float fStack_204;
  float afStack_1f8 [4];
  float afStack_1e8 [5];
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint uStack_17c;
  uint uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  uint uStack_158;
  float fStack_150;
  float afStack_144 [4];
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [2];
  CVector3f CStack_fc;
  float fStack_f0;
  float afStack_ec [5];
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  uint uStack_b4;
  float fStack_a8;
  uint uStack_9c;
  uint uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CCharacter *pCStack_7c;
  CCharacter_full_vtable *pCStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_34;
  CMotionController *pCStack_30;
  CDoor *pCStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  CCharacter_full_vtable *pCStack_18;
  
  bVar19 = 0;
  switch(this_ptr->hostage_state) {
  case 0:
  case 4:
    *(uint *)&(this_ptr->base).base.field_0x343c = 0x42480000;
    *(uint *)&(this_ptr->base).base.field_0x3438 = 0x41a00000;
    break;
  case 1:
  case 2:
    *(uint *)&(this_ptr->base).base.field_0x343c = 0x42960000;
    *(uint *)&(this_ptr->base).base.field_0x3438 = 0x42200000;
    break;
  case 3:
  case 5:
    *(uint *)&(this_ptr->base).base.field_0x343c = 0x47c34f80;
    *(uint *)&(this_ptr->base).base.field_0x3438 = 0x47c34f80;
  }
  if ((this_ptr->base).base.hit_points <= 0.0) {
    *(uint *)&(this_ptr->base).base.field_0x343c = 0x47c34f80;
    *(uint *)&(this_ptr->base).base.field_0x3438 = 0x47c34f80;
  }
  iVar14 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar14 == 0) {
    return;
  }
  fStack_274 = delta_time;
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  pCStack_30 = (CMotionController *)&(this_ptr->base).base.model;
  while (0.0 < fStack_274) {
    uVar15 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&stack0xfffffd8c);
    if (uVar15 < 0xb) {
      if (uVar15 == 6) {
        pCVar17 = (this_ptr->base).base.grabbed_by;
        if (pCVar17 != (CDemonActor *)0x0) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s escaping from %s\n",this_ptr,pCVar17);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_270);
          fStack_26c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          pCStack_23c = this_ptr;
          pCStack_238 = this_ptr;
          pCVar20 = (CCharacter *)(this_ptr->base).base.grabbed_by;
          pCStack_18 = (CCharacter_full_vtable *)fStack_26c;
          (*(((pCVar20->base).vtable._uc)->_uc).processDamage)(pCVar20,aSStack_270);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar15);
      }
    }
    else if (uVar15 < 0xc) {
      pCStack_2c = (CDoor *)0x0;
      afStack_1f8[0] = 0.0;
      afStack_1f8[1] = 0.0;
      fStack_28 = 1e+30;
      afStack_1f8[2] = 1.5;
      core_actor_cpp_FUN_00408d70(this_ptr,afStack_230 + 0xe);
      fStack_f0 = fStack_204;
      afStack_ec[(uint)bVar19 * -2] = afStack_230[(uint)bVar19 * -2 + 0xc];
      afStack_ec[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
           afStack_230[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd];
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < g_CDemonSetPtr->actor_count; iStack_1c = iStack_1c + 1) {
        pCVar16 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)((int)g_CDemonSetPtr->actors + iStack_20),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar16 != (CDoor *)0x0) {
          fStack_120 = *(float *)&(pCVar16->base).field_0x20 - fStack_f0;
          fStack_11c = *(float *)&(pCVar16->base).field_0x24 - afStack_ec[0];
          fStack_118 = *(float *)&(pCVar16->base).field_0x28 - afStack_ec[1];
          fStack_90 = fStack_120;
          afStack_c8[(uint)bVar19 * -2 + 0xf] = afStack_134[(uint)bVar19 * -2 + 6];
          afStack_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x10] =
               afStack_134[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
          if (ABS(fStack_8c) <= (float)_DAT_005da39e) {
            fStack_8c = 0.0;
            fStack_24 = SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90);
            if (fStack_24 < fStack_28) {
              pCStack_2c = pCVar16;
              fStack_28 = fStack_24;
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      if (pCStack_2c != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00460310(pCStack_2c,0.1);
      }
    }
    else if (uVar15 == 0xc) {
      iVar14 = *(int *)&(this_ptr->base).base.field_0x2698;
      if (iVar14 != 0) {
        (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
        core_inv_cpp_FUN_004dadb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,iVar14,1,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar15);
    }
  }
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  iStack_3c = 0;
  iStack_38 = 0;
  pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCStack_30,10);
  if (0.0 < (float)pCStack_18) {
    iStack_3c = 1;
    iStack_38 = 1;
  }
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCStack_18 = (CCharacter_full_vtable *)
                 core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,5);
    if (((float)pCStack_18 <= 0.0) &&
       (pCStack_18 = (CCharacter_full_vtable *)
                     core_motion_cpp_FUN_005038a0(&(this_ptr->base).base.model,8),
       (float)pCStack_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,6,1);
    }
LAB_004d1ac4:
    iStack_38 = 1;
  }
  else {
    pCVar17 = (this_ptr->base).base.grabbed_by;
    if (pCVar17 == (CDemonActor *)0x0) {
      pCVar1 = &(this_ptr->base).base.model;
      pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar1,3);
      if (((0.0 < (float)pCStack_18) ||
          (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar1,5),
          0.0 < (float)pCStack_18)) ||
         (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar1,8),
         0.0 < (float)pCStack_18)) goto LAB_004d1ac4;
      iVar14 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                         ((CCharacter *)this_ptr,delta_time);
      pCVar12 = g_CConsolePtr;
      if (iVar14 == 0) {
        switch(this_ptr->hostage_state) {
        case 0:
          iVar14 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
          if (iVar14 == 0) {
            iVar14 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
            fStack_108 = *(float *)(iVar14 + 0x20) -
                         *(float *)&(this_ptr->base).base.base.field_0x20;
            afStack_104[0] =
                 *(float *)(iVar14 + 0x24) - *(float *)&(this_ptr->base).base.base.field_0x24;
            afStack_104[1] =
                 *(float *)(iVar14 + 0x28) - *(float *)&(this_ptr->base).base.base.field_0x28;
            fStack_150 = fStack_108;
            afStack_1e8[(uint)bVar19 * -2 + 0x27] = afStack_104[(uint)bVar19 * -2];
            afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x28] =
                 afStack_104[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
            fStack_1a4 = fStack_150;
            afStack_1e8[(uint)bVar19 * -2 + 0x12] = afStack_1e8[(uint)bVar19 * -2 + 0x27];
            afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x13] =
                 afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x28];
            fStack_1c8 = fStack_1a4;
            afStack_1e8[(uint)bVar19 * -2 + 9] = afStack_1e8[(uint)bVar19 * -2 + 0x12];
            afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10] =
                 afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x13];
            if (((0.0 < this_ptr->rescue_distance) &&
                (fStack_40 = fStack_1c0 * fStack_1c0 +
                             fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4,
                this_ptr->rescue_distance <= SQRT(fStack_40))) ||
               (iVar14 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                   (0x01C38BC0,this_ptr->rescue_condition),
               pCVar12 = g_CConsolePtr, iVar14 == 0)) goto LAB_004d20aa;
            this_ptr->hostage_state = 1;
            engine_console_cpp_FUN_00436710(pCVar12,"%s rescued, entering follow mode\n",this_ptr);
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,this_ptr->hero_found_me_event);
          }
          break;
        case 1:
          pCVar17 = this_ptr->goal_way_point;
          if ((pCVar17 != (CDemonActor *)0x0) &&
             (fVar4 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                      *(float *)&pCVar17->field_0x20,
             fVar5 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                     *(float *)&pCVar17->field_0x28,
             SQRT(fVar5 * fVar5 + fVar4 * fVar4) < (float)_DAT_005da366)) {
            pCVar17 = (CDemonActor *)
                      core_waypoint_cpp_FUN_005882d0
                                (&(this_ptr->base).base.base.field_0x20,pCVar17,0);
            this_ptr->next_way_point = pCVar17;
          }
          pCVar12 = g_CConsolePtr;
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            iVar14 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
            if (iVar14 == 0) {
              iVar14 = core_charactr_cpp_FUN_0042abe0(this_ptr,delta_time);
              if (iVar14 == 0) {
                core_charactr_cpp_FUN_00428260
                          (this_ptr,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40a00000,
                           0x41200000,&this_ptr->follow_state);
              }
              else {
                this_ptr->follow_state = iVar14;
              }
              uVar15 = this_ptr->follow_state;
              pCVar1 = &(this_ptr->base).base.model;
              if (uVar15 < 2) {
                if (uVar15 != 1) goto LAB_004d20aa;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)pCVar1,1,1);
              }
              else if (uVar15 < 3) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)pCVar1,2,1);
              }
              else {
                if (uVar15 != 3) goto LAB_004d20aa;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)pCVar1,0,1);
                pCVar12 = g_CConsolePtr;
                this_ptr->hostage_state = 2;
                engine_console_cpp_FUN_00436710(pCVar12,"%s left behind!\n",this_ptr);
                core_event_cpp_CEventList_executeCommands_FUN_004894f0
                          (0x01C38BC0,this_ptr->hero_left_me_event);
                (this_ptr->base).base.hero_proximity_timer = 0.0;
              }
            }
          }
          else {
            this_ptr->hostage_state = 3;
            engine_console_cpp_FUN_00436710(pCVar12,"%s was led close enough, going home!\n",this_ptr);
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,this_ptr->going_to_sit_down_event);
            (this_ptr->base).base.hero_proximity_timer = 0.0;
          }
          break;
        case 2:
          iVar14 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(this_ptr,delta_time);
          if (iVar14 == 0) {
            core_charactr_cpp_FUN_00428260
                      (this_ptr,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40800000,0x41200000
                       ,&this_ptr->follow_state);
            uVar15 = this_ptr->follow_state;
            if (uVar15 == 0) {
              iVar14 = 0;
            }
            else if (uVar15 < 2) {
              iVar14 = 1;
            }
            else {
              if (uVar15 != 2) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&(this_ptr->base).base.model,0,1);
                break;
              }
              iVar14 = 2;
            }
            this_ptr->hostage_state = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar1,iVar14,1);
            engine_console_cpp_FUN_00436710
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n",this_ptr);
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,this_ptr->hero_came_back_event);
          }
          break;
        case 3:
          if (this_ptr->next_way_point == (CDemonActor *)0x0) {
            this_ptr->hostage_state = 2;
            engine_console_cpp_FUN_00436710(pCVar12,"%s doesn't know next waypoint going home.  Help me!\n",this_ptr);
          }
          else {
            core_charactr_cpp_FUN_00428260
                      (this_ptr,this_ptr->next_way_point,0x3f800000,0xbf800000,
                       &this_ptr->follow_state);
            switch(this_ptr->follow_state) {
            case 0:
              engine_console_cpp_FUN_00436710
                        (g_CConsolePtr,"%s reached waypoint %s!\n",this_ptr,
                         this_ptr->next_way_point);
              pCVar12 = g_CConsolePtr;
              if (this_ptr->next_way_point == this_ptr->goal_way_point) {
                this_ptr->hostage_state = 4;
                engine_console_cpp_FUN_00436710
                          (pCVar12,"%s rescued and taken home!\n",this_ptr);
                this_ptr->next_way_point = (CDemonActor *)0x0;
              }
              else {
                pCVar17 = (CDemonActor *)
                          core_waypoint_cpp_FUN_005882d0
                                    (&(this_ptr->base).base.base.field_0x20,this_ptr->goal_way_point
                                     ,0);
                this_ptr->next_way_point = pCVar17;
              }
              break;
            case 1:
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCVar1,1,1);
              break;
            case 2:
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCVar1,2,1);
              break;
            case 3:
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCVar1,0,1);
              pCVar12 = g_CConsolePtr;
              this_ptr->hostage_state = 2;
              engine_console_cpp_FUN_00436710(pCVar12,"%s got confused going home.  Help me!\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCVar1,0,1);
              core_event_cpp_CEventList_executeCommands_FUN_004894f0
                        (0x01C38BC0,this_ptr->sit_down_event);
              core_event_cpp_FUN_00490f80(0x01C38BC0,this_ptr->rescue_event,1);
              this_ptr->hostage_state = 4;
              this_ptr->next_way_point = (CDemonActor *)0x0;
            }
          }
          break;
        case 4:
          iStack_3c = 1;
          if (this_ptr->sit_down_way_point != (CDemonActor *)0x0) {
            if (*(float *)&(this_ptr->base).base.field_0x2594 < delta_time * (float)_DAT_005da33e) {
              *(float *)&(this_ptr->base).base.field_0x2594 = delta_time * (float)_DAT_005da33e;
            }
            core_actor_cpp_FUN_00408de0(this_ptr,&this_ptr->sit_down_way_point->field_0x20);
            puVar2 = &(this_ptr->base).base.field_0x257c;
            fStack_180 = afStack_134[2];
            afStack_1e8[(uint)bVar19 * -2 + 0x1b] = afStack_134[(uint)bVar19 * -2 + 3];
            afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x1c] =
                 afStack_134[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
            if ((float *)puVar2 != afStack_1e8 + 0x1a) {
              *(float *)puVar2 = fStack_180;
              *(uint *)&(this_ptr->base).base.field_0x2580 = uStack_17c;
              *(uint *)&(this_ptr->base).base.field_0x2584 = uStack_178;
            }
            pfVar18 = (float *)((int)this_ptr + (uint)bVar19 * -8 + 0x2580);
            fStack_21c = *(float *)&(this_ptr->base).base.field_0x257c;
            afStack_230[(uint)bVar19 * -2 + 6] = *pfVar18;
            afStack_230[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] = pfVar18[(uint)bVar19 * -2 + 1];
            fVar4 = SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c);
            uStack_218 = 0;
            if (*(float *)&(this_ptr->base).base.field_0x2594 < fVar4) {
              fStack_48 = *(float *)&(this_ptr->base).base.field_0x2594 / fVar4;
              puVar2 = &(this_ptr->base).base.field_0x257c;
              fVar5 = *(float *)&(this_ptr->base).base.field_0x2580;
              fVar6 = *(float *)&(this_ptr->base).base.field_0x2584;
              *(float *)puVar2 = *(float *)puVar2 * fStack_48;
              *(float *)&(this_ptr->base).base.field_0x2580 = fVar5 * fStack_48;
              *(float *)&(this_ptr->base).base.field_0x2584 = fVar6 * fStack_48;
            }
            fStack_44 = fVar4;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                      (&(this_ptr->base).base.field_0x257c);
            fVar5 = (float)_DAT_005da346;
            uStack_15c = afStack_ec[2];
            afStack_1e8[(uint)bVar19 * -2 + 0x24] = afStack_ec[(uint)bVar19 * -2 + 3];
            afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x25] =
                 afStack_ec[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
            *(uint *)&(this_ptr->base).base.field_0x2578 = uStack_158;
            if (fVar4 * fVar5 < 1.0) {
              pCStack_18 = (CCharacter_full_vtable *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                     ((this_ptr->sit_down_way_point->orient).vec.y -
                                      (this_ptr->base).base.base.orient.vec.y);
              pCStack_18 = (CCharacter_full_vtable *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                     ((float)pCStack_18 -
                                      *(float *)&(this_ptr->base).base.field_0x2578);
              *(float *)&(this_ptr->base).base.field_0x2578 =
                   (1.0 - fVar4 * fVar5) * (float)pCStack_18 +
                   *(float *)&(this_ptr->base).base.field_0x2578;
            }
            pCStack_18 = (CCharacter_full_vtable *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                   (*(uint *)&(this_ptr->base).base.field_0x2578);
            *(CCharacter_full_vtable **)&(this_ptr->base).base.field_0x2578 = pCStack_18;
            if ((fVar4 < (float)_DAT_005da34e) &&
               (ABS(*(float *)&(this_ptr->base).base.field_0x2578) < (float)_DAT_005da356)) {
              if ((this_ptr->hostage_type == 0) || (this_ptr->hostage_type == 4)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&(this_ptr->base).base.model,0,1);
                this_ptr->hostage_state = 5;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&(this_ptr->base).base.model,10,1);
              }
              core_event_cpp_CEventList_executeCommands_FUN_004894f0
                        (0x01C38BC0,this_ptr->sit_down_event);
              core_event_cpp_FUN_00490f80(0x01C38BC0,this_ptr->rescue_event,1);
              this_ptr->sit_down_way_point = (CDemonActor *)0x0;
            }
            fStack_4c = delta_time * _DAT_005da35e;
            fStack_54 = -fStack_4c;
            if (*(float *)&(this_ptr->base).base.field_0x2578 < fStack_54) {
              *(float *)&(this_ptr->base).base.field_0x2578 = fStack_54;
            }
            if (fStack_4c < *(float *)&(this_ptr->base).base.field_0x2578) {
              *(float *)&(this_ptr->base).base.field_0x2578 = fStack_4c;
            }
          }
        }
      }
      else {
        EVar8 = (this_ptr->base).base.walk_state;
        if (EVar8 < 2) {
          if (EVar8 == WALK_STATE_WALKING) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,1,1);
          }
          else {
LAB_004d20aa:
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,0,1);
          }
        }
        else if (EVar8 < WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,2,1);
        }
        else {
          if (EVar8 != WALK_STATE_NO_PATH) goto LAB_004d20aa;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0,1);
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        }
      }
    }
    else {
      core_actor_cpp_FUN_00408de0(this_ptr,&pCVar17->field_0x20);
      afStack_c8[2] = afStack_1f8[3];
      afStack_c8[(uint)bVar19 * -2 + 3] = afStack_1e8[(uint)bVar19 * -2];
      afStack_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
           afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_c8 + 2);
      uStack_9c = afStack_1e8[2];
      afStack_c8[(uint)bVar19 * -2 + 0xc] = afStack_1e8[(uint)bVar19 * -2 + 3];
      afStack_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd] =
           afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      pCStack_18 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(uStack_98);
      fStack_34 = (float)pCStack_18;
      if ((float)pCStack_18 < _DAT_005da36e) {
        fStack_34 = (float)pCStack_18 + _DAT_005da35e;
      }
      if (_DAT_005da372 < fStack_34) {
        fStack_34 = fStack_34 + _DAT_005da376;
      }
      fStack_50 = delta_time * _DAT_005da35e;
      fStack_58 = -fStack_50;
      if (fStack_34 < fStack_58) {
        fStack_34 = fStack_58;
      }
      if (fStack_50 < fStack_34) {
        fStack_34 = fStack_50;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_34;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
      pCStack_7c = (CCharacter *)(this_ptr->base).base.grabbed_by;
      pCStack_18 = (pCStack_7c->base).vtable._uc;
      core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,0);
      pCVar13 = pCStack_18;
      pCVar20 = pCStack_7c;
      pCVar21 = (CVector3f *)(afStack_230 + 8);
      CStack_210.x = (float)uStack_b4;
      afStack_230[(uint)bVar19 * -2 + 9] = afStack_c8[(uint)bVar19 * -2 + 6];
      pCVar22 = this_ptr;
      afStack_230[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10] =
           afStack_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
      iVar14 = (*(pCVar13->_uc).attractActorToward)(pCVar20,(CDemonActor *)pCVar22,pCVar21);
      if (iVar14 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004d1f68:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0,1);
      }
      else if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004d1f68;
      iStack_3c = 1;
      *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
      iStack_38 = 1;
      *(uint *)&(this_ptr->base).base.model.field_0x2258 =
           *(uint *)&(this_ptr->base).base.model.field_0x225c;
      *(uint *)&(this_ptr->base).base.model.field_0x2254 =
           *(uint *)&(this_ptr->base).base.model.field_0x2258;
    }
  }
  if (((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->hostage_type == 1)) &&
     (iVar14 = core_actor_cpp_randomChance_FUN_0040d060(delta_time * _DAT_005da37a), iVar14 != 0)) {
    iVar14 = 0;
    bone_name = "Bip01 L Forearm";
    pCVar1 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar1);
    iVar14 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,bone_name,iVar14);
    if (-1 < iVar14) {
      core_skeleton_cpp_FUN_005469a0(pCVar1,iVar14);
      pfVar18 = afStack_1e8 + 0xb;
      afStack_1bc[0] = (float)uStack_234;
      afStack_1e8[(uint)bVar19 * -2 + 0xc] = afStack_230[(uint)bVar19 * -2];
      afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd] =
           afStack_230[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar18);
      CStack_114.x = fStack_a8;
      *(float *)((int)&CStack_114 + (uint)bVar19 * -8 + 4) = afStack_c8[(uint)bVar19 * -2 + 9];
      *(float *)((int)&CStack_114 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10];
      afStack_144[0] = 3.0;
      afStack_144[1] = 0.0;
      afStack_144[2] = 0.0;
      core_actor_cpp_FUN_00408cf0(this_ptr,afStack_1e8 + 0x29);
      blood_type = BLOOD_TYPE_RED;
      pCVar21 = &CStack_d8;
      position = &CStack_114;
      CStack_d8.x = afStack_230[2];
      *(float *)((int)&CStack_d8 + (uint)bVar19 * -8 + 4) = afStack_230[(uint)bVar19 * -2 + 3];
      this_ptr_01 = g_CGorePtr;
      *(float *)((int)&CStack_d8 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
           afStack_230[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(this_ptr_01,position,pCVar21,blood_type);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  if (iStack_3c == 0) {
    iVar14 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
    iVar14 = *(int *)(iVar14 + 0x24);
    if ((((iVar14 == 8) || (iVar14 == 0)) || ((iVar14 == 0xd || (iVar14 == 10)))) &&
       (*(int *)&(this_ptr->base).base.base.field_0xdc == 0)) {
      (this_ptr->base).base.walk_stuck_timer = 0.0;
      goto LAB_004d1c55;
    }
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_168 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_164 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_160 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_174 = fStack_168;
    afStack_1e8[(uint)bVar19 * -2 + 0x1e] = afStack_1e8[(uint)bVar19 * -2 + 0x21];
    afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x22];
    puVar2 = &(this_ptr->base).base.field_0x257c;
    fStack_cc = fStack_174 + *(float *)puVar2;
    afStack_c8[0] = fStack_170 + *(float *)&(this_ptr->base).base.field_0x2580;
    afStack_c8[1] = fStack_16c + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_18c = fStack_cc;
    afStack_1e8[(uint)bVar19 * -2 + 0x18] = afStack_c8[(uint)bVar19 * -2];
    afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x19] =
         afStack_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    puVar3 = &(this_ptr->base).base.model.field_0x2254;
    fStack_1b0 = fStack_18c + *(float *)puVar3;
    fStack_1ac = fStack_188 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_1a8 = fStack_184 + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_fc.x = fStack_1b0;
    *(float *)((int)&CStack_fc + (uint)bVar19 * -8 + 4) = afStack_1e8[(uint)bVar19 * -2 + 0xf];
    *(float *)((int)&CStack_fc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
         afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x10];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar3 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    pCVar21 = &CStack_fc;
    pfVar18 = (float *)((int)this_ptr + (uint)bVar19 * -8 + 0x24);
    fStack_1d4 = *(float *)&(this_ptr->base).base.base.field_0x20;
    afStack_1e8[(uint)bVar19 * -2 + 6] = *pfVar18;
    pCVar22 = this_ptr;
    afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] = pfVar18[(uint)bVar19 * -2 + 1];
    core_charactr_cpp_FUN_00423a60((CCharacter *)pCVar22,pCVar21);
    (this_ptr->base).base.walk_stuck_timer = (this_ptr->base).base.walk_stuck_timer + delta_time;
    if ((delta_time * (float)_DAT_005da37e <=
         SQRT(CStack_fc.z * CStack_fc.z + CStack_fc.x * CStack_fc.x + CStack_fc.y * CStack_fc.y)) &&
       (dVar9 = (double)*(float *)&(this_ptr->base).base.base.field_0x20 - (double)fStack_1d4,
       dVar10 = (double)*(float *)&(this_ptr->base).base.base.field_0x24 - (double)fStack_1d0,
       dVar11 = (double)*(float *)&(this_ptr->base).base.base.field_0x28 - (double)fStack_1cc,
       SQRT(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9) <= (double)delta_time * _DAT_005da386
       )) goto LAB_004d1c55;
  }
  else {
    core_actor_cpp_FUN_00408cf0(this_ptr,&(this_ptr->base).base.field_0x257c);
    puVar2 = &(this_ptr->base).base.base.field_0x20;
    fStack_198 = afStack_144[3];
    afStack_1e8[(uint)bVar19 * -2 + 0x15] = afStack_134[(uint)bVar19 * -2];
    afStack_1e8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x16] =
         afStack_134[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    fVar4 = *(float *)&(this_ptr->base).base.base.field_0x24;
    fVar5 = *(float *)&(this_ptr->base).base.base.field_0x28;
    *(float *)puVar2 = *(float *)puVar2 + fStack_198;
    *(float *)&(this_ptr->base).base.base.field_0x24 = fVar4 + fStack_194;
    *(float *)&(this_ptr->base).base.base.field_0x28 = fVar5 + fStack_190;
  }
  (this_ptr->base).base.walk_stuck_timer = 0.0;
LAB_004d1c55:
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar1);
  if (this_ptr->hostage_type == 1) {
    fStack_5c = 0.5;
    fStack_68 = 0.75;
    iVar14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (*(uint *)&(this_ptr->base).base.field_0x2698,
                        g_CWeaponClassInfo.name_hash);
    if ((iVar14 == 0) ||
       (pCStack_18 = (CCharacter_full_vtable *)core_motion_cpp_FUN_005038a0(pCVar1,0x10),
       0.0 < (float)pCStack_18)) {
      fVar4 = this_ptr->gun_blend_weight - delta_time / fStack_5c;
    }
    else {
      fVar4 = delta_time / fStack_5c + this_ptr->gun_blend_weight;
    }
    this_ptr->gun_blend_weight = fVar4;
    if (0.0 < this_ptr->gun_blend_weight) {
      if (1.0 < this_ptr->gun_blend_weight) {
        this_ptr->gun_blend_weight = 1.0;
      }
      pCVar1 = &(this_ptr->base).base.model;
      pCStack_6c = (CCharacter_full_vtable *)
                   core_motion_cpp_FUN_00503f50
                             (pCVar1,_DAT_01cedfcc,
                              this_ptr->gun_raise_progress * (float)_DAT_005da38e +
                              (float)_DAT_005da396);
      pCStack_18 = pCStack_6c;
      core_skeleton_cpp_FUN_00545a60
                (pCVar1,_DAT_01cedfcc,pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[0],core_skeleton_cpp_FUN_00544cc0);
      core_skeleton_cpp_FUN_00545a60
                (pCVar1,_DAT_01cedfcc,pCStack_6c,this_ptr->gun_blend_weight,
                 this_ptr->bone_indices[1],core_skeleton_cpp_FUN_00544cc0);
      if (((1.0 <= this_ptr->gun_blend_weight) && (0.0 < this_ptr->gun_raise_progress)) &&
         (fVar4 = delta_time / fStack_68 + this_ptr->gun_raise_progress,
         this_ptr->gun_raise_progress = fVar4, 1.0 < fVar4)) {
        this_ptr->gun_raise_progress = 1.0;
      }
    }
    else {
      this_ptr->gun_raise_progress = 0.0;
      this_ptr->gun_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420
            ((CCharacter *)this_ptr,delta_time,iStack_38);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if ((1.0 <= this_ptr->gun_raise_progress) &&
     (iVar14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)&(this_ptr->base).base.field_0x2698,
                          g_CWeaponClassInfo.name_hash), iVar14 != 0)) {
    uVar7 = *(uint *)(iVar14 + 0x6c8);
    *(uint *)(iVar14 + 0x6c8) = 6;
    (**(code **)(*(int *)(iVar14 + 0x2b0) + 0xec))(iVar14);
    *(uint *)(iVar14 + 0x6c8) = uVar7;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,0xc,1);
    this_ptr->gun_blend_weight = 0.0;
    this_ptr->gun_raise_progress = 0.0;
  }
  if (((this_ptr->hostage_type == 1) &&
      (iVar14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)&(this_ptr->base).base.field_0x2698,
                           g_CWeaponClassInfo.name_hash), iVar14 != 0)) &&
     (iVar14 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                         (0x01C38BC0,"deputeFireShotgun"), iVar14 != 0)) {
    this_ptr->gun_raise_progress = 0.01;
    return;
  }
  return;
}
