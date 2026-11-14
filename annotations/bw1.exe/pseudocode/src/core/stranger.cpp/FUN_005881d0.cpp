// Name: core_stranger.cpp_FUN_005881d0
// Address: 005881d0
// Address Range: [[005881d0, 005889ab]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005881d0(CStranger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_005881d0(CStranger *param_1,float param_2)

{
  CLadder *pCVar1;
  CWeapon *this_ptr;
  CDemonActor *pCVar2;
  CDeformableModelInstance *pCVar3;
  uint bone_index;
  EGroundType ground_type;
  int iVar4;
  int iVar5;
  float *pfVar6;
  CVector3f *pCVar7;
  float *pfVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_10bc [39];
  CVector3f *apCStackY_1020 [958];
  CStranger *pCVar11;
  CVector3f *position;
  SDamageInfo *this_ptr_00;
  CStranger *in_stack_fffffee8;
  float fStack_104;
  float local_f4;
  float local_f0;
  float local_ec;
  CStranger *local_dc;
  CStranger *local_d8;
  CVector3f local_d4;
  float local_c8;
  float local_c4 [6];
  CVector3f CStack_ac;
  float afStack_a0 [3];
  CVector3f CStack_94;
  float afStack_88 [2];
  float local_80;
  float afStack_7c [2];
  CVector3f local_74;
  float afStack_64 [2];
  float local_5c;
  float afStack_58 [2];
  CVector3f local_50;
  uint local_44;
  float fStack_40;
  CVector3f CStack_3c;
  CVector3f *apCStack_30 [3];
  CCharacter *local_24;
  CCharacter *local_20;
  CDeformableModelInstance *local_1c;
  UActorVTable local_18;
  int iStack_14;
  
  bVar9 = 0;
  local_1c = &(param_1->base).base.model;
  apCStack_30[2] = (CVector3f *)&(param_1->base).target_orientation;
  apCStack_30[1] = &(param_1->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(&local_1c->base,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_00588243:
            iVar4 = _DAT_02c8361c;
            if (bone_index == 7) {
              iVar4 = _DAT_02c83620;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                      (local_1c,iVar4,&local_50);
            local_74.x = local_50.x;
            *(uint *)((int)&local_74 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)&local_50 + (uint)bVar9 * -8 + 4);
            pCVar3 = local_1c;
            *(uint *)((int)&local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 *(uint *)((int)&local_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            if ((param_1->base).ladder_to_climb == (CLadder *)0x0) {
              pCVar1 = param_1->ladder_to_descend;
              if (pCVar1 == (CLadder *)0x0) {
                if ((param_1->base).base.is_on_ground != 0) {
                  local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_1c,4);
                  if ((float)_DAT_005f6a29 < (float)local_18) {
                    (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)param_1,&local_74,1.7);
                  }
                  else {
                    local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar3,1);
                    if ((float)local_18 <= (float)_DAT_005f6a29) {
                      local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar3,2);
                      if ((float)_DAT_005f6a29 < (float)local_18) {
                        (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)param_1,&local_74,1.0);
                      }
                    }
                    else {
                      (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)param_1,&local_74,1.0);
                    }
                  }
                }
                goto LAB_005882ec;
              }
              local_18 = (param_1->base).base.base.vtable;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_FUN_00408b40(param_1,&local_74.y);
              position = &CStack_ac;
              pCVar7 = &CStack_ac;
              pfVar6 = afStack_88;
            }
            else {
              local_18 = (param_1->base).base.base.vtable;
              pCVar1 = (param_1->base).ladder_to_climb;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_FUN_00408b40(param_1,&local_74.y);
              position = &CStack_94;
              pCVar7 = &CStack_94;
              pfVar6 = afStack_64;
            }
            pfVar8 = (float *)((int)pCVar7 + ((uint)bVar9 * -2 + 1) * 4);
            pCVar7->x = *pfVar6;
            pCVar11 = param_1;
            *pfVar8 = pfVar6[(uint)bVar9 * -2 + 1];
            pfVar8[(uint)bVar9 * -2 + 1] = (pfVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
            (**(code **)(iStack_14 + 0x28))
                      ((CDemonActor *)pCVar11,position,ground_type,(float)in_stack_fffffee8);
          }
          else {
LAB_0058899d:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80
                      ((CCharacter *)param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          iVar4 = (param_1->base).action_pending;
          if (iVar4 == 4) {
            (param_1->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar4,0x7e2);
          }
          pCVar2 = (param_1->base).object_to_pick_up;
          if (pCVar2 == (CDemonActor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d",0x7e8);
          }
          else {
            iVar4 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)param_1);
            if (iVar4 == 0) {
              (param_1->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar11 = (CStranger *)(param_1->base).object_to_pick_up;
              if ((pCVar11 != (CStranger *)0x0) &&
                 (iVar5 = (*((pCVar11->base).base.base.vtable._ub)->canPickup)
                                    ((CDemonActor *)pCVar11,(CDemonActor *)param_1),
                 in_stack_fffffee8 = pCVar11, iVar5 == 4)) {
                (param_1->base).base.layer_action_t = 0.0;
                (param_1->base).base.layer_action_index = 0xe;
              }
              if (iVar4 == 2) {
                if ((param_1->base).action_pending != 0) {
                  in_stack_fffffee8 = (CStranger *)g_CEditorToolsPtr;
                  shape_edittool_cpp_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
                }
                (param_1->base).action_pending = 1;
              }
              core_hero_cpp_FUN_004ec280(&param_1->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0058899d;
          this_ptr = (CWeapon *)(param_1->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_CStranger_dropRightHandObject_FUN_0058ce20(param_1);
          iVar4 = (param_1->base).action_pending;
          if (iVar4 == 2) {
            if (this_ptr != (CWeapon *)0x0) {
              (*((this_ptr->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr,apCStack_30[1],apCStack_30[2]);
            }
LAB_0058833e:
            (param_1->base).action_pending = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_0058833e;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\nstranger.cpp line %d" + 1,iVar4,0x7c4);
          }
          iVar4 = (param_1->base).base.layer_action_index;
          (param_1->base).target_actor = (CDemonActor *)0x0;
          if (iVar4 == 0xe) {
            (param_1->base).base.layer_action_t = 0.0;
            (param_1->base).base.layer_action_index = 0;
          }
          if (this_ptr == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_24 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             ((param_1->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_20 = local_24;
        if (local_24 != (CCharacter *)0x0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (local_1c,_DAT_02c83630,&local_d4);
          pfVar6 = &local_80;
          local_80 = local_d4.x;
          afStack_7c[(uint)bVar9 * -2] = *(float *)((int)&local_d4 + (uint)bVar9 * -8 + 4);
          afStack_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               *(float *)((int)&local_d4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          core_actor_cpp_FUN_00408b40(param_1,pfVar6);
          this_ptr_00 = (SDamageInfo *)&stack0xfffffef0;
          local_44 = local_c4[2];
          (&fStack_40)[(uint)bVar9 * -2] = local_c4[(uint)bVar9 * -2 + 3];
          *(float *)((int)&CStack_3c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               local_c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_00);
          local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          core_actor_cpp_FUN_00408bb0(local_20,&local_44);
          local_c8 = local_5c;
          local_c4[(uint)bVar9 * -2] = afStack_58[(uint)bVar9 * -2];
          local_c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          if (&local_f4 != &local_c8) {
            local_f4 = local_c8;
            local_f0 = local_c4[0];
            local_ec = local_c4[1];
          }
          local_dc = param_1;
          local_d8 = param_1;
          (*(((local_24->base).vtable._uc)->_uc).processDamage)
                    (local_24,(SDamageInfo *)&stack0xfffffef0);
          if (0.0 < fStack_104) {
            fVar10 = (float10)fStack_104 * (float10)_DAT_005f6a21;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                      (g_CGorePtr,&CStack_3c,(CVector3f *)0x0,(int)ROUND(fVar10) + 1,BLOOD_TYPE_RED)
            ;
            in_stack_fffffee8 = param_1;
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"kick1.wav");
          }
        }
        (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_00588243;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar2 = (param_1->base).base.grabbed_by;
        if (pCVar2 != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408bb0(param_1,&pCVar2->location);
          CStack_ac.z = CStack_3c.y;
          afStack_a0[(uint)bVar9 * -2] = (float)apCStack_30[(uint)bVar9 * -2 + -1];
          afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               (float)apCStack_30[(uint)bVar9 * -2 + (uint)bVar9 * -2];
          if (0.0 < afStack_a0[1]) {
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0058899d;
          core_stranger_cpp_CStranger_processPickupComplete_FUN_0058cda0(param_1);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(param_1->base).base.carry_hands[1].carry_actor == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(&param_1->base,1);
          iVar4 = (param_1->base).action_pending;
          if (iVar4 == 1) {
            (param_1->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar4,0x826);
          }
        }
        else {
          iVar4 = (param_1->base).action_pending;
          if (iVar4 == 5) {
            (param_1->base).action_pending = 0;
          }
          else {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",iVar4,0x879);
          }
          if ((param_1->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d",0x87f);
          }
          iVar4 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&param_1->base);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&local_1c->base,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_CHero_toggleLeverNow_FUN_004eb7f0(&param_1->base);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0058899d;
      }
      else if (bone_index < 0x29b) {
        (param_1->base).base.velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0058899d;
        (param_1->base).base.velocity.y = 0x41000000;
      }
    }
LAB_005882ec:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
