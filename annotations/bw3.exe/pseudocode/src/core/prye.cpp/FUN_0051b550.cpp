// Name: core_prye.cpp_FUN_0051b550
// Address: 0051b550
// Address Range: [[0051b550, 0051c09a]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051b550(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051b550(CCharacter *param_1,float param_2)

{
  float fVar1;
  CFlame *pCVar2;
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
  float afStackY_10d0 [978];
  CCharacter *this_ptr;
  CVector3f *position;
  CGore *in_stack_fffffe84;
  uint *puVar12;
  SDamageInfo *this_ptr_00;
  SDamageInfo local_160 [4];
  UActorVTable local_15c;
  float local_144;
  float local_140;
  uint local_13c;
  CCharacter *local_12c;
  CCharacter *local_128;
  SDamageInfo local_124 [4];
  uint local_120;
  byte local_e8 [12];
  float local_dc;
  float local_d8 [4];
  CVector3f CStack_c8;
  byte auStack_bc [16];
  CVector3f local_ac;
  float local_a0;
  float afStack_9c [8];
  uint local_7c;
  float afStack_78 [4];
  float local_68;
  float local_64;
  uint local_58;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f *local_34;
  CVector3f *local_30;
  int local_2c;
  int local_28;
  CMotionController *local_24;
  int local_20;
  int local_1c;
  int local_18;
  UActorVTable local_14;
  
  bVar10 = 0;
  local_24 = &(param_1->model).base;
  local_30 = param_1[2].flames[0x15].base.orient_matrix.m + 2;
  local_34 = param_1[2].flames[0x15].base.orient_matrix.m + 1;
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004fbb70(local_24,&param_2);
    if (bone_index < 0x12) {
      if (bone_index < 6) {
        if (bone_index < 2) {
          if (bone_index == 1) {
LAB_0051b5c3:
            uVar4 = _DAT_01ed36f8;
            if (bone_index == 7) {
              uVar4 = _DAT_01ed36fc;
            }
            core_skeleton_cpp_FUN_0054dbd0(local_24,uVar4);
            local_ac.x = local_a0;
            *(float *)((int)&local_ac + (uint)bVar10 * -8 + 4) = afStack_9c[(uint)bVar10 * -2];
            *(float *)((int)&local_ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            fVar1 = param_1[2].flames[0x15].base.orient_matrix.m[0].x;
            if (fVar1 == 0.0) {
              if (*(int *)(param_1[2].flames[0x15].base.create_event + 0x40) == 0) {
                if (param_1->is_on_ground != 0) {
                  local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_004fc350(local_24,4);
                  pCVar3 = local_24;
                  if ((float)_DAT_005cd307 < (float)local_14) {
                    (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                              (&param_1->base,&local_ac,1.7);
                  }
                  else {
                    local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_004fc350(local_24,1);
                    if (((float)_DAT_005cd307 < (float)local_14) ||
                       (local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_004fc350(pCVar3,2),
                       (float)_DAT_005cd307 < (float)local_14)) {
                      (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                (&param_1->base,&local_ac,1.0);
                    }
                    else {
                      local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_004fc350(pCVar3,3);
                      if ((float)_DAT_005cd307 < (float)local_14) {
                        (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                  (&param_1->base,&local_ac,1.7);
                      }
                      else {
                        local_14._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_004fc350(pCVar3,5);
                        if ((((float)local_14 <= (float)_DAT_005cd307) &&
                            (local_14._ub = (CDemonActor_vtable *)
                                            core_motion_cpp_FUN_004fc350(pCVar3,6),
                            (float)local_14 <= (float)_DAT_005cd307)) &&
                           (local_14._ub = (CDemonActor_vtable *)
                                           core_motion_cpp_FUN_004fc350(pCVar3,7),
                           (float)local_14 <= (float)_DAT_005cd307)) {
                          local_14._ub = (CDemonActor_vtable *)
                                         core_motion_cpp_FUN_004fc350(pCVar3,8);
                          if ((((float)_DAT_005cd307 < (float)local_14) ||
                              (local_14._ub = (CDemonActor_vtable *)
                                              core_motion_cpp_FUN_004fc350(pCVar3,9),
                              (float)_DAT_005cd307 < (float)local_14)) ||
                             (local_14._ub = (CDemonActor_vtable *)
                                             core_motion_cpp_FUN_004fc350(pCVar3,10),
                             (float)_DAT_005cd307 < (float)local_14)) {
LAB_0051bbd6:
                            (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                      (&param_1->base,&local_ac,1.0);
                            goto LAB_0051b667;
                          }
                          local_14._ub = (CDemonActor_vtable *)
                                         core_motion_cpp_FUN_004fc350(pCVar3,0xb);
                          if ((float)local_14 <= (float)_DAT_005cd307) {
                            local_14._ub = (CDemonActor_vtable *)
                                           core_motion_cpp_FUN_004fc350(pCVar3,0xc);
                            if ((float)_DAT_005cd307 < (float)local_14) goto LAB_0051bbd6;
                            local_14._ub = (CDemonActor_vtable *)
                                           core_motion_cpp_FUN_004fc350(pCVar3,0xd);
                            if ((((float)local_14 <= (float)_DAT_005cd307) &&
                                (local_14._ub = (CDemonActor_vtable *)
                                                core_motion_cpp_FUN_004fc350(pCVar3,0xe),
                                (float)local_14 <= (float)_DAT_005cd307)) &&
                               (local_14._ub = (CDemonActor_vtable *)
                                               core_motion_cpp_FUN_004fc350(pCVar3,0xf),
                               (float)local_14 <= (float)_DAT_005cd307)) {
                              local_14._ub = (CDemonActor_vtable *)
                                             core_motion_cpp_FUN_004fc350(pCVar3,0x10);
                              if ((float)_DAT_005cd307 < (float)local_14) {
                                (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                          (&param_1->base,&local_ac,1.0);
                              }
                              goto LAB_0051b667;
                            }
                          }
                        }
                        (*((param_1->base).vtable._ub)->processFootstepAtOffset)
                                  (&param_1->base,&local_ac,1.0);
                      }
                    }
                  }
                }
                goto LAB_0051b667;
              }
              local_14 = (param_1->base).vtable;
              iVar5 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x40);
              ground_type = (**(code **)(*(int *)(iVar5 + 0x154) + 0x44))(iVar5,0x3f800000);
              core_actor_cpp_FUN_00408b80(param_1,auStack_bc);
              position = (CVector3f *)(local_e8 + 8);
              pCVar8 = (CVector3f *)(local_e8 + 8);
              pfVar7 = local_d8 + 1;
            }
            else {
              local_14 = (param_1->base).vtable;
              ground_type = (**(code **)(*(int *)((int)fVar1 + 0x154) + 0x44))(fVar1,0x3f800000);
              core_actor_cpp_FUN_00408b80(param_1,auStack_bc);
              position = &CStack_c8;
              pCVar8 = &CStack_c8;
              pfVar7 = afStack_78 + 10;
            }
            pfVar9 = (float *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
            pCVar8->x = *pfVar7;
            this_ptr = param_1;
            *pfVar9 = pfVar7[(uint)bVar10 * -2 + 1];
            pfVar9[(uint)bVar10 * -2 + 1] = (pfVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            (*(code *)local_24->state_index)
                      (&this_ptr->base,position,ground_type,(float)in_stack_fffffe84);
          }
          else {
LAB_0051c08c:
            core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(param_1,bone_index);
          }
        }
        else if (bone_index < 3) {
          iVar5 = param_1[2].flames[0x14].render_corona;
          if (iVar5 == 4) {
            param_1[2].flames[0x14].render_corona = 0;
          }
          else {
            in_stack_fffffe84 = (CGore *)0x51b782;
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar5,0xa56);
          }
          fVar1 = param_1[2].flames[0x15].base.orient.vec.x;
          if (fVar1 == 0.0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"Object to pick up is now NULL\nprye.cpp line %d",0xa5c);
          }
          else {
            iVar5 = (**(code **)(*(int *)((int)fVar1 + 0x154) + 0x84))(fVar1,param_1);
            if (iVar5 == 0) {
              param_1[2].flames[0x15].base.orient.vec.x = 0.0;
            }
            else {
              fVar1 = param_1[2].flames[0x15].base.orient.vec.x;
              if ((fVar1 != 0.0) &&
                 (iVar6 = (**(code **)(*(int *)((int)fVar1 + 0x154) + 0x84))(fVar1,param_1),
                 iVar6 == 4)) {
                param_1->layer_action_t = 0.0;
                param_1->layer_action_index = 0x11;
              }
              if (iVar5 == 2) {
                iVar5 = param_1[2].flames[0x14].render_corona;
                if (iVar5 != 0) {
                  in_stack_fffffe84 = (CGore *)0x51b7d5;
                  shape_edittool_cpp_FUN_0047cee0
                            (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar5,0xa7a);
                }
                param_1[2].flames[0x14].render_corona = 1;
              }
              core_hero_cpp_FUN_004d4160((CHero *)param_1,1);
            }
          }
        }
        else {
          if (bone_index != 3) goto LAB_0051c08c;
          iVar5 = *(int *)&param_1->field_0x2628;
          core_prye_cpp_FUN_00520da0(param_1);
          iVar6 = param_1[2].flames[0x14].render_corona;
          if (iVar6 == 2) {
            if (iVar5 != 0) {
              (**(code **)(*(int *)(iVar5 + 0x154) + 0x68))(iVar5,local_34,local_30);
            }
LAB_0051b6b9:
            param_1[2].flames[0x14].render_corona = 0;
          }
          else {
            if (iVar6 == 6) goto LAB_0051b6b9;
            in_stack_fffffe84 = (CGore *)0x51b724;
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar6,0xa38);
          }
          iVar6 = param_1->layer_action_index;
          param_1[2].flames[0x15].base.orient_matrix.m[0].z = 0.0;
          if (iVar6 == 0x11) {
            param_1->layer_action_t = 0.0;
            param_1->layer_action_index = 0;
          }
          if (iVar5 == *(int *)(param_1[2].flames[0x15].base.create_event + 0x44)) {
            pCVar2 = param_1[2].flames + 0x15;
            (pCVar2->base).create_event[0x44] = '\0';
            (pCVar2->base).create_event[0x45] = '\0';
            (pCVar2->base).create_event[0x46] = '\0';
            (pCVar2->base).create_event[0x47] = '\0';
          }
        }
      }
      else if (bone_index < 7) {
        local_28 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (param_1->grabbed_by,g_CEnemyClassInfo.name_hash);
        local_2c = local_28;
        if (local_28 != 0) {
          core_skeleton_cpp_FUN_0054dbd0(local_24,_DAT_01ed370c);
          puVar12 = &local_7c;
          local_7c = local_58;
          afStack_78[(uint)bVar10 * -2] = afStack_78[(uint)bVar10 * -2 + 9];
          afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
          core_actor_cpp_FUN_00408b80(param_1,puVar12);
          this_ptr_00 = local_160;
          local_e8._0_4_ = afStack_9c[2];
          *(float *)(local_e8 + (uint)bVar10 * -8 + 4) = afStack_9c[(uint)bVar10 * -2 + 3];
          *(float *)(local_e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(this_ptr_00);
          local_15c = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,3.0);
          local_14 = local_15c;
          core_actor_cpp_FUN_00408bf0(local_28,local_e8);
          local_dc = local_64;
          local_d8[(uint)bVar10 * -2] = afStack_78[(uint)bVar10 * -2 + 6];
          local_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          if (&local_144 != &local_dc) {
            local_144 = local_dc;
            local_140 = local_d8[0];
            local_13c = local_d8[1];
          }
          local_12c = param_1;
          local_128 = param_1;
          (**(code **)(*(int *)(local_2c + 0x154) + 0x108))(local_2c,local_160);
          if (0.0 < (float)local_15c) {
            fVar11 = (float10)(float)local_15c * (float10)_DAT_005cd2ff;
            round();
            local_14 = (UActorVTable)(int)ROUND(fVar11);
            in_stack_fffffe84 = g_CGorePtr;
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                      (g_CGorePtr,(CVector3f *)local_e8,(CVector3f *)0x0,
                       (int)((int)&(local_14._ub)->setup + 1),BLOOD_TYPE_RED);
          }
        }
        local_20 = 0;
        for (local_1c = 0; local_1c < g_CDemonSetPtr->enemy_count; local_1c = local_1c + 1) {
          local_18 = *(int *)((int)g_CDemonSetPtr->enemies + local_20);
          iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_4c = *(float *)(iVar5 + 0x20) - *(float *)(local_18 + 0x20);
          local_48 = *(float *)(iVar5 + 0x24) - *(float *)(local_18 + 0x24);
          local_44 = *(float *)(iVar5 + 0x28) - *(float *)(local_18 + 0x28);
          afStack_78[2] = local_4c;
          afStack_78[(uint)bVar10 * -2 + 3] = afStack_78[(uint)bVar10 * -2 + 0xc];
          afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_78[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
          if (SQRT(local_68 * local_68 +
                   afStack_78[2] * afStack_78[2] + afStack_78[3] * afStack_78[3]) <=
              (float)_DAT_005cd30f) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(local_124);
            local_120 = 0x40a00000;
            (**(code **)(*(int *)(local_18 + 0x154) + 0x108))(local_18,local_124);
          }
          local_20 = local_20 + 4;
        }
        param_1->grabbed_by = (CDemonActor *)0x0;
      }
      else if (bone_index < 0xf) {
        if (bone_index == 7) goto LAB_0051b5c3;
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(param_1,bone_index);
      }
      else if (bone_index < 0x10) {
        if (param_1->grabbed_by != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408bf0(param_1,&param_1->grabbed_by->location);
        }
      }
      else if (bone_index == 0x11) {
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(param_1,bone_index);
      }
    }
    else if (0x12 < bone_index) {
      if (bone_index < 0x17) {
        if (bone_index < 0x15) {
          if (bone_index != 0x13) goto LAB_0051c08c;
          core_prye_cpp_FUN_00520d20(param_1);
        }
        else if (bone_index < 0x16) {
          if (*(int *)&param_1->field_0x2628 ==
              *(int *)(param_1[2].flames[0x15].base.create_event + 0x44)) {
            pCVar2 = param_1[2].flames + 0x15;
            (pCVar2->base).create_event[0x44] = '\0';
            (pCVar2->base).create_event[0x45] = '\0';
            (pCVar2->base).create_event[0x46] = '\0';
            (pCVar2->base).create_event[0x47] = '\0';
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0((CHero *)param_1,1);
          iVar5 = param_1[2].flames[0x14].render_corona;
          if (iVar5 == 1) {
            param_1[2].flames[0x14].render_corona = 0;
          }
          else {
            in_stack_fffffe84 = (CGore *)0x51b87a;
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar5,0xa9a);
          }
        }
        else {
          iVar5 = param_1[2].flames[0x14].render_corona;
          if (iVar5 == 5) {
            param_1[2].flames[0x14].render_corona = 0;
          }
          else {
            in_stack_fffffe84 = (CGore *)0x51bf5d;
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"actionPending = %d\nprye.cpp line %d",iVar5,0xb13);
          }
          if (param_1[2].flames[0x15].base.location.area_id == 0) {
            shape_edittool_cpp_FUN_0047cee0
                      (g_CEditorToolsPtr,"doorToOpen == NULL\nprye.cpp line %d",0xb19);
          }
          iVar5 = core_hero_cpp_CHero_tryOpenDoor_FUN_004d3250((CHero *)param_1);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(local_24,0,1);
          }
        }
      }
      else if (bone_index < 0x18) {
        core_hero_cpp_FUN_004d3460(param_1);
      }
      else if (bone_index < 0x29a) {
        if (bone_index != 0x18) goto LAB_0051c08c;
      }
      else if (bone_index < 0x29b) {
        (param_1->velocity).y = 0x41200000;
      }
      else {
        if (bone_index != 0x29b) goto LAB_0051c08c;
        (param_1->velocity).y = 0x41000000;
      }
    }
LAB_0051b667:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
