// Name: core_prye.cpp_FUN_0051b550
// Address: 0051b550
// Address Range: [[0051b550, 0051c09a]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051b550(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051b550(CCharacter *param_1,float param_2)

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
  float afStackY_10d0 [981];
  CCharacter *pCVar9;
  float *pfVar10;
  uint *puVar11;
  SDamageInfo *this_ptr;
  SDamageInfo local_160 [4];
  float local_15c;
  uint local_144;
  float local_140;
  uint local_13c;
  CCharacter *local_12c;
  CCharacter *local_128;
  SDamageInfo local_124 [4];
  uint local_120;
  CVector3f local_e8;
  uint local_dc;
  float local_d8 [5];
  float afStack_c4 [3];
  float afStack_b8 [3];
  uint local_ac;
  uint auStack_a8 [5];
  CVector3f local_94 [2];
  uint local_7c;
  float afStack_78 [4];
  float local_68;
  uint local_64;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  float afStack_40 [3];
  byte *local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  CMotionController *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar7 = 0;
  local_24 = (CMotionController *)&param_1->field_0x158;
  local_30 = &param_1[2].field_0x7024;
  local_34 = &param_1[2].field_0x7018;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004fbb70(local_24,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0051b5c3:
            uVar2 = _DAT_01ed36f8;
            if (bone_index == 7) {
              uVar2 = _DAT_01ed36fc;
            }
            core_skeleton_cpp_FUN_0054dbd0(local_24,uVar2);
            local_ac = auStack_a8[2];
            auStack_a8[(uint)bVar7 * -2] = auStack_a8[(uint)bVar7 * -2 + 3];
            auStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 auStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            iVar3 = *(int *)&param_1[2].field_0x700c;
            if (iVar3 == 0) {
              if (*(int *)&param_1[2].field_0x7088 == 0) {
                if (*(int *)&param_1->field_0x2500 != 0) {
                  local_14 = (float)core_motion_cpp_FUN_004fc350(local_24,4);
                  pCVar1 = local_24;
                  if ((float)_DAT_005cd307 < local_14) {
                    (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                              (param_1,&local_ac,0x3fd9999a);
                  }
                  else {
                    local_14 = (float)core_motion_cpp_FUN_004fc350(local_24,1);
                    if (((float)_DAT_005cd307 < local_14) ||
                       (local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,2),
                       (float)_DAT_005cd307 < local_14)) {
                      (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                (param_1,&local_ac,0x3f800000);
                    }
                    else {
                      local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,3);
                      if ((float)_DAT_005cd307 < local_14) {
                        (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                  (param_1,&local_ac,0x3fd9999a);
                      }
                      else {
                        local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,5);
                        if (((local_14 <= (float)_DAT_005cd307) &&
                            (local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,6),
                            local_14 <= (float)_DAT_005cd307)) &&
                           (local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,7),
                           local_14 <= (float)_DAT_005cd307)) {
                          local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,8);
                          if ((((float)_DAT_005cd307 < local_14) ||
                              (local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,9),
                              (float)_DAT_005cd307 < local_14)) ||
                             (local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,10),
                             (float)_DAT_005cd307 < local_14)) {
LAB_0051bbd6:
                            (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                      (param_1,&local_ac,0x3f800000);
                            goto LAB_0051b667;
                          }
                          local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,0xb);
                          if (local_14 <= (float)_DAT_005cd307) {
                            local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,0xc);
                            if ((float)_DAT_005cd307 < local_14) goto LAB_0051bbd6;
                            local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,0xd);
                            if (((local_14 <= (float)_DAT_005cd307) &&
                                (local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,0xe),
                                local_14 <= (float)_DAT_005cd307)) &&
                               (local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,0xf),
                               local_14 <= (float)_DAT_005cd307)) {
                              local_14 = (float)core_motion_cpp_FUN_004fc350(pCVar1,0x10);
                              if ((float)_DAT_005cd307 < local_14) {
                                (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                          (param_1,&local_ac,0x3f800000);
                              }
                              goto LAB_0051b667;
                            }
                          }
                        }
                        (**(code **)(*(int *)&param_1->field_0x154 + 0x24))
                                  (param_1,&local_ac,0x3f800000);
                      }
                    }
                  }
                }
                goto LAB_0051b667;
              }
              local_14 = *(float *)&param_1->field_0x154;
              uVar2 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7088 + 0x154) + 0x44))
                                (*(int *)&param_1[2].field_0x7088,0x3f800000);
              core_actor_cpp_FUN_00408b80(param_1,&local_ac,uVar2);
              pfVar10 = local_d8 + 2;
              pfVar6 = local_d8 + 2;
              pfVar5 = local_d8 + 5;
            }
            else {
              local_14 = *(float *)&param_1->field_0x154;
              uVar2 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x44))(iVar3,0x3f800000);
              core_actor_cpp_FUN_00408b80(param_1,&local_ac,uVar2);
              pfVar10 = afStack_b8;
              pfVar6 = afStack_b8;
              pfVar5 = afStack_78 + 0xe;
            }
            *pfVar6 = *pfVar5;
            pCVar9 = param_1;
            pfVar6[(uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
            (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)((int)local_14 + 0x28))(pCVar9,pfVar10);
          }
          else {
LAB_0051c08c:
            core_charactr_cpp_FUN_00433fb0(param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (*(int *)&param_1[2].field_0x6fcc == 4) {
            *(uint *)&param_1[2].field_0x6fcc = 0;
          }
          else {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",
                       *(int *)&param_1[2].field_0x6fcc,0xa56);
          }
          iVar3 = *(int *)&param_1[2].field_0x7000;
          if (iVar3 == 0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nprye.cpp line %d",0xa5c);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x84))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)&param_1[2].field_0x7000 = 0;
            }
            else {
              iVar4 = *(int *)&param_1[2].field_0x7000;
              if ((iVar4 != 0) &&
                 (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x84))(iVar4,param_1), iVar4 == 4))
              {
                *(uint *)&param_1->field_0x2f04 = 0;
                *(uint *)&param_1->field_0x2f00 = 0x11;
              }
              if (iVar3 == 2) {
                if (*(int *)&param_1[2].field_0x6fcc != 0) {
                  shape_edittool_cpp_FUN_0047cee0
                            (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",
                             *(int *)&param_1[2].field_0x6fcc,0xa7a);
                }
                *(uint *)&param_1[2].field_0x6fcc = 1;
              }
              core_hero_cpp_FUN_004d4160((CHero *)param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0051c08c;
          iVar3 = *(int *)&param_1->field_0x2628;
          core_prye_cpp_FUN_00520da0(param_1);
          iVar4 = *(int *)&param_1[2].field_0x6fcc;
          if (iVar4 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))(iVar3,local_34,local_30);
            }
LAB_0051b6b9:
            *(uint *)&param_1[2].field_0x6fcc = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_0051b6b9;
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar4,0xa38);
          }
          iVar4 = *(int *)&param_1->field_0x2f00;
          *(uint *)&param_1[2].field_0x7014 = 0;
          if (iVar4 == 0x11) {
            *(uint *)&param_1->field_0x2f04 = 0;
            *(uint *)&param_1->field_0x2f00 = 0;
          }
          if (iVar3 == *(int *)&param_1[2].field_0x708c) {
            *(uint *)&param_1[2].field_0x708c = 0;
          }
        }
      }
      else if (bone_index < 7) {
        local_28 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)&param_1->field_0x26fc,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != 0) {
          core_skeleton_cpp_FUN_0054dbd0(local_24,_DAT_01ed370c);
          puVar11 = &local_7c;
          local_7c = local_58;
          afStack_78[(uint)bVar7 * -2] = afStack_78[(uint)bVar7 * -2 + 9];
          afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          core_actor_cpp_FUN_00408b80(param_1,puVar11);
          this_ptr = local_160;
          local_e8._0_4_ = local_94[0]._0_4_;
          *(uint *)((int)&local_e8 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)local_94 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&local_e8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)local_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(this_ptr);
          local_15c = (float)core_actor_cpp_FUN_0040ce40(0x3f800000,0x40400000);
          local_14 = local_15c;
          core_actor_cpp_FUN_00408bf0(local_28,&local_e8);
          local_dc = local_64;
          local_d8[(uint)bVar7 * -2] = afStack_78[(uint)bVar7 * -2 + 6];
          local_d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          if (&local_144 != &local_dc) {
            local_144 = local_dc;
            local_140 = local_d8[0];
            local_13c = local_d8[1];
          }
          local_12c = param_1;
          local_128 = param_1;
          (**(code **)(*(int *)(local_2c + 0x154) + 0x108))(local_2c,local_160);
          if (0.0 < local_15c) {
            fVar8 = (float10)local_15c * (float10)_DAT_005cd2ff;
            round();
            local_14 = (float)(int)ROUND(fVar8);
            core_gore_cpp_FUN_004ce9c0
                      (g_CGorePtr,&local_e8,(CVector3f *)0x0,(int)local_14 + 1,BLOOD_TYPE_RED);
          }
        }
        local_20 = 0;
        for (local_1c = 0; local_1c < *(int *)&g_CDemonSetPtr->field_0x150fec;
            local_1c = local_1c + 1) {
          local_18 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + local_20);
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_4c = *(float *)(iVar3 + 0x20) - *(float *)(local_18 + 0x20);
          local_48 = *(float *)(iVar3 + 0x24) - *(float *)(local_18 + 0x24);
          local_44 = *(float *)(iVar3 + 0x28) - *(float *)(local_18 + 0x28);
          afStack_78[2] = local_4c;
          afStack_78[(uint)bVar7 * -2 + 3] = afStack_78[(uint)bVar7 * -2 + 0xc];
          afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          if (SQRT(local_68 * local_68 +
                   afStack_78[2] * afStack_78[2] + afStack_78[3] * afStack_78[3]) <=
              (float)_DAT_005cd30f) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(local_124);
            local_120 = 0x40a00000;
            (**(code **)(*(int *)(local_18 + 0x154) + 0x108))(local_18,local_124);
          }
          local_20 = local_20 + 4;
        }
        *(uint *)&param_1->field_0x26fc = 0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0051b5c3;
        core_charactr_cpp_FUN_00433fb0(param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        if (*(int *)&param_1->field_0x26fc != 0) {
          core_actor_cpp_FUN_00408bf0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
        }
      }
      else if (bone_index == 0x11) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_FUN_00433fb0(param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0051c08c;
          core_prye_cpp_FUN_00520d20(param_1);
        }
        else if (bone_index < 0x16) {
          if (*(int *)&param_1->field_0x2628 == *(int *)&param_1[2].field_0x708c) {
            *(uint *)&param_1[2].field_0x708c = 0;
          }
          core_hero_cpp_FUN_004d41a0((CHero *)param_1,1);
          if (*(int *)&param_1[2].field_0x6fcc == 1) {
            *(uint *)&param_1[2].field_0x6fcc = 0;
          }
          else {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",
                       *(int *)&param_1[2].field_0x6fcc,0xa9a);
          }
        }
        else {
          if (*(int *)&param_1[2].field_0x6fcc == 5) {
            *(uint *)&param_1[2].field_0x6fcc = 0;
          }
          else {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",
                       *(int *)&param_1[2].field_0x6fcc,0xb13);
          }
          if (*(int *)&param_1[2].field_0x6ffc == 0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nprye.cpp line %d",0xb19);
          }
          iVar3 = core_hero_cpp_FUN_004d3250((CHero *)param_1);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_24,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_FUN_004d3460(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0051c08c;
      }
      else if (bone_index < 0x29b) {
        *(uint *)&param_1->field_0x251c = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0051c08c;
        *(uint *)&param_1->field_0x251c = 0x41000000;
      }
    }
LAB_0051b667:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
