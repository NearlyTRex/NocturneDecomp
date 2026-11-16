// Name: core_prye.cpp_CPrye_processMotionEvents_FUN_0051b550
// Address: 0051b550
// Address Range: [[0051b550, 0051c09a]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_processMotionEvents_FUN_0051b550(CPrye *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_processMotionEvents_FUN_0051b550(CPrye *this_ptr,float delta_time)

{
  CLadder *this_ptr_00;
  CWeapon *this_ptr_01;
  CDeformableModelInstance *this_ptr_02;
  uint bone_index;
  EGroundType ground_type;
  int iVar1;
  int iVar2;
  int unaff_EBP;
  CVector3f *pCVar3;
  uint *puVar4;
  CVector3f *pCVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  float afStackY_10d0 [982];
  CPrye *this_ptr_03;
  CVector3f *pCVar9;
  SDamageInfo *this_ptr_04;
  CDemonActor *in_stack_fffffe98;
  CDemonActor *pCVar10;
  float fStack_154;
  float local_144;
  float local_140;
  float local_13c;
  CPrye *local_12c;
  CPrye *local_128;
  SDamageInfo local_124;
  byte local_e8 [8];
  float afStack_e0 [5];
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  byte auStack_b4 [12];
  byte auStack_a8 [12];
  float afStack_9c [2];
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
  
  bVar7 = 0;
  local_24 = &(this_ptr->base).base.model;
  local_30 = (CVector3f *)&(this_ptr->base).target_orientation;
  CStack_3c.z = (float)&(this_ptr->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&local_24->base,&delta_time)
    ;
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0051b5c3:
            iVar1 = _DAT_01ed36f8;
            if (bone_index == 7) {
              iVar1 = _DAT_01ed36fc;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      (local_24,iVar1,(CVector3f *)(auStack_a8 + 8));
            auStack_b4._8_4_ = auStack_a8._8_4_;
            *(float *)(auStack_a8 + (uint)bVar7 * -8) = afStack_9c[(uint)bVar7 * -2];
            *(float *)(auStack_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
                 afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            this_ptr_00 = (this_ptr->base).ladder_to_climb;
            if (this_ptr_00 == (CLadder *)0x0) {
              if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
                if ((this_ptr->base).base.is_on_ground != 0) {
                  local_14 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                       (&local_24->base,4);
                  this_ptr_02 = local_24;
                  if ((float)_DAT_005cd307 < (float)local_14) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,(CVector3f *)(auStack_b4 + 8),1.7);
                  }
                  else {
                    local_14 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                         (&local_24->base,1);
                    if (((float)_DAT_005cd307 < (float)local_14) ||
                       (local_14 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                             (&this_ptr_02->base,2),
                       (float)_DAT_005cd307 < (float)local_14)) {
                      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_b4 + 8),1.0);
                    }
                    else {
                      local_14 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                           (&this_ptr_02->base,3);
                      if ((float)_DAT_005cd307 < (float)local_14) {
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,(CVector3f *)(auStack_b4 + 8),1.7);
                      }
                      else {
                        local_14 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                             (&this_ptr_02->base,5);
                        if ((((float)local_14 <= (float)_DAT_005cd307) &&
                            (local_14 = (UActorVTable)
                                        core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                  (&this_ptr_02->base,6),
                            (float)local_14 <= (float)_DAT_005cd307)) &&
                           (local_14 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                 (&this_ptr_02->base,7),
                           (float)local_14 <= (float)_DAT_005cd307)) {
                          local_14 = (UActorVTable)
                                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                               (&this_ptr_02->base,8);
                          if ((((float)_DAT_005cd307 < (float)local_14) ||
                              (local_14 = (UActorVTable)
                                          core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                    (&this_ptr_02->base,9),
                              (float)_DAT_005cd307 < (float)local_14)) ||
                             (local_14 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                   (&this_ptr_02->base,10),
                             (float)_DAT_005cd307 < (float)local_14)) {
LAB_0051bbd6:
                            (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                      ((CDemonActor *)this_ptr,(CVector3f *)(auStack_b4 + 8),1.0);
                            goto LAB_0051b667;
                          }
                          local_14 = (UActorVTable)
                                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                               (&this_ptr_02->base,0xb);
                          if ((float)local_14 <= (float)_DAT_005cd307) {
                            local_14 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                 (&this_ptr_02->base,0xc);
                            if ((float)_DAT_005cd307 < (float)local_14) goto LAB_0051bbd6;
                            local_14 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                 (&this_ptr_02->base,0xd);
                            if ((((float)local_14 <= (float)_DAT_005cd307) &&
                                (local_14 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                      (&this_ptr_02->base,0xe),
                                (float)local_14 <= (float)_DAT_005cd307)) &&
                               (local_14 = (UActorVTable)
                                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                     (&this_ptr_02->base,0xf),
                               (float)local_14 <= (float)_DAT_005cd307)) {
                              local_14 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                                                   (&this_ptr_02->base,0x10);
                              if ((float)_DAT_005cd307 < (float)local_14) {
                                (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                          ((CDemonActor *)this_ptr,(CVector3f *)(auStack_b4 + 8),1.0
                                          );
                              }
                              goto LAB_0051b667;
                            }
                          }
                        }
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,(CVector3f *)(auStack_b4 + 8),1.0);
                      }
                    }
                  }
                }
                goto LAB_0051b667;
              }
              local_14 = (this_ptr->base).base.base.vtable;
              ground_type = (*((this_ptr->ladder_to_descend->base).vtable._ub)->getGroundType)
                                      (&this_ptr->ladder_to_descend->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)this_ptr,(CVector3f *)auStack_a8,&CStack_c0);
              pCVar9 = &CStack_cc;
              pCVar5 = &CStack_cc;
              pCVar3 = &CStack_c0;
            }
            else {
              local_14 = (this_ptr->base).base.base.vtable;
              ground_type = (*((this_ptr_00->base).vtable._ub)->getGroundType)(&this_ptr_00->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        ((CDemonActor *)this_ptr,(CVector3f *)auStack_a8,&CStack_3c);
              pCVar9 = (CVector3f *)auStack_b4;
              pCVar5 = (CVector3f *)auStack_b4;
              pCVar3 = &CStack_3c;
            }
            puVar6 = (uint *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
            puVar4 = (uint *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
            pCVar5->x = pCVar3->x;
            this_ptr_03 = this_ptr;
            *puVar6 = *puVar4;
            puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
            (**(code **)(unaff_EBP + 0x28))
                      ((CDemonActor *)this_ptr_03,pCVar9,ground_type,(float)in_stack_fffffe98);
          }
          else {
LAB_0051c08c:
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0
                      ((CCharacter *)this_ptr,bone_index);
          }
        }
        else if (bone_index < 3) {
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 4) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar1,0xa56);
          }
          pCVar10 = (this_ptr->base).object_to_pick_up;
          if (pCVar10 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nprye.cpp line %d",0xa5c);
          }
          else {
            iVar1 = (*((pCVar10->vtable)._ub)->canPickup)(pCVar10,(CDemonActor *)this_ptr);
            if (iVar1 == 0) {
              (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar10 = (this_ptr->base).object_to_pick_up;
              if ((pCVar10 != (CDemonActor *)0x0) &&
                 (iVar2 = (*((pCVar10->vtable)._ub)->canPickup)(pCVar10,(CDemonActor *)this_ptr),
                 in_stack_fffffe98 = pCVar10, iVar2 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 0x11;
              }
              if (iVar1 == 2) {
                if ((this_ptr->base).action_pending != 0) {
                  in_stack_fffffe98 = (CDemonActor *)g_CEditorToolsPtr;
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                            (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d");
                }
                (this_ptr->base).action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004d4160(&this_ptr->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0051c08c;
          this_ptr_01 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
          core_prye_cpp_CPrye_dropRightHandObject_FUN_00520da0(this_ptr);
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 2) {
            if (this_ptr_01 != (CWeapon *)0x0) {
              (*((this_ptr_01->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr_01,(CVector3f *)CStack_3c.z,local_30);
            }
LAB_0051b6b9:
            (this_ptr->base).action_pending = 0;
          }
          else {
            if (iVar1 == 6) goto LAB_0051b6b9;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar1,0xa38);
          }
          iVar1 = (this_ptr->base).base.layer_action_index;
          (this_ptr->base).target_actor = (CDemonActor *)0x0;
          if (iVar1 == 0x11) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).base.layer_action_index = 0;
          }
          if (this_ptr_01 == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_28 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                    (local_24,_DAT_01ed370c,&local_58);
          pCVar9 = &local_7c;
          local_7c.x = local_58.x;
          *(uint *)((int)&local_7c + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_58 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&local_7c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&local_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar9,&local_94);
          this_ptr_04 = (SDamageInfo *)&stack0xfffffea0;
          local_e8._0_4_ = local_94.x;
          *(uint *)(local_e8 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_94 + (uint)bVar7 * -8 + 4);
          afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
               *(float *)((int)&local_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(this_ptr_04);
          local_14 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,3.0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    (&local_28->base,(CVector3f *)local_e8,&local_64);
          afStack_e0[1] = local_64.x;
          afStack_e0[(uint)bVar7 * 0xfffffffe + 2] =
               (float)*(uint *)((int)&local_64 + (uint)bVar7 * -8 + 4);
          afStack_e0[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 3] =
               (float)*(uint *)((int)&local_64 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if (&stack0xfffffebc != afStack_e0 + 1) {
            local_144 = afStack_e0[1];
            local_140 = afStack_e0[2];
            local_13c = afStack_e0[3];
          }
          local_12c = this_ptr;
          local_128 = this_ptr;
          (*(((local_2c->base).vtable._uc)->_uc).processDamage)
                    (local_2c,(SDamageInfo *)&stack0xfffffea0);
          if (0.0 < (double)fStack_154) {
            dVar8 = round((double)fStack_154 * _DAT_005cd2ff);
            unaff_EBP = (int)ROUND(dVar8);
            in_stack_fffffe98 = (CDemonActor *)0x0;
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                      (g_CGorePtr,(CVector3f *)(local_e8 + 4),(CVector3f *)0x0,unaff_EBP + 1,
                       BLOOD_TYPE_RED);
          }
        }
        local_20 = 0;
        for (local_1c = 0; local_1c < g_CDemonSetPtr->enemy_count; local_1c = local_1c + 1) {
          local_18 = *(int *)((int)g_CDemonSetPtr->enemies + local_20);
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_4c = *(float *)(iVar1 + 0x20) - *(float *)(local_18 + 0x20);
          local_48[0] = *(float *)(iVar1 + 0x24) - *(float *)(local_18 + 0x24);
          local_48[1] = *(float *)(iVar1 + 0x28) - *(float *)(local_18 + 0x28);
          local_70 = local_4c;
          local_6c[(uint)bVar7 * -2] = local_48[(uint)bVar7 * -2];
          local_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               local_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (SQRT(local_6c[1] * local_6c[1] + local_70 * local_70 + local_6c[0] * local_6c[0]) <=
              (float)_DAT_005cd30f) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&local_124);
            local_124.damage_amount = 5.0;
            (**(code **)(*(int *)(local_18 + 0x154) + 0x108))(local_18,&local_124);
          }
          local_20 = local_20 + 4;
        }
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0051b5c3;
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar10 = (this_ptr->base).base.grabbed_by;
        if (pCVar10 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    ((CDemonActor *)this_ptr,&(pCVar10->location).position,&local_88);
        }
      }
      else if (bone_index == 0x11) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0051c08c;
          core_prye_cpp_CPrye_processPickupComplete_FUN_00520d20(this_ptr);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(&this_ptr->base,1);
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 1) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar1,0xa9a);
          }
        }
        else {
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 5) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar1,0xb13);
          }
          if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nprye.cpp line %d",0xb19);
          }
          iVar1 = core_hero_cpp_CHero_tryOpenDoor_FUN_004d3250(&this_ptr->base);
          if (iVar1 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&local_24->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004d3460(&this_ptr->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0051c08c;
      }
      else if (bone_index < 0x29b) {
        (this_ptr->base).base.velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0051c08c;
        (this_ptr->base).base.velocity.y = 0x41000000;
      }
    }
LAB_0051b667:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
