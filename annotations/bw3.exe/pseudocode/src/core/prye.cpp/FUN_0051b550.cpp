// Name: core_prye.cpp_FUN_0051b550
// Address: 0051b550
// Address Range: [[0051b550, 0051c09a]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051b550(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051b550(CHero *param_1,float param_2)

{
  CLadder *this_ptr;
  CDemonActor *pCVar1;
  float fVar2;
  CDeformableModelInstance *this_ptr_00;
  uint bone_index;
  int iVar3;
  int iVar4;
  CVector3f *pCVar5;
  uint *puVar6;
  CVector3f *pCVar7;
  uint *puVar8;
  byte bVar9;
  double dVar10;
  float afStackY_10d0 [978];
  CHero *this_ptr_01;
  CVector3f *in_stack_fffffe7c;
  EGroundType in_stack_fffffe80;
  float in_stack_fffffe84;
  SDamageInfo *this_ptr_02;
  float fStack_154;
  float local_144;
  float local_140;
  float local_13c;
  CHero *local_12c;
  CHero *local_128;
  SDamageInfo local_124;
  byte local_e8 [8];
  CVector3f CStack_e0;
  CVector3f local_d4 [2];
  byte auStack_bc [16];
  byte local_ac [8];
  float fStack_a4;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  float local_70;
  float local_6c [2];
  CVector3f local_64;
  CVector3f local_58;
  float local_4c;
  float local_48 [3];
  CVector3f CStack_3c;
  CVector3f *local_30;
  CCharacter *local_2c;
  CCharacter *local_28;
  CDeformableModelInstance *local_24;
  int local_20;
  int local_1c;
  int local_18;
  UActorVTable local_14;
  
  bVar9 = 0;
  local_24 = &(param_1->base).model;
  local_30 = (CVector3f *)&param_1->target_orientation;
  CStack_3c.z = (float)&param_1->target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&local_24->base,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0051b5c3:
            iVar3 = _DAT_01ed36f8;
            if (bone_index == 7) {
              iVar3 = _DAT_01ed36fc;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      (local_24,iVar3,&local_a0);
            local_ac._0_4_ = local_a0.x;
            *(uint *)(local_ac + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4);
            (&fStack_a4)[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
                 *(float *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            this_ptr = param_1->ladder_to_climb;
            if (this_ptr == (CLadder *)0x0) {
              if (param_1[1].base.base.orient_matrix.m[2].x == 0.0) {
                if ((param_1->base).is_on_ground != 0) {
                  local_14 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                       (&local_24->base,4);
                  this_ptr_00 = local_24;
                  if ((float)_DAT_005cd307 < (float)local_14) {
                    (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)param_1,(CVector3f *)local_ac,1.7);
                  }
                  else {
                    local_14 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                         (&local_24->base,1);
                    if (((float)_DAT_005cd307 < (float)local_14) ||
                       (local_14 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                             (&this_ptr_00->base,2),
                       (float)_DAT_005cd307 < (float)local_14)) {
                      (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)param_1,(CVector3f *)local_ac,1.0);
                    }
                    else {
                      local_14 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                           (&this_ptr_00->base,3);
                      if ((float)_DAT_005cd307 < (float)local_14) {
                        (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)param_1,(CVector3f *)local_ac,1.7);
                      }
                      else {
                        local_14 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                             (&this_ptr_00->base,5);
                        if ((((float)local_14 <= (float)_DAT_005cd307) &&
                            (local_14 = (UActorVTable)
                                        core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                  (&this_ptr_00->base,6),
                            (float)local_14 <= (float)_DAT_005cd307)) &&
                           (local_14 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                 (&this_ptr_00->base,7),
                           (float)local_14 <= (float)_DAT_005cd307)) {
                          local_14 = (UActorVTable)
                                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                               (&this_ptr_00->base,8);
                          if ((((float)_DAT_005cd307 < (float)local_14) ||
                              (local_14 = (UActorVTable)
                                          core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                    (&this_ptr_00->base,9),
                              (float)_DAT_005cd307 < (float)local_14)) ||
                             (local_14 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                   (&this_ptr_00->base,10),
                             (float)_DAT_005cd307 < (float)local_14)) {
LAB_0051bbd6:
                            (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                      ((CDemonActor *)param_1,(CVector3f *)local_ac,1.0);
                            goto LAB_0051b667;
                          }
                          local_14 = (UActorVTable)
                                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                               (&this_ptr_00->base,0xb);
                          if ((float)local_14 <= (float)_DAT_005cd307) {
                            local_14 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                 (&this_ptr_00->base,0xc);
                            if ((float)_DAT_005cd307 < (float)local_14) goto LAB_0051bbd6;
                            local_14 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                 (&this_ptr_00->base,0xd);
                            if ((((float)local_14 <= (float)_DAT_005cd307) &&
                                (local_14 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                      (&this_ptr_00->base,0xe),
                                (float)local_14 <= (float)_DAT_005cd307)) &&
                               (local_14 = (UActorVTable)
                                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                     (&this_ptr_00->base,0xf),
                               (float)local_14 <= (float)_DAT_005cd307)) {
                              local_14 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                   (&this_ptr_00->base,0x10);
                              if ((float)_DAT_005cd307 < (float)local_14) {
                                (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                          ((CDemonActor *)param_1,(CVector3f *)local_ac,1.0);
                              }
                              goto LAB_0051b667;
                            }
                          }
                        }
                        (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)param_1,(CVector3f *)local_ac,1.0);
                      }
                    }
                  }
                }
                goto LAB_0051b667;
              }
              local_14 = (param_1->base).base.vtable;
              fVar2 = param_1[1].base.base.orient_matrix.m[2].x;
              in_stack_fffffe80 =
                   (**(code **)(*(int *)((int)fVar2 + 0x154) + 0x44))(fVar2,0x3f800000);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)param_1,(CVector3f *)auStack_bc,local_d4);
              in_stack_fffffe7c = &CStack_e0;
              pCVar7 = &CStack_e0;
              pCVar5 = local_d4;
            }
            else {
              local_14 = (param_1->base).base.vtable;
              (*((this_ptr->base).vtable._ub)->getGroundType)(&this_ptr->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)param_1,(CVector3f *)(local_ac + 4),&CStack_3c);
              pCVar7 = (CVector3f *)(auStack_bc + 8);
              pCVar5 = &CStack_3c;
            }
            puVar8 = (uint *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            puVar6 = (uint *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
            pCVar7->x = pCVar5->x;
            this_ptr_01 = param_1;
            *puVar8 = *puVar6;
            puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
            (*(code *)(local_24->base).state_index)
                      ((CDemonActor *)this_ptr_01,in_stack_fffffe7c,in_stack_fffffe80,
                       in_stack_fffffe84);
          }
          else {
LAB_0051c08c:
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (param_1->action_pending == 4) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe84 = 7.504505e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",param_1->action_pending
                       ,0xa56);
          }
          pCVar1 = param_1->object_to_pick_up;
          if (pCVar1 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nprye.cpp line %d",0xa5c);
          }
          else {
            iVar3 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)param_1);
            if (iVar3 == 0) {
              param_1->object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar1 = param_1->object_to_pick_up;
              if ((pCVar1 != (CDemonActor *)0x0) &&
                 (iVar4 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)param_1),
                 iVar4 == 4)) {
                (param_1->base).layer_action_t = 0.0;
                (param_1->base).layer_action_index = 0x11;
              }
              if (iVar3 == 2) {
                if (param_1->action_pending != 0) {
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                            (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d");
                }
                param_1->action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004d4160(param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0051c08c;
          pCVar1 = (param_1->base).carry_hands[1].carry_actor;
          core_prye_cpp_FUN_00520da0(param_1);
          iVar3 = param_1->action_pending;
          if (iVar3 == 2) {
            if (pCVar1 != (CDemonActor *)0x0) {
              (*((pCVar1->vtable)._ub)->setPositionAndOrientation)
                        (pCVar1,(CVector3f *)CStack_3c.z,local_30);
            }
LAB_0051b6b9:
            param_1->action_pending = 0;
          }
          else {
            if (iVar3 == 6) goto LAB_0051b6b9;
            in_stack_fffffe84 = 7.504374e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar3,0xa38);
          }
          iVar3 = (param_1->base).layer_action_index;
          param_1->target_actor = (CDemonActor *)0x0;
          if (iVar3 == 0x11) {
            (param_1->base).layer_action_t = 0.0;
            (param_1->base).layer_action_index = 0;
          }
          if (pCVar1 == (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
      }
      else if (bone_index < 7) {
        local_28 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             ((param_1->base).grabbed_by,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                    (local_24,_DAT_01ed370c,&local_58);
          pCVar7 = &local_7c;
          local_7c.x = local_58.x;
          *(uint *)((int)&local_7c + (uint)bVar9 * -8 + 4) =
               *(uint *)((int)&local_58 + (uint)bVar9 * -8 + 4);
          *(uint *)((int)&local_7c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               *(uint *)((int)&local_58 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)param_1,pCVar7,&local_94);
          this_ptr_02 = (SDamageInfo *)&stack0xfffffea0;
          local_e8._0_4_ = local_94.x;
          *(uint *)(local_e8 + (uint)bVar9 * -8 + 4) =
               *(uint *)((int)&local_94 + (uint)bVar9 * -8 + 4);
          *(uint *)((int)&CStack_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               *(uint *)((int)&local_94 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(this_ptr_02);
          local_14 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,3.0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    (&local_28->base,(CVector3f *)local_e8,&local_64);
          CStack_e0.y = local_64.x;
          *(uint *)((int)local_d4 + (uint)bVar9 * -8 + -4) =
               *(uint *)((int)&local_64 + (uint)bVar9 * -8 + 4);
          *(uint *)((int)local_d4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               *(uint *)((int)&local_64 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          if (&local_144 != &CStack_e0.y) {
            local_144 = CStack_e0.y;
            local_140 = CStack_e0.z;
            local_13c = local_d4[0].x;
          }
          local_12c = param_1;
          local_128 = param_1;
          (*(((local_2c->base).vtable._uc)->_uc).processDamage)
                    (local_2c,(SDamageInfo *)&stack0xfffffea0);
          if (0.0 < (double)fStack_154) {
            dVar10 = round((double)fStack_154 * _DAT_005cd2ff);
            in_stack_fffffe84 = 7.507066e-39;
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                      (g_CGorePtr,(CVector3f *)(local_e8 + 4),(CVector3f *)0x0,
                       (int)ROUND(dVar10) + 1,BLOOD_TYPE_RED);
          }
        }
        local_20 = 0;
        for (local_1c = 0; local_1c < g_CDemonSetPtr->enemy_count; local_1c = local_1c + 1) {
          local_18 = *(int *)((int)g_CDemonSetPtr->enemies + local_20);
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_4c = *(float *)(iVar3 + 0x20) - *(float *)(local_18 + 0x20);
          local_48[0] = *(float *)(iVar3 + 0x24) - *(float *)(local_18 + 0x24);
          local_48[1] = *(float *)(iVar3 + 0x28) - *(float *)(local_18 + 0x28);
          local_70 = local_4c;
          local_6c[(uint)bVar9 * -2] = local_48[(uint)bVar9 * -2];
          local_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               local_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if (SQRT(local_6c[1] * local_6c[1] + local_70 * local_70 + local_6c[0] * local_6c[0]) <=
              (float)_DAT_005cd30f) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&local_124);
            local_124.damage_amount = 5.0;
            (**(code **)(*(int *)(local_18 + 0x154) + 0x108))(local_18,&local_124);
          }
          local_20 = local_20 + 4;
        }
        (param_1->base).grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0051b5c3;
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar1 = (param_1->base).grabbed_by;
        if (pCVar1 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    ((CDemonActor *)param_1,&(pCVar1->location).position,&local_88);
        }
      }
      else if (bone_index == 0x11) {
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0051c08c;
          core_prye_cpp_FUN_00520d20(param_1);
        }
        else if (bone_index < 0x16) {
          if ((param_1->base).carry_hands[1].carry_actor ==
              (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(param_1,1);
          if (param_1->action_pending == 1) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe84 = 7.504853e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",param_1->action_pending
                       ,0xa9a);
          }
        }
        else {
          if (param_1->action_pending == 5) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe84 = 7.507323e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",param_1->action_pending
                       ,0xb13);
          }
          if (param_1->door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nprye.cpp line %d",0xb19);
          }
          iVar3 = core_hero_cpp_CHero_tryOpenDoor_FUN_004d3250(param_1);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&local_24->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004d3460(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0051c08c;
      }
      else if (bone_index < 0x29b) {
        (param_1->base).velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0051c08c;
        (param_1->base).velocity.y = 0x41000000;
      }
    }
LAB_0051b667:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
