// Name: core_stranger.cpp_CStranger_processMotionEvents_FUN_005881d0
// Address: 005881d0
// Address Range: [[005881d0, 005889ab]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_005881d0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_005881d0(CStranger *this_ptr,float delta_time)

{
  CLadder *pCVar1;
  CWeapon *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  uint bone_index;
  EGroundType ground_type;
  int iVar2;
  int iVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  byte bVar7;
  double dVar8;
  float afStackY_10bc [997];
  CStranger *this_ptr_02;
  CVector3f *pCVar9;
  SDamageInfo *this_ptr_03;
  char *in_stack_fffffee8;
  CDemonActor *pCVar10;
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
  CVector3f CStack_ac;
  float afStack_a0 [3];
  CVector3f CStack_94;
  byte auStack_88 [12];
  float afStack_7c [2];
  byte local_74 [8];
  float afStack_6c [2];
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
  
  bVar7 = 0;
  local_1c = &(this_ptr->base).base.model;
  local_28 = (CVector3f *)&(this_ptr->base).target_orientation;
  local_2c = &(this_ptr->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(&local_1c->base,&delta_time)
    ;
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_00588243:
            iVar2 = _DAT_02c8361c;
            if (bone_index == 7) {
              iVar2 = _DAT_02c83620;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                      (local_1c,iVar2,&local_50);
            local_74._0_4_ = local_50.x;
            *(uint *)(local_74 + (uint)bVar7 * -8 + 4) =
                 *(uint *)(local_44 + (uint)bVar7 * -8 + -8);
            this_ptr_01 = local_1c;
            afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
                 *(float *)(local_44 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
            if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
              pCVar1 = this_ptr->ladder_to_descend;
              if (pCVar1 == (CLadder *)0x0) {
                if ((this_ptr->base).base.is_on_ground != 0) {
                  local_18 = (UActorVTable)
                             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                       (&local_1c->base,4);
                  if ((float)_DAT_005f6a29 < (float)local_18) {
                    (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)this_ptr,(CVector3f *)local_74,1.7);
                  }
                  else {
                    local_18 = (UActorVTable)
                               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                         (&this_ptr_01->base,1);
                    if ((float)local_18 <= (float)_DAT_005f6a29) {
                      local_18 = (UActorVTable)
                                 core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                           (&this_ptr_01->base,2);
                      if ((float)_DAT_005f6a29 < (float)local_18) {
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
                goto LAB_005882ec;
              }
              local_18 = (this_ptr->base).base.base.vtable;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        ((CDemonActor *)this_ptr,(CVector3f *)(local_74 + 4),(CVector3f *)auStack_88
                        );
              pCVar9 = &CStack_ac;
              pCVar5 = &CStack_ac;
              pfVar4 = (float *)auStack_88;
            }
            else {
              local_18 = (this_ptr->base).base.base.vtable;
              pCVar1 = (this_ptr->base).ladder_to_climb;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        ((CDemonActor *)this_ptr,(CVector3f *)(local_74 + 4),(CVector3f *)auStack_64
                        );
              pCVar9 = &CStack_94;
              pCVar5 = &CStack_94;
              pfVar4 = (float *)auStack_64;
            }
            pfVar6 = (float *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
            pCVar5->x = *pfVar4;
            this_ptr_02 = this_ptr;
            *pfVar6 = pfVar4[(uint)bVar7 * -2 + 1];
            pfVar6[(uint)bVar7 * -2 + 1] = (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)(iStack_14 + 0x28))
                      ((CDemonActor *)this_ptr_02,pCVar9,ground_type,(float)in_stack_fffffee8);
          }
          else {
LAB_0058899d:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80
                      ((CCharacter *)this_ptr,bone_index);
          }
        }
        else if (bone_index < 3) {
          iVar2 = (this_ptr->base).action_pending;
          if (iVar2 == 4) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar2,0x7e2);
          }
          pCVar10 = (this_ptr->base).object_to_pick_up;
          if (pCVar10 == (CDemonActor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x7e8);
          }
          else {
            iVar2 = (*((pCVar10->vtable)._ub)->canPickup)(pCVar10,(CDemonActor *)this_ptr);
            if (iVar2 == 0) {
              (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar10 = (this_ptr->base).object_to_pick_up;
              if ((pCVar10 != (CDemonActor *)0x0) &&
                 (iVar3 = (*((pCVar10->vtable)._ub)->canPickup)(pCVar10,(CDemonActor *)this_ptr),
                 in_stack_fffffee8 = pCVar10->actor_name, iVar3 == 4)) {
                (this_ptr->base).base.layer_action_t = 0.0;
                (this_ptr->base).base.layer_action_index = 0xe;
              }
              if (iVar2 == 2) {
                if ((this_ptr->base).action_pending != 0) {
                  in_stack_fffffee8 = &g_CEditorToolsPtr->unused;
                  shape_edittool_cpp_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
                }
                (this_ptr->base).action_pending = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004ec280(&this_ptr->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0058899d;
          this_ptr_00 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_dropRightHandObject_FUN_0058ce20(this_ptr);
          iVar2 = (this_ptr->base).action_pending;
          if (iVar2 == 2) {
            if (this_ptr_00 != (CWeapon *)0x0) {
              (*((this_ptr_00->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr_00,local_2c,local_28);
            }
LAB_0058833e:
            (this_ptr->base).action_pending = 0;
          }
          else {
            if (iVar2 == 6) goto LAB_0058833e;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\nstranger.cpp line %d" + 1,iVar2,0x7c4);
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
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_20 = local_24;
        if (local_24 != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (local_1c,_DAT_02c83630,&local_d4);
          pCVar9 = (CVector3f *)(auStack_88 + 8);
          auStack_88._8_4_ = local_d4.x;
          afStack_7c[(uint)bVar7 * -2] = *(float *)((int)&local_d4 + (uint)bVar7 * -8 + 4);
          afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)((int)&local_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    ((CDemonActor *)this_ptr,pCVar9,&local_bc);
          this_ptr_03 = (SDamageInfo *)&stack0xfffffef0;
          local_44._0_4_ = local_bc.x;
          *(uint *)(local_44 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_bc + (uint)bVar7 * -8 + 4);
          (&fStack_3c)[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
               *(float *)((int)&local_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_03);
          local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    (&local_20->base,(CVector3f *)local_44,(CVector3f *)(auStack_64 + 8));
          local_c8 = (float)auStack_64._8_4_;
          local_c4[(uint)bVar7 * -2] = afStack_58[(uint)bVar7 * -2];
          local_c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
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
            dVar8 = round((double)fStack_104 * _DAT_005f6a21);
            iStack_14 = (int)ROUND(dVar8);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
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
        if (bone_index == 7) goto LAB_00588243;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar10 = (this_ptr->base).base.grabbed_by;
        if (pCVar10 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    ((CDemonActor *)this_ptr,&(pCVar10->location).position,&local_38);
          CStack_ac.z = local_38.x;
          afStack_a0[(uint)bVar7 * -2] = *(float *)((int)&local_38 + (uint)bVar7 * -8 + 4);
          afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)((int)&local_38 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if (0.0 < afStack_a0[1]) {
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
          if (bone_index != 0x13) goto LAB_0058899d;
          core_stranger_cpp_CStranger_processPickupComplete_FUN_0058cda0(this_ptr);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
            this_ptr->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(&this_ptr->base,1);
          iVar2 = (this_ptr->base).action_pending;
          if (iVar2 == 1) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar2,0x826);
          }
        }
        else {
          iVar2 = (this_ptr->base).action_pending;
          if (iVar2 == 5) {
            (this_ptr->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar2,0x879);
          }
          if ((this_ptr->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x87f);
          }
          iVar2 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&local_1c->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(&this_ptr->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0058899d;
      }
      else if (bone_index < 0x29b) {
        (this_ptr->base).base.velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0058899d;
        (this_ptr->base).base.velocity.y = 0x41000000;
      }
    }
LAB_005882ec:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
