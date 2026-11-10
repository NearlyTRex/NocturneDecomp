// Name: core_doc.cpp_FUN_00453250
// Address: 00453250
// Address Range: [[00453250, 00453c5a]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00453250(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00453250(CCharacter *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  EGroundType ground_type;
  int iVar3;
  float *pfVar4;
  int iVar5;
  CVector3f *pCVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_10e0 [45];
  CCloth **appCStackY_102c [933];
  CCharacter *this_ptr;
  CVector3f *position;
  float in_stack_fffffe74;
  uint *puVar10;
  SDamageInfo *this_ptr_00;
  SDamageInfo local_170 [4];
  uint local_16c;
  float fStack_138;
  SDamageInfo local_134 [4];
  UActorVTable local_130;
  uint local_118;
  uint local_114;
  uint local_110;
  CCharacter *local_100;
  CCharacter *local_fc;
  float local_f8;
  uint uStack_f4;
  CVector3f CStack_f0;
  float local_e4 [4];
  float local_d4;
  float local_d0 [5];
  uint local_bc;
  CVector3f CStack_b8;
  uint auStack_ac [5];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  float fStack_84;
  uint local_80;
  uint auStack_78 [4];
  byte local_68 [12];
  float local_5c;
  uint auStack_58 [5];
  uint local_44;
  CCloth **appCStack_40 [4];
  byte *local_30;
  int local_2c;
  int local_28;
  CMotionController *local_24;
  int local_20;
  int local_1c;
  int local_18;
  UActorVTable local_14;
  
  bVar8 = 0;
  local_24 = (CMotionController *)&param_1->model;
  appCStack_40[2] = param_1[2].cloth_list.cloths + 7;
  appCStack_40[3] = (CCloth **)&param_1[2].field_0x416c;
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
            local_68._0_4_ = local_f8;
            *(uint *)(local_68 + (uint)bVar8 * -8 + 4) = (&uStack_f4)[(uint)bVar8 * -2];
            *(uint *)(local_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)((int)&CStack_f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            iVar3 = *(int *)&param_1[2].field_0x4154;
            if (iVar3 == 0) {
              iVar3 = *(int *)&param_1[2].field_0x41d4;
              if (iVar3 == 0) {
                if (param_1->is_on_ground != 0) {
                  local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_24,3);
                  if ((float)_DAT_005d012f < (float)local_14) {
                    (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                              (&param_1->base,(CVector3f *)local_68,1.7);
                  }
                  else {
                    local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_24,1);
                    if ((float)local_14 <= (float)_DAT_005d012f) {
                      local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_24,2);
                      if ((float)_DAT_005d012f < (float)local_14) {
                        (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                  (&param_1->base,(CVector3f *)local_68,1.0);
                      }
                    }
                    else {
                      (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                (&param_1->base,(CVector3f *)local_68,1.0);
                    }
                  }
                }
                goto LAB_00453374;
              }
              local_14 = (param_1->base).vtable;
              ground_type = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x4c))(iVar3,0x3f800000);
              core_actor_cpp_FUN_00408d70(param_1,auStack_78);
              position = &CStack_f0;
              pCVar6 = &CStack_f0;
              pfVar4 = (float *)(auStack_ac + 10);
            }
            else {
              local_14 = (param_1->base).vtable;
              ground_type = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x4c))(iVar3,0x3f800000);
              core_actor_cpp_FUN_00408d70(param_1,auStack_78);
              position = (CVector3f *)(local_68 + 8);
              pCVar6 = (CVector3f *)(local_68 + 8);
              pfVar4 = local_e4 + 3;
            }
            pfVar7 = (float *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
            pCVar6->x = *pfVar4;
            this_ptr = param_1;
            *pfVar7 = pfVar4[(uint)bVar8 * -2 + 1];
            pfVar7[(uint)bVar8 * -2 + 1] = (pfVar4 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
            (**(code **)local_24->current_motion_name)
                      (&this_ptr->base,position,ground_type,in_stack_fffffe74);
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
            in_stack_fffffe74 = 6.355504e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
          }
          iVar3 = *(int *)&param_1[2].field_0x4148;
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d");
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
                param_1->layer_action_t = 0.0;
                param_1->layer_action_index = 9;
              }
              iVar5 = 0;
              if (iVar3 != 2) goto LAB_004535e0;
              if (*(int *)&param_1[2].field_0x41e4 != 0) {
                in_stack_fffffe74 = 6.355634e-39;
                shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                          (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
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
                  in_stack_fffffe74 = 6.355904e-39;
                  core_inv_cpp_FUN_004db9d0(appCStack_40[2],iVar5,5,1);
                  *(uint *)&param_1[2].field_0x4180 = 1;
                  param_1->layer_action_index = 3;
                  param_1->layer_action_t = 1.0;
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
          if (*(int *)&param_1[2].field_0x41e4 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x70))(iVar3,local_30,appCStack_40[3]);
            }
LAB_004533c6:
            *(uint *)&param_1[2].field_0x41e4 = 0;
          }
          else {
            if (*(int *)&param_1[2].field_0x41e4 == 6) goto LAB_004533c6;
            in_stack_fffffe74 = 6.355372e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"<actionPending = %d\ndoc.cpp line %d" + 1);
          }
          iVar5 = param_1->layer_action_index;
          *(uint *)&param_1[2].field_0x415c = 0;
          if (iVar5 == 9) {
            param_1->layer_action_t = 0.0;
            param_1->layer_action_index = 0;
          }
          if (iVar3 == *(int *)&param_1[2].field_0x41d8) {
            *(uint *)&param_1[2].field_0x41d8 = 0;
          }
        }
      }
      else if (uVar1 < 7) {
        local_28 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (param_1->grabbed_by,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != 0) {
          core_skeleton_cpp_FUN_005469a0(local_24,_DAT_01b4d288);
          puVar10 = auStack_ac + 2;
          auStack_ac[2] = local_80;
          auStack_ac[(uint)bVar8 * -2 + 3] = auStack_ac[(uint)bVar8 * -2 + 0xc];
          auStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               auStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2];
          core_actor_cpp_FUN_00408d70(param_1,puVar10);
          this_ptr_00 = local_134;
          CStack_b8.z = local_5c;
          auStack_ac[(uint)bVar8 * -2] = auStack_58[(uint)bVar8 * -2];
          auStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               auStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_00);
          local_130 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          local_14 = local_130;
          core_actor_cpp_FUN_00408de0(local_28,&CStack_b8.z);
          local_98 = local_44;
          auStack_ac[(uint)bVar8 * -2 + 6] = appCStack_40[(uint)bVar8 * -2];
          auStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               appCStack_40[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&local_118 != auStack_ac + 5) {
            local_118 = local_98;
            local_114 = local_94;
            local_110 = local_90;
          }
          local_100 = param_1;
          local_fc = param_1;
          (**(code **)(*(int *)(local_2c + 0x2b0) + 0x110))(local_2c,local_134);
          if (0.0 < fStack_138) {
            fVar9 = (float10)fStack_138 * (float10)_DAT_005d0127;
            round();
            local_1c = (int)ROUND(fVar9);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_b8,(CVector3f *)0x0,local_1c + 1,BLOOD_TYPE_RED);
            in_stack_fffffe74 = 6.357555e-39;
            (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"kick1.wav");
          }
        }
        local_1c = 0;
        for (local_20 = 0; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
          local_18 = *(int *)((int)g_CDemonSetPtr->enemies + local_1c);
          iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          local_d4 = *(float *)(iVar3 + 0x20) - *(float *)(local_18 + 0x20);
          local_d0[0] = *(float *)(iVar3 + 0x24) - *(float *)(local_18 + 0x24);
          local_d0[1] = *(float *)(iVar3 + 0x28) - *(float *)(local_18 + 0x28);
          CStack_f0.y = local_d4;
          local_e4[(uint)bVar8 * -2 + -1] = local_d0[(uint)bVar8 * -2];
          local_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
               local_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (SQRT(local_e4[0] * local_e4[0] + CStack_f0.y * CStack_f0.y + CStack_f0.z * CStack_f0.z
                  ) <= (float)_DAT_005d0137) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_170);
            local_16c = 0x40a00000;
            (**(code **)(*(int *)(local_18 + 0x2b0) + 0x110))(local_18,local_170);
          }
          local_1c = local_1c + 4;
        }
        param_1->grabbed_by = (CDemonActor *)0x0;
      }
      else if (uVar1 < 0xf) {
        if (uVar1 == 7) goto LAB_004532d0;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,uVar1);
      }
      else if (uVar1 < 0x10) {
        if (param_1->grabbed_by != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408de0(param_1,&param_1->grabbed_by->field_0x20);
          local_bc = local_8c;
          *(uint *)((int)&CStack_b8 + (uint)bVar8 * -8) = auStack_ac[(uint)bVar8 * -2 + 9];
          auStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2] =
               auStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
          if (0.0 < CStack_b8.y) {
            (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"hit-gh[4,7].wav");
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
            in_stack_fffffe74 = 6.356153e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
          }
        }
        else {
          if (*(int *)&param_1[2].field_0x41e4 == 5) {
            *(uint *)&param_1[2].field_0x41e4 = 0;
          }
          else {
            in_stack_fffffe74 = 6.357855e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
          }
          if (*(int *)&param_1[2].field_0x4144 == 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d");
          }
          iVar3 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230((CHero *)param_1);
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
