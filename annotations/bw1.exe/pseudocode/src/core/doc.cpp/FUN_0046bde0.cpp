// Name: core_doc.cpp_FUN_0046bde0
// Address: 0046bde0
// Address Range: [[0046bde0, 0046c973]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046bde0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046bde0(CCharacter *param_1,float param_2)

{
  CMotionController *pCVar1;
  uint bone_index;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_10e0 [981];
  CCharacter *pCVar9;
  float *pfVar10;
  uint *puVar11;
  SDamageInfo *this_ptr;
  SDamageInfo local_170 [4];
  float local_16c;
  uint local_154;
  float local_150;
  uint local_14c;
  uint local_148;
  CCharacter *local_13c;
  CCharacter *local_138;
  SDamageInfo local_134 [4];
  uint local_130;
  uint local_10c;
  float local_f8;
  float local_f4 [5];
  uint local_e0;
  uint local_c8;
  float afStack_c4 [5];
  uint local_b0;
  float afStack_ac [2];
  CVector3f local_a4;
  uint local_98;
  float local_94 [5];
  uint local_80;
  float afStack_7c [2];
  CVector3f local_74;
  uint local_68;
  float afStack_64 [5];
  float local_50;
  float local_4c;
  float local_48;
  byte *local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  CMotionController *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar7 = 0;
  local_28 = (CMotionController *)&param_1->field_0x158;
  local_34 = &param_1[2].field_0x7bfc;
  local_38 = &param_1[2].field_0x7bf0;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(local_28,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0046be53:
            uVar2 = _DAT_01b68830;
            if (bone_index == 7) {
              uVar2 = _DAT_01b68834;
            }
            core_skeleton_cpp_FUN_00569040(local_28,uVar2);
            local_c8 = local_f4[2];
            afStack_c4[(uint)bVar7 * -2] = local_f4[(uint)bVar7 * -2 + 3];
            afStack_c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 local_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            iVar3 = *(int *)&param_1[2].field_0x7be4;
            if (iVar3 == 0) {
              if (*(int *)&param_1[2].field_0x7c60 == 0) {
                if (*(int *)&param_1->field_0x2500 != 0) {
                  local_18 = (float)core_motion_cpp_FUN_00524a40(local_28,4);
                  pCVar1 = local_28;
                  if ((float)_DAT_005d9f3c < local_18) {
                    (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                              (param_1,&local_c8,0x3fd9999a);
                  }
                  else {
                    local_18 = (float)core_motion_cpp_FUN_00524a40(local_28,1);
                    if (((float)_DAT_005d9f3c < local_18) ||
                       (local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,2),
                       (float)_DAT_005d9f3c < local_18)) {
                      (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                (param_1,&local_c8,0x3f800000);
                    }
                    else {
                      local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,3);
                      if ((float)_DAT_005d9f3c < local_18) {
                        (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                  (param_1,&local_c8,0x3fd9999a);
                      }
                      else {
                        local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,5);
                        if ((float)_DAT_005d9f3c < local_18) {
LAB_0046c466:
                          (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                    (param_1,&local_c8,0x3f800000);
                        }
                        else {
                          local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,6);
                          if (local_18 <= (float)_DAT_005d9f3c) {
                            local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,7);
                            if ((float)_DAT_005d9f3c < local_18) goto LAB_0046c466;
                            local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,8);
                            if ((((local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,9),
                                 local_18 <= (float)_DAT_005d9f3c)) &&
                                (local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,10),
                                local_18 <= (float)_DAT_005d9f3c)) &&
                               ((local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xb),
                                local_18 <= (float)_DAT_005d9f3c &&
                                (local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xc),
                                local_18 <= (float)_DAT_005d9f3c)))) {
                              local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xd);
                              if ((float)_DAT_005d9f3c < local_18) goto LAB_0046c466;
                              local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xe);
                              if ((local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xf),
                                 local_18 <= (float)_DAT_005d9f3c)) {
                                local_18 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0x10);
                                if ((float)_DAT_005d9f3c < local_18) {
                                  (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                            (param_1,&local_c8,0x3f800000);
                                }
                                goto LAB_0046bef7;
                              }
                            }
                          }
                          (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                    (param_1,&local_c8,0x3f800000);
                        }
                      }
                    }
                  }
                }
                goto LAB_0046bef7;
              }
              local_18 = *(float *)&param_1->field_0x154;
              uVar2 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7c60 + 0x154) + 0x44))
                                (*(int *)&param_1[2].field_0x7c60,0x3f800000);
              core_actor_cpp_FUN_00408b40(param_1,&local_c8,uVar2);
              pfVar10 = local_94;
              pfVar6 = local_94;
              pfVar5 = local_f4;
            }
            else {
              local_18 = *(float *)&param_1->field_0x154;
              uVar2 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x44))(iVar3,0x3f800000);
              core_actor_cpp_FUN_00408b40(param_1,&local_c8,uVar2);
              pfVar10 = afStack_c4;
              pfVar6 = afStack_c4;
              pfVar5 = afStack_64;
            }
            pfVar10 = pfVar10 + 2;
            pfVar6 = pfVar6 + 2;
            pfVar5 = pfVar5 + 8;
            *pfVar6 = *pfVar5;
            pCVar9 = param_1;
            pfVar6[(uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
            (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)((int)local_18 + 0x28))(pCVar9,pfVar10);
          }
          else {
LAB_0046c965:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (*(int *)&param_1[2].field_0x7bbc == 4) {
            *(uint *)&param_1[2].field_0x7bbc = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                       *(int *)&param_1[2].field_0x7bbc,0x8ac);
          }
          iVar3 = *(int *)&param_1[2].field_0x7bd8;
          if (iVar3 == 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d",0x8b2);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x84))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)&param_1[2].field_0x7bd8 = 0;
            }
            else {
              iVar4 = *(int *)&param_1[2].field_0x7bd8;
              if ((iVar4 != 0) &&
                 (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x84))(iVar4,param_1), iVar4 == 4))
              {
                *(uint *)&param_1->field_0x2c9c = 0;
                *(uint *)&param_1->field_0x2c98 = 0xe;
              }
              if (iVar3 == 2) {
                if (*(int *)&param_1[2].field_0x7bbc != 0) {
                  shape_edittool_cpp_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                             *(int *)&param_1[2].field_0x7bbc,0x8d0);
                }
                *(uint *)&param_1[2].field_0x7bbc = 1;
              }
              core_hero_cpp_FUN_004ec280((CHero *)param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0046c965;
          iVar3 = *(int *)&param_1->field_0x2628;
          core_doc_cpp_FUN_004707d0(param_1);
          iVar4 = *(int *)&param_1[2].field_0x7bbc;
          if (iVar4 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))(iVar3,local_38,local_34);
            }
LAB_0046bf49:
            *(uint *)&param_1[2].field_0x7bbc = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_0046bf49;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\ndoc.cpp line %d" + 1,iVar4,0x88e);
          }
          iVar4 = *(int *)&param_1->field_0x2c98;
          *(uint *)&param_1[2].field_0x7bec = 0;
          if (iVar4 == 0xe) {
            *(uint *)&param_1->field_0x2c9c = 0;
            *(uint *)&param_1->field_0x2c98 = 0;
          }
          if (iVar3 == *(int *)&param_1[2].field_0x7c64) {
            *(uint *)&param_1[2].field_0x7c64 = 0;
          }
        }
      }
      else if (bone_index < 7) {
        local_2c = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)&param_1->field_0x26fc,g_CEnemyClassInfo.name_hash);
        local_30 = local_2c;
        if (local_2c != 0) {
          core_skeleton_cpp_FUN_00569040(local_28,_DAT_01b68844);
          puVar11 = &local_68;
          local_68 = afStack_64[2];
          afStack_64[(uint)bVar7 * -2] = afStack_64[(uint)bVar7 * -2 + 3];
          afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          core_actor_cpp_FUN_00408b40(param_1,puVar11);
          this_ptr = local_170;
          local_a4._0_4_ = local_74._0_4_;
          *(uint *)((int)&local_a4 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_74 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&local_a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&local_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr);
          local_16c = (float)core_actor_cpp_FUN_0040cc00(0x41200000,0x41700000);
          local_18 = local_16c;
          core_actor_cpp_FUN_00408bb0(local_2c,&local_a4);
          local_98 = local_e0;
          local_94[(uint)bVar7 * -2] = local_f4[(uint)bVar7 * -2 + 6];
          local_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               local_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          if (&local_154 != &local_98) {
            local_154 = local_98;
            local_150 = local_94[0];
            local_14c = local_94[1];
          }
          local_13c = param_1;
          local_138 = param_1;
          local_148 = 4;
          (**(code **)(*(int *)(local_30 + 0x154) + 0x108))(local_30,local_170);
          if (0.0 < local_16c) {
            fVar8 = (float10)local_16c * (float10)_DAT_005d9f34;
            round();
            local_18 = (float)(int)ROUND(fVar8);
            core_gore_cpp_FUN_004e6060
                      (g_CGorePtr,&local_a4,(CVector3f *)0x0,(int)local_18 + 1,BLOOD_TYPE_RED);
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"kick1.wav");
          }
        }
        local_24 = 0;
        for (local_20 = 0; local_20 < *(int *)&g_CDemonSetPtr->field_0x150fec;
            local_20 = local_20 + 1) {
          iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar4 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + local_24);
          local_f8 = *(float *)(iVar3 + 0x20) - *(float *)(iVar4 + 0x20);
          local_f4[0] = *(float *)(iVar3 + 0x24) - *(float *)(iVar4 + 0x24);
          local_f4[1] = *(float *)(iVar3 + 0x28) - *(float *)(iVar4 + 0x28);
          local_50 = local_f8;
          afStack_64[(uint)bVar7 * -2 + 6] = local_f4[(uint)bVar7 * -2];
          afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               local_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          local_1c = iVar4;
          if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <=
              (float)_DAT_005d9f44) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(local_134);
            local_10c = 4;
            local_130 = 0x40a00000;
            (**(code **)(*(int *)(local_1c + 0x154) + 0x108))(local_1c,local_134);
          }
          local_24 = local_24 + 4;
        }
        *(uint *)&param_1->field_0x26fc = 0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0046be53;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        if (*(int *)&param_1->field_0x26fc != 0) {
          core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
          local_b0 = local_80;
          afStack_ac[(uint)bVar7 * -2] = afStack_7c[(uint)bVar7 * -2];
          afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (0.0 < afStack_ac[1]) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0046c965;
          core_doc_cpp_FUN_00470750(param_1);
        }
        else if (bone_index < 0x16) {
          if (*(int *)&param_1->field_0x2628 == *(int *)&param_1[2].field_0x7c64) {
            *(uint *)&param_1[2].field_0x7c64 = 0;
          }
          core_hero_cpp_FUN_004ec2c0((CHero *)param_1,1);
          if (*(int *)&param_1[2].field_0x7bbc == 1) {
            *(uint *)&param_1[2].field_0x7bbc = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                       *(int *)&param_1[2].field_0x7bbc,0x8f0);
          }
        }
        else {
          if (*(int *)&param_1[2].field_0x7bbc == 5) {
            *(uint *)&param_1[2].field_0x7bbc = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",
                       *(int *)&param_1[2].field_0x7bbc,0x96b);
          }
          if (*(int *)&param_1[2].field_0x7bd4 == 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d",0x971);
          }
          iVar3 = core_hero_cpp_FUN_004eb5e0((CHero *)param_1);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_28,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_FUN_004eb7f0(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0046c965;
      }
      else if (bone_index < 0x29b) {
        *(uint *)&param_1->field_0x251c = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0046c965;
        *(uint *)&param_1->field_0x251c = 0x41000000;
      }
    }
LAB_0046bef7:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
