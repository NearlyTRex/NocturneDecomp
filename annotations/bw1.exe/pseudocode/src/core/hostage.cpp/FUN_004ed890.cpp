// Name: core_hostage.cpp_FUN_004ed890
// Address: 004ed890
// Address Range: [[004ed890, 004eee70]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004ed890(CHostage *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hostage_cpp_FUN_004ed890(CHostage *param_1,float param_2)

{
  byte *puVar1;
  CDemonActor *item_actor;
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
  SMotion *pSVar12;
  float *pfVar13;
  byte bVar14;
  float afStackY_121c [987];
  CGore *this_ptr_00;
  CVector3f *position;
  char *bone_name;
  CVector3f *pCVar15;
  CHostage *pCVar16;
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
  uint uStack_38;
  float fStack_34;
  CMotionController *pCStack_30;
  CDoor *pCStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar14 = 0;
  switch(*(uint *)&param_1->field_0x1fe6c) {
  case 0:
  case 4:
    *(uint *)&param_1->field_0x2ff8 = 0x42480000;
    *(uint *)&param_1->field_0x2ff4 = 0x41a00000;
    break;
  case 1:
  case 2:
    *(uint *)&param_1->field_0x2ff8 = 0x42960000;
    *(uint *)&param_1->field_0x2ff4 = 0x42200000;
    break;
  case 3:
  case 5:
    *(uint *)&param_1->field_0x2ff8 = 0x47c34f80;
    *(uint *)&param_1->field_0x2ff4 = 0x47c34f80;
  }
  if (*(float *)&param_1->field_0x2538 <= 0.0) {
    *(uint *)&param_1->field_0x2ff8 = 0x47c34f80;
    *(uint *)&param_1->field_0x2ff4 = 0x47c34f80;
  }
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar8 == 0) {
    return;
  }
  fStack_274 = param_2;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  pCStack_30 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_274) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_30,&stack0xfffffd8c);
    if (uVar9 < 0xb) {
      if (uVar9 == 6) {
        if (*(int *)&param_1->field_0x26fc != 0) {
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s escaping from %s\n",param_1,
                     *(int *)&param_1->field_0x26fc);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_270);
          uStack_26c = core_actor_cpp_FUN_0040cc00(0x41200000,0x41700000);
          pCStack_23c = param_1;
          pCStack_238 = param_1;
          fStack_18 = (float)uStack_26c;
          (**(code **)(*(int *)(*(int *)&param_1->field_0x26fc + 0x154) + 0x108))
                    (*(int *)&param_1->field_0x26fc,aSStack_270);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar9);
      }
    }
    else if (uVar9 < 0xc) {
      pCStack_2c = (CDoor *)0x0;
      afStack_1f8[0] = 0.0;
      afStack_1f8[1] = 0.0;
      fStack_28 = 1e+30;
      afStack_1f8[2] = 1.5;
      core_actor_cpp_FUN_00408b40(param_1,afStack_218 + 8);
      afStack_f8[2] = fStack_204;
      afStack_f8[(uint)bVar14 * -2 + 3] = afStack_218[(uint)bVar14 * -2 + 6];
      afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_218[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      iStack_20 = 0;
      for (iStack_1c = 0; iStack_1c < *(int *)&g_CDemonSetPtr->field_0x14d164;
          iStack_1c = iStack_1c + 1) {
        pCVar10 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600
                                     (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iStack_20),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar10 != (CDoor *)0x0) {
          fStack_120 = *(float *)&pCVar10->field_0x20 - afStack_f8[2];
          fStack_11c = *(float *)&pCVar10->field_0x24 - afStack_f8[3];
          fStack_118 = *(float *)&pCVar10->field_0x28 - fStack_e8;
          afStack_98[2] = fStack_120;
          afStack_98[(uint)bVar14 * -2 + 3] = afStack_134[(uint)bVar14 * -2 + 6];
          afStack_98[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
               afStack_134[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
          if (ABS(afStack_98[3]) <= (float)_DAT_005e4eff) {
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
        core_door_cpp_CDoor_setSwingRange_FUN_00478820(pCStack_2c,0.1);
      }
    }
    else if (uVar9 == 0xc) {
      item_actor = *(CDemonActor **)&param_1->field_0x2628;
      if (item_actor != (CDemonActor *)0x0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
        core_inv_cpp_FUN_004f7690
                  ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),item_actor,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar9);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  iStack_3c = 0;
  uStack_38 = 0;
  fStack_18 = (float)core_motion_cpp_FUN_00524a40(pCStack_30,10);
  if (0.0 < fStack_18) {
    iStack_3c = 1;
    uStack_38 = 1;
  }
  if (*(float *)&param_1->field_0x2538 <= 0.0) {
    fStack_18 = (float)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,5);
    if ((fStack_18 <= 0.0) &&
       (fStack_18 = (float)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,8), fStack_18 <= 0.0))
    {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,6,1);
    }
LAB_004edcf2:
    uStack_38 = 1;
  }
  else if (*(int *)&param_1->field_0x26fc == 0) {
    puVar1 = &param_1->field_0x158;
    fStack_18 = (float)core_motion_cpp_FUN_00524a40(puVar1,3);
    if (((0.0 < fStack_18) ||
        (fStack_18 = (float)core_motion_cpp_FUN_00524a40(puVar1,5), 0.0 < fStack_18)) ||
       (fStack_18 = (float)core_motion_cpp_FUN_00524a40(puVar1,8), 0.0 < fStack_18))
    goto LAB_004edcf2;
    iVar8 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
    pCVar7 = g_CConsolePtr;
    if (iVar8 == 0) {
      switch(*(uint *)&param_1->field_0x1fe6c) {
      case 0:
        iVar8 = core_hostage_cpp_FUN_004eee80(param_1,param_2);
        if (iVar8 == 0) {
          iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_108 = *(float *)(iVar8 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_104[0] = *(float *)(iVar8 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_104[1] = *(float *)(iVar8 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_150 = fStack_108;
          afStack_1e8[(uint)bVar14 * -2 + 0x27] = afStack_104[(uint)bVar14 * -2];
          afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28] =
               afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          fStack_1a4 = fStack_150;
          afStack_1e8[(uint)bVar14 * -2 + 0x12] = afStack_1e8[(uint)bVar14 * -2 + 0x27];
          afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
               afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28];
          fStack_1c8 = fStack_1a4;
          afStack_1e8[(uint)bVar14 * -2 + 9] = afStack_1e8[(uint)bVar14 * -2 + 0x12];
          afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
               afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
          if (((0.0 < *(float *)&param_1->field_0x1fab8) &&
              (fStack_40 = fStack_1c0 * fStack_1c0 +
                           fStack_1c8 * fStack_1c8 + fStack_1c4 * fStack_1c4,
              *(float *)&param_1->field_0x1fab8 <= SQRT(fStack_40))) ||
             (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                                (0x01C51D80,&param_1->field_0x1fabc), pCVar7 = g_CConsolePtr,
             iVar8 == 0)) goto LAB_004ee2d8;
          *(uint *)&param_1->field_0x1fe6c = 1;
          engine_console_cpp_FUN_00445430(pCVar7,"%s rescued, entering follow mode\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,&param_1->field_0x1fb40);
        }
        break;
      case 1:
        iVar8 = *(int *)&param_1->field_0x1fe70;
        if ((iVar8 != 0) &&
           (fVar2 = *(float *)&param_1->field_0x20 - *(float *)(iVar8 + 0x20),
           fVar3 = *(float *)&param_1->field_0x28 - *(float *)(iVar8 + 0x28),
           SQRT(fVar3 * fVar3 + fVar2 * fVar2) < (float)_DAT_005e4ec7)) {
          uVar11 = core_waypoint_cpp_FUN_005abb80(&param_1->field_0x20,iVar8,0);
          *(uint *)&param_1->field_0x1fe78 = uVar11;
        }
        pCVar7 = g_CConsolePtr;
        if (*(int *)&param_1->field_0x1fe78 == 0) {
          iVar8 = core_hostage_cpp_FUN_004eee80(param_1,param_2);
          if (iVar8 == 0) {
            iVar8 = core_charactr_cpp_FUN_00434c60(param_1,param_2);
            if (iVar8 == 0) {
              core_charactr_cpp_FUN_00431cc0
                        (param_1,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),0x40a00000,
                         0x41200000,&param_1->field_0x1fe64);
            }
            else {
              *(int *)&param_1->field_0x1fe64 = iVar8;
            }
            uVar9 = *(uint *)&param_1->field_0x1fe64;
            puVar1 = &param_1->field_0x158;
            if (uVar9 < 2) {
              if (uVar9 != 1) goto LAB_004ee2d8;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)puVar1,1,1);
            }
            else if (uVar9 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)puVar1,2,1);
            }
            else {
              if (uVar9 != 3) goto LAB_004ee2d8;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)puVar1,0,1);
              pCVar7 = g_CConsolePtr;
              *(uint *)&param_1->field_0x1fe6c = 2;
              engine_console_cpp_FUN_00445430(pCVar7,"%s left behind!\n",param_1);
              core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                        (0x01C51D80,&param_1->field_0x1fba4);
              *(uint *)&param_1->field_0x2fd0 = 0;
            }
          }
        }
        else {
          *(uint *)&param_1->field_0x1fe6c = 3;
          engine_console_cpp_FUN_00445430(pCVar7,"%s was led close enough, going home!\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,&param_1->field_0x1fcd0);
          *(uint *)&param_1->field_0x2fd0 = 0;
        }
        break;
      case 2:
        iVar8 = core_hostage_cpp_FUN_004eee80(param_1,param_2);
        if (iVar8 == 0) {
          core_charactr_cpp_FUN_00431cc0
                    (param_1,*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),0x40800000,0x41200000,
                     &param_1->field_0x1fe64);
          uVar9 = *(uint *)&param_1->field_0x1fe64;
          if (uVar9 == 0) {
            iVar8 = 0;
          }
          else if (uVar9 < 2) {
            iVar8 = 1;
          }
          else {
            if (uVar9 != 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
              break;
            }
            iVar8 = 2;
          }
          *(uint *)&param_1->field_0x1fe6c = 1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar1,iVar8,1);
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s was left behind, but now can follow again!\n",param_1)
          ;
          core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,&param_1->field_0x1fc08);
        }
        break;
      case 3:
        if (*(int *)&param_1->field_0x1fe78 == 0) {
          *(uint *)&param_1->field_0x1fe6c = 2;
          engine_console_cpp_FUN_00445430(pCVar7,"%s doesn't know next waypoint going home.  Help me!\n",param_1);
        }
        else {
          core_charactr_cpp_FUN_00431cc0
                    (param_1,*(int *)&param_1->field_0x1fe78,0x3f800000,0xbf800000,
                     &param_1->field_0x1fe64);
          switch(*(uint *)&param_1->field_0x1fe64) {
          case 0:
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%s reached waypoint %s!\n",param_1,
                       *(uint *)&param_1->field_0x1fe78);
            pCVar7 = g_CConsolePtr;
            if (*(int *)&param_1->field_0x1fe78 == *(int *)&param_1->field_0x1fe70) {
              *(uint *)&param_1->field_0x1fe6c = 4;
              engine_console_cpp_FUN_00445430(pCVar7,"%s rescued and taken home!\n",param_1);
              *(uint *)&param_1->field_0x1fe78 = 0;
            }
            else {
              uVar11 = core_waypoint_cpp_FUN_005abb80
                                 (&param_1->field_0x20,*(int *)&param_1->field_0x1fe70,0);
              *(uint *)&param_1->field_0x1fe78 = uVar11;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,1,1);
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,2,1);
            break;
          case 3:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,0,1);
            pCVar7 = g_CConsolePtr;
            *(uint *)&param_1->field_0x1fe6c = 2;
            engine_console_cpp_FUN_00445430(pCVar7,"%s got confused going home.  Help me!\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)puVar1,0,1);
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                      (0x01C51D80,&param_1->field_0x1fd34);
            core_event_cpp_FUN_004a9870(0x01C51D80,&param_1->field_0x1fb20,1);
            *(uint *)&param_1->field_0x1fe6c = 4;
            *(uint *)&param_1->field_0x1fe78 = 0;
          }
        }
        break;
      case 4:
        iStack_3c = 1;
        if (*(int *)&param_1->field_0x1fe74 != 0) {
          if (*(float *)&param_1->field_0x2524 < param_2 * (float)_DAT_005e4e9f) {
            *(float *)&param_1->field_0x2524 = param_2 * (float)_DAT_005e4e9f;
          }
          core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x1fe74 + 0x20);
          fStack_180 = afStack_134[2];
          afStack_1e8[(uint)bVar14 * -2 + 0x1b] = afStack_134[(uint)bVar14 * -2 + 3];
          afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c] =
               afStack_134[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          if ((float *)&param_1->field_0x250c != afStack_1e8 + 0x1a) {
            *(float *)&param_1->field_0x250c = fStack_180;
            *(uint *)&param_1->field_0x2510 = uStack_17c;
            *(uint *)&param_1->field_0x2514 = uStack_178;
          }
          pfVar13 = (float *)((int)param_1 + (uint)bVar14 * -8 + 0x2510);
          fStack_21c = *(float *)&param_1->field_0x250c;
          afStack_218[(uint)bVar14 * -2] = *pfVar13;
          afStack_218[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] = pfVar13[(uint)bVar14 * -2 + 1];
          fVar2 = SQRT(afStack_218[1] * afStack_218[1] + fStack_21c * fStack_21c);
          afStack_218[0] = 0.0;
          if (*(float *)&param_1->field_0x2524 < fVar2) {
            fStack_48 = *(float *)&param_1->field_0x2524 / fVar2;
            *(float *)&param_1->field_0x250c = *(float *)&param_1->field_0x250c * fStack_48;
            *(float *)&param_1->field_0x2510 = *(float *)&param_1->field_0x2510 * fStack_48;
            *(float *)&param_1->field_0x2514 = *(float *)&param_1->field_0x2514 * fStack_48;
          }
          fStack_44 = fVar2;
          core_vecdir_cpp_FUN_005a7520(&param_1->field_0x250c);
          fVar3 = (float)_DAT_005e4ea7;
          uStack_15c = uStack_e4;
          afStack_1e8[(uint)bVar14 * -2 + 0x24] = afStack_f8[(uint)bVar14 * -2 + 6];
          afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
               afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
          *(uint *)&param_1->field_0x2508 = uStack_158;
          if (fVar2 * fVar3 < 1.0) {
            fStack_18 = (float)core_actor_cpp_FUN_0040cd60
                                         (*(float *)(*(int *)&param_1->field_0x1fe74 + 0x34) -
                                          *(float *)&param_1->field_0x34);
            fStack_18 = (float)core_actor_cpp_FUN_0040cd60
                                         (fStack_18 - *(float *)&param_1->field_0x2508);
            *(float *)&param_1->field_0x2508 =
                 (1.0 - fVar2 * fVar3) * fStack_18 + *(float *)&param_1->field_0x2508;
          }
          fStack_18 = (float)core_actor_cpp_FUN_0040cd60(*(uint *)&param_1->field_0x2508);
          *(float *)&param_1->field_0x2508 = fStack_18;
          if ((fVar2 < (float)_DAT_005e4eaf) &&
             (ABS(*(float *)&param_1->field_0x2508) < (float)_DAT_005e4eb7)) {
            if ((*(int *)&param_1->field_0x1fe68 == 0) || (*(int *)&param_1->field_0x1fe68 == 4)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
              *(uint *)&param_1->field_0x1fe6c = 5;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,10,1);
            }
            core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                      (0x01C51D80,&param_1->field_0x1fd34);
            core_event_cpp_FUN_004a9870(0x01C51D80,&param_1->field_0x1fb20,1);
            *(uint *)&param_1->field_0x1fe74 = 0;
          }
          fStack_4c = param_2 * _DAT_005e4ebf;
          fStack_54 = -fStack_4c;
          if (*(float *)&param_1->field_0x2508 < fStack_54) {
            *(float *)&param_1->field_0x2508 = fStack_54;
          }
          if (fStack_4c < *(float *)&param_1->field_0x2508) {
            *(float *)&param_1->field_0x2508 = fStack_4c;
          }
        }
      }
    }
    else {
      uVar9 = *(uint *)&param_1->field_0x273c;
      if (uVar9 < 2) {
        if (uVar9 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
        else {
LAB_004ee2d8:
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else if (uVar9 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,2,1);
      }
      else {
        if (uVar9 != 3) goto LAB_004ee2d8;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
      }
    }
  }
  else {
    core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
    afStack_c8[2] = afStack_1f8[3];
    afStack_c8[(uint)bVar14 * -2 + 3] = afStack_1e8[(uint)bVar14 * -2];
    afStack_c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    core_vecdir_cpp_FUN_005a7520(afStack_c8 + 2);
    uStack_9c = afStack_1e8[2];
    afStack_98[(uint)bVar14 * -2] = afStack_1e8[(uint)bVar14 * -2 + 3];
    afStack_98[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    fStack_18 = (float)core_actor_cpp_FUN_0040cd60(afStack_98[0]);
    fStack_34 = fStack_18;
    if (fStack_18 < _DAT_005e4ecf) {
      fStack_34 = fStack_18 + _DAT_005e4ebf;
    }
    if (_DAT_005e4ed3 < fStack_34) {
      fStack_34 = fStack_34 + _DAT_005e4ed7;
    }
    fStack_50 = param_2 * _DAT_005e4ebf;
    fStack_58 = -fStack_50;
    if (fStack_34 < fStack_58) {
      fStack_34 = fStack_58;
    }
    if (fStack_50 < fStack_34) {
      fStack_34 = fStack_50;
    }
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_34;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
    iStack_7c = *(int *)&param_1->field_0x26fc;
    fStack_18 = *(float *)(iStack_7c + 0x154);
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    fVar2 = fStack_18;
    iVar8 = iStack_7c;
    pfVar13 = afStack_218 + 2;
    afStack_218[2] = (float)uStack_b4;
    afStack_218[(uint)bVar14 * -2 + 3] = afStack_c8[(uint)bVar14 * -2 + 6];
    pCVar16 = param_1;
    afStack_218[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    iVar8 = (**(code **)((int)fVar2 + 0x110))(iVar8,pCVar16,pfVar13);
    if (iVar8 == 0) {
      *(uint *)&param_1->field_0x26fc = 0;
LAB_004ee196:
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
    }
    else if (*(int *)&param_1->field_0x26fc == 0) goto LAB_004ee196;
    iStack_3c = 1;
    *(uint *)&param_1->field_0x24a4 = 0;
    uStack_38 = 1;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  }
  if (((0.0 < *(float *)&param_1->field_0x2538) && (*(int *)&param_1->field_0x1fe68 == 1)) &&
     (iVar8 = core_actor_cpp_FUN_0040cd00(param_2 * _DAT_005e4edb), iVar8 != 0)) {
    iVar8 = 0;
    bone_name = "Bip01 L Forearm";
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         ((CDeformableModelInstance *)&param_1->field_0x158);
    iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,bone_name,iVar8);
    if (-1 < iVar8) {
      core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,iVar8);
      pfVar13 = afStack_1e8 + 0xb;
      afStack_1bc[0] = (float)uStack_234;
      afStack_1e8[(uint)bVar14 * -2 + 0xc] = afStack_230[(uint)bVar14 * -2];
      afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
           afStack_230[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,pfVar13);
      CStack_114._0_4_ = CStack_a8._0_4_;
      *(uint *)((int)&CStack_114 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_a8 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_114 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_a8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      afStack_144[0] = 3.0;
      afStack_144[1] = 0.0;
      afStack_144[2] = 0.0;
      core_actor_cpp_FUN_00408ac0(param_1,afStack_1e8 + 0x29);
      blood_type = BLOOD_TYPE_RED;
      pCVar15 = &CStack_d8;
      position = &CStack_114;
      CStack_d8._0_4_ = CStack_228._0_4_;
      *(uint *)((int)&CStack_d8 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_228 + (uint)bVar14 * -8 + 4);
      this_ptr_00 = g_CGorePtr;
      *(uint *)((int)&CStack_d8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_228 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40(this_ptr_00,position,pCVar15,blood_type);
    }
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  if (iStack_3c == 0) {
    pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                        ((CMotionController *)&param_1->field_0x158);
    iVar8 = *(int *)(pSVar12 + 0x24);
    if ((((iVar8 == 8) || (iVar8 == 0)) || ((iVar8 == 0xd || (iVar8 == 10)))) &&
       (*(int *)&param_1->field_0xdc == 0)) {
      *(uint *)&param_1->field_0x2fe0 = 0;
      goto LAB_004ede83;
    }
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_168 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_164 = *(float *)&param_1->field_0x251c * param_2;
    fStack_160 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_174 = fStack_168;
    afStack_1e8[(uint)bVar14 * -2 + 0x1e] = afStack_1e8[(uint)bVar14 * -2 + 0x21];
    afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f] =
         afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
    fStack_cc = fStack_174 + *(float *)&param_1->field_0x250c;
    afStack_c8[0] = fStack_170 + *(float *)&param_1->field_0x2510;
    afStack_c8[1] = fStack_16c + *(float *)&param_1->field_0x2514;
    fStack_18c = fStack_cc;
    afStack_1e8[(uint)bVar14 * -2 + 0x18] = afStack_c8[(uint)bVar14 * -2];
    afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19] =
         afStack_c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    fStack_1b0 = fStack_18c + *(float *)&param_1->field_0x249c;
    fStack_1ac = fStack_188 + *(float *)&param_1->field_0x24a0;
    fStack_1a8 = fStack_184 + *(float *)&param_1->field_0x24a4;
    auStack_fc = (byte  [4])fStack_1b0;
    afStack_f8[(uint)bVar14 * -2] = afStack_1e8[(uint)bVar14 * -2 + 0xf];
    afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    pCVar15 = (CVector3f *)auStack_fc;
    pfVar13 = (float *)((int)param_1 + (uint)bVar14 * -8 + 0x24);
    fStack_1d4 = *(float *)&param_1->field_0x20;
    afStack_1e8[(uint)bVar14 * -2 + 6] = *pfVar13;
    pCVar16 = param_1;
    afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] = pfVar13[(uint)bVar14 * -2 + 1];
    core_charactr_cpp_FUN_0042d750((CCharacter *)pCVar16,pCVar15);
    *(float *)&param_1->field_0x2fe0 = *(float *)&param_1->field_0x2fe0 + param_2;
    if ((param_2 * (float)_DAT_005e4edf <=
         SQRT(afStack_f8[1] * afStack_f8[1] +
              (float)auStack_fc * (float)auStack_fc + afStack_f8[0] * afStack_f8[0])) &&
       (dVar4 = (double)*(float *)&param_1->field_0x20 - (double)fStack_1d4,
       dVar5 = (double)*(float *)&param_1->field_0x24 - (double)fStack_1d0,
       dVar6 = (double)*(float *)&param_1->field_0x28 - (double)fStack_1cc,
       SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4) <= (double)param_2 * _DAT_005e4ee7))
    goto LAB_004ede83;
  }
  else {
    core_actor_cpp_FUN_00408ac0(param_1,&param_1->field_0x250c);
    fStack_198 = afStack_144[3];
    afStack_1e8[(uint)bVar14 * -2 + 0x15] = afStack_134[(uint)bVar14 * -2];
    afStack_1e8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
         afStack_134[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_198;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_194;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_190;
  }
  *(uint *)&param_1->field_0x2fe0 = 0;
LAB_004ede83:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  if (*(int *)&param_1->field_0x1fe68 == 1) {
    fStack_5c = 0.5;
    fStack_68 = 0.75;
    iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
    if ((iVar8 == 0) ||
       (fStack_18 = (float)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,0x10), 0.0 < fStack_18
       )) {
      fVar2 = *(float *)&param_1->field_0x1fe94 - param_2 / fStack_5c;
    }
    else {
      fVar2 = param_2 / fStack_5c + *(float *)&param_1->field_0x1fe94;
    }
    *(float *)&param_1->field_0x1fe94 = fVar2;
    if (0.0 < *(float *)&param_1->field_0x1fe94) {
      if (1.0 < *(float *)&param_1->field_0x1fe94) {
        *(uint *)&param_1->field_0x1fe94 = 0x3f800000;
      }
      puVar1 = &param_1->field_0x158;
      fStack_6c = (float)core_motion_cpp_FUN_00525110
                                   (puVar1,_DAT_01d06b8c,
                                    *(float *)&param_1->field_0x1fe90 * (float)_DAT_005e4eef +
                                    (float)_DAT_005e4ef7);
      fStack_18 = fStack_6c;
      core_skeleton_cpp_FUN_00568100
                (puVar1,_DAT_01d06b8c,fStack_6c,*(uint *)&param_1->field_0x1fe94,
                 *(uint *)&param_1->field_0x1fe7c,core_skeleton_cpp_FUN_00567360);
      core_skeleton_cpp_FUN_00568100
                (puVar1,_DAT_01d06b8c,fStack_6c,*(uint *)&param_1->field_0x1fe94,
                 *(uint *)&param_1->field_0x1fe80,core_skeleton_cpp_FUN_00567360);
      if (((1.0 <= *(float *)&param_1->field_0x1fe94) && (0.0 < *(float *)&param_1->field_0x1fe90))
         && (fVar2 = param_2 / fStack_68 + *(float *)&param_1->field_0x1fe90,
            *(float *)&param_1->field_0x1fe90 = fVar2, 1.0 < fVar2)) {
        *(uint *)&param_1->field_0x1fe90 = 0x3f800000;
      }
    }
    else {
      *(uint *)&param_1->field_0x1fe90 = 0;
      *(uint *)&param_1->field_0x1fe94 = 0;
    }
  }
  core_charactr_cpp_FUN_00432f10(param_1,param_2,uStack_38);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  if ((1.0 <= *(float *)&param_1->field_0x1fe90) &&
     (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash),
     iVar8 != 0)) {
    uVar11 = *(uint *)(iVar8 + 0x56c);
    *(uint *)(iVar8 + 0x56c) = 6;
    (**(code **)(*(int *)(iVar8 + 0x154) + 0xe4))(iVar8);
    *(uint *)(iVar8 + 0x56c) = uVar11;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0xc,1);
    *(uint *)&param_1->field_0x1fe94 = 0;
    *(uint *)&param_1->field_0x1fe90 = 0;
  }
  if (((*(int *)&param_1->field_0x1fe68 == 1) &&
      (iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash),
      iVar8 != 0)) &&
     (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"deputeFireShotgun"), iVar8 != 0)) {
    *(uint *)&param_1->field_0x1fe90 = 0x3c23d70a;
    return;
  }
  return;
}
