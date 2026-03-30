// Name: core_stranger.cpp_CStranger_processMotionEvents_FUN_005bdd20
// Address: 005bdd20
// Address Range: [[005bdd20, 005be191] [005be262, 005be428]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_005bdd20(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_005bdd20(CStranger *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_04;
  CLadder *this_ptr_05;
  CWeapon *this_ptr_06;
  CDemonActor *pCVar1;
  CDemonActor_vtable *pCVar2;
  uint bone_index;
  EGroundType EVar3;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  CEnemy *this_ptr_03;
  SDamageInfo local_b0;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38 [2];
  CVector3f *local_20;
  CVector3f *local_1c;
  CEnemy *local_18;
  float local_14;
  
  this_ptr_04 = &(this_ptr->base).base.model;
  local_1c = (CVector3f *)&(this_ptr->base).target_orientation;
  local_20 = &(this_ptr->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_0052d610
                           (&this_ptr_04->motion_controller,&delta_time);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_005bdd85:
            iVar5 = g_StrangerIndices[7];
            if (bone_index == 7) {
              iVar5 = g_StrangerIndices[8];
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (this_ptr_04,&local_5c,iVar5);
            this_ptr_05 = (this_ptr->base).ladder_to_climb;
            if (this_ptr_05 == (CLadder *)0x0) {
              if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
                if ((this_ptr->base).base.is_on_ground != 0) {
                  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                       (&this_ptr_04->motion_controller,3);
                  if ((float)0.40000000000000002 < local_14) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,&local_5c,1.7);
                  }
                  else {
                    local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                         (&this_ptr_04->motion_controller,1);
                    if (local_14 <= (float)0.40000000000000002) {
                      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                                           (&this_ptr_04->motion_controller,2);
                      if ((float)0.40000000000000002 < local_14) {
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,&local_5c,1.0);
                      }
                    }
                    else {
                      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)this_ptr,&local_5c,1.0);
                    }
                  }
                }
              }
              else {
                pCVar2 = (this_ptr->base).base.base.vtable._ub;
                EVar3 = (*((this_ptr->ladder_to_descend->base).vtable._ub)->getGroundType)
                                  (&this_ptr->ladder_to_descend->base);
                pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   ((CDemonActor *)this_ptr,local_38,&local_68);
                (*pCVar2->handleFootstep)((CDemonActor *)this_ptr,pCVar4,EVar3);
              }
            }
            else {
              local_14 = *(float *)&(this_ptr->base).base.base.vtable;
              EVar3 = (*((this_ptr_05->base).vtable._ub)->getGroundType)(&this_ptr_05->base);
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 ((CDemonActor *)this_ptr,&local_68,&local_5c);
              (**(code **)((int)local_14 + 0x20))(this_ptr,pCVar4,EVar3);
            }
          }
          else {
LAB_005be41a:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40
                      ((CCharacter *)this_ptr,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (this_ptr->action_pending == 4) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x785);
          }
          pCVar1 = (this_ptr->base).object_to_pick_up;
          if (pCVar1 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x78b);
          }
          else {
            iVar5 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr);
            if (iVar5 == 0) {
              (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar1 = (this_ptr->base).object_to_pick_up;
              if ((pCVar1 != (CDemonActor *)0x0) &&
                 (iVar6 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)this_ptr),
                 iVar6 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 0xe;
              }
              if (iVar5 == 2) {
                if (this_ptr->action_pending != 0) {
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                             this_ptr->action_pending,0x7a9);
                }
                this_ptr->action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004f3890(&this_ptr->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_005be41a;
          this_ptr_06 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_dropRightHandObject_FUN_005c1f80(this_ptr);
          iVar5 = this_ptr->action_pending;
          if (iVar5 == 2) {
            if (this_ptr_06 != (CWeapon *)0x0) {
              (*((this_ptr_06->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr_06,local_20,local_1c);
            }
LAB_005bde44:
            this_ptr->action_pending = 0;
          }
          else {
            if (iVar5 == 6) goto LAB_005bde44;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar5,0x767);
          }
          iVar5 = (this_ptr->base).base.layer_action_index;
          (this_ptr->base).target_actor = (CDemonActor *)0x0;
          if (iVar5 == 0xe) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).base.layer_action_index = 0;
          }
          if (this_ptr_06 == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        this_ptr_03 = (CEnemy *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_18 = this_ptr_03;
        if (this_ptr_03 != (CEnemy *)0x0) {
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_04,&local_44,g_StrangerIndices[0xc]);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,local_38,pCVar4);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_b0);
          local_b0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,15.0);
          local_14 = local_b0.damage_amount;
          pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr_03,&local_50,local_38);
          if (&local_b0.impact_direction != pCVar4) {
            local_b0.impact_direction.x = pCVar4->x;
            local_b0.impact_direction.y = pCVar4->y;
            local_b0.impact_direction.z = pCVar4->z;
          }
          local_b0.attacker = (CDemonActor *)this_ptr;
          local_b0.wielder = (CDemonActor *)this_ptr;
          (*(((local_18->base).base.vtable._uc)->_uc).processDamage)(&local_18->base,&local_b0);
          if (0.0 < (double)local_b0.damage_amount) {
            local_14 = (float)(int)ROUND(ROUND((double)local_b0.damage_amount * 0.20000000000000001));
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                      (g_CGorePtr,local_38,(CVector3f *)0x0,(int)local_14 + 1,0);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"kick1.wav");
          }
        }
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_005bdd85;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar1 = (this_ptr->base).base.grabbed_by;
        if ((pCVar1 != (CDemonActor *)0x0) &&
           (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)this_ptr,&local_74,&(pCVar1->location).position),
           0.0 < pCVar4->z)) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hit-gh[4,7].wav");
        }
      }
      else if (bone_index == 0x11) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_005be41a;
          core_stranger_cpp_CStranger_processPickupComplete_FUN_005c1f00(this_ptr);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004f38d0(&this_ptr->base,1);
          if (this_ptr->action_pending == 1) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x7c9);
          }
        }
        else {
          if (this_ptr->action_pending == 5) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       this_ptr->action_pending,0x81c);
          }
          if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x822);
          }
          iVar5 = core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&this_ptr_04->motion_controller,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(&this_ptr->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_005be41a;
      }
      else if (bone_index < 0x29b) {
        (this_ptr->base).base.velocity.y = 10.0f;
      }
      else {
        if (bone_index != 0x29b) goto LAB_005be41a;
        (this_ptr->base).base.velocity.y = 8.0f;
      }
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
