// Name: core_stranger.cpp_CStranger_processMotionEvents_FUN_005656f0
// Address: 005656f0
// Address Range: [[005656f0, 00565ecb]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_005656f0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_005656f0(CStranger *this_ptr,float delta_time)

{
  CLadder *pCVar1;
  CWeapon *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  uint bone_index;
  EGroundType ground_type;
  int iVar2;
  int iVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  CVector3f *pCVar6;
  uint *puVar7;
  byte bVar8;
  double dVar9;
  float afStackY_10bc [997];
  CStranger *this_ptr_02;
  CVector3f *pCVar10;
  SDamageInfo *this_ptr_03;
  char *in_stack_fffffee8;
  CDemonActor *pCVar11;
  float fStack_104;
  float local_f4;
  float local_f0;
  float local_ec;
  CStranger *local_dc;
  CStranger *local_d8;
  CVector3f local_d4;
  float local_c8;
  float local_c4 [2];
  CVector3f local_bc;
  byte auStack_ac [12];
  uint auStack_a0 [3];
  CVector3f CStack_94;
  CVector3f CStack_88;
  float afStack_7c [2];
  byte local_74 [8];
  uint auStack_6c [2];
  byte auStack_64 [12];
  float afStack_58 [2];
  CVector3f local_50;
  byte local_44 [8];
  float fStack_3c;
  CVector3f local_38;
  CVector3f *local_2c;
  CVector3f *local_28;
  CCharacter *local_24;
  CCharacter *local_20;
  CDeformableModelInstance *local_1c;
  UActorVTable local_18;
  int iStack_14;
  
  bVar8 = 0;
  local_1c = &(this_ptr->base).base.model;
  local_28 = (CVector3f *)&(this_ptr->base).target_orientation;
  local_2c = &(this_ptr->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0(&local_1c->base,&delta_time)
    ;
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_00565763:
            iVar2 = _DAT_0264be4c;
            if (bone_index == 7) {
              iVar2 = _DAT_0264be50;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                      (local_1c,iVar2,(CVector3f *)(auStack_ac + 8));
            local_74._0_4_ = auStack_ac._8_4_;
            *(uint *)(local_74 + (uint)bVar8 * -8 + 4) = auStack_a0[(uint)bVar8 * -2];
            this_ptr_01 = local_1c;
            auStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
                 auStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
              pCVar1 = this_ptr->ladder_to_descend;
              if (pCVar1 == (CLadder *)0x0) {
                if ((this_ptr->base).base.is_on_ground != 0) {
                  local_18 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                       (&local_1c->base,3);
                  if ((float)_DAT_005eb7b5 < (float)local_18) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,(CVector3f *)local_74,1.7);
                  }
                  else {
                    local_18 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                         (&this_ptr_01->base,1);
                    if ((float)local_18 <= (float)_DAT_005eb7b5) {
                      local_18 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0
                                           (&this_ptr_01->base,2);
                      if ((float)_DAT_005eb7b5 < (float)local_18) {
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,(CVector3f *)local_74,1.0);
                      }
                    }
                    else {
                      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)this_ptr,(CVector3f *)local_74,1.0);
                    }
                  }
                }
                goto LAB_00565806;
              }
              local_18 = (this_ptr->base).base.base.vtable;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,(CVector3f *)(local_74 + 4),&CStack_88);
              pCVar10 = (CVector3f *)auStack_ac;
              pCVar6 = (CVector3f *)auStack_ac;
              pCVar4 = &CStack_88;
            }
            else {
              local_18 = (this_ptr->base).base.base.vtable;
              pCVar1 = (this_ptr->base).ladder_to_climb;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,(CVector3f *)(local_74 + 4),(CVector3f *)auStack_64
                        );
              pCVar10 = &CStack_94;
              pCVar6 = &CStack_94;
              pCVar4 = (CVector3f *)auStack_64;
            }
            puVar7 = (uint *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
            puVar5 = (uint *)((int)pCVar4 + ((uint)bVar8 * -2 + 1) * 4);
            pCVar6->x = pCVar4->x;
            this_ptr_02 = this_ptr;
            *puVar7 = *puVar5;
            puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
            (**(code **)(iStack_14 + 0x30))
                      ((CDemonActor *)this_ptr_02,pCVar10,ground_type,(float)in_stack_fffffee8);
          }
          else {
LAB_00565ebd:
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
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x778);
          }
          pCVar11 = (this_ptr->base).object_to_pick_up;
          if (pCVar11 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x77e);
          }
          else {
            iVar2 = (*((pCVar11->vtable)._ub)->canPickup)(pCVar11,(CDemonActor *)this_ptr);
            if (iVar2 == 0) {
              (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar11 = (this_ptr->base).object_to_pick_up;
              if ((pCVar11 != (CDemonActor *)0x0) &&
                 (iVar3 = (*((pCVar11->vtable)._ub)->canPickup)(pCVar11,(CDemonActor *)this_ptr),
                 in_stack_fffffee8 = pCVar11->actor_name, iVar3 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 0xe;
              }
              if (iVar2 == 2) {
                if (this_ptr->action_pending != 0) {
                  in_stack_fffffee8 = &g_CEditorToolsPtr->unused;
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
                }
                this_ptr->action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004cff50(&this_ptr->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_00565ebd;
          this_ptr_00 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_dropRightHandObject_FUN_0056a1e0(this_ptr);
          iVar2 = this_ptr->action_pending;
          if (iVar2 == 2) {
            if (this_ptr_00 != (CWeapon *)0x0) {
              (*((this_ptr_00->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr_00,local_2c,local_28);
            }
LAB_00565858:
            this_ptr->action_pending = 0;
          }
          else {
            if (iVar2 == 6) goto LAB_00565858;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar2,0x75a);
          }
          iVar2 = (this_ptr->base).base.layer_action_index;
          (this_ptr->base).target_actor = (CDemonActor *)0x0;
          if (iVar2 == 0xe) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).base.layer_action_index = 0;
          }
          if (this_ptr_00 == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_24 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_20 = local_24;
        if (local_24 != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                    (local_1c,_DAT_0264be60,&local_d4);
          pCVar10 = &local_50;
          local_50.x = local_d4.x;
          *(uint *)(local_44 + (uint)bVar8 * -8 + -8) =
               *(uint *)((int)&local_d4 + (uint)bVar8 * -8 + 4);
          *(uint *)(local_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4) =
               *(uint *)((int)&local_d4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar10,&local_bc);
          this_ptr_03 = (SDamageInfo *)&stack0xfffffef0;
          local_44._0_4_ = local_bc.x;
          *(uint *)(local_44 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&local_bc + (uint)bVar8 * -8 + 4);
          (&fStack_3c)[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
               *(float *)((int)&local_bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_03);
          local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    (&local_20->base,(CVector3f *)local_44,(CVector3f *)(auStack_64 + 8));
          local_c8 = (float)auStack_64._8_4_;
          local_c4[(uint)bVar8 * -2] = afStack_58[(uint)bVar8 * -2];
          local_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (&stack0xffffff0c != &local_c8) {
            local_f4 = local_c8;
            local_f0 = local_c4[0];
            local_ec = local_c4[1];
          }
          local_dc = this_ptr;
          local_d8 = this_ptr;
          (*(((local_24->base).vtable._uc)->_uc).processDamage)
                    (local_24,(SDamageInfo *)&stack0xfffffef0);
          if (0.0 < (double)fStack_104) {
            dVar9 = round((double)fStack_104 * _DAT_005eb7ad);
            iStack_14 = (int)ROUND(dVar9);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,(CVector3f *)(local_44 + 4),(CVector3f *)0x0,iStack_14 + 1,
                       BLOOD_TYPE_RED);
            in_stack_fffffee8 = "kick1.wav";
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"kick1.wav");
          }
        }
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_00565763;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar11 = (this_ptr->base).base.grabbed_by;
        if (pCVar11 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    ((CDemonActor *)this_ptr,&(pCVar11->location).position,&local_38);
          CStack_88.z = local_38.x;
          afStack_7c[(uint)bVar8 * -2] = *(float *)((int)&local_38 + (uint)bVar8 * -8 + 4);
          afStack_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&local_38 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          if (0.0 < afStack_7c[1]) {
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
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_00565ebd;
          core_stranger_cpp_CStranger_processPickupComplete_FUN_0056a160(this_ptr);
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
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x7bc);
          }
        }
        else {
          if (this_ptr->action_pending == 5) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x80f);
          }
          if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x815);
          }
          iVar2 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&local_1c->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004cf440(&this_ptr->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_00565ebd;
      }
      else if (bone_index < 0x29b) {
        (this_ptr->base).base.velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_00565ebd;
        (this_ptr->base).base.velocity.y = 0x41000000;
      }
    }
LAB_00565806:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
