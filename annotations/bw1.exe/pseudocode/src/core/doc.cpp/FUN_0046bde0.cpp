// Name: core_doc.cpp_FUN_0046bde0
// Address: 0046bde0
// Address Range: [[0046bde0, 0046c973]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046bde0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046bde0(CCharacter *param_1,float param_2)

{
  double dVar1;
  float fVar2;
  CHero_full_vtable *pCVar3;
  CFlame *pCVar4;
  CMotionController *pCVar5;
  uint bone_index;
  uint uVar6;
  EGroundType ground_type;
  int iVar7;
  int iVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  float *pfVar11;
  byte bVar12;
  float10 fVar13;
  float afStackY_10e0 [978];
  CCharacter *this_ptr;
  CVector3f *position;
  float in_stack_fffffe74;
  SDamageInfo *this_ptr_00;
  ulonglong uStack_178;
  SDamageInfo local_170 [4];
  UActorVTable local_16c;
  float local_154;
  float local_150;
  float local_14c;
  uint local_148;
  CCharacter *local_13c;
  CCharacter *local_138;
  SDamageInfo local_134 [4];
  uint local_130;
  uint local_10c;
  float local_f8;
  float local_f4 [4];
  float fStack_e4;
  float local_e0;
  float afStack_d8 [3];
  byte auStack_cc [8];
  float afStack_c4 [5];
  uint local_b0;
  CVector3f CStack_ac;
  float fStack_a0;
  CVector3f CStack_9c;
  float local_90 [4];
  uint local_80;
  float afStack_7c [5];
  float local_68 [3];
  uint local_5c;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  int *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  CMotionController *local_28;
  int local_24;
  int local_20;
  int local_1c;
  UActorVTable local_18;
  
  bVar12 = 0;
  local_28 = &(param_1->model).base;
  local_34 = &param_1[2].flames[0x1a].globe.quadratic_radius_scaled;
  local_38 = &param_1[2].flames[0x1a].globe.position_scaled.y;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270(local_28,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0046be53:
            uVar6 = _DAT_01b68830;
            if (bone_index == 7) {
              uVar6 = _DAT_01b68834;
            }
            core_skeleton_cpp_FUN_00569040(local_28,uVar6);
            auStack_cc._4_4_ = local_f4[2];
            afStack_c4[(uint)bVar12 * -2] = local_f4[(uint)bVar12 * -2 + 3];
            afStack_c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 local_f4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            fVar2 = param_1[2].flames[0x1a].flame_size.z;
            if (fVar2 == 0.0) {
              if (*(int *)(param_1[2].flames[0x1a].on_event + 0x24) == 0) {
                if (param_1->is_on_ground != 0) {
                  local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_28,4);
                  pCVar5 = local_28;
                  if ((float)_DAT_005d9f3c < (float)local_18) {
                    (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                              (&param_1->base,(CVector3f *)(auStack_cc + 4),1.7);
                  }
                  else {
                    local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_28,1);
                    if (((float)_DAT_005d9f3c < (float)local_18) ||
                       (local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar5,2),
                       (float)_DAT_005d9f3c < (float)local_18)) {
                      (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                (&param_1->base,(CVector3f *)(auStack_cc + 4),1.0);
                    }
                    else {
                      local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar5,3);
                      if ((float)_DAT_005d9f3c < (float)local_18) {
                        (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                  (&param_1->base,(CVector3f *)(auStack_cc + 4),1.7);
                      }
                      else {
                        local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(pCVar5,5);
                        if ((float)_DAT_005d9f3c < (float)local_18) {
LAB_0046c466:
                          (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                    (&param_1->base,(CVector3f *)(auStack_cc + 4),1.0);
                        }
                        else {
                          local_18._ub = (CDemonActor_vtable *)
                                         core_motion_cpp_FUN_00524a40(pCVar5,6);
                          if ((float)local_18 <= (float)_DAT_005d9f3c) {
                            local_18._ub = (CDemonActor_vtable *)
                                           core_motion_cpp_FUN_00524a40(pCVar5,7);
                            if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                            local_18._ub = (CDemonActor_vtable *)
                                           core_motion_cpp_FUN_00524a40(pCVar5,8);
                            if (((((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18._ub = (CDemonActor_vtable *)
                                                 core_motion_cpp_FUN_00524a40(pCVar5,9),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) &&
                                (local_18._ub = (CDemonActor_vtable *)
                                                core_motion_cpp_FUN_00524a40(pCVar5,10),
                                (float)local_18 <= (float)_DAT_005d9f3c)) &&
                               ((local_18._ub = (CDemonActor_vtable *)
                                                core_motion_cpp_FUN_00524a40(pCVar5,0xb),
                                (float)local_18 <= (float)_DAT_005d9f3c &&
                                (local_18._ub = (CDemonActor_vtable *)
                                                core_motion_cpp_FUN_00524a40(pCVar5,0xc),
                                (float)local_18 <= (float)_DAT_005d9f3c)))) {
                              local_18._ub = (CDemonActor_vtable *)
                                             core_motion_cpp_FUN_00524a40(pCVar5,0xd);
                              if ((float)_DAT_005d9f3c < (float)local_18) goto LAB_0046c466;
                              local_18._ub = (CDemonActor_vtable *)
                                             core_motion_cpp_FUN_00524a40(pCVar5,0xe);
                              if (((float)local_18 <= (float)_DAT_005d9f3c) &&
                                 (local_18._ub = (CDemonActor_vtable *)
                                                 core_motion_cpp_FUN_00524a40(pCVar5,0xf),
                                 (float)local_18 <= (float)_DAT_005d9f3c)) {
                                local_18._ub = (CDemonActor_vtable *)
                                               core_motion_cpp_FUN_00524a40(pCVar5,0x10);
                                if ((float)_DAT_005d9f3c < (float)local_18) {
                                  (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                            (&param_1->base,(CVector3f *)(auStack_cc + 4),1.0);
                                }
                                goto LAB_0046bef7;
                              }
                            }
                          }
                          (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                    (&param_1->base,(CVector3f *)(auStack_cc + 4),1.0);
                        }
                      }
                    }
                  }
                }
                goto LAB_0046bef7;
              }
              local_18 = (param_1->base).vtable;
              iVar7 = *(int *)(param_1[2].flames[0x1a].on_event + 0x24);
              ground_type = (**(code **)(*(int *)(iVar7 + 0x154) + 0x44))(iVar7,0x3f800000);
              core_actor_cpp_FUN_00408b40(param_1,local_f4 + 7);
              position = &CStack_9c;
              pCVar10 = &CStack_9c;
              pfVar9 = local_f4 + 4;
            }
            else {
              local_18 = (param_1->base).vtable;
              ground_type = (**(code **)(*(int *)((int)fVar2 + 0x154) + 0x44))(fVar2,0x3f800000);
              core_actor_cpp_FUN_00408b40(param_1,local_f4 + 7);
              position = (CVector3f *)auStack_cc;
              pCVar10 = (CVector3f *)auStack_cc;
              pfVar9 = afStack_7c + 10;
            }
            pfVar11 = (float *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
            pCVar10->x = *pfVar9;
            this_ptr = param_1;
            *pfVar11 = pfVar9[(uint)bVar12 * -2 + 1];
            pfVar11[(uint)bVar12 * -2 + 1] = (pfVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1]
            ;
            (*(code *)local_28->state_index)(&this_ptr->base,position,ground_type,in_stack_fffffe74)
            ;
          }
          else {
LAB_0046c965:
            core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          fVar2 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y;
          if (fVar2 == 5.60519e-45) {
            param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 0.0;
          }
          else {
            in_stack_fffffe74 = 6.497387e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",fVar2,0x8ac);
          }
          pCVar3 = param_1[2].flames[0x1a].base.vtable._uh;
          if (pCVar3 == (CHero_full_vtable *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\ndoc.cpp line %d",0x8b2);
          }
          else {
            iVar7 = (**(code **)((pCVar3->_uh).canReachPickup + 0x84))(pCVar3,param_1);
            if (iVar7 == 0) {
              param_1[2].flames[0x1a].base.vtable._ub = (CDemonActor_vtable *)0x0;
            }
            else {
              pCVar3 = param_1[2].flames[0x1a].base.vtable._uh;
              if ((pCVar3 != (CHero_full_vtable *)0x0) &&
                 (iVar8 = (**(code **)((pCVar3->_uh).canReachPickup + 0x84))(pCVar3,param_1),
                 iVar8 == 4)) {
                param_1->layer_action_t = 0.0;
                param_1->layer_action_index = 0xe;
              }
              if (iVar7 == 2) {
                fVar2 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y;
                if (fVar2 != 0.0) {
                  in_stack_fffffe74 = 6.497503e-39;
                  shape_edittool_cpp_FUN_00494340
                            (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",fVar2,0x8d0);
                }
                param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 1.4013e-45
                ;
              }
              core_hero_cpp_FUN_004ec280((CHero *)param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0046c965;
          iVar7 = *(int *)&param_1->field_0x2628;
          core_doc_cpp_FUN_004707d0(param_1);
          fVar2 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y;
          if (fVar2 == 2.8026e-45) {
            if (iVar7 != 0) {
              (**(code **)(*(int *)(iVar7 + 0x154) + 0x68))(iVar7,local_38,local_34);
            }
LAB_0046bf49:
            param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 0.0;
          }
          else {
            if (fVar2 == 8.40779e-45) goto LAB_0046bf49;
            in_stack_fffffe74 = 6.497255e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"<actionPending = %d\ndoc.cpp line %d" + 1,fVar2,0x88e);
          }
          iVar8 = param_1->layer_action_index;
          param_1[2].flames[0x1a].globe.position_scaled.x = 0;
          if (iVar8 == 0xe) {
            param_1->layer_action_t = 0.0;
            param_1->layer_action_index = 0;
          }
          if (iVar7 == *(int *)(param_1[2].flames[0x1a].on_event + 0x28)) {
            pCVar4 = param_1[2].flames;
            pCVar4[0x1a].on_event[0x28] = '\0';
            pCVar4[0x1a].on_event[0x29] = '\0';
            pCVar4[0x1a].on_event[0x2a] = '\0';
            pCVar4[0x1a].on_event[0x2b] = '\0';
          }
        }
      }
      else if (bone_index < 7) {
        local_2c = core_actor_cpp_castToClassHash_FUN_0040c600
                             (param_1->grabbed_by,g_CEnemyClassInfo.name_hash);
        local_30 = local_2c;
        dVar1 = uStack_178;
        if (local_2c != 0) {
          core_skeleton_cpp_FUN_00569040(local_28,_DAT_01b68844);
          pfVar9 = afStack_7c + 5;
          local_68[0] = (float)local_5c;
          afStack_7c[(uint)bVar12 * -2 + 6] = afStack_7c[(uint)bVar12 * -2 + 9];
          afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
               afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
          core_actor_cpp_FUN_00408b40(param_1,pfVar9);
          this_ptr_00 = local_170;
          CStack_ac.z = afStack_7c[2];
          (&fStack_a0)[(uint)bVar12 * -2] = afStack_7c[(uint)bVar12 * -2 + 3];
          *(float *)((int)&CStack_9c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
               afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_00);
          local_16c = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
          local_18 = local_16c;
          core_actor_cpp_FUN_00408bb0(local_2c,&CStack_ac.z);
          CStack_9c.y = local_e0;
          local_90[(uint)bVar12 * -2 + -1] = local_f4[(uint)bVar12 * -2 + 6];
          local_90[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
               local_f4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
          if (&local_154 != &CStack_9c.y) {
            local_154 = CStack_9c.y;
            local_150 = CStack_9c.z;
            local_14c = local_90[0];
          }
          local_13c = param_1;
          local_138 = param_1;
          local_148 = 4;
          (**(code **)(*(int *)(local_30 + 0x154) + 0x108))(local_30,local_170);
          dVar1 = (double)uStack_178._4_4_;
          if (0.0 < dVar1) {
            fVar13 = (float10)uStack_178._4_4_ * (float10)_DAT_005d9f34;
            round();
            local_20 = (int)ROUND(fVar13);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                      (g_CGorePtr,&CStack_ac,(CVector3f *)0x0,local_20 + 1,BLOOD_TYPE_RED);
            in_stack_fffffe74 = 6.499962e-39;
            (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"kick1.wav");
          }
        }
        uStack_178 = dVar1;
        local_24 = 0;
        for (local_20 = 0; local_20 < g_CDemonSetPtr->enemy_count; local_20 = local_20 + 1) {
          iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar8 = *(int *)((int)g_CDemonSetPtr->enemies + local_24);
          local_f8 = *(float *)(iVar7 + 0x20) - *(float *)(iVar8 + 0x20);
          local_f4[0] = *(float *)(iVar7 + 0x24) - *(float *)(iVar8 + 0x24);
          local_f4[1] = *(float *)(iVar7 + 0x28) - *(float *)(iVar8 + 0x28);
          local_50 = local_f8;
          afStack_7c[(uint)bVar12 * -2 + 0xc] = local_f4[(uint)bVar12 * -2];
          afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
               local_f4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          local_1c = iVar8;
          if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <=
              (float)_DAT_005d9f44) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(local_134);
            local_10c = 4;
            local_130 = 0x40a00000;
            (**(code **)(*(int *)(local_1c + 0x154) + 0x108))(local_1c,local_134);
          }
          local_24 = local_24 + 4;
        }
        param_1->grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0046be53;
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        if (param_1->grabbed_by != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408bb0(param_1,&param_1->grabbed_by->location);
          local_b0 = local_80;
          *(float *)((int)&CStack_ac + (uint)bVar12 * -8) = afStack_7c[(uint)bVar12 * -2];
          *(float *)((int)&CStack_ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 4) =
               afStack_7c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          if (0.0 < CStack_ac.y) {
            (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"hit-gh[4,7].wav");
          }
        }
      }
      else if (bone_index == 0x11) {
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0046c965;
          core_doc_cpp_FUN_00470750(param_1);
        }
        else if (bone_index < 0x16) {
          if (*(int *)&param_1->field_0x2628 == *(int *)(param_1[2].flames[0x1a].on_event + 0x28)) {
            pCVar4 = param_1[2].flames;
            pCVar4[0x1a].on_event[0x28] = '\0';
            pCVar4[0x1a].on_event[0x29] = '\0';
            pCVar4[0x1a].on_event[0x2a] = '\0';
            pCVar4[0x1a].on_event[0x2b] = '\0';
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0((CHero *)param_1,1);
          fVar2 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y;
          if (fVar2 == 1.4013e-45) {
            param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 0.0;
          }
          else {
            in_stack_fffffe74 = 6.497734e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",fVar2,0x8f0);
          }
        }
        else {
          fVar2 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y;
          if (fVar2 == 7.00649e-45) {
            param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 0.0;
          }
          else {
            in_stack_fffffe74 = 6.500307e-39;
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",fVar2,0x96b);
          }
          if (param_1[2].flames[0x1a].base.prev_actor == (CDemonActor *)0x0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"doorToOpen == NULL\ndoc.cpp line %d",0x971);
          }
          iVar7 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0((CHero *)param_1);
          if (iVar7 == 0) {
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
        (param_1->velocity).y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0046c965;
        (param_1->velocity).y = 0x41000000;
      }
    }
LAB_0046bef7:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
