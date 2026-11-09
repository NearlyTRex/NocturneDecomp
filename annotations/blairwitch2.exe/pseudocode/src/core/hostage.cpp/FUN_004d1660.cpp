// Name: core_hostage.cpp_FUN_004d1660
// Address: 004d1660
// Address Range: [[004d1660, 004d2c42]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004d1660(CHostage *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hostage_cpp_FUN_004d1660(CHostage *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  CConsole *pCVar7;
  int iVar8;
  uint uVar9;
  CDoor *pCVar10;
  CSkeleton *this_ptr;
  uint uVar11;
  float *pfVar12;
  byte bVar13;
  float afStackY_121c [987];
  CGore *this_ptr_00;
  CVector3f *position;
  char *bone_name;
  CVector3f *pCVar14;
  CHostage *pCVar15;
  EBloodType blood_type;
  float fStack_274;
  SDamageInfo aSStack_270 [4];
  uint uStack_26c;
  CHostage *pCStack_23c;
  CHostage *pCStack_238;
  uint uStack_234;
  float afStack_230 [2];
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [5];
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
  byte auStack_fc [4];
  float afStack_f8 [4];
  float fStack_e8;
  uint uStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [5];
  uint uStack_b4;
  CVector3f CStack_a8;
  uint uStack_9c;
  float afStack_98 [7];
  int iStack_7c;
  float fStack_6c;
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
  float fStack_18;
  
  bVar13 = 0;
  switch(*(uint *)&param_1->field_0x246fc) {
  case 0:
  case 4:
    *(uint *)&param_1->field_0x343c = 0x42480000;
    *(uint *)&param_1->field_0x3438 = 0x41a00000;
    break;
  case 1:
  case 2:
    *(uint *)&param_1->field_0x343c = 0x42960000;
    *(uint *)&param_1->field_0x3438 = 0x42200000;
    break;
  case 3:
  case 5:
    *(uint *)&param_1->field_0x343c = 0x47c34f80;
    *(uint *)&param_1->field_0x3438 = 0x47c34f80;
  }
  if (*(float *)&param_1->field_0x25a8 <= 0.0) {
    *(uint *)&param_1->field_0x343c = 0x47c34f80;
    *(uint *)&param_1->field_0x3438 = 0x47c34f80;
  }
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar8 == 0) {
    return;
  }
  fStack_274 = param_2;
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  pCStack_30 = (CMotionController *)&param_1->field_0x2b4;
  while (0.0 < fStack_274) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&stack0xfffffd8c);
    if (uVar9 < 0xb) {
      if (uVar9 == 6) {
        if (*(int *)&param_1->field_0x276c != 0) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s escaping from %s\n",param_1,
                     *(int *)&param_1->field_0x276c);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_270);
          uStack_26c = core_actor_cpp_FUN_0040cf60(0x41200000,0x41700000);
          pCStack_23c = param_1;
          pCStack_238 = param_1;
          fStack_18 = (float)uStack_26c;
          (**(code **)(*(int *)(*(int *)&param_1->field_0x276c + 0x2b0) + 0x110))
                    (*(int *)&param_1->field_0x276c,aSStack_270);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar9);
      }
    }
    else if (uVar9 < 0xc) {
      pCStack_2c = (CDoor *)0x0;
      afStack_1f8[0] = 0.0;
      afStack_1f8[1] = 0.0;
      fStack_28 = 1e+30;
      afStack_1f8[2] = 1.5;
      core_actor_cpp_FUN_00408d70(param_1,afStack_218 + 8);
      afStack_f8[2] = fStack_204;
      afStack_f8[(uint)bVar13 * -2 + 3] = afStack_218[(uint)bVar13 * -2 + 6];
      afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < *(int *)&g_CDemonSetPtr->field_0x14d164;
          iStack_1c = iStack_1c + 1) {
        pCVar10 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iStack_20),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar10 != (CDoor *)0x0) {
          fStack_120 = *(float *)&pCVar10->field_0x20 - afStack_f8[2];
          fStack_11c = *(float *)&pCVar10->field_0x24 - afStack_f8[3];
          fStack_118 = *(float *)&pCVar10->field_0x28 - fStack_e8;
          afStack_98[2] = fStack_120;
          afStack_98[(uint)bVar13 * -2 + 3] = afStack_134[(uint)bVar13 * -2 + 6];
          afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          if (ABS(afStack_98[3]) <= (float)_DAT_005da39e) {
            afStack_98[3] = 0.0;
            fStack_24 = SQRT(afStack_98[4] * afStack_98[4] + afStack_98[2] * afStack_98[2]);
            if (fStack_24 < fStack_28) {
              pCStack_2c = pCVar10;
              fStack_28 = fStack_24;
            }
          }
        }
        iStack_20 = iStack_20 + 4;
      }
      if (pCStack_2c != (CDoor *)0x0) {
        core_door_cpp_FUN_00460310(pCStack_2c,0.1);
      }
    }
    else if (uVar9 == 0xc) {
      iVar8 = *(int *)&param_1->field_0x2698;
      if (iVar8 != 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1,0);
        core_inv_cpp_FUN_004dadb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,iVar8,1,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar9);
    }
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  iStack_3c = 0;
  iStack_38 = 0;
  fStack_18 = (float)core_motion_cpp_FUN_005038a0(pCStack_30,10);
  if (0.0 < fStack_18) {
    iStack_3c = 1;
    iStack_38 = 1;
  }
  if (*(float *)&param_1->field_0x25a8 <= 0.0) {
    fStack_18 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,5);
    if ((fStack_18 <= 0.0) &&
       (fStack_18 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,8), fStack_18 <= 0.0))
    {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,6,1);
    }
LAB_004d1ac4:
    iStack_38 = 1;
  }
  else if (*(int *)&param_1->field_0x276c == 0) {
    puVar1 = &param_1->field_0x2b4;
    fStack_18 = (float)core_motion_cpp_FUN_005038a0(puVar1,3);
    if (((0.0 < fStack_18) ||
        (fStack_18 = (float)core_motion_cpp_FUN_005038a0(puVar1,5), 0.0 < fStack_18)) ||
       (fStack_18 = (float)core_motion_cpp_FUN_005038a0(puVar1,8), 0.0 < fStack_18))
    goto LAB_004d1ac4;
    iVar8 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
    pCVar7 = g_CConsolePtr;
    if (iVar8 == 0) {
      switch(*(uint *)&param_1->field_0x246fc) {
      case 0:
        iVar8 = core_hostage_cpp_FUN_004d2c50(param_1,param_2);
        if (iVar8 == 0) {
          iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          fStack_108 = *(float *)(iVar8 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_104[0] = *(float *)(iVar8 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_104[1] = *(float *)(iVar8 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_150 = fStack_108;
          afStack_1e8[(uint)bVar13 * -2 + 0x27] = afStack_104[(uint)bVar13 * -2];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
               afStack_104[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          fStack_1a4 = fStack_150;
          afStack_1e8[(uint)bVar13 * -2 + 0x12] = afStack_1e8[(uint)bVar13 * -2 + 0x27];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
               afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
          fStack_1c8 = fStack_1a4;
          afStack_1e8[(uint)bVar13 * -2 + 9] = afStack_1e8[(uint)bVar13 * -2 + 0x12];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
          if (((0.0 < *(float *)&param_1->field_0x24348) &&
              (fStack_40 = fStack_1c0 * fStack_1c0 +
                           fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4,
              *(float *)&param_1->field_0x24348 <= SQRT(fStack_40))) ||
             (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                                (0x01C38BC0,&param_1->field_0x2434c), pCVar7 = g_CConsolePtr,
             iVar8 == 0)) goto LAB_004d20aa;
          *(uint *)&param_1->field_0x246fc = 1;
          engine_console_cpp_FUN_00436710(pCVar7,"%s rescued, entering follow mode\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_004894f0
                    (0x01C38BC0,&param_1->field_0x243d0);
        }
        break;
      case 1:
        iVar8 = *(int *)&param_1->field_0x24700;
        if ((iVar8 != 0) &&
           (fVar2 = *(float *)&param_1->field_0x20 - *(float *)(iVar8 + 0x20),
           fVar3 = *(float *)&param_1->field_0x28 - *(float *)(iVar8 + 0x28),
           SQRT(fVar3 * fVar3 + fVar2 * fVar2) < (float)_DAT_005da366)) {
          uVar11 = core_waypoint_cpp_FUN_005882d0(&param_1->field_0x20,iVar8,0);
          *(uint *)&param_1->field_0x24708 = uVar11;
        }
        pCVar7 = g_CConsolePtr;
        if (*(int *)&param_1->field_0x24708 == 0) {
          iVar8 = core_hostage_cpp_FUN_004d2c50(param_1,param_2);
          if (iVar8 == 0) {
            iVar8 = core_charactr_cpp_FUN_0042abe0(param_1,param_2);
            if (iVar8 == 0) {
              core_charactr_cpp_FUN_00428260
                        (param_1,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40a00000,
                         0x41200000,&param_1->field_0x246f4);
            }
            else {
              *(int *)&param_1->field_0x246f4 = iVar8;
            }
            uVar9 = *(uint *)&param_1->field_0x246f4;
            puVar1 = &param_1->field_0x2b4;
            if (uVar9 < 2) {
              if (uVar9 != 1) goto LAB_004d20aa;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)puVar1,1,1);
            }
            else if (uVar9 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)puVar1,2,1);
            }
            else {
              if (uVar9 != 3) goto LAB_004d20aa;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)puVar1,0,1);
              pCVar7 = g_CConsolePtr;
              *(uint *)&param_1->field_0x246fc = 2;
              engine_console_cpp_FUN_00436710(pCVar7,"%s left behind!\n",param_1);
              core_event_cpp_CEventList_executeCommands_FUN_004894f0
                        (0x01C38BC0,&param_1->field_0x24434);
              *(uint *)&param_1->field_0x303c = 0;
            }
          }
        }
        else {
          *(uint *)&param_1->field_0x246fc = 3;
          engine_console_cpp_FUN_00436710(pCVar7,"%s was led close enough, going home!\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_004894f0
                    (0x01C38BC0,&param_1->field_0x24560);
          *(uint *)&param_1->field_0x303c = 0;
        }
        break;
      case 2:
        iVar8 = core_hostage_cpp_FUN_004d2c50(param_1,param_2);
        if (iVar8 == 0) {
          core_charactr_cpp_FUN_00428260
                    (param_1,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),0x40800000,0x41200000,
                     &param_1->field_0x246f4);
          uVar9 = *(uint *)&param_1->field_0x246f4;
          if (uVar9 == 0) {
            iVar8 = 0;
          }
          else if (uVar9 < 2) {
            iVar8 = 1;
          }
          else {
            if (uVar9 != 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
              break;
            }
            iVar8 = 2;
          }
          *(uint *)&param_1->field_0x246fc = 1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar1,iVar8,1);
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s was left behind, but now can follow again!\n",param_1)
          ;
          core_event_cpp_CEventList_executeCommands_FUN_004894f0
                    (0x01C38BC0,&param_1->field_0x24498);
        }
        break;
      case 3:
        if (*(int *)&param_1->field_0x24708 == 0) {
          *(uint *)&param_1->field_0x246fc = 2;
          engine_console_cpp_FUN_00436710(pCVar7,"%s doesn't know next waypoint going home.  Help me!\n",param_1);
        }
        else {
          core_charactr_cpp_FUN_00428260
                    (param_1,*(int *)&param_1->field_0x24708,0x3f800000,0xbf800000,
                     &param_1->field_0x246f4);
          switch(*(uint *)&param_1->field_0x246f4) {
          case 0:
            engine_console_cpp_FUN_00436710
                      (g_CConsolePtr,"%s reached waypoint %s!\n",param_1,
                       *(uint *)&param_1->field_0x24708);
            pCVar7 = g_CConsolePtr;
            if (*(int *)&param_1->field_0x24708 == *(int *)&param_1->field_0x24700) {
              *(uint *)&param_1->field_0x246fc = 4;
              engine_console_cpp_FUN_00436710(pCVar7,"%s rescued and taken home!\n",param_1);
              *(uint *)&param_1->field_0x24708 = 0;
            }
            else {
              uVar11 = core_waypoint_cpp_FUN_005882d0
                                 (&param_1->field_0x20,*(int *)&param_1->field_0x24700,0);
              *(uint *)&param_1->field_0x24708 = uVar11;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar1,1,1);
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar1,2,1);
            break;
          case 3:
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar1,0,1);
            pCVar7 = g_CConsolePtr;
            *(uint *)&param_1->field_0x246fc = 2;
            engine_console_cpp_FUN_00436710(pCVar7,"%s got confused going home.  Help me!\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)puVar1,0,1);
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,&param_1->field_0x245c4);
            core_event_cpp_FUN_00490f80(0x01C38BC0,&param_1->field_0x243b0,1);
            *(uint *)&param_1->field_0x246fc = 4;
            *(uint *)&param_1->field_0x24708 = 0;
          }
        }
        break;
      case 4:
        iStack_3c = 1;
        if (*(int *)&param_1->field_0x24704 != 0) {
          if (*(float *)&param_1->field_0x2594 < param_2 * (float)_DAT_005da33e) {
            *(float *)&param_1->field_0x2594 = param_2 * (float)_DAT_005da33e;
          }
          core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x24704 + 0x20);
          fStack_180 = afStack_134[2];
          afStack_1e8[(uint)bVar13 * -2 + 0x1b] = afStack_134[(uint)bVar13 * -2 + 3];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
               afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          if ((float *)&param_1->field_0x257c != afStack_1e8 + 0x1a) {
            *(float *)&param_1->field_0x257c = fStack_180;
            *(uint *)&param_1->field_0x2580 = uStack_17c;
            *(uint *)&param_1->field_0x2584 = uStack_178;
          }
          pfVar12 = (float *)((int)param_1 + (uint)bVar13 * -8 + 0x2580);
          fStack_21c = *(float *)&param_1->field_0x257c;
          afStack_218[(uint)bVar13 * -2] = *pfVar12;
          afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] = pfVar12[(uint)bVar13 * -2 + 1];
          fVar2 = SQRT(afStack_218[1] * afStack_218[1] + fStack_21c * fStack_21c);
          afStack_218[0] = 0.0;
          if (*(float *)&param_1->field_0x2594 < fVar2) {
            fStack_48 = *(float *)&param_1->field_0x2594 / fVar2;
            *(float *)&param_1->field_0x257c = *(float *)&param_1->field_0x257c * fStack_48;
            *(float *)&param_1->field_0x2580 = *(float *)&param_1->field_0x2580 * fStack_48;
            *(float *)&param_1->field_0x2584 = *(float *)&param_1->field_0x2584 * fStack_48;
          }
          fStack_44 = fVar2;
          core_vecdir_cpp_FUN_005838f0(&param_1->field_0x257c);
          fVar3 = (float)_DAT_005da346;
          uStack_15c = uStack_e4;
          afStack_1e8[(uint)bVar13 * -2 + 0x24] = afStack_f8[(uint)bVar13 * -2 + 6];
          afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
               afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          *(uint *)&param_1->field_0x2578 = uStack_158;
          if (fVar2 * fVar3 < 1.0) {
            fStack_18 = (float)core_actor_cpp_FUN_0040d0c0
                                         (*(float *)(*(int *)&param_1->field_0x24704 + 0x34) -
                                          *(float *)&param_1->field_0x34);
            fStack_18 = (float)core_actor_cpp_FUN_0040d0c0
                                         (fStack_18 - *(float *)&param_1->field_0x2578);
            *(float *)&param_1->field_0x2578 =
                 (1.0 - fVar2 * fVar3) * fStack_18 + *(float *)&param_1->field_0x2578;
          }
          fStack_18 = (float)core_actor_cpp_FUN_0040d0c0(*(uint *)&param_1->field_0x2578);
          *(float *)&param_1->field_0x2578 = fStack_18;
          if ((fVar2 < (float)_DAT_005da34e) &&
             (ABS(*(float *)&param_1->field_0x2578) < (float)_DAT_005da356)) {
            if ((*(int *)&param_1->field_0x246f8 == 0) || (*(int *)&param_1->field_0x246f8 == 4)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
              *(uint *)&param_1->field_0x246fc = 5;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,10,1);
            }
            core_event_cpp_CEventList_executeCommands_FUN_004894f0
                      (0x01C38BC0,&param_1->field_0x245c4);
            core_event_cpp_FUN_00490f80(0x01C38BC0,&param_1->field_0x243b0,1);
            *(uint *)&param_1->field_0x24704 = 0;
          }
          fStack_4c = param_2 * _DAT_005da35e;
          fStack_54 = -fStack_4c;
          if (*(float *)&param_1->field_0x2578 < fStack_54) {
            *(float *)&param_1->field_0x2578 = fStack_54;
          }
          if (fStack_4c < *(float *)&param_1->field_0x2578) {
            *(float *)&param_1->field_0x2578 = fStack_4c;
          }
        }
      }
    }
    else {
      uVar9 = *(uint *)&param_1->field_0x27ac;
      if (uVar9 < 2) {
        if (uVar9 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,1,1);
        }
        else {
LAB_004d20aa:
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
      }
      else if (uVar9 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,2,1);
      }
      else {
        if (uVar9 != 3) goto LAB_004d20aa;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0,1);
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
      }
    }
  }
  else {
    core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
    afStack_c8[2] = afStack_1f8[3];
    afStack_c8[(uint)bVar13 * -2 + 3] = afStack_1e8[(uint)bVar13 * -2];
    afStack_c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    core_vecdir_cpp_FUN_005838f0(afStack_c8 + 2);
    uStack_9c = afStack_1e8[2];
    afStack_98[(uint)bVar13 * -2] = afStack_1e8[(uint)bVar13 * -2 + 3];
    afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    fStack_18 = (float)core_actor_cpp_FUN_0040d0c0(afStack_98[0]);
    fStack_34 = fStack_18;
    if (fStack_18 < _DAT_005da36e) {
      fStack_34 = fStack_18 + _DAT_005da35e;
    }
    if (_DAT_005da372 < fStack_34) {
      fStack_34 = fStack_34 + _DAT_005da376;
    }
    fStack_50 = param_2 * _DAT_005da35e;
    fStack_58 = -fStack_50;
    if (fStack_34 < fStack_58) {
      fStack_34 = fStack_58;
    }
    if (fStack_50 < fStack_34) {
      fStack_34 = fStack_50;
    }
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_34;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
    iStack_7c = *(int *)&param_1->field_0x276c;
    fStack_18 = *(float *)(iStack_7c + 0x2b0);
    core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,0);
    fVar2 = fStack_18;
    iVar8 = iStack_7c;
    pfVar12 = afStack_218 + 2;
    afStack_218[2] = (float)uStack_b4;
    afStack_218[(uint)bVar13 * -2 + 3] = afStack_c8[(uint)bVar13 * -2 + 6];
    pCVar15 = param_1;
    afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    iVar8 = (**(code **)((int)fVar2 + 0x118))(iVar8,pCVar15,pfVar12);
    if (iVar8 == 0) {
      *(uint *)&param_1->field_0x276c = 0;
LAB_004d1f68:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
    }
    else if (*(int *)&param_1->field_0x276c == 0) goto LAB_004d1f68;
    iStack_3c = 1;
    *(uint *)&param_1->field_0x2510 = 0;
    iStack_38 = 1;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  }
  if (((0.0 < *(float *)&param_1->field_0x25a8) && (*(int *)&param_1->field_0x246f8 == 1)) &&
     (iVar8 = core_actor_cpp_FUN_0040d060(param_2 * _DAT_005da37a), iVar8 != 0)) {
    iVar8 = 0;
    bone_name = "Bip01 L Forearm";
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)&param_1->field_0x2b4);
    iVar8 = core_skeleton_cpp_FUN_00540e80(this_ptr,bone_name,iVar8);
    if (-1 < iVar8) {
      core_skeleton_cpp_FUN_005469a0(&param_1->field_0x2b4,iVar8);
      pfVar12 = afStack_1e8 + 0xb;
      afStack_1bc[0] = (float)uStack_234;
      afStack_1e8[(uint)bVar13 * -2 + 0xc] = afStack_230[(uint)bVar13 * -2];
      afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1,pfVar12);
      CStack_114._0_4_ = CStack_a8._0_4_;
      *(uint *)((int)&CStack_114 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_a8 + (uint)bVar13 * -8 + 4);
      *(uint *)((int)&CStack_114 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_a8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      afStack_144[0] = 3.0;
      afStack_144[1] = 0.0;
      afStack_144[2] = 0.0;
      core_actor_cpp_FUN_00408cf0(param_1,afStack_1e8 + 0x29);
      blood_type = BLOOD_TYPE_RED;
      pCVar14 = &CStack_d8;
      position = &CStack_114;
      CStack_d8._0_4_ = CStack_228._0_4_;
      *(uint *)((int)&CStack_d8 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_228 + (uint)bVar13 * -8 + 4);
      this_ptr_00 = g_CGorePtr;
      *(uint *)((int)&CStack_d8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_228 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_gore_cpp_FUN_004c9730(this_ptr_00,position,pCVar14,blood_type);
    }
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  if (iStack_3c == 0) {
    iVar8 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    iVar8 = *(int *)(iVar8 + 0x24);
    if ((((iVar8 == 8) || (iVar8 == 0)) || ((iVar8 == 0xd || (iVar8 == 10)))) &&
       (*(int *)&param_1->field_0xdc == 0)) {
      *(uint *)&param_1->field_0x304c = 0;
      goto LAB_004d1c55;
    }
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_168 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_164 = *(float *)&param_1->field_0x258c * param_2;
    fStack_160 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_174 = fStack_168;
    afStack_1e8[(uint)bVar13 * -2 + 0x1e] = afStack_1e8[(uint)bVar13 * -2 + 0x21];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
    fStack_cc = fStack_174 + *(float *)&param_1->field_0x257c;
    afStack_c8[0] = fStack_170 + *(float *)&param_1->field_0x2580;
    afStack_c8[1] = fStack_16c + *(float *)&param_1->field_0x2584;
    fStack_18c = fStack_cc;
    afStack_1e8[(uint)bVar13 * -2 + 0x18] = afStack_c8[(uint)bVar13 * -2];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
         afStack_c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_1b0 = fStack_18c + *(float *)&param_1->field_0x2508;
    fStack_1ac = fStack_188 + *(float *)&param_1->field_0x250c;
    fStack_1a8 = fStack_184 + *(float *)&param_1->field_0x2510;
    auStack_fc = (byte  [4])fStack_1b0;
    afStack_f8[(uint)bVar13 * -2] = afStack_1e8[(uint)bVar13 * -2 + 0xf];
    afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    pCVar14 = (CVector3f *)auStack_fc;
    pfVar12 = (float *)((int)param_1 + (uint)bVar13 * -8 + 0x24);
    fStack_1d4 = *(float *)&param_1->field_0x20;
    afStack_1e8[(uint)bVar13 * -2 + 6] = *pfVar12;
    pCVar15 = param_1;
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] = pfVar12[(uint)bVar13 * -2 + 1];
    core_charactr_cpp_FUN_00423a60((CCharacter *)pCVar15,pCVar14);
    *(float *)&param_1->field_0x304c = *(float *)&param_1->field_0x304c + param_2;
    if ((param_2 * (float)_DAT_005da37e <=
         SQRT(afStack_f8[1] * afStack_f8[1] +
              (float)auStack_fc * (float)auStack_fc + afStack_f8[0] * afStack_f8[0])) &&
       (dVar4 = (double)*(float *)&param_1->field_0x20 - (double)fStack_1d4,
       dVar5 = (double)*(float *)&param_1->field_0x24 - (double)fStack_1d0,
       dVar6 = (double)*(float *)&param_1->field_0x28 - (double)fStack_1cc,
       SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4) <= (double)param_2 * _DAT_005da386))
    goto LAB_004d1c55;
  }
  else {
    core_actor_cpp_FUN_00408cf0(param_1,&param_1->field_0x257c);
    fStack_198 = afStack_144[3];
    afStack_1e8[(uint)bVar13 * -2 + 0x15] = afStack_134[(uint)bVar13 * -2];
    afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_134[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_198;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_194;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_190;
  }
  *(uint *)&param_1->field_0x304c = 0;
LAB_004d1c55:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  if (*(int *)&param_1->field_0x246f8 == 1) {
    fStack_5c = 0.5;
    fStack_68 = 0.75;
    iVar8 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(uint *)&param_1->field_0x2698,g_CWeaponClassInfo.name_hash);
    if ((iVar8 == 0) ||
       (fStack_18 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,0x10), 0.0 < fStack_18
       )) {
      fVar2 = *(float *)&param_1->field_0x24724 - param_2 / fStack_5c;
    }
    else {
      fVar2 = param_2 / fStack_5c + *(float *)&param_1->field_0x24724;
    }
    *(float *)&param_1->field_0x24724 = fVar2;
    if (0.0 < *(float *)&param_1->field_0x24724) {
      if (1.0 < *(float *)&param_1->field_0x24724) {
        *(uint *)&param_1->field_0x24724 = 0x3f800000;
      }
      puVar1 = &param_1->field_0x2b4;
      fStack_6c = (float)core_motion_cpp_FUN_00503f50
                                   (puVar1,_DAT_01cedfcc,
                                    *(float *)&param_1->field_0x24720 * (float)_DAT_005da38e +
                                    (float)_DAT_005da396);
      fStack_18 = fStack_6c;
      core_skeleton_cpp_FUN_00545a60
                (puVar1,_DAT_01cedfcc,fStack_6c,*(uint *)&param_1->field_0x24724,
                 *(uint *)&param_1->field_0x2470c,core_skeleton_cpp_FUN_00544cc0);
      core_skeleton_cpp_FUN_00545a60
                (puVar1,_DAT_01cedfcc,fStack_6c,*(uint *)&param_1->field_0x24724,
                 *(uint *)&param_1->field_0x24710,core_skeleton_cpp_FUN_00544cc0);
      if (((1.0 <= *(float *)&param_1->field_0x24724) && (0.0 < *(float *)&param_1->field_0x24720))
         && (fVar2 = param_2 / fStack_68 + *(float *)&param_1->field_0x24720,
            *(float *)&param_1->field_0x24720 = fVar2, 1.0 < fVar2)) {
        *(uint *)&param_1->field_0x24720 = 0x3f800000;
      }
    }
    else {
      *(uint *)&param_1->field_0x24720 = 0;
      *(uint *)&param_1->field_0x24724 = 0;
    }
  }
  core_charactr_cpp_FUN_00429420((CCharacter *)param_1,param_2,iStack_38);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  if ((1.0 <= *(float *)&param_1->field_0x24720) &&
     (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)&param_1->field_0x2698,g_CWeaponClassInfo.name_hash),
     iVar8 != 0)) {
    uVar11 = *(uint *)(iVar8 + 0x6c8);
    *(uint *)(iVar8 + 0x6c8) = 6;
    (**(code **)(*(int *)(iVar8 + 0x2b0) + 0xec))(iVar8);
    *(uint *)(iVar8 + 0x6c8) = uVar11;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0xc,1);
    *(uint *)&param_1->field_0x24724 = 0;
    *(uint *)&param_1->field_0x24720 = 0;
  }
  if (((*(int *)&param_1->field_0x246f8 == 1) &&
      (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)&param_1->field_0x2698,g_CWeaponClassInfo.name_hash),
      iVar8 != 0)) &&
     (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"deputeFireShotgun"), iVar8 != 0)) {
    *(uint *)&param_1->field_0x24720 = 0x3c23d70a;
    return;
  }
  return;
}
