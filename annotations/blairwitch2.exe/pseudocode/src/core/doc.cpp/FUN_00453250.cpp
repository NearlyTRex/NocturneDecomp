// Name: core_doc.cpp_FUN_00453250
// Address: 00453250
// Address Range: [[00453250, 00453c5a]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00453250(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00453250(CHero *param_1,float param_2)

{
  CLadder *this_ptr;
  float fVar1;
  uint uVar2;
  EGroundType EVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  CDemonActor *pCVar7;
  float *pfVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_10e0 [45];
  CInventory *apCStackY_102c [933];
  CHero *pCVar11;
  CVector3f *in_stack_fffffe6c;
  EGroundType in_stack_fffffe70;
  float in_stack_fffffe74;
  SDamageInfo *this_ptr_00;
  SDamageInfo local_134;
  byte local_f8 [12];
  float local_ec;
  float local_e8 [5];
  float local_d4;
  float local_d0 [5];
  uint local_bc;
  float afStack_b8 [4];
  CVector3f CStack_a8;
  float afStack_9c [4];
  uint local_8c;
  float fStack_84;
  CVector3f local_80 [2];
  CVector3f local_68;
  uint local_5c;
  float afStack_58 [5];
  float local_44;
  CInventory *apCStack_40 [3];
  CVector3f *local_34;
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
  apCStack_40[2] = param_1->inventories;
  local_34 = (CVector3f *)&param_1->target_orientation;
  local_30 = &param_1->target_position;
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&local_24->base,&param_2);
    if (uVar2 < 0x12) {
      if (uVar2 < 6) {
        if (uVar2 < 2) {
          if (uVar2 == 1) {
LAB_004532d0:
            iVar4 = _DAT_01b4d274;
            if (uVar2 == 7) {
              iVar4 = _DAT_01b4d278;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                      (local_24,iVar4,(CVector3f *)local_f8);
            local_68.x = (float)local_f8._0_4_;
            *(uint *)((int)&local_68 + (uint)bVar9 * -8 + 4) =
                 *(uint *)(local_f8 + (uint)bVar9 * -8 + 4);
            *(uint *)((int)&local_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 *(uint *)(local_f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            this_ptr = param_1->ladder_to_climb;
            if (this_ptr == (CLadder *)0x0) {
              fVar1 = param_1[1].base.base.orient_matrix.m[2].x;
              if (fVar1 == 0.0) {
                if ((param_1->base).is_on_ground != 0) {
                  local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_24,3);
                  if ((float)_DAT_005d012f < (float)local_14) {
                    (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)param_1,&local_68,1.7);
                  }
                  else {
                    local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_24,1);
                    if ((float)local_14 <= (float)_DAT_005d012f) {
                      local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_24,2);
                      if ((float)_DAT_005d012f < (float)local_14) {
                        (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)param_1,&local_68,1.0);
                      }
                    }
                    else {
                      (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)param_1,&local_68,1.0);
                    }
                  }
                }
                goto LAB_00453374;
              }
              local_14 = (param_1->base).base.vtable;
              in_stack_fffffe70 =
                   (**(code **)(*(int *)((int)fVar1 + 0x2b0) + 0x4c))(fVar1,0x3f800000);
              core_actor_cpp_FUN_00408d70(param_1,&local_80[0].z);
              in_stack_fffffe6c = (CVector3f *)(local_f8 + 8);
              pfVar8 = (float *)(local_f8 + 8);
              pfVar6 = afStack_9c + 6;
            }
            else {
              local_14 = (param_1->base).base.vtable;
              EVar3 = (*((this_ptr->base).vtable._ub)->getGroundType)(&this_ptr->base);
              core_actor_cpp_FUN_00408d70(param_1,&local_68.y,EVar3);
              pfVar8 = afStack_58 + 3;
              pfVar6 = local_d0 + 3;
            }
            *pfVar8 = *pfVar6;
            pCVar11 = param_1;
            pfVar8[(uint)bVar9 * -2 + 1] = pfVar6[(uint)bVar9 * -2 + 1];
            (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
                 (pfVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
            (**(code **)(local_24->base).current_motion_name)
                      ((CDemonActor *)pCVar11,in_stack_fffffe6c,in_stack_fffffe70,in_stack_fffffe74)
            ;
          }
          else {
LAB_00453c4c:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(&param_1->base,uVar2);
          }
        }
        else if (uVar2 < 3) {
          if (param_1[1].base.base.health == 4) {
            param_1[1].base.base.health = 0;
          }
          else {
            in_stack_fffffe74 = 6.355504e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
          }
          pCVar7 = param_1->object_to_pick_up;
          if (pCVar7 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d");
          }
          else {
            iVar4 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)param_1);
            if (iVar4 == 0) {
              param_1->object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar7 = param_1->object_to_pick_up;
              if ((pCVar7 != (CDemonActor *)0x0) &&
                 (iVar5 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)param_1),
                 iVar5 == 4)) {
                (param_1->base).layer_action_t = 0.0;
                (param_1->base).layer_action_index = 9;
              }
              pCVar7 = (CDemonActor *)0x0;
              if (iVar4 != 2) goto LAB_004535e0;
              if (param_1[1].base.base.health != 0) {
                shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                          (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
              }
              pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (param_1->object_to_pick_up,g_CWeaponClassInfo.name_hash);
              if (pCVar7 == (CDemonActor *)0x0) {
LAB_00453522:
                param_1[1].base.base.health = 1;
              }
              else {
                uVar2 = pCVar7[1].particle_systems[0].stop_after_fade;
                if (uVar2 < 6) {
                  if (uVar2 == 0) goto LAB_00453522;
LAB_004535e0:
                  if (param_1[1].base.base.health != 0) {
                    core_hero_cpp_FUN_004cff50(param_1,1);
                    goto LAB_00453374;
                  }
                }
                else {
                  if ((6 < uVar2) && ((uVar2 < 8 || ((8 < uVar2 && (uVar2 != 0xd))))))
                  goto LAB_004535e0;
                  param_1[1].base.base.health = 0;
                }
                if (pCVar7 != (CDemonActor *)0x0) {
                  core_hero_cpp_FUN_004cff50(param_1,1);
                  core_hero_cpp_FUN_004cff90();
                  core_inv_cpp_FUN_004db9d0(local_28,pCVar7);
                  pCVar11 = param_1 + 1;
                  (pCVar11->base).base.actor_name[0] = '\x01';
                  (pCVar11->base).base.actor_name[1] = '\0';
                  (pCVar11->base).base.actor_name[2] = '\0';
                  (pCVar11->base).base.actor_name[3] = '\0';
                  (param_1->base).layer_action_index = 3;
                  (param_1->base).layer_action_t = 1.0;
                  param_1[1].base.base.orient_matrix.m[2].y = (float)pCVar7;
                  goto LAB_00453374;
                }
              }
              core_hero_cpp_FUN_004cff50(param_1,1);
            }
          }
        }
        else {
          if (uVar2 != 3) goto LAB_00453c4c;
          pCVar7 = (param_1->base).carry_hands[1].carry_actor;
          core_doc_cpp_FUN_004583a0(param_1);
          iVar4 = param_1[1].base.base.health;
          if (iVar4 == 2) {
            if (pCVar7 != (CDemonActor *)0x0) {
              (*((pCVar7->vtable)._ub)->setPositionAndOrientation)(pCVar7,local_30,local_34);
            }
LAB_004533c6:
            param_1[1].base.base.health = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_004533c6;
            in_stack_fffffe74 = 6.355372e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
          }
          iVar4 = (param_1->base).layer_action_index;
          param_1->target_actor = (CDemonActor *)0x0;
          if (iVar4 == 9) {
            (param_1->base).layer_action_t = 0.0;
            (param_1->base).layer_action_index = 0;
          }
          if (pCVar7 == (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
      }
      else if (uVar2 < 7) {
        local_28 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((param_1->base).grabbed_by,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (local_24,_DAT_01b4d288,local_80);
          pfVar8 = &CStack_a8.y;
          CStack_a8.y = local_80[0].x;
          *(uint *)((int)&CStack_a8 + (uint)bVar9 * -8 + 8) =
               *(uint *)((int)local_80 + (uint)bVar9 * -8 + 4);
          afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
               *(float *)((int)local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          core_actor_cpp_FUN_00408d70(param_1,pfVar8);
          this_ptr_00 = &local_134;
          afStack_b8[2] = (float)local_5c;
          afStack_b8[(uint)bVar9 * -2 + 3] = afStack_58[(uint)bVar9 * -2];
          *(float *)((int)&CStack_a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_00);
          local_134.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          local_14 = (UActorVTable)local_134.damage_amount;
          core_actor_cpp_FUN_00408de0(local_28,afStack_b8 + 2);
          afStack_9c[1] = local_44;
          afStack_9c[(uint)bVar9 * 0xfffffffe + 2] = (float)apCStack_40[(uint)bVar9 * -2];
          afStack_9c[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 3] =
               (float)apCStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if (&local_134.impact_direction != (CVector3f *)(afStack_9c + 1)) {
            local_134.impact_direction.x = afStack_9c[1];
            local_134.impact_direction.y = afStack_9c[2];
            local_134.impact_direction.z = afStack_9c[3];
          }
          local_134.attacker = (CDemonActor *)param_1;
          local_134.wielder = (CDemonActor *)param_1;
          (*(((local_2c->base).vtable._uc)->_uc).processDamage)(local_2c,&local_134);
          if (0.0 < local_134.impact_point.x) {
            fVar10 = (float10)local_134.impact_point.x * (float10)_DAT_005d0127;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_a8,(CVector3f *)0x0,(int)ROUND(fVar10) + 1,BLOOD_TYPE_RED)
            ;
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"kick1.wav");
          }
        }
        local_1c = 0;
        for (local_20 = 0; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
          local_18 = *(int *)((int)g_CDemonSetPtr->enemies + local_1c);
          iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          local_d4 = *(float *)(iVar4 + 0x20) - *(float *)(local_18 + 0x20);
          local_d0[0] = *(float *)(iVar4 + 0x24) - *(float *)(local_18 + 0x24);
          local_d0[1] = *(float *)(iVar4 + 0x28) - *(float *)(local_18 + 0x28);
          local_ec = local_d4;
          local_e8[(uint)bVar9 * -2] = local_d0[(uint)bVar9 * -2];
          local_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               local_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if (SQRT(local_e8[1] * local_e8[1] + local_ec * local_ec + local_e8[0] * local_e8[0]) <=
              (float)_DAT_005d0137) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffe90);
            (**(code **)(*(int *)(local_18 + 0x2b0) + 0x110))(local_18,&stack0xfffffe90);
          }
          local_1c = local_1c + 4;
        }
        (param_1->base).grabbed_by = (CDemonActor *)0x0;
      }
      else if (uVar2 < 0xf) {
        if (uVar2 == 7) goto LAB_004532d0;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(&param_1->base,uVar2);
      }
      else if (uVar2 < 0x10) {
        pCVar7 = (param_1->base).grabbed_by;
        if (pCVar7 != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408de0(param_1,&pCVar7->location);
          local_bc = local_8c;
          afStack_b8[(uint)bVar9 * -2] = afStack_9c[(uint)bVar9 * 0xfffffffe + 5];
          afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               *(float *)((int)local_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -4);
          if (0.0 < afStack_b8[1]) {
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (uVar2 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(&param_1->base,uVar2);
      }
    }
    else if (0x12 < uVar2) {
      if (uVar2 < 0x17) {
        if (uVar2 < 0x15) {
          if (uVar2 != 0x13) goto LAB_00453c4c;
          core_doc_cpp_FUN_00458320(param_1);
        }
        else if (uVar2 < 0x16) {
          if ((param_1->base).carry_hands[1].carry_actor ==
              (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
          core_hero_cpp_FUN_004cff90(param_1,1);
          if (param_1[1].base.base.health == 1) {
            param_1[1].base.base.health = 0;
          }
          else {
            in_stack_fffffe74 = 6.356153e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
          }
        }
        else {
          if (param_1[1].base.base.health == 5) {
            param_1[1].base.base.health = 0;
          }
          else {
            in_stack_fffffe74 = 6.357855e-39;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
          }
          if (param_1->door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d");
          }
          iVar4 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(param_1);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&local_24->base,0,1);
          }
        }
      }
      else if (uVar2 < 0x18) {
        core_hero_cpp_FUN_004cf440(param_1);
      }
      else if (uVar2 < 0x29a) {
        if (uVar2 != 0x18) goto LAB_00453c4c;
      }
      else if (uVar2 < 0x29b) {
        (param_1->base).velocity.y = 0x41200000;
      }
      else {
        if (uVar2 != 0x29b) goto LAB_00453c4c;
        (param_1->base).velocity.y = 0x40800000;
      }
    }
LAB_00453374:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
