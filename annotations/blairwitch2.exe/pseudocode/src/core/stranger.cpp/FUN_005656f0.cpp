// Name: core_stranger.cpp_FUN_005656f0
// Address: 005656f0
// Address Range: [[005656f0, 00565ecb]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005656f0(CStranger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_005656f0(CStranger *param_1,float param_2)

{
  CLadder *pCVar1;
  CWeapon *this_ptr;
  CDemonActor *pCVar2;
  CMotionController *pCVar3;
  uint bone_index;
  uint uVar4;
  EGroundType ground_type;
  int iVar5;
  int iVar6;
  float *pfVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_10bc [33];
  CVector3f *apCStackY_1038 [961];
  CStranger *this_ptr_00;
  CVector3f *position;
  SDamageInfo *this_ptr_01;
  CEditorTools *pCVar12;
  double in_stack_fffffee8;
  float fVar13;
  float local_f4;
  float local_f0;
  float local_ec;
  CStranger *local_dc;
  CStranger *local_d8;
  uint local_d4;
  float afStack_d0 [4];
  float local_c0;
  float local_bc;
  CVector3f CStack_ac;
  uint auStack_a0 [3];
  CVector3f CStack_94;
  float afStack_88 [2];
  uint local_80;
  float afStack_7c [2];
  CVector3f local_74;
  float afStack_64 [2];
  float local_5c;
  float afStack_58 [3];
  CVector3f CStack_4c;
  CVector3f *apCStack_40 [5];
  CVector3f *local_2c;
  CVector3f *local_28;
  int local_24;
  int local_20;
  CMotionController *local_1c;
  UActorVTable local_18;
  int iStack_14;
  
  bVar10 = 0;
  local_1c = &(param_1->base).base.model.base;
  local_28 = (CVector3f *)&(param_1->base).target_orientation;
  local_2c = &(param_1->base).target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0(local_1c,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_00565763:
            uVar4 = _DAT_0264be4c;
            if (bone_index == 7) {
              uVar4 = _DAT_0264be50;
            }
            core_skeleton_cpp_FUN_005469a0(local_1c,uVar4);
            local_74.x = CStack_ac.z;
            *(uint *)((int)&local_74 + (uint)bVar10 * -8 + 4) = auStack_a0[(uint)bVar10 * -2];
            pCVar3 = local_1c;
            *(uint *)((int)&local_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 auStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if ((param_1->base).ladder_to_climb == (CLadder *)0x0) {
              pCVar1 = param_1->ladder_to_descend;
              if (pCVar1 == (CLadder *)0x0) {
                if ((param_1->base).base.is_on_ground != 0) {
                  local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_1c,3);
                  if ((float)_DAT_005eb7b5 < (float)local_18) {
                    (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)param_1,&local_74,1.7);
                  }
                  else {
                    local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(pCVar3,1);
                    if ((float)local_18 <= (float)_DAT_005eb7b5) {
                      local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(pCVar3,2);
                      if ((float)_DAT_005eb7b5 < (float)local_18) {
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
                goto LAB_00565806;
              }
              local_18 = (param_1->base).base.base.vtable;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_FUN_00408d70(param_1,&local_74.y);
              position = &CStack_ac;
              pCVar8 = &CStack_ac;
              pfVar7 = afStack_88;
            }
            else {
              local_18 = (param_1->base).base.base.vtable;
              pCVar1 = (param_1->base).ladder_to_climb;
              ground_type = (*((pCVar1->base).vtable._ub)->getGroundType)(&pCVar1->base);
              core_actor_cpp_FUN_00408d70(param_1,&local_74.y);
              position = &CStack_94;
              pCVar8 = &CStack_94;
              pfVar7 = afStack_64;
            }
            pfVar9 = (float *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
            pCVar8->x = *pfVar7;
            this_ptr_00 = param_1;
            *pfVar9 = pfVar7[(uint)bVar10 * -2 + 1];
            pfVar9[(uint)bVar10 * -2 + 1] = (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            (**(code **)(iStack_14 + 0x30))
                      ((CDemonActor *)this_ptr_00,position,ground_type,SUB84(in_stack_fffffee8,0));
          }
          else {
LAB_00565ebd:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00
                      ((CCharacter *)param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (param_1->action_pending == 4) {
            param_1->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
          }
          pCVar2 = (param_1->base).object_to_pick_up;
          if (pCVar2 == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nstranger.cpp line %d");
          }
          else {
            iVar5 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)param_1);
            if (iVar5 == 0) {
              (param_1->base).object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar2 = (param_1->base).object_to_pick_up;
              if (pCVar2 != (CDemonActor *)0x0) {
                in_stack_fffffee8 = __BITCAST_DOUBLE(CONCAT44(param_1,pCVar2));
                iVar6 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)param_1);
                if (iVar6 == 4) {
                  (param_1->base).base.layer_action_t = 0.0;
                  (param_1->base).base.layer_action_index = 0xe;
                }
              }
              pCVar12 = SUB84(in_stack_fffffee8,0);
              if (iVar5 == 2) {
                if (param_1->action_pending != 0) {
                  pCVar12 = g_CEditorToolsPtr;
                  shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                            (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
                }
                param_1->action_pending = 1;
              }
              in_stack_fffffee8 = __BITCAST_DOUBLE(CONCAT44(0x565988,pCVar12));
              core_hero_cpp_FUN_004cff50(&param_1->base,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_00565ebd;
          this_ptr = (CWeapon *)(param_1->base).base.carry_hands[1].carry_actor;
          core_stranger_cpp_FUN_0056a1e0(param_1);
          if (param_1->action_pending == 2) {
            if (this_ptr != (CWeapon *)0x0) {
              (*((this_ptr->base).vtable._ub)->setPositionAndOrientation)
                        ((CDemonActor *)this_ptr,local_2c,local_28);
            }
LAB_00565858:
            param_1->action_pending = 0;
          }
          else {
            if (param_1->action_pending == 6) goto LAB_00565858;
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"<actionPending = %d\nstranger.cpp line %d" + 1);
          }
          iVar5 = (param_1->base).base.layer_action_index;
          (param_1->base).target_actor = (CDemonActor *)0x0;
          if (iVar5 == 0xe) {
            (param_1->base).base.layer_action_t = 0.0;
            (param_1->base).base.layer_action_index = 0;
          }
          if (this_ptr == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
        }
      }
      else if (bone_index < 7) {
        local_24 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             ((param_1->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
        local_20 = local_24;
        if (local_24 != 0) {
          core_skeleton_cpp_FUN_005469a0(local_1c,_DAT_0264be60);
          fVar13 = (float)((ulonglong)in_stack_fffffee8 >> 0x20);
          pfVar7 = afStack_58 + 2;
          afStack_58[2] = (float)local_d4;
          *(float *)((int)&CStack_4c + (uint)bVar10 * -8) = afStack_d0[(uint)bVar10 * -2];
          apCStack_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2] =
               (CVector3f *)afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          core_actor_cpp_FUN_00408d70(param_1,pfVar7);
          this_ptr_01 = (SDamageInfo *)&stack0xfffffef0;
          CStack_4c.z = local_bc;
          apCStack_40[(uint)bVar10 * -2] = (CVector3f *)afStack_d0[(uint)bVar10 * -2 + 6];
          apCStack_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               (CVector3f *)afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_01);
          local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
          core_actor_cpp_FUN_00408de0(local_20,&CStack_4c.z);
          afStack_d0[2] = local_5c;
          afStack_d0[(uint)bVar10 * -2 + 3] = afStack_58[(uint)bVar10 * -2];
          afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_58[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          if (&local_f4 != afStack_d0 + 2) {
            local_f4 = afStack_d0[2];
            local_f0 = afStack_d0[3];
            local_ec = local_c0;
          }
          local_dc = param_1;
          local_d8 = param_1;
          (**(code **)(*(int *)(local_24 + 0x2b0) + 0x110))(local_24,&stack0xfffffef0);
          in_stack_fffffee8 = (double)fVar13;
          if (0.0 < in_stack_fffffee8) {
            fVar11 = (float10)fVar13 * (float10)_DAT_005eb7ad;
            round();
            local_20 = (int)ROUND(fVar11);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_4c,(CVector3f *)0x0,local_20 + 1,BLOOD_TYPE_RED);
            (*((param_1->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"kick1.wav");
          }
        }
        (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_00565763;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar2 = (param_1->base).base.grabbed_by;
        if (pCVar2 != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408de0(param_1,&pCVar2->location);
          local_80 = apCStack_40[2];
          afStack_7c[(uint)bVar10 * -2] = (float)apCStack_40[(uint)bVar10 * -2 + 3];
          afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               (float)apCStack_40[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          if (0.0 < afStack_7c[1]) {
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
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_00565ebd;
          core_stranger_cpp_FUN_0056a160(param_1);
        }
        else if (bone_index < 0x16) {
          if ((CWeapon *)(param_1->base).base.carry_hands[1].carry_actor == param_1->weapon) {
            param_1->weapon = (CWeapon *)0x0;
          }
          core_hero_cpp_FUN_004cff90(param_1,1);
          if (param_1->action_pending == 1) {
            param_1->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
          }
        }
        else {
          if (param_1->action_pending == 5) {
            param_1->action_pending = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
          }
          if ((param_1->base).door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nstranger.cpp line %d");
          }
          iVar5 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&param_1->base);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_1c,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_FUN_004cf440(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_00565ebd;
      }
      else if (bone_index < 0x29b) {
        (param_1->base).base.velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_00565ebd;
        (param_1->base).base.velocity.y = 0x41000000;
      }
    }
LAB_00565806:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
