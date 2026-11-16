// Name: core_doc.cpp_CDoc_processMotionEvents_FUN_0046bde0
// Address: 0046bde0
// Address Range: [[0046bde0, 0046c973]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processMotionEvents_FUN_0046bde0(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_processMotionEvents_FUN_0046bde0(CDoc *this_ptr,float delta_time)

{
  CLadder *this_ptr_00;
  CWeapon *this_ptr_01;
  CDeformableModelInstance *this_ptr_02;
  uint bone_index;
  EGroundType ground_type;
  int iVar1;
  int iVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  CVector3f *pCVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  float afStackY_10e0 [982];
  CDoc *this_ptr_03;
  CVector3f *pCVar9;
  SDamageInfo *this_ptr_04;
  char *in_stack_fffffe88;
  CDemonActor *pCVar10;
  float fStack_164;
  float local_154;
  float local_150;
  float local_14c;
  EAmmoType local_148;
  CDoc *local_13c;
  CDoc *local_138;
  SDamageInfo local_134;
  float local_f8;
  float local_f4 [2];
  CVector3f local_ec;
  CVector3f local_e0;
  byte auStack_d0 [12];
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  float afStack_ac [2];
  byte local_a4 [8];
  float afStack_9c [5];
  byte auStack_88 [12];
  float afStack_7c [2];
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
  
  bVar7 = 0;
  local_28 = &(this_ptr->base).base.model;
  local_34 = (CVector3f *)&(this_ptr->base).target_orientation;
  CStack_40.z = (float)&(this_ptr->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(&local_28->base,&delta_time)
    ;
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0046be53:
            iVar1 = _DAT_01b68830;
            if (bone_index == 7) {
              iVar1 = _DAT_01b68834;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                      (local_28,iVar1,&local_ec);
            auStack_d0._8_4_ = local_ec.x;
            *(uint *)((int)&CStack_c4 + (uint)bVar7 * -8) =
                 *(uint *)((int)&local_ec + (uint)bVar7 * -8 + 4);
            *(uint *)((int)&CStack_c4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&local_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            this_ptr_00 = (this_ptr->base).ladder_to_climb;
            if (this_ptr_00 == (CLadder *)0x0) {
              if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
                if ((this_ptr->base).base.is_on_ground != 0) {
                  local_18 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                       (&local_28->base,4);
                  this_ptr_02 = local_28;
                  if ((float)_DAT_005d9f3c < (float)local_18) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,(CVector3f *)(auStack_d0 + 8),1.7);
                  }
                  else {
                    local_18 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                         (&local_28->base,1);
                    if (((float)_DAT_005d9f3c < (float)local_18) ||
                       (local_18 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                             (&this_ptr_02->base,2),
                       (float)_DAT_005d9f3c < (float)local_18)) {
                      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_d0 + 8),1.0);
                    }
                    else {
                      local_18 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                           (&this_ptr_02->base,3);
                      if ((float)_DAT_005d9f3c < (float)local_18) {
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,(CVector3f *)(auStack_d0 + 8),1.7);
                      }
                      else {
                        local_18 = (UActorVTable)
                                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                             (&this_ptr_02->base,5);
                        if ((float)_DAT_005d9f3c < (float)local_18) {
LAB_0046c466:
                          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                    ((CDemonActor *)this_ptr,(CVector3f *)(auStack_d0 + 8),1.0);
                        }
                        else {
                          local_18 = (UActorVTable)
                                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                               (&this_ptr_02->base,6);
                          if ((float)local_18 <= (float)_DAT_005d9f3c) {
                            local_18 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                 (&this_ptr_02->base,7);
                            if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                            local_18 = (UActorVTable)
                                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                 (&this_ptr_02->base,8);
                            if (((((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18 = (UActorVTable)
                                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                       (&this_ptr_02->base,9),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) &&
                                (local_18 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                      (&this_ptr_02->base,10),
                                (float)local_18 <= (float)_DAT_005d9f3c)) &&
                               ((local_18 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                      (&this_ptr_02->base,0xb),
                                (float)local_18 <= (float)_DAT_005d9f3c &&
                                (local_18 = (UActorVTable)
                                            core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                      (&this_ptr_02->base,0xc),
                                (float)local_18 <= (float)_DAT_005d9f3c)))) {
                              local_18 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                   (&this_ptr_02->base,0xd);
                              if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                              local_18 = (UActorVTable)
                                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                   (&this_ptr_02->base,0xe);
                              if (((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18 = (UActorVTable)
                                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                       (&this_ptr_02->base,0xf),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) {
                                local_18 = (UActorVTable)
                                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                                     (&this_ptr_02->base,0x10);
                                if ((float)_DAT_005d9f3c < (float)local_18) {
                                  (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset
                                  )((CDemonActor *)this_ptr,(CVector3f *)(auStack_d0 + 8),1.0);
                                }
                                goto LAB_0046bef7;
                              }
                            }
                          }
                          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                    ((CDemonActor *)this_ptr,(CVector3f *)(auStack_d0 + 8),1.0);
                        }
                      }
                    }
                  }
                }
                goto LAB_0046bef7;
              }
              local_18 = (this_ptr->base).base.base.vtable;
              ground_type = (*((this_ptr->ladder_to_descend->base).vtable._ub)->getGroundType)
                                      (&this_ptr->ladder_to_descend->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        ((CDemonActor *)this_ptr,&CStack_c4,(CVector3f *)auStack_d0);
              pCVar9 = (CVector3f *)auStack_88;
              pCVar5 = (CVector3f *)auStack_88;
              pCVar3 = (CVector3f *)auStack_d0;
            }
            else {
              local_18 = (this_ptr->base).base.base.vtable;
              ground_type = (*((this_ptr_00->base).vtable._ub)->getGroundType)(&this_ptr_00->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        ((CDemonActor *)this_ptr,&CStack_c4,&CStack_40);
              pCVar9 = &CStack_b8;
              pCVar5 = &CStack_b8;
              pCVar3 = &CStack_40;
            }
            puVar6 = (uint *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
            puVar4 = (uint *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
            pCVar5->x = pCVar3->x;
            this_ptr_03 = this_ptr;
            *puVar6 = *puVar4;
            puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
            (**(code **)(iStack_14 + 0x28))
                      ((CDemonActor *)this_ptr_03,pCVar9,ground_type,(float)in_stack_fffffe88);
          }
          else {
LAB_0046c965:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80
                      ((CCharacter *)this_ptr,bone_index);
          }
        }
        else if (bone_index < 3) {
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 4) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar1,0x8ac);
          }
          pCVar10 = (this_ptr->base).object_to_pick_up;
          if (pCVar10 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d",0x8b2);
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
                 in_stack_fffffe88 = pCVar10->actor_name, iVar2 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 0xe;
              }
              if (iVar1 == 2) {
                if ((this_ptr->base).action_pending != 0) {
                  in_stack_fffffe88 = &g_CEditorToolsPtr->unused;
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
                }
                (this_ptr->base).action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004ec280(&this_ptr->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0046c965;
          this_ptr_01 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
          core_doc_cpp_CDoc_dropRightHandObject_FUN_004707d0(this_ptr);
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 2) {
            if (this_ptr_01 != (CWeapon *)0x0) {
              (*((this_ptr_01->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr_01,(CVector3f *)CStack_40.z,local_34);
            }
LAB_0046bf49:
            (this_ptr->base).action_pending = 0;
          }
          else {
            if (iVar1 == 6) goto LAB_0046bf49;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\ndoc.cpp line %d" + 1,iVar1,0x88e);
          }
          iVar1 = (this_ptr->base).base.layer_action_index;
          (this_ptr->base).target_actor = (CDemonActor *)0x0;
          if (iVar1 == 0xe) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).base.layer_action_index = 0;
          }
          if (this_ptr_01 == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_2c = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_30 = local_2c;
        if (local_2c != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (local_28,_DAT_01b68844,&local_5c);
          pCVar9 = &local_68;
          local_68.x = local_5c.x;
          *(uint *)((int)&local_68 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_5c + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&local_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&local_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    ((CDemonActor *)this_ptr,pCVar9,&local_74);
          this_ptr_04 = (SDamageInfo *)&stack0xfffffe90;
          local_a4._0_4_ = local_74.x;
          *(uint *)(local_a4 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_74 + (uint)bVar7 * -8 + 4);
          afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
               *(float *)((int)&local_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_04);
          local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    (&local_2c->base,(CVector3f *)local_a4,&local_e0);
          afStack_9c[1] = local_e0.x;
          afStack_9c[(uint)bVar7 * 0xfffffffe + 2] =
               (float)*(uint *)((int)&local_e0 + (uint)bVar7 * -8 + 4);
          afStack_9c[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 3] =
               (float)*(uint *)((int)&local_e0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if (&stack0xfffffeac != afStack_9c + 1) {
            local_154 = afStack_9c[1];
            local_150 = afStack_9c[2];
            local_14c = afStack_9c[3];
          }
          local_13c = this_ptr;
          local_138 = this_ptr;
          local_148 = AMMO_TYPE_GOLD;
          (*(((local_30->base).vtable._uc)->_uc).processDamage)
                    (local_30,(SDamageInfo *)&stack0xfffffe90);
          if (0.0 < (double)fStack_164) {
            dVar8 = round((double)fStack_164 * _DAT_005d9f34);
            iStack_14 = (int)ROUND(dVar8);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                      (g_CGorePtr,(CVector3f *)(local_a4 + 4),(CVector3f *)0x0,iStack_14 + 1,
                       BLOOD_TYPE_RED);
            in_stack_fffffe88 = "kick1.wav";
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"kick1.wav");
          }
        }
        local_24 = 0;
        for (local_20 = 0; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
          iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar2 = *(int *)((int)g_CDemonSetPtr->enemies + local_24);
          local_f8 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
          local_f4[0] = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
          local_f4[1] = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
          local_50 = local_f8;
          local_4c[(uint)bVar7 * -2] = local_f4[(uint)bVar7 * -2];
          local_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               local_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          local_1c = iVar2;
          if (SQRT(local_4c[1] * local_4c[1] + local_50 * local_50 + local_4c[0] * local_4c[0]) <=
              (float)_DAT_005d9f44) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&local_134);
            local_134.ammo_type = AMMO_TYPE_GOLD;
            local_134.damage_amount = 5.0;
            (**(code **)(*(int *)(local_1c + 0x154) + 0x108))(local_1c,&local_134);
          }
          local_24 = local_24 + 4;
        }
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0046be53;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar10 = (this_ptr->base).base.grabbed_by;
        if (pCVar10 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    ((CDemonActor *)this_ptr,&(pCVar10->location).position,
                     (CVector3f *)(auStack_88 + 8));
          CStack_b8.z = (float)auStack_88._8_4_;
          afStack_ac[(uint)bVar7 * -2] = afStack_7c[(uint)bVar7 * -2];
          afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (0.0 < afStack_ac[1]) {
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0046c965;
          core_doc_cpp_CDoc_processPickupComplete_FUN_00470750(this_ptr);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(&this_ptr->base,1);
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 1) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar1,0x8f0);
          }
        }
        else {
          iVar1 = (this_ptr->base).action_pending;
          if (iVar1 == 5) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar1,0x96b);
          }
          if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d",0x971);
          }
          iVar1 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
          if (iVar1 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&local_28->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(&this_ptr->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0046c965;
      }
      else if (bone_index < 0x29b) {
        (this_ptr->base).base.velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0046c965;
        (this_ptr->base).base.velocity.y = 0x41000000;
      }
    }
LAB_0046bef7:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
