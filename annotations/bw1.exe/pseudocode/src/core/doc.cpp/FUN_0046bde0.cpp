// Name: core_doc.cpp_FUN_0046bde0
// Address: 0046bde0
// Address Range: [[0046bde0, 0046c973]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046bde0(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046bde0(CHero *param_1,float param_2)

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
  float afStackY_10e0 [978];
  CHero *this_ptr_01;
  CVector3f *in_stack_fffffe6c;
  EGroundType in_stack_fffffe70;
  float in_stack_fffffe74;
  SDamageInfo *this_ptr_02;
  float fStack_164;
  float local_154;
  float local_150;
  float local_14c;
  EAmmoType local_148;
  CHero *local_13c;
  CHero *local_138;
  SDamageInfo local_134;
  float local_f8;
  float local_f4 [2];
  byte local_ec [12];
  byte local_e0 [24];
  byte local_c8 [8];
  uint auStack_c0 [2];
  CVector3f CStack_b8;
  float afStack_ac [2];
  byte local_a4 [8];
  CVector3f CStack_9c;
  float local_90 [4];
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c [3];
  CVector3f CStack_40;
  CVector3f *local_34;
  CCharacter *local_30;
  CCharacter *local_2c;
  CDeformableModelInstance *local_28;
  int local_24;
  int local_20;
  int local_1c;
  UActorVTable local_18;
  int iStack_14;
  
  bVar9 = 0;
  local_28 = &(param_1->base).model;
  local_34 = (CVector3f *)&param_1->target_orientation;
  CStack_40.z = (float)&param_1->target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(&local_28->base,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0046be53:
            iVar3 = _DAT_01b68830;
            if (bone_index == 7) {
              iVar3 = _DAT_01b68834;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                      (local_28,iVar3,(CVector3f *)local_ec);
            local_c8._0_4_ = local_ec._0_4_;
            *(uint *)(local_c8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)(local_ec + (uint)bVar9 * -8 + 4);
            auStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
                 *(uint *)(local_ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            this_ptr = param_1->ladder_to_climb;
            if (this_ptr == (CLadder *)0x0) {
              if (param_1[1].base.base.orient_matrix.m[2].x == 0.0) {
                if ((param_1->base).is_on_ground != 0) {
                  local_18 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                       (&local_28->base,4);
                  this_ptr_00 = local_28;
                  if ((float)_DAT_005d9f3c < (float)local_18) {
                    (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)param_1,(CVector3f *)local_c8,1.7);
                  }
                  else {
                    local_18 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                         (&local_28->base,1);
                    if (((float)_DAT_005d9f3c < (float)local_18) ||
                       (local_18 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                             (&this_ptr_00->base,2),
                       (float)_DAT_005d9f3c < (float)local_18)) {
                      (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)param_1,(CVector3f *)local_c8,1.0);
                    }
                    else {
                      local_18 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                           (&this_ptr_00->base,3);
                      if ((float)_DAT_005d9f3c < (float)local_18) {
                        (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)param_1,(CVector3f *)local_c8,1.7);
                      }
                      else {
                        local_18 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                             (&this_ptr_00->base,5);
                        if ((float)_DAT_005d9f3c < (float)local_18) {
LAB_0046c466:
                          (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                    ((CDemonActor *)param_1,(CVector3f *)local_c8,1.0);
                        }
                        else {
                          local_18 = (UActorVTable)
                                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                               (&this_ptr_00->base,6);
                          if ((float)local_18 <= (float)_DAT_005d9f3c) {
                            local_18 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                 (&this_ptr_00->base,7);
                            if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                            local_18 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                 (&this_ptr_00->base,8);
                            if (((((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18 = (UActorVTable)
                                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                       (&this_ptr_00->base,9),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) &&
                                (local_18 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                      (&this_ptr_00->base,10),
                                (float)local_18 <= (float)_DAT_005d9f3c)) &&
                               ((local_18 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                      (&this_ptr_00->base,0xb),
                                (float)local_18 <= (float)_DAT_005d9f3c &&
                                (local_18 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                      (&this_ptr_00->base,0xc),
                                (float)local_18 <= (float)_DAT_005d9f3c)))) {
                              local_18 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                   (&this_ptr_00->base,0xd);
                              if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                              local_18 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                   (&this_ptr_00->base,0xe);
                              if (((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18 = (UActorVTable)
                                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                       (&this_ptr_00->base,0xf),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) {
                                local_18 = (UActorVTable)
                                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                     (&this_ptr_00->base,0x10);
                                if ((float)_DAT_005d9f3c < (float)local_18) {
                                  (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                            ((CDemonActor *)param_1,(CVector3f *)local_c8,1.0);
                                }
                                goto LAB_0046bef7;
                              }
                            }
                          }
                          (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                    ((CDemonActor *)param_1,(CVector3f *)local_c8,1.0);
                        }
                      }
                    }
                  }
                }
                goto LAB_0046bef7;
              }
              local_18 = (param_1->base).base.vtable;
              fVar2 = param_1[1].base.base.orient_matrix.m[2].x;
              in_stack_fffffe70 =
                   (**(code **)(*(int *)((int)fVar2 + 0x154) + 0x44))(fVar2,0x3f800000);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        ((CDemonActor *)param_1,(CVector3f *)(local_e0 + 8),
                         (CVector3f *)(local_ec + 8));
              in_stack_fffffe6c = &CStack_9c;
              pCVar7 = &CStack_9c;
              pCVar5 = (CVector3f *)(local_ec + 8);
            }
            else {
              local_18 = (param_1->base).base.vtable;
              (*((this_ptr->base).vtable._ub)->getGroundType)(&this_ptr->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        ((CDemonActor *)param_1,(CVector3f *)(local_c8 + 4),&CStack_40);
              pCVar7 = (CVector3f *)(auStack_c0 + 2);
              pCVar5 = &CStack_40;
            }
            puVar8 = (uint *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            puVar6 = (uint *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
            pCVar7->x = pCVar5->x;
            this_ptr_01 = param_1;
            *puVar8 = *puVar6;
            puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
            (*(code *)(local_28->base).state_index)
                      ((CDemonActor *)this_ptr_01,in_stack_fffffe6c,in_stack_fffffe70,
                       in_stack_fffffe74);
          }
          else {
LAB_0046c965:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&param_1->base,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (param_1->action_pending == 4) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe74 = 6.497387e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",param_1->action_pending,
                       0x8ac);
          }
          pCVar1 = param_1->object_to_pick_up;
          if (pCVar1 == (CDemonActor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d",0x8b2);
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
                (param_1->base).layer_action_index = 0xe;
              }
              if (iVar3 == 2) {
                if (param_1->action_pending != 0) {
                  shape_edittool_cpp_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
                }
                param_1->action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004ec280(param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0046c965;
          pCVar1 = (param_1->base).carry_hands[1].carry_actor;
          core_doc_cpp_FUN_004707d0(param_1);
          iVar3 = param_1->action_pending;
          if (iVar3 == 2) {
            if (pCVar1 != (CDemonActor *)0x0) {
              (*((pCVar1->vtable)._ub)->setPositionAndOrientation)
                        (pCVar1,(CVector3f *)CStack_40.z,local_34);
            }
LAB_0046bf49:
            param_1->action_pending = 0;
          }
          else {
            if (iVar3 == 6) goto LAB_0046bf49;
            in_stack_fffffe74 = 6.497255e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\ndoc.cpp line %d" + 1,iVar3,0x88e);
          }
          iVar3 = (param_1->base).layer_action_index;
          param_1->target_actor = (CDemonActor *)0x0;
          if (iVar3 == 0xe) {
            (param_1->base).layer_action_t = 0.0;
            (param_1->base).layer_action_index = 0;
          }
          if (pCVar1 == (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
      }
      else if (bone_index < 7) {
        local_2c = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             ((param_1->base).grabbed_by,g_CEnemyClassInfo.name_hash);
        local_30 = local_2c;
        if (local_2c != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (local_28,_DAT_01b68844,&local_5c);
          pCVar7 = &local_68;
          local_68.x = local_5c.x;
          *(uint *)((int)&local_68 + (uint)bVar9 * -8 + 4) =
               *(uint *)((int)&local_5c + (uint)bVar9 * -8 + 4);
          *(uint *)((int)&local_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               *(uint *)((int)&local_5c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    ((CDemonActor *)param_1,pCVar7,&local_74);
          this_ptr_02 = (SDamageInfo *)&stack0xfffffe90;
          local_a4._0_4_ = local_74.x;
          *(uint *)(local_a4 + (uint)bVar9 * -8 + 4) =
               *(uint *)((int)&local_74 + (uint)bVar9 * -8 + 4);
          *(uint *)((int)&CStack_9c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               *(uint *)((int)&local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_02);
          local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    (&local_2c->base,(CVector3f *)local_a4,(CVector3f *)local_e0);
          CStack_9c.y = (float)local_e0._0_4_;
          local_90[(uint)bVar9 * -2 + -1] = *(float *)(local_e0 + (uint)bVar9 * -8 + 4);
          local_90[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
               *(float *)(local_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          if (&local_154 != &CStack_9c.y) {
            local_154 = CStack_9c.y;
            local_150 = CStack_9c.z;
            local_14c = local_90[0];
          }
          local_13c = param_1;
          local_138 = param_1;
          local_148 = AMMO_TYPE_GOLD;
          (*(((local_30->base).vtable._uc)->_uc).processDamage)
                    (local_30,(SDamageInfo *)&stack0xfffffe90);
          if (0.0 < (double)fStack_164) {
            dVar10 = round((double)fStack_164 * _DAT_005d9f34);
            iStack_14 = (int)ROUND(dVar10);
            in_stack_fffffe74 = 6.499937e-39;
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                      (g_CGorePtr,(CVector3f *)(local_a4 + 4),(CVector3f *)0x0,iStack_14 + 1,
                       BLOOD_TYPE_RED);
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"kick1.wav");
          }
        }
        local_24 = 0;
        for (local_20 = 0; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
          iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar4 = *(int *)((int)g_CDemonSetPtr->enemies + local_24);
          local_f8 = *(float *)(iVar3 + 0x20) - *(float *)(iVar4 + 0x20);
          local_f4[0] = *(float *)(iVar3 + 0x24) - *(float *)(iVar4 + 0x24);
          local_f4[1] = *(float *)(iVar3 + 0x28) - *(float *)(iVar4 + 0x28);
          local_50 = local_f8;
          local_4c[(uint)bVar9 * -2] = local_f4[(uint)bVar9 * -2];
          local_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               local_f4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          local_1c = iVar4;
          if (SQRT(local_4c[1] * local_4c[1] + local_50 * local_50 + local_4c[0] * local_4c[0]) <=
              (float)_DAT_005d9f44) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&local_134);
            local_134.ammo_type = AMMO_TYPE_GOLD;
            local_134.damage_amount = 5.0;
            (**(code **)(*(int *)(local_1c + 0x154) + 0x108))(local_1c,&local_134);
          }
          local_24 = local_24 + 4;
        }
        (param_1->base).grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0046be53;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&param_1->base,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar1 = (param_1->base).grabbed_by;
        if (pCVar1 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    ((CDemonActor *)param_1,&(pCVar1->location).position,&local_80);
          CStack_b8.z = local_80.x;
          afStack_ac[(uint)bVar9 * -2] = *(float *)((int)&local_80 + (uint)bVar9 * -8 + 4);
          afStack_ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               *(float *)((int)&local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          if (0.0 < afStack_ac[1]) {
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&param_1->base,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0046c965;
          core_doc_cpp_FUN_00470750(param_1);
        }
        else if (bone_index < 0x16) {
          if ((param_1->base).carry_hands[1].carry_actor ==
              (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(param_1,1);
          if (param_1->action_pending == 1) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe74 = 6.497734e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",param_1->action_pending,
                       0x8f0);
          }
        }
        else {
          if (param_1->action_pending == 5) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe74 = 6.500307e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",param_1->action_pending,
                       0x96b);
          }
          if (param_1->door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d",0x971);
          }
          iVar3 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(param_1);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&local_28->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0046c965;
      }
      else if (bone_index < 0x29b) {
        (param_1->base).velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0046c965;
        (param_1->base).velocity.y = 0x41000000;
      }
    }
LAB_0046bef7:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
