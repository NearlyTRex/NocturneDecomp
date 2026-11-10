// Name: core_doc.cpp_FUN_00474400
// Address: 00474400
// Address Range: [[00474400, 00474ee8]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00474400(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00474400(CCharacter *param_1,float param_2)

{
  CInventory *this_ptr;
  float fVar1;
  CDemonActor *item_to_remove;
  CFlame *pCVar2;
  CGame *pCVar3;
  CLightGun *pCVar4;
  int iVar5;
  uint uVar6;
  CMotionList *pCVar7;
  CDynamite *this_ptr_00;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  int aiStackY_1068 [1013];
  uint uVar11;
  uint local_80;
  uint local_7c;
  uint local_78;
  CVector3f local_74;
  float local_68;
  int aiStack_64 [7];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CMotionController *local_38;
  int local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  CInventory *local_1c;
  float local_18;
  
  bVar10 = 0;
  if ((param_1->layer_action_index == 0xe) && (*(int *)&param_1->field_0x2628 == 0)) {
    param_1->layer_action_t = 0.0;
    param_1->layer_action_index = 0;
  }
  local_44 = -1;
  local_24 = 0;
  if (param_1[2].flames[0x1a].animation_time == 0.0) {
    if (param_1[2].flames[0x1a].globe.corona_mode != 0) {
      if (*(int *)&param_1->field_0x2628 == 0) {
        local_24 = param_1[2].flames[0x19].render_corona;
      }
      else {
        local_24 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(int *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
        if ((local_24 == 0) &&
           (uVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x74))
                              (*(int *)&param_1->field_0x2628), (uVar6 & 0xb) != 0)) {
          local_44 = 8;
        }
      }
      if ((local_24 == 0) && (local_44 < 0)) {
        param_1[2].flames[0x1a].globe.corona_mode = 0;
      }
    }
  }
  else {
    param_1[2].flames[0x1a].globe.corona_mode = 0;
  }
  this_ptr = (CInventory *)(param_1[2].flames[0x18].on_event + 0x54);
  pCVar4 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(this_ptr);
  local_2c = (uint)(pCVar4 != (CLightGun *)0x0);
  iVar5 = core_inv_cpp_FUN_004f9ef0(this_ptr);
  local_28 = (uint)(iVar5 != 0);
  local_38 = &(param_1->model).base;
  local_3c = 0;
  local_1c = this_ptr;
  do {
    if (param_2 <= 0.0) {
LAB_004744a5:
      if (param_1[2].flames[0x1a].globe.corona_mode == 0) {
        return;
      }
      goto LAB_00474ea4;
    }
    fVar1 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y;
    if ((fVar1 == 1.4013e-45) || (param_1[2].flames[0x1a].globe.position_scaled.x != 0)) {
LAB_00474546:
      local_20 = 3;
      iVar5 = local_20;
    }
    else if (fVar1 == 2.8026e-45) {
      iVar5 = 0;
    }
    else if (fVar1 == 4.2039e-45) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,6);
      local_20 = 6;
      iVar5 = local_20;
      if ((float)_DAT_005da444 < local_18) {
        fVar1 = param_2 * (float)_DAT_005da43c + param_1[2].flames[0x1a].globe.radius;
        param_1[2].flames[0x1a].globe.radius = fVar1;
        if (0x428C0000 < fVar1) {
          param_1[2].flames[0x1a].globe.radius = 0x428C0000;
        }
        if (*(int *)(param_1[1].base.actor_name + 0x14) != 0) goto LAB_004744a5;
        iVar5 = 0;
      }
    }
    else {
      if ((local_2c != 0) &&
         (param_1[2].flames[0x1a].base.previous_transform_state.position.z == 0.0))
      goto LAB_00474546;
      if ((local_2c == 0) ||
         (param_1[2].flames[0x1a].base.previous_transform_state.position.z != 1.4013e-45)) {
        if ((local_2c == 0) &&
           (param_1[2].flames[0x1a].base.previous_transform_state.position.z == 2.8026e-45)) {
          local_20 = 10;
          iVar5 = local_20;
        }
        else {
          if (((local_2c == 0) &&
              (param_1[2].flames[0x1a].base.previous_transform_state.position.z == 1.4013e-45)) ||
             ((local_28 != 0 &&
              (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x == 0.0))))
          goto LAB_00474546;
          if ((local_28 == 0) ||
             (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x != 1.4013e-45)
             ) {
            if ((local_28 == 0) &&
               (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x ==
                2.8026e-45)) {
              local_20 = 0xb;
              iVar5 = local_20;
            }
            else {
              if ((local_28 == 0) &&
                 (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x ==
                  1.4013e-45)) goto LAB_00474546;
              if (-1 < local_44) {
                local_20 = local_44;
                iVar5 = local_20;
                goto LAB_0047454e;
              }
              iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
              if (iVar5 != local_24) {
                if (iVar5 == 0) {
                  iVar5 = 0;
                  if (local_24 != 0) {
                    switch(*(uint *)(local_24 + 0x2e0)) {
                    case 0:
                    case 5:
                      iVar5 = 1;
                      break;
                    default:
switchD_004749dc_caseD_1:
                      iVar5 = 3;
                      break;
                    case 7:
                    case 8:
                      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                                        (local_24,g_CMeleeClassInfo.name_hash);
                      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x588) != 0))
                      goto switchD_004749dc_caseD_1;
                      iVar5 = 0;
                    }
                  }
                }
                else {
                  switch(*(uint *)(iVar5 + 0x2e0)) {
                  case 0:
                  case 5:
                    iVar5 = 1;
                    break;
                  default:
switchD_00474a28_caseD_1:
                    iVar5 = 3;
                    break;
                  case 7:
                  case 8:
                    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                                      (iVar5,g_CMeleeClassInfo.name_hash);
                    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x588) != 0))
                    goto switchD_00474a28_caseD_1;
                    iVar5 = 0;
                  }
                }
                goto LAB_0047454e;
              }
              iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
              if (iVar5 == 0) {
switchD_00474955_caseD_3:
                iVar5 = 0;
              }
              else {
                switch(*(uint *)(iVar5 + 0x2e0)) {
                case 0:
                case 5:
                  iVar5 = 2;
                  break;
                case 1:
                  iVar5 = 4;
                  break;
                case 2:
                  iVar5 = 5;
                  break;
                default:
                  goto switchD_00474955_caseD_3;
                case 4:
                  iVar5 = 7;
                  break;
                case 7:
                  iVar5 = 8;
                  break;
                case 9:
                case 10:
                  iVar5 = 0xe;
                }
              }
            }
          }
          else {
            local_20 = 0xb;
            iVar5 = local_20;
          }
        }
      }
      else {
        local_20 = 10;
        iVar5 = local_20;
      }
    }
LAB_0047454e:
    local_20 = iVar5;
    local_30 = param_1->layer_action_t;
    local_48 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                         (param_1,&param_2,local_20);
    iVar5 = *(int *)(param_1->layer_actions + param_1->layer_action_index * 0x38 + 0x2c) * 0x120;
    pCVar7 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(local_38);
    switch(param_1->layer_action_index) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(uint *)(param_1[2].flames[0x1a].on_event + 0x28),
                               g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar8 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(this_ptr_00), iVar8 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar7 + iVar5 + 0x1c8c)),
         (float)(int)local_18 <= param_1->layer_action_t)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_00492640(this_ptr_00);
      }
      break;
    case 7:
      if ((param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 4.2039e-45) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar7 + iVar5 + 0x1c8c)),
         (float)(int)local_18 <= param_1->layer_action_t)) {
        core_doc_cpp_FUN_004742a0(param_1);
        local_74.x = local_68;
        *(int *)((int)&local_74 + (uint)bVar10 * -8 + 4) = aiStack_64[(uint)bVar10 * -2];
        *(int *)((int)&local_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             aiStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        local_40 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)(param_1[2].flames[0x1a].on_event + 0x28),
                              g_CDynamiteClassInfo.name_hash);
        local_34 = local_40;
        if (local_40 != 0) {
          core_actor_cpp_FUN_00408ac0(param_1,&local_74);
          iVar5 = local_34;
          puVar9 = (uint *)(local_34 + 0x57c);
          local_80 = aiStack_64[2];
          *(int *)((int)&stack0xffffff84 + (uint)bVar10 * -8) = aiStack_64[(uint)bVar10 * -2 + 3];
          *(int *)((int)&stack0xffffff88 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
               aiStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          if (puVar9 != &stack0xffffff80) {
            *puVar9 = local_80;
            *(uint *)(iVar5 + 0x580) = local_7c;
            *(uint *)(iVar5 + 0x584) = local_78;
          }
          (**(code **)(*(int *)(local_40 + 0x154) + 0xe4))(local_40);
          pCVar2 = param_1[2].flames;
          pCVar2[0x1a].on_event[0x28] = '\0';
          pCVar2[0x1a].on_event[0x29] = '\0';
          pCVar2[0x1a].on_event[0x2a] = '\0';
          pCVar2[0x1a].on_event[0x2b] = '\0';
        }
        if (*(int *)&param_1->field_0x2628 != 0) {
          (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,1,&local_74);
        }
        param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 0.0;
        param_1[2].flames[0x1a].globe.radius = 0x41200000;
      }
      if (1.0 <= param_1->layer_action_t) {
        param_1->layer_action_index = 0;
        param_1->layer_action_t = 0.0;
      }
      break;
    case 8:
      if ((((int)local_30 < 0x3f19999a) && (0x3f199999 < (int)param_1->layer_action_t)) &&
         (iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                            (*(CDemonActor **)(param_1[2].flames[0x1a].on_event + 0x28),
                             "CShotgun"), iVar5 != 0)) {
        iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
        (**(code **)(*(int *)(iVar5 + 0x154) + 0xd8))(iVar5);
      }
      break;
    case 0xc:
      if ((((int)local_30 < 0x3ebd70a4) && (0x3ebd70a3 < (int)param_1->layer_action_t)) &&
         ((iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28), iVar5 != 0 &&
          (iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(iVar5,g_CWeaponClassInfo.name_hash),
          iVar5 != 0)))) {
        if (*(int *)(iVar5 + 0x56c) == 9) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,8);
        }
        else {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,1);
        }
      }
      break;
    case 0xd:
      if (((int)local_30 < 0x3f000000) && (0x3effffff < (int)param_1->layer_action_t)) {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(param_1[2].flames[0x1a].on_event + 0x28),
                           g_CWeaponClassInfo.name_hash);
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x56c) == 9) {
            uVar11 = 8;
          }
          else {
            uVar11 = 1;
          }
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,uVar11);
        }
        iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
        if (iVar5 != 0) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,2);
        }
      }
      break;
    case 0x12:
      if ((((int)local_30 < 0x3f4ccccd) && (0x3f4ccccc < (int)param_1->layer_action_t)) &&
         (iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                            (*(CDemonActor **)(param_1[2].flames[0x1a].on_event + 0x28),
                             "CRifle"), iVar5 != 0)) {
        iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
        (**(code **)(*(int *)(iVar5 + 0x154) + 0xd8))(iVar5);
      }
    }
    if (-1 < local_48) {
      iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
      if (iVar5 != local_24) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x2e0)) {
          case 0:
          case 5:
            iVar5 = 1;
            break;
          default:
switchD_00474d6b_caseD_1:
            iVar5 = 3;
            break;
          case 7:
          case 8:
            iVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(iVar5,g_CMeleeClassInfo.name_hash);
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0x588) != 0)) goto switchD_00474d6b_caseD_1;
            iVar5 = 0;
          }
          if (iVar5 == local_48) {
            iVar5 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
            (**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))(iVar5,1);
            pCVar2 = param_1[2].flames;
            pCVar2[0x1a].on_event[0x28] = '\0';
            pCVar2[0x1a].on_event[0x29] = '\0';
            pCVar2[0x1a].on_event[0x2a] = '\0';
            pCVar2[0x1a].on_event[0x2b] = '\0';
          }
        }
        if (param_1[2].flames[0x1a].globe.corona_mode != 0) {
          if (local_24 == 0) {
LAB_0047463c:
            iVar5 = 0;
          }
          else {
            switch(*(uint *)(local_24 + 0x2e0)) {
            case 0:
            case 5:
              iVar5 = 1;
              break;
            case 7:
            case 8:
              iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (local_24,g_CMeleeClassInfo.name_hash);
              if ((iVar5 == 0) || (*(int *)(iVar5 + 0x588) == 0)) goto LAB_0047463c;
            default:
              iVar5 = 3;
            }
          }
          if ((iVar5 == local_48) &&
             (*(int *)(param_1[2].flames[0x1a].on_event + 0x28) = local_24, local_24 != 0)) {
            (**(code **)(*(int *)(local_24 + 0x154) + 0xdc))(local_24,2);
          }
        }
      }
      if ((param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 1.4013e-45) &&
         (local_48 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0((CHero *)param_1,1);
        param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 0.0;
      }
      item_to_remove = (CDemonActor *)param_1[2].flames[0x1a].globe.position_scaled.x;
      if ((item_to_remove != (CDemonActor *)0x0) && (local_48 == 3)) {
        core_inv_cpp_FUN_004f8d00(local_1c,item_to_remove,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                  (0x01D2C900,(CDemonActor *)param_1[2].flames[0x1a].globe.position_scaled.x);
        core_charactr_cpp_FUN_004325b0
                  (param_1,1,param_1[2].flames[0x1a].globe.position_scaled.x,0,0);
        iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                          ((CDemonActor *)param_1[2].flames[0x1a].globe.position_scaled.x,
                           "CTrap");
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_38,0x19,1);
          fVar1 = param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y;
          if (fVar1 != 0.0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",fVar1,0x146a);
          }
          param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 2.8026e-45;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_38,0x17,1);
          param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 8.40779e-45;
        }
        param_1[2].flames[0x1a].globe.position_scaled.x = 0;
      }
      if (local_48 == 10) {
        if (local_2c == 0) {
          param_1[2].flames[0x1a].base.previous_transform_state.position.z = 1.4013e-45;
        }
        else {
          param_1[2].flames[0x1a].base.previous_transform_state.position.z = 2.8026e-45;
        }
      }
      else if ((local_48 == 3) &&
              ((int)param_1[2].flames[0x1a].base.previous_transform_state.position.z < 2)) {
        if (local_2c == 0) {
          param_1[2].flames[0x1a].base.previous_transform_state.position.z = 0.0;
        }
        else {
          param_1[2].flames[0x1a].base.previous_transform_state.position.z = 1.4013e-45;
        }
      }
      pCVar3 = g_CGamePtr;
      if (local_48 == 0xb) {
        if (local_28 == 0) {
          param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 1.4013e-45;
        }
        else {
          param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 2.8026e-45;
        }
        (*(code *)**(uint **)&pCVar3->field_0xb00)(pCVar3,local_28 != 0);
      }
      else if ((local_48 == 3) &&
              ((int)param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x < 2)) {
        if (local_28 == 0) {
          param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 0.0;
        }
        else {
          param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 1.4013e-45;
        }
      }
      if ((param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y == 9.80909e-45)
         && ((local_48 == 0 || (local_48 == 8)))) {
        param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.y = 0.0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610(param_1,local_20);
    }
    local_3c = local_3c + 1;
  } while (local_3c < 2);
  if (param_1[2].flames[0x1a].globe.corona_mode == 0) {
    return;
  }
LAB_00474ea4:
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c550
                    (*(CDemonActor **)(param_1[2].flames[0x1a].on_event + 0x28),
                     "CFlashlight");
  if ((iVar5 != 0) && (*(int *)&g_CGamePtr->field_0x264 == 0)) {
    *(uint *)&g_CGamePtr->field_0x264 = 1;
    return;
  }
  return;
}
