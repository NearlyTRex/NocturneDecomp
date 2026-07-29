// Name: core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0
// Address: 00537cd0
// Address Range: [[00537cd0, 005383d8]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(CStranger *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CLadder *this_ptr_01;
  CWeapon *this_ptr_02;
  CDemonActor_vtable *pCVar1;
  uint bone_index;
  EGroundType EVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  CCharacter *this_ptr_03;
  int unaff_EBP;
  double dVar6;
  char *in_stack_ffffff48;
  CDemonActor *pCVar7;
  float fStack_a4;
  CVector3f local_94 [2];
  CStranger *local_7c;
  CStranger *local_78;
  CVector3f local_74;
  byte auStack_64 [12];
  byte auStack_58 [20];
  CVector3f local_44;
  byte local_38 [16];
  CVector3f CStack_28;
  CVector3f *local_1c;
  CCharacter *local_18;
  UActorVTable local_14;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  local_1c = (CVector3f *)&(this_ptr->base).target_orientation;
  CStack_28.z = (float)&(this_ptr->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                           (&this_ptr_00->motion_controller,&delta_time);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_00537d35:
            iVar4 = _DAT_02dc9f6c;
            if (bone_index == 7) {
              iVar4 = _DAT_02dc9f70;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                      (this_ptr_00,(CVector3f *)(auStack_64 + 8),iVar4);
            this_ptr_01 = (this_ptr->base).ladder_to_climb;
            if (this_ptr_01 == (CLadder *)0x0) {
              if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
                if ((this_ptr->base).base.is_on_ground != 0) {
                  local_14 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                       (&this_ptr_00->motion_controller,3);
                  if ((float)0.40000000000000002 < (float)local_14) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,(CVector3f *)(auStack_64 + 8),1.7);
                  }
                  else {
                    local_14 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                         (&this_ptr_00->motion_controller,1);
                    if ((float)local_14 <= (float)0.40000000000000002) {
                      local_14 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                           (&this_ptr_00->motion_controller,2);
                      if ((float)0.40000000000000002 < (float)local_14) {
                        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)this_ptr,(CVector3f *)(auStack_64 + 8),1.0);
                      }
                    }
                    else {
                      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)this_ptr,(CVector3f *)(auStack_64 + 8),1.0);
                    }
                  }
                }
              }
              else {
                pCVar1 = (this_ptr->base).base.base.vtable._ub;
                EVar2 = (*((this_ptr->ladder_to_descend->base).vtable._ub)->getGroundType)
                                  (&this_ptr->ladder_to_descend->base);
                pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   ((CDemonActor *)this_ptr,&CStack_28,(CVector3f *)auStack_58);
                (*pCVar1->handleFootstep)
                          ((CDemonActor *)this_ptr,pCVar3,EVar2,(float)in_stack_ffffff48);
              }
            }
            else {
              local_14 = (this_ptr->base).base.base.vtable;
              EVar2 = (*((this_ptr_01->base).vtable._ub)->getGroundType)(&this_ptr_01->base);
              pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 ((CDemonActor *)this_ptr,(CVector3f *)auStack_64,
                                  (CVector3f *)auStack_58);
              (**(code **)(unaff_EBP + 0x20))
                        ((CDemonActor *)this_ptr,pCVar3,EVar2,(float)in_stack_ffffff48);
            }
          }
          else {
LAB_005383ca:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042add0
                      ((CCharacter *)this_ptr,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (this_ptr->action_pending == 4) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_0046fb40
                      (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",this_ptr->action_pending,
                       0x77c);
          }
          pCVar7 = (this_ptr->base).object_to_pick_up;
          if (pCVar7 == (CDemonActor *)0x0) {
            shape_edittool_cpp_FUN_0046fb40(0x01BCD074,"Object to pick up is now NULL\nstranger.cpp line %d",0x782);
          }
          else {
            iVar4 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr);
            if (iVar4 == 0) {
              (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar7 = (this_ptr->base).object_to_pick_up;
              if ((pCVar7 != (CDemonActor *)0x0) &&
                 (iVar5 = (*((pCVar7->vtable)._ub)->canPickup)(pCVar7,(CDemonActor *)this_ptr),
                 in_stack_ffffff48 = pCVar7->actor_name, iVar5 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 0xe;
              }
              if (iVar4 == 2) {
                if (this_ptr->action_pending != 0) {
                  in_stack_ffffff48 = 0x01BCD074->actor_name;
                  shape_edittool_cpp_FUN_0046fb40(0x01BCD074,"actionPending = %d\nstranger.cpp line %d");
                }
                this_ptr->action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(&this_ptr->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_005383ca;
          this_ptr_02 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_dropRightHandObject_FUN_0053bf30(this_ptr);
          iVar4 = this_ptr->action_pending;
          if (iVar4 == 2) {
            if (this_ptr_02 != (CWeapon *)0x0) {
              (*((this_ptr_02->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr_02,(CVector3f *)CStack_28.z,local_1c);
            }
LAB_00537df4:
            this_ptr->action_pending = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_00537df4;
            shape_edittool_cpp_FUN_0046fb40
                      (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",iVar4,0x75e);
          }
          iVar4 = (this_ptr->base).base.layer_action_index;
          (this_ptr->base).target_actor = (CDemonActor *)0x0;
          if (iVar4 == 0xe) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).base.layer_action_index = 0;
          }
          if (this_ptr_02 == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        this_ptr_03 = (CCharacter *)
                      core_actor_cpp_castToClassHash_FUN_0040d890
                                ((this_ptr->base).base.grabbed_by,
                                 g_CEnemyActorType_01bcdebc.name_hash);
        local_18 = this_ptr_03;
        if (this_ptr_03 != (CCharacter *)0x0) {
          pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                             (this_ptr_00,&local_44,_DAT_02dc9f80);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)this_ptr,(CVector3f *)local_38,pCVar3);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff50);
          local_14 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr_03,(CVector3f *)(auStack_58 + 8),
                              (CVector3f *)local_38);
          if (local_94 != pCVar3) {
            local_94[0].x = pCVar3->x;
            local_94[0].y = pCVar3->y;
            local_94[0].z = pCVar3->z;
          }
          local_7c = this_ptr;
          local_78 = this_ptr;
          (*(((local_18->base).vtable._uc)->_uc).processDamage)
                    (local_18,(SDamageInfo *)&stack0xffffff50);
          if (0.0 < (double)fStack_a4) {
            dVar6 = round((double)fStack_a4 * 0.20000000000000001);
            unaff_EBP = (int)ROUND(dVar6);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                      ((CGore *)INT_005b96c4,(CVector3f *)(local_38 + 4),(CVector3f *)0x0,
                       unaff_EBP + 1,0);
            in_stack_ffffff48 = "kick1.wav";
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"kick1.wav");
          }
        }
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_00537d35;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar7 = (this_ptr->base).base.grabbed_by;
        if ((pCVar7 != (CDemonActor *)0x0) &&
           (pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               ((CDemonActor *)this_ptr,&local_74,&(pCVar7->location).position),
           0.0 < pCVar3->z)) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hit-gh[4,7].wav");
        }
      }
      else if (bone_index == 0x11) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_005383ca;
          core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(this_ptr);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(&this_ptr->base,1);
          if (this_ptr->action_pending == 1) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_0046fb40
                      (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",this_ptr->action_pending,
                       0x7c0);
          }
        }
        else {
          if (this_ptr->action_pending == 5) {
            this_ptr->action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_0046fb40
                      (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",this_ptr->action_pending,
                       0x813);
          }
          if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_FUN_0046fb40(0x01BCD074,"doorToOpen == NULL\nstranger.cpp line %d",0x819);
          }
          iVar4 = core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&this_ptr->base);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&this_ptr_00->motion_controller,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&this_ptr->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_005383ca;
      }
      else if (bone_index < 0x29b) {
        (this_ptr->base).base.velocity.y = 10.0f;
      }
      else {
        if (bone_index != 0x29b) goto LAB_005383ca;
        (this_ptr->base).base.velocity.y = 8.0f;
      }
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
