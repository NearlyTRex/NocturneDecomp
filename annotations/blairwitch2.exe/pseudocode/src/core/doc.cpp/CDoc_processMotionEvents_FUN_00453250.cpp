// Name: core_doc.cpp_CDoc_processMotionEvents_FUN_00453250
// Address: 00453250
// Address Range: [[00453250, 00453c5a]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processMotionEvents_FUN_00453250(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_processMotionEvents_FUN_00453250(CDoc *this_ptr,float delta_time)

{
  CLadder *pCVar1;
  CDemonActor *pCVar2;
  EWeaponType EVar3;
  CHero *pCVar4;
  uint bone_index;
  EGroundType ground_type;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  CVector3f *pCVar7;
  uint *puVar8;
  CWeapon *pCVar9;
  CVector3f *pCVar10;
  uint *puVar11;
  byte bVar12;
  double dVar13;
  float afStackY_10e0 [982];
  CDoc *this_ptr_00;
  CVector3f *pCVar14;
  SDamageInfo *this_ptr_01;
  char *in_stack_fffffe88;
  CCharacter *this_ptr_02;
  SDamageInfo local_134;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4 [2];
  CVector3f CStack_dc;
  float local_d0;
  float local_cc [2];
  CVector3f CStack_c4;
  float afStack_b8 [2];
  byte local_b0 [8];
  float fStack_a8;
  CVector3f local_a4;
  float local_98;
  float local_94 [2];
  CVector3f local_8c;
  CVector3f local_80;
  byte auStack_70 [12];
  byte auStack_64 [12];
  float afStack_58 [3];
  byte auStack_4c [12];
  float afStack_40 [2];
  CInventory *local_38;
  CVector3f *local_34;
  CVector3f *local_30;
  CCharacter *local_2c;
  CCharacter *local_28;
  CDeformableModelInstance *local_24;
  int local_20;
  int local_1c;
  int local_18;
  UActorVTable local_14;
  
  bVar12 = 0;
  local_24 = &(this_ptr->base).base.model;
  local_38 = (this_ptr->base).inventories;
  local_34 = (CVector3f *)&(this_ptr->base).target_orientation;
  local_30 = &(this_ptr->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0(&local_24->base,&delta_time)
    ;
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_004532d0:
            iVar5 = g_INT_01b4d274;
            if (bone_index == 7) {
              iVar5 = g_INT_01b4d278;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                      (local_24,iVar5,&local_f8);
            auStack_70._8_4_ = local_f8.x;
            *(uint *)(auStack_64 + (uint)bVar12 * -8) =
                 *(uint *)((int)&local_f8 + (uint)bVar12 * -8 + 4);
            *(uint *)(auStack_64 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 4) =
                 *(uint *)((int)&local_f8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            pCVar1 = (this_ptr->base).ladder_to_climb;
            if (pCVar1 == (CLadder *)0x0) {
              pCVar1 = this_ptr->ladder_to_descend;
              if (pCVar1 == (CLadder *)0x0) {
                if ((this_ptr->base).base.is_on_ground != 0) {
                  local_14 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                       (&local_24->base,3);
                  if ((float)0.40000000000000002 < (float)local_14) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,(CVector3f *)(auStack_70 + 8),1.7);
                  }
                  else {
                    local_14 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                         (&local_24->base,1);
                    if ((float)local_14 <= (float)0.40000000000000002) {
                      local_14 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                           (&local_24->base,2);
                      if ((float)0.40000000000000002 < (float)local_14) {
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,(CVector3f *)(auStack_70 + 8),1.0);
                      }
                    }
                    else {
                      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_70 + 8),1.0);
                    }
                  }
                }
                goto LAB_00453374;
              }
              local_14 = (this_ptr->base).base.base.vtable;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,(CVector3f *)auStack_64,(CVector3f *)auStack_70);
              pCVar14 = &CStack_dc;
              pCVar10 = &CStack_dc;
              pCVar7 = (CVector3f *)auStack_70;
            }
            else {
              local_14 = (this_ptr->base).base.base.vtable;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,(CVector3f *)auStack_64,&CStack_c4);
              pCVar14 = (CVector3f *)auStack_4c;
              pCVar10 = (CVector3f *)auStack_4c;
              pCVar7 = &CStack_c4;
            }
            puVar11 = (uint *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
            puVar8 = (uint *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
            pCVar10->x = pCVar7->x;
            this_ptr_00 = this_ptr;
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            (**(code **)(unaff_EBP + 0x30))
                      ((CDemonActor *)this_ptr_00,pCVar14,ground_type,(float)in_stack_fffffe88);
          }
          else {
LAB_00453c4c:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00
                      ((CCharacter *)this_ptr,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (this_ptr->action_pending == 4) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",this_ptr->action_pending
                       ,0x899);
          }
          pCVar2 = (this_ptr->base).object_to_pick_up;
          if (pCVar2 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d",0x89f);
          }
          else {
            iVar5 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr);
            if (iVar5 == 0) {
              (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              this_ptr_02 = (CCharacter *)(this_ptr->base).object_to_pick_up;
              if ((this_ptr_02 != (CCharacter *)0x0) &&
                 (iVar6 = (*((this_ptr_02->base).vtable._ub)->canPickup)
                                    ((CDemonActor *)this_ptr_02,(CDemonActor *)this_ptr),
                 in_stack_fffffe88 = (char *)this_ptr_02, iVar6 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 9;
              }
              pCVar9 = (CWeapon *)0x0;
              if (iVar5 != 2) goto LAB_004535e0;
              if (this_ptr->action_pending != 0) {
                in_stack_fffffe88 = &g_CEditorToolsPtr->unused;
                shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                          (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
              }
              pCVar9 = (CWeapon *)
                       core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 ((this_ptr->base).object_to_pick_up,g_CWeaponClassInfo.name_hash);
              if (pCVar9 == (CWeapon *)0x0) {
LAB_00453522:
                this_ptr->action_pending = 1;
              }
              else {
                EVar3 = pCVar9->weapon_type;
                if (EVar3 < WEAPON_TYPE_UNUSED) {
                  if (EVar3 == WEAPON_TYPE_GUN) goto LAB_00453522;
LAB_004535e0:
                  if (this_ptr->action_pending != 0) {
                    core_hero_cpp_CHero_executeObjectPickup_FUN_004cff50(&this_ptr->base,1);
                    goto LAB_00453374;
                  }
                }
                else {
                  if ((WEAPON_TYPE_UNUSED < EVar3) &&
                     ((EVar3 < WEAPON_TYPE_BARON ||
                      ((WEAPON_TYPE_BARON < EVar3 &&
                       (EVar3 != (WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT))))))) goto LAB_004535e0;
                  this_ptr->action_pending = 0;
                }
                if (pCVar9 != (CWeapon *)0x0) {
                  core_hero_cpp_CHero_executeObjectPickup_FUN_004cff50(&this_ptr->base,1);
                  core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(&this_ptr->base,1);
                  in_stack_fffffe88 = (char *)local_28;
                  core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
                            ((CInventory *)local_28,&pCVar9->base,5,1);
                  this_ptr->guns_drawn = 1;
                  (this_ptr->base).base.layer_action_index = 3;
                  (this_ptr->base).base.layer_action_t = 1.0;
                  this_ptr->weapon = pCVar9;
                  goto LAB_00453374;
                }
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004cff50(&this_ptr->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_00453c4c;
          pCVar9 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
          core_doc_cpp_CDoc_dropRightHandObject_FUN_004583a0(this_ptr);
          iVar5 = this_ptr->action_pending;
          if (iVar5 == 2) {
            if (pCVar9 != (CWeapon *)0x0) {
              (*((pCVar9->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)pCVar9,local_30,local_34);
            }
LAB_004533c6:
            this_ptr->action_pending = 0;
          }
          else {
            if (iVar5 == 6) goto LAB_004533c6;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar5,0x87a);
          }
          iVar5 = (this_ptr->base).base.layer_action_index;
          (this_ptr->base).target_actor = (CDemonActor *)0x0;
          if (iVar5 == 9) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).base.layer_action_index = 0;
          }
          if (pCVar9 == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_28 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (local_24,g_INT_01b4d288,&local_80);
          pCVar14 = &local_a4;
          local_a4.x = local_80.x;
          *(uint *)((int)&local_a4 + (uint)bVar12 * -8 + 4) =
               *(uint *)((int)&local_80 + (uint)bVar12 * -8 + 4);
          *(uint *)((int)&local_a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               *(uint *)((int)&local_80 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar14,(CVector3f *)(auStack_64 + 8));
          this_ptr_01 = &local_134;
          local_b0._0_4_ = auStack_64._8_4_;
          *(float *)(local_b0 + (uint)bVar12 * -8 + 4) = afStack_58[(uint)bVar12 * -2];
          (&fStack_a8)[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
               afStack_58[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_01);
          local_134.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          local_14 = (UActorVTable)local_134.damage_amount;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    (&local_28->base,(CVector3f *)local_b0,(CVector3f *)(auStack_4c + 8));
          local_98 = (float)auStack_4c._8_4_;
          local_94[(uint)bVar12 * -2] = afStack_40[(uint)bVar12 * -2];
          local_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_40[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          if (&local_134.impact_direction != (CVector3f *)&local_98) {
            local_134.impact_direction.x = local_98;
            local_134.impact_direction.y = local_94[0];
            local_134.impact_direction.z = local_94[1];
          }
          local_134.attacker = (CDemonActor *)this_ptr;
          local_134.wielder = (CDemonActor *)this_ptr;
          (*(((local_2c->base).vtable._uc)->_uc).processDamage)(local_2c,&local_134);
          if (0.0 < (double)local_134.impact_point.x) {
            dVar13 = round
                               ((double)local_134.impact_point.x * 0.20000000000000001);
            unaff_EBP = (int)ROUND(dVar13);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,(CVector3f *)(local_b0 + 4),(CVector3f *)0x0,unaff_EBP + 1,
                       BLOOD_TYPE_RED);
            in_stack_fffffe88 = "kick1.wav";
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"kick1.wav");
          }
        }
        local_1c = 0;
        for (local_20 = 0; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
          local_18 = *(int *)((int)g_CDemonSetPtr->enemies + local_1c);
          pCVar4 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
          CStack_dc.z = (pCVar4->base).base.location.position.x - *(float *)(local_18 + 0x20);
          local_d0 = (pCVar4->base).base.location.position.y - *(float *)(local_18 + 0x24);
          local_cc[0] = (pCVar4->base).base.location.position.z - *(float *)(local_18 + 0x28);
          local_ec = CStack_dc.z;
          local_e4[(uint)bVar12 * -2 + -1] = local_cc[(uint)bVar12 * -2 + -1];
          local_e4[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
               local_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2];
          if (SQRT(local_e4[0] * local_e4[0] + local_ec * local_ec + local_e8 * local_e8) <=
              (float)8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe90);
            (**(code **)(*(int *)(local_18 + 0x2b0) + 0x110))(local_18,&stack0xfffffe90);
          }
          local_1c = local_1c + 4;
        }
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_004532d0;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar2 = (this_ptr->base).base.grabbed_by;
        if (pCVar2 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    ((CDemonActor *)this_ptr,&(pCVar2->location).position,&local_8c);
          CStack_c4.z = local_8c.x;
          afStack_b8[(uint)bVar12 * -2] = *(float *)((int)&local_8c + (uint)bVar12 * -8 + 4);
          afStack_b8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               *(float *)((int)&local_8c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          if (0.0 < afStack_b8[1]) {
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_00453c4c;
          core_doc_cpp_CDoc_processPickupComplete_FUN_00458320(this_ptr);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004cff90(&this_ptr->base,1);
          if (this_ptr->action_pending == 1) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",this_ptr->action_pending
                       ,0x912);
          }
        }
        else {
          if (this_ptr->action_pending == 5) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",this_ptr->action_pending
                       ,0x971);
          }
          if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d",0x977);
          }
          iVar5 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&local_24->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(&this_ptr->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_00453c4c;
      }
      else if (bone_index < 0x29b) {
        (this_ptr->base).base.velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_00453c4c;
        (this_ptr->base).base.velocity.y = 0x40800000;
      }
    }
LAB_00453374:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
