// Name: core_doc.cpp_FUN_00453250
// Address: 00453250
// Address Range: [[00453250, 00453c5a]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00453250(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00453250(CCharacter *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_10e0 [45];
  byte *apuStackY_102c [936];
  CCharacter *pCVar9;
  float *pfVar10;
  SDamageInfo *this_ptr;
  SDamageInfo local_170 [4];
  uint local_16c;
  SDamageInfo local_134 [4];
  float local_130;
  float local_118;
  uint local_114;
  uint local_110;
  CCharacter *local_100;
  CCharacter *local_fc;
  uint local_f8;
  float afStack_f4 [4];
  float local_e4;
  float afStack_e0 [3];
  float local_d4;
  float local_d0 [5];
  uint local_bc;
  float afStack_b8 [2];
  byte local_b0 [8];
  float fStack_a8;
  uint local_a4;
  float afStack_a0 [2];
  float local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_80;
  float afStack_74 [3];
  uint local_68;
  float afStack_64 [2];
  CVector3f local_5c;
  float afStack_50 [4];
  byte *apuStack_40 [4];
  byte *local_30;
  int local_2c;
  int local_28;
  CMotionController *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar7 = 0;
  local_24 = (CMotionController *)&param_1->field_0x2b4;
  apuStack_40[2] = &param_1[2].field_0x2ebc;
  apuStack_40[3] = &param_1[2].field_0x416c;
  local_30 = &param_1[2].field_0x4160;
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0(local_24,&param_2);
    if (uVar1 < 0x12) {
      if (uVar1 < 6) {
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_004532d0:
            uVar2 = _DAT_01b4d274;
            if (uVar1 == 7) {
              uVar2 = _DAT_01b4d278;
            }
            core_skeleton_cpp_FUN_005469a0(local_24,uVar2);
            local_68 = local_f8;
            afStack_64[(uint)bVar7 * -2] = afStack_f4[(uint)bVar7 * -2];
            afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            iVar3 = *(int *)&param_1[2].field_0x4154;
            if (iVar3 == 0) {
              iVar3 = *(int *)&param_1[2].field_0x41d4;
              if (iVar3 == 0) {
                if (*(int *)&param_1->field_0x2570 != 0) {
                  local_14 = (float)core_motion_cpp_FUN_005038a0(local_24,3);
                  if ((float)_DAT_005d012f < local_14) {
                    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                              (param_1,&local_68,0x3fd9999a);
                  }
                  else {
                    local_14 = (float)core_motion_cpp_FUN_005038a0(local_24,1);
                    if (local_14 <= (float)_DAT_005d012f) {
                      local_14 = (float)core_motion_cpp_FUN_005038a0(local_24,2);
                      if ((float)_DAT_005d012f < local_14) {
                        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                                  (param_1,&local_68,0x3f800000);
                      }
                    }
                    else {
                      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))
                                (param_1,&local_68,0x3f800000);
                    }
                  }
                }
                goto LAB_00453374;
              }
              local_14 = *(float *)&param_1->field_0x2b0;
              uVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x4c))(iVar3,0x3f800000);
              core_actor_cpp_FUN_00408d70(param_1,&local_68,uVar2);
              pfVar10 = afStack_f4 + 5;
              pfVar6 = afStack_f4 + 5;
              pfVar4 = afStack_74;
            }
            else {
              local_14 = *(float *)&param_1->field_0x2b0;
              uVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x4c))(iVar3,0x3f800000);
              core_actor_cpp_FUN_00408d70(param_1,&local_68,uVar2);
              pfVar10 = afStack_50;
              pfVar6 = afStack_50;
              pfVar4 = local_d0 + 2;
            }
            *pfVar6 = *pfVar4;
            pCVar9 = param_1;
            pfVar6[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
            (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)((int)local_14 + 0x30))(pCVar9,pfVar10);
          }
          else {
LAB_00453c4c:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,uVar1);
          }
        }
        else if (uVar1 < 3) {
          if (*(int *)&param_1[2].field_0x41e4 == 4) {
            *(uint *)&param_1[2].field_0x41e4 = 0;
          }
          else {
            shape_edittool_cpp_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                       *(int *)&param_1[2].field_0x41e4,0x899);
          }
          iVar3 = *(int *)&param_1[2].field_0x4148;
          if (iVar3 == 0) {
            shape_edittool_cpp_FUN_0047bdf0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d",0x89f);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x8c))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)&param_1[2].field_0x4148 = 0;
            }
            else {
              iVar5 = *(int *)&param_1[2].field_0x4148;
              if ((iVar5 != 0) &&
                 (iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x8c))(iVar5,param_1), iVar5 == 4))
              {
                *(uint *)&param_1->field_0x2d08 = 0;
                *(uint *)&param_1->field_0x2d04 = 9;
              }
              iVar5 = 0;
              if (iVar3 != 2) goto LAB_004535e0;
              if (*(int *)&param_1[2].field_0x41e4 != 0) {
                shape_edittool_cpp_FUN_0047bdf0
                          (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                           *(int *)&param_1[2].field_0x41e4,0x8c2);
              }
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (*(uint *)&param_1[2].field_0x4148,
                                 g_CWeaponClassInfo.name_hash);
              if (iVar5 == 0) {
LAB_00453522:
                *(uint *)&param_1[2].field_0x41e4 = 1;
              }
              else {
                uVar1 = *(uint *)(iVar5 + 0x43c);
                if (uVar1 < 6) {
                  if (uVar1 == 0) goto LAB_00453522;
LAB_004535e0:
                  if (*(int *)&param_1[2].field_0x41e4 != 0) {
                    core_hero_cpp_FUN_004cff50((CHero *)param_1,1);
                    goto LAB_00453374;
                  }
                }
                else {
                  if ((6 < uVar1) && ((uVar1 < 8 || ((8 < uVar1 && (uVar1 != 0xd))))))
                  goto LAB_004535e0;
                  *(uint *)&param_1[2].field_0x41e4 = 0;
                }
                if (iVar5 != 0) {
                  core_hero_cpp_FUN_004cff50((CHero *)param_1,1);
                  core_hero_cpp_FUN_004cff90(param_1,1);
                  core_inv_cpp_FUN_004db9d0(apuStack_40[2],iVar5,5,1);
                  *(uint *)&param_1[2].field_0x4180 = 1;
                  *(uint *)&param_1->field_0x2d04 = 3;
                  *(uint *)&param_1->field_0x2d08 = 0x3f800000;
                  *(int *)&param_1[2].field_0x41d8 = iVar5;
                  goto LAB_00453374;
                }
              }
              core_hero_cpp_FUN_004cff50((CHero *)param_1,1);
            }
          }
        }
        else {
          if (uVar1 != 3) goto LAB_00453c4c;
          iVar3 = *(int *)&param_1->field_0x2698;
          core_doc_cpp_FUN_004583a0(param_1);
          iVar5 = *(int *)&param_1[2].field_0x41e4;
          if (iVar5 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x70))(iVar3,local_30,apuStack_40[3]);
            }
LAB_004533c6:
            *(uint *)&param_1[2].field_0x41e4 = 0;
          }
          else {
            if (iVar5 == 6) goto LAB_004533c6;
            shape_edittool_cpp_FUN_0047bdf0
                      (g_CEditorToolsPtr,"<actionPending = %d\ndoc.cpp line %d" + 1,iVar5,0x87a);
          }
          iVar5 = *(int *)&param_1->field_0x2d04;
          *(uint *)&param_1[2].field_0x415c = 0;
          if (iVar5 == 9) {
            *(uint *)&param_1->field_0x2d08 = 0;
            *(uint *)&param_1->field_0x2d04 = 0;
          }
          if (iVar3 == *(int *)&param_1[2].field_0x41d8) {
            *(uint *)&param_1[2].field_0x41d8 = 0;
          }
        }
      }
      else if (uVar1 < 7) {
        local_28 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)&param_1->field_0x276c,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != 0) {
          core_skeleton_cpp_FUN_005469a0(local_24,_DAT_01b4d288);
          iVar3 = (int)&local_a4;
          local_a4 = local_80;
          afStack_a0[(uint)bVar7 * 0xfffffffe] = afStack_a0[(uint)bVar7 * -2 + 9];
          afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          core_actor_cpp_FUN_00408d70(param_1,iVar3);
          this_ptr = local_134;
          local_b0._0_4_ = local_5c._0_4_;
          *(float *)(local_b0 + (uint)bVar7 * -8 + 4) = afStack_50[(uint)bVar7 * -2 + -2];
          *(float *)(local_b0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               afStack_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr);
          local_130 = (float)core_actor_cpp_FUN_0040cf60(0x41200000,0x41700000);
          local_14 = local_130;
          core_actor_cpp_FUN_00408de0(local_28,local_b0);
          local_98 = afStack_50[3];
          afStack_a0[(uint)bVar7 * -2 + 3] = (float)apuStack_40[(uint)bVar7 * -2];
          afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               (float)apuStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (&local_118 != afStack_a0 + 2) {
            local_118 = local_98;
            local_114 = local_94;
            local_110 = local_90;
          }
          local_100 = param_1;
          local_fc = param_1;
          (**(code **)(*(int *)(local_2c + 0x2b0) + 0x110))(local_2c,local_134);
          if (0.0 < local_130) {
            fVar8 = (float10)local_130 * (float10)_DAT_005d0127;
            round();
            local_14 = (float)(int)ROUND(fVar8);
            core_gore_cpp_FUN_004c9850
                      (g_CGorePtr,(CVector3f *)local_b0,(CVector3f *)0x0,(int)local_14 + 1,
                       BLOOD_TYPE_RED);
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"kick1.wav");
          }
        }
        local_1c = 0;
        for (local_20 = 0; local_20 < *(int *)&g_CDemonSetPtr->field_0x150fec;
            local_20 = local_20 + 1) {
          local_18 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + local_1c);
          iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          local_d4 = *(float *)(iVar3 + 0x20) - *(float *)(local_18 + 0x20);
          local_d0[0] = *(float *)(iVar3 + 0x24) - *(float *)(local_18 + 0x24);
          local_d0[1] = *(float *)(iVar3 + 0x28) - *(float *)(local_18 + 0x28);
          afStack_f4[2] = local_d4;
          afStack_f4[(uint)bVar7 * -2 + 3] = local_d0[(uint)bVar7 * -2];
          afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               local_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (SQRT(local_e4 * local_e4 +
                   afStack_f4[2] * afStack_f4[2] + afStack_f4[3] * afStack_f4[3]) <=
              (float)_DAT_005d0137) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_170);
            local_16c = 0x40a00000;
            (**(code **)(*(int *)(local_18 + 0x2b0) + 0x110))(local_18,local_170);
          }
          local_1c = local_1c + 4;
        }
        *(uint *)&param_1->field_0x276c = 0;
      }
      else if (uVar1 < 0xf) {
        if (uVar1 == 7) goto LAB_004532d0;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,uVar1);
      }
      else if (uVar1 < 0x10) {
        if (*(int *)&param_1->field_0x276c != 0) {
          core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
          local_bc = local_8c;
          afStack_b8[(uint)bVar7 * -2] = afStack_a0[(uint)bVar7 * -2 + 6];
          afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          if (0.0 < afStack_b8[1]) {
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (uVar1 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,uVar1);
      }
    }
    else if (0x12 < uVar1) {
      if (uVar1 < 0x17) {
        if (uVar1 < 0x15) {
          if (uVar1 != 0x13) goto LAB_00453c4c;
          core_doc_cpp_FUN_00458320(param_1);
        }
        else if (uVar1 < 0x16) {
          if (*(int *)&param_1->field_0x2698 == *(int *)&param_1[2].field_0x41d8) {
            *(uint *)&param_1[2].field_0x41d8 = 0;
          }
          core_hero_cpp_FUN_004cff90(param_1,1);
          if (*(int *)&param_1[2].field_0x41e4 == 1) {
            *(uint *)&param_1[2].field_0x41e4 = 0;
          }
          else {
            shape_edittool_cpp_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                       *(int *)&param_1[2].field_0x41e4,0x912);
          }
        }
        else {
          if (*(int *)&param_1[2].field_0x41e4 == 5) {
            *(uint *)&param_1[2].field_0x41e4 = 0;
          }
          else {
            shape_edittool_cpp_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                       *(int *)&param_1[2].field_0x41e4,0x971);
          }
          if (*(int *)&param_1[2].field_0x4144 == 0) {
            shape_edittool_cpp_FUN_0047bdf0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d",0x977);
          }
          iVar3 = core_hero_cpp_FUN_004cf230((CHero *)param_1);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_24,0,1);
          }
        }
      }
      else if (uVar1 < 0x18) {
        core_hero_cpp_FUN_004cf440(param_1);
      }
      else if (uVar1 < 0x29a) {
        if (uVar1 != 0x18) goto LAB_00453c4c;
      }
      else if (uVar1 < 0x29b) {
        *(uint *)&param_1->field_0x258c = 0x41200000;
      }
      else {
        if (uVar1 != 0x29b) goto LAB_00453c4c;
        *(uint *)&param_1->field_0x258c = 0x40800000;
      }
    }
LAB_00453374:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
