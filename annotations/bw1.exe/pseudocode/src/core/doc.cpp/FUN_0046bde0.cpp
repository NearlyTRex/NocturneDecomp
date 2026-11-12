// Name: core_doc.cpp_FUN_0046bde0
// Address: 0046bde0
// Address Range: [[0046bde0, 0046c973]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046bde0(CHero *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046bde0(CHero *param_1,float param_2)

{
  CLadder *this_ptr;
  CDemonActor *pCVar1;
  float fVar2;
  CMotionController *pCVar3;
  uint bone_index;
  uint uVar4;
  EGroundType EVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  CVector3f *pCVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_10e0 [978];
  CHero *this_ptr_00;
  CVector3f *in_stack_fffffe6c;
  EGroundType in_stack_fffffe70;
  float in_stack_fffffe74;
  SDamageInfo *this_ptr_01;
  float fStack_164;
  float local_154;
  float local_150;
  float local_14c;
  EAmmoType local_148;
  CHero *local_13c;
  CHero *local_138;
  SDamageInfo local_134;
  float local_f8;
  float local_f4 [4];
  float fStack_e4;
  float local_e0;
  float afStack_d8 [4];
  CVector3f local_c8;
  CVector3f CStack_b8;
  float afStack_ac [4];
  CVector3f CStack_9c;
  float local_90 [4];
  float local_80;
  float afStack_7c [5];
  float local_68 [3];
  uint local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float afStack_40 [2];
  CVector3f *local_38;
  CVector3f *local_34;
  CCharacter *local_30;
  CCharacter *local_2c;
  CMotionController *local_28;
  int local_24;
  int local_20;
  int local_1c;
  UActorVTable local_18;
  
  bVar11 = 0;
  local_28 = &(param_1->base).model.base;
  local_34 = (CVector3f *)&param_1->target_orientation;
  local_38 = &param_1->target_position;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(local_28,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0046be53:
            uVar4 = _DAT_01b68830;
            if (bone_index == 7) {
              uVar4 = _DAT_01b68834;
            }
            core_skeleton_cpp_FUN_00569040(local_28,uVar4);
            local_c8.x = local_f4[2];
            *(float *)((int)&local_c8 + (uint)bVar11 * -8 + 4) = local_f4[(uint)bVar11 * -2 + 3];
            *(float *)((int)&local_c8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 local_f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            this_ptr = param_1->ladder_to_climb;
            if (this_ptr == (CLadder *)0x0) {
              if (param_1[1].base.base.orient_matrix.m[2].x == 0.0) {
                if ((param_1->base).is_on_ground != 0) {
                  local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_28,4);
                  pCVar3 = local_28;
                  if ((float)_DAT_005d9f3c < (float)local_18) {
                    (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                              ((CDemonActor *)param_1,&local_c8,1.7);
                  }
                  else {
                    local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_28,1);
                    if (((float)_DAT_005d9f3c < (float)local_18) ||
                       (local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar3,2),
                       (float)_DAT_005d9f3c < (float)local_18)) {
                      (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                ((CDemonActor *)param_1,&local_c8,1.0);
                    }
                    else {
                      local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar3,3);
                      if ((float)_DAT_005d9f3c < (float)local_18) {
                        (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                  ((CDemonActor *)param_1,&local_c8,1.7);
                      }
                      else {
                        local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar3,5);
                        if ((float)_DAT_005d9f3c < (float)local_18) {
LAB_0046c466:
                          (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                    ((CDemonActor *)param_1,&local_c8,1.0);
                        }
                        else {
                          local_18._ub = (CDemonActor_vtable *)
                                         core_motion_cpp_FUN_00524a40(pCVar3,6);
                          if ((float)local_18 <= (float)_DAT_005d9f3c) {
                            local_18._ub = (CDemonActor_vtable *)
                                           core_motion_cpp_FUN_00524a40(pCVar3,7);
                            if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                            local_18._ub = (CDemonActor_vtable *)
                                           core_motion_cpp_FUN_00524a40(pCVar3,8);
                            if (((((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18._ub = (CDemonActor_vtable *)
                                                 core_motion_cpp_FUN_00524a40(pCVar3,9),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) &&
                                (local_18._ub = (CDemonActor_vtable *)
                                                core_motion_cpp_FUN_00524a40(pCVar3,10),
                                (float)local_18 <= (float)_DAT_005d9f3c)) &&
                               ((local_18._ub = (CDemonActor_vtable *)
                                                core_motion_cpp_FUN_00524a40(pCVar3,0xb),
                                (float)local_18 <= (float)_DAT_005d9f3c &&
                                (local_18._ub = (CDemonActor_vtable *)
                                                core_motion_cpp_FUN_00524a40(pCVar3,0xc),
                                (float)local_18 <= (float)_DAT_005d9f3c)))) {
                              local_18._ub = (CDemonActor_vtable *)
                                             core_motion_cpp_FUN_00524a40(pCVar3,0xd);
                              if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                              local_18._ub = (CDemonActor_vtable *)
                                             core_motion_cpp_FUN_00524a40(pCVar3,0xe);
                              if (((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18._ub = (CDemonActor_vtable *)
                                                 core_motion_cpp_FUN_00524a40(pCVar3,0xf),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) {
                                local_18._ub = (CDemonActor_vtable *)
                                               core_motion_cpp_FUN_00524a40(pCVar3,0x10);
                                if ((float)_DAT_005d9f3c < (float)local_18) {
                                  (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                            ((CDemonActor *)param_1,&local_c8,1.0);
                                }
                                goto LAB_0046bef7;
                              }
                            }
                          }
                          (*((param_1->base).base.vtable._ub)->processFootstepAtOffset)
                                    ((CDemonActor *)param_1,&local_c8,1.0);
                        }
                      }
                    }
                  }
                }
                goto LAB_0046bef7;
              }
              local_18 = (param_1->base).base.vtable;
              fVar2 = param_1[1].base.base.orient_matrix.m[2].x;
              in_stack_fffffe70 =
                   (**(code **)(*(int *)((int)fVar2 + 0x154) + 0x44))(fVar2,0x3f800000);
              core_actor_cpp_FUN_00408b40(param_1,local_f4 + 7);
              in_stack_fffffe6c = &CStack_9c;
              pCVar9 = &CStack_9c;
              pfVar8 = local_f4 + 4;
            }
            else {
              local_18 = (param_1->base).base.vtable;
              EVar5 = (*((this_ptr->base).vtable._ub)->getGroundType)(&this_ptr->base);
              core_actor_cpp_FUN_00408b40(param_1,&local_c8.y,EVar5);
              pCVar9 = &CStack_b8;
              pfVar8 = afStack_7c + 0xf;
            }
            pfVar10 = (float *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
            pCVar9->x = *pfVar8;
            this_ptr_00 = param_1;
            *pfVar10 = pfVar8[(uint)bVar11 * -2 + 1];
            pfVar10[(uint)bVar11 * -2 + 1] = (pfVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1]
            ;
            (*(code *)local_28->state_index)
                      ((CDemonActor *)this_ptr_00,in_stack_fffffe6c,in_stack_fffffe70,
                       in_stack_fffffe74);
          }
          else {
LAB_0046c965:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&param_1->base,bone_index);
          }
        }
        else if (bone_index < 3) {
          if (param_1->action_pending == 4) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe74 = 6.497387e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",param_1->action_pending,
                       0x8ac);
          }
          pCVar1 = param_1->object_to_pick_up;
          if (pCVar1 == (CDemonActor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d",0x8b2);
          }
          else {
            iVar6 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)param_1);
            if (iVar6 == 0) {
              param_1->object_to_pick_up = (CDemonActor *)0x0;
            }
            else {
              pCVar1 = param_1->object_to_pick_up;
              if ((pCVar1 != (CDemonActor *)0x0) &&
                 (iVar7 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,(CDemonActor *)param_1),
                 iVar7 == 4)) {
                (param_1->base).layer_action_t = 0.0;
                (param_1->base).layer_action_index = 0xe;
              }
              if (iVar6 == 2) {
                if (param_1->action_pending != 0) {
                  shape_edittool_cpp_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
                }
                param_1->action_pending = 1;
              }
              core_hero_cpp_FUN_004ec280(param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0046c965;
          pCVar1 = (param_1->base).carry_hands[1].carry_actor;
          core_doc_cpp_FUN_004707d0(param_1);
          iVar6 = param_1->action_pending;
          if (iVar6 == 2) {
            if (pCVar1 != (CDemonActor *)0x0) {
              (*((pCVar1->vtable)._ub)->setPositionAndOrientation)(pCVar1,local_38,local_34);
            }
LAB_0046bf49:
            param_1->action_pending = 0;
          }
          else {
            if (iVar6 == 6) goto LAB_0046bf49;
            in_stack_fffffe74 = 6.497255e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\ndoc.cpp line %d" + 1,iVar6,0x88e);
          }
          iVar6 = (param_1->base).layer_action_index;
          param_1->target_actor = (CDemonActor *)0x0;
          if (iVar6 == 0xe) {
            (param_1->base).layer_action_t = 0.0;
            (param_1->base).layer_action_index = 0;
          }
          if (pCVar1 == (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
        }
      }
      else if (bone_index < 7) {
        local_2c = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             ((param_1->base).grabbed_by,g_CEnemyClassInfo.name_hash);
        local_30 = local_2c;
        if (local_2c != (CCharacter *)0x0) {
          core_skeleton_cpp_FUN_00569040(local_28,_DAT_01b68844);
          pfVar8 = afStack_7c + 5;
          local_68[0] = (float)local_5c;
          afStack_7c[(uint)bVar11 * -2 + 6] = afStack_7c[(uint)bVar11 * -2 + 9];
          afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
          core_actor_cpp_FUN_00408b40(param_1,pfVar8);
          this_ptr_01 = (SDamageInfo *)&stack0xfffffe90;
          afStack_ac[2] = afStack_7c[2];
          afStack_ac[(uint)bVar11 * -2 + 3] = afStack_7c[(uint)bVar11 * -2 + 3];
          *(float *)((int)&CStack_9c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_01);
          local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          core_actor_cpp_FUN_00408bb0(local_2c,afStack_ac + 2);
          CStack_9c.y = local_e0;
          local_90[(uint)bVar11 * -2 + -1] = local_f4[(uint)bVar11 * -2 + 6];
          local_90[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
               local_f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          if (&local_154 != &CStack_9c.y) {
            local_154 = CStack_9c.y;
            local_150 = CStack_9c.z;
            local_14c = local_90[0];
          }
          local_13c = param_1;
          local_138 = param_1;
          local_148 = AMMO_TYPE_GOLD;
          (*(((local_30->base).vtable._uc)->_uc).processDamage)
                    (local_30,(SDamageInfo *)&stack0xfffffe90);
          if (0.0 < fStack_164) {
            fVar12 = (float10)fStack_164 * (float10)_DAT_005d9f34;
            round();
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                      (g_CGorePtr,&CStack_9c,(CVector3f *)0x0,(int)ROUND(fVar12) + 1,BLOOD_TYPE_RED)
            ;
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"kick1.wav");
          }
        }
        local_24 = 0;
        for (local_20 = 0; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
          iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar7 = *(int *)((int)g_CDemonSetPtr->enemies + local_24);
          local_f8 = *(float *)(iVar6 + 0x20) - *(float *)(iVar7 + 0x20);
          local_f4[0] = *(float *)(iVar6 + 0x24) - *(float *)(iVar7 + 0x24);
          local_f4[1] = *(float *)(iVar6 + 0x28) - *(float *)(iVar7 + 0x28);
          local_50 = local_f8;
          afStack_7c[(uint)bVar11 * -2 + 0xc] = local_f4[(uint)bVar11 * -2];
          afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
               local_f4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          local_1c = iVar7;
          if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <=
              (float)_DAT_005d9f44) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&local_134);
            local_134.ammo_type = AMMO_TYPE_GOLD;
            local_134.damage_amount = 5.0;
            (**(code **)(*(int *)(local_1c + 0x154) + 0x108))(local_1c,&local_134);
          }
          local_24 = local_24 + 4;
        }
        (param_1->base).grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0046be53;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&param_1->base,bone_index);
      }
      else if (bone_index < 0x10) {
        pCVar1 = (param_1->base).grabbed_by;
        if (pCVar1 != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408bb0(param_1,&pCVar1->location);
          CStack_b8.z = local_80;
          afStack_ac[(uint)bVar11 * -2] = afStack_7c[(uint)bVar11 * -2];
          afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_7c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          if (0.0 < afStack_ac[1]) {
            (*((param_1->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&param_1->base,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0046c965;
          core_doc_cpp_FUN_00470750(param_1);
        }
        else if (bone_index < 0x16) {
          if ((param_1->base).carry_hands[1].carry_actor ==
              (CDemonActor *)param_1[1].base.base.orient_matrix.m[2].y) {
            param_1[1].base.base.orient_matrix.m[2].y = 0.0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(param_1,1);
          if (param_1->action_pending == 1) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe74 = 6.497734e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",param_1->action_pending,
                       0x8f0);
          }
        }
        else {
          if (param_1->action_pending == 5) {
            param_1->action_pending = 0;
          }
          else {
            in_stack_fffffe74 = 6.500307e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",param_1->action_pending,
                       0x96b);
          }
          if (param_1->door_to_open == (CDoor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d",0x971);
          }
          iVar6 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(param_1);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_28,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_FUN_004eb7f0(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0046c965;
      }
      else if (bone_index < 0x29b) {
        (param_1->base).velocity.y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0046c965;
        (param_1->base).velocity.y = 0x41000000;
      }
    }
LAB_0046bef7:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
