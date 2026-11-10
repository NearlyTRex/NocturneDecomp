// Name: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50
// Address: 0056db50
// Address Range: [[0056db50, 0056e4ad]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_0056db50(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_0056db50(CStranger *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CWeapon *pCVar2;
  EWeaponType EVar3;
  float fVar4;
  CMotionList *pCVar5;
  CDynamite *this_ptr_00;
  int iVar6;
  CLightGun *pCVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  byte bVar11;
  CVector3f *apCStackY_1060 [1013];
  CVector3f *in_stack_ffffff88;
  float in_stack_ffffff8c;
  uint local_6c;
  uint local_60;
  uint local_5c;
  uint local_58;
  CVector3f *local_54;
  int local_40;
  int local_3c;
  int local_38;
  CMotionController *local_34;
  int local_30;
  int local_2c;
  CInventory *local_28;
  CCharacter *local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar11 = 0;
  if ((*(int *)&this_ptr->field_0x2d04 == 0xe) && (*(int *)&this_ptr->field_0x2698 == 0)) {
    *(uint *)&this_ptr->field_0x2d08 = 0;
    *(uint *)&this_ptr->field_0x2d04 = 0;
  }
  local_40 = -1;
  local_24 = (CCharacter *)0x0;
  if (*(int *)&this_ptr->field_0x25618 == 0) {
    if (this_ptr->guns_drawn != 0) {
      if (*(int *)&this_ptr->field_0x2698 == 0) {
        local_24 = *(CCharacter **)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4)
        ;
      }
      else {
        local_24 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(int *)&this_ptr->field_0x2698,g_CWeaponClassInfo.name_hash);
        if ((local_24 == (CCharacter *)0x0) &&
           (uVar8 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2698 + 0x2b0) + 0x7c))
                              (*(int *)&this_ptr->field_0x2698), (uVar8 & 3) != 0)) {
          local_40 = 8;
        }
      }
      if ((local_24 == (CCharacter *)0x0) && (local_40 < 0)) {
        this_ptr->guns_drawn = 0;
      }
    }
  }
  else {
    this_ptr->guns_drawn = 0;
  }
  local_28 = (CInventory *)&this_ptr->field_0x2437c;
  local_34 = (CMotionController *)&this_ptr->field_0x2b4;
  local_38 = 0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar10 = this_ptr->action_pending;
    if ((iVar10 == 1) || (*(int *)&this_ptr->field_0x2561c != 0)) {
LAB_0056dbda:
      local_1c = 3;
      iVar10 = local_1c;
    }
    else if (iVar10 == 2) {
      iVar10 = 0;
    }
    else if (iVar10 == 3) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,6);
      local_1c = 6;
      iVar10 = local_1c;
      if ((float)_DAT_005ebda5 < local_18) {
        fVar4 = delta_time * (float)_DAT_005ebd9d + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar4;
        if (0x428C0000 < fVar4) {
          this_ptr->aim_speed_factor = 0x428C0000;
        }
        if (*(int *)&this_ptr->field_0x10a74 != 0) {
          return;
        }
        iVar10 = 0;
      }
    }
    else {
      pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_28);
      if ((pCVar7 != (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x255e8 == 0))
      goto LAB_0056dbda;
      pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_28);
      if ((pCVar7 == (CLightGun *)0x0) || (*(int *)&this_ptr->field_0x255e8 != 1)) {
        pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_28);
        if ((pCVar7 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x255e8 == 2)) {
          local_1c = 10;
          iVar10 = local_1c;
        }
        else {
          pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_28);
          if ((pCVar7 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x255e8 == 1))
          goto LAB_0056dbda;
          if (local_40 < 0) {
            pCVar1 = (CCharacter *)this_ptr->weapon;
            if (pCVar1 == local_24) {
              if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0056dff9_caseD_3:
                iVar10 = 0;
              }
              else {
                switch(this_ptr->weapon->weapon_type) {
                case WEAPON_TYPE_GUN:
                case WEAPON_TYPE_FLASHLIGHT:
                  iVar10 = 2;
                  break;
                case WEAPON_TYPE_SHOTGUN:
                  iVar10 = 4;
                  break;
                case WEAPON_TYPE_LIGHT_GUN:
                  iVar10 = 5;
                  break;
                default:
                  goto switchD_0056dff9_caseD_3;
                case WEAPON_TYPE_TOMMY_GUN:
                  iVar10 = 7;
                  break;
                case WEAPON_TYPE_MELEE:
                  iVar10 = 8;
                }
              }
            }
            else if (pCVar1 == (CCharacter *)0x0) {
              iVar10 = 0;
              if (local_24 != (CCharacter *)0x0) {
                EVar3 = *(EWeaponType *)&(local_24->model).field_0x188;
                if (EVar3 < WEAPON_TYPE_MELEE) {
                  if (EVar3 == WEAPON_TYPE_GUN) {
                    iVar10 = 1;
                  }
                  else {
                    local_1c = 3;
                    iVar10 = local_1c;
                  }
                }
                else if ((EVar3 < WEAPON_TYPE_BARON) ||
                        (EVar3 == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN))) {
                  iVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (local_24,g_CMeleeClassInfo.name_hash);
                  if ((iVar10 == 0) || (*(int *)(iVar10 + 0x6e4) == 0)) {
                    iVar10 = 0;
                  }
                  else {
                    iVar10 = 3;
                  }
                }
                else {
                  local_1c = 3;
                  iVar10 = local_1c;
                }
              }
            }
            else {
              EVar3 = *(EWeaponType *)&(pCVar1->model).field_0x188;
              if (EVar3 < WEAPON_TYPE_MELEE) {
                if (EVar3 == WEAPON_TYPE_GUN) {
                  iVar10 = 1;
                }
                else {
                  local_1c = 3;
                  iVar10 = local_1c;
                }
              }
              else if ((EVar3 < WEAPON_TYPE_BARON) ||
                      (EVar3 == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN))) {
                iVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                   (pCVar1,g_CMeleeClassInfo.name_hash);
                if ((iVar10 == 0) || (*(int *)(iVar10 + 0x6e4) == 0)) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = 3;
                }
              }
              else {
                local_1c = 3;
                iVar10 = local_1c;
              }
            }
          }
          else {
            local_1c = local_40;
            iVar10 = local_1c;
          }
        }
      }
      else {
        local_1c = 10;
        iVar10 = local_1c;
      }
    }
    local_1c = iVar10;
    local_30 = *(int *)&this_ptr->field_0x2d08;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
                         ((CCharacter *)this_ptr,&delta_time,local_1c);
    iVar10 = *(int *)(&this_ptr->field_0x2860 + *(int *)&this_ptr->field_0x2d04 * 0x38) * 0x118;
    pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(local_34);
    switch(*(uint *)&this_ptr->field_0x2d04) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar6 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047a1a0(this_ptr_00), iVar6 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar5 + iVar10 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2d08)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_0047a150(this_ptr_00);
      }
      break;
    case 7:
      if ((this_ptr->action_pending == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar5 + iVar10 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2d08)) {
        core_stranger_cpp_FUN_0056da90(this_ptr);
        in_stack_ffffff88 = local_54;
        *(uint *)(&stack0xffffff8c + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar11 * -8);
        *(uint *)(&stack0xffffff90 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffffb4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        local_3c = core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
        local_2c = local_3c;
        if (local_3c != 0) {
          core_actor_cpp_FUN_00408cf0(this_ptr,&stack0xffffff88);
          iVar10 = local_2c;
          puVar9 = (uint *)(local_2c + 0x6d8);
          local_60 = local_6c;
          *(uint *)((int)&stack0xffffffa4 + (uint)bVar11 * -8) =
               *(uint *)(&stack0xffffff98 + (uint)bVar11 * -8);
          *(uint *)((int)&stack0xffffffa8 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4) =
               *(uint *)(&stack0xffffff9c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          if (puVar9 != &stack0xffffffa0) {
            *puVar9 = local_60;
            *(uint *)(iVar10 + 0x6dc) = local_5c;
            *(uint *)(iVar10 + 0x6e0) = local_58;
          }
          (**(code **)(*(int *)(local_3c + 0x2b0) + 0xec))(local_3c);
          this_ptr->weapon = (CWeapon *)0x0;
        }
        if (*(int *)&this_ptr->field_0x2698 != 0) {
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,&stack0xffffff88);
        }
        this_ptr->action_pending = 0;
        this_ptr->aim_speed_factor = 0x41200000;
      }
      if (1.0 <= *(float *)&this_ptr->field_0x2d08) {
        *(uint *)&this_ptr->field_0x2d04 = 0;
        *(uint *)&this_ptr->field_0x2d08 = 0;
      }
      break;
    case 8:
      if (((local_30 < 0x3f19999a) && (0x3f199999 < *(int *)&this_ptr->field_0x2d08)) &&
         (iVar10 = core_actor_cpp_isOfClass_FUN_0040c840
                             (&this_ptr->weapon->base,"CShotgun"), iVar10 != 0)) {
        (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                  ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffff88,in_stack_ffffff8c);
      }
      break;
    case 0xc:
      if (((local_30 < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)&this_ptr->field_0x2d08)) &&
         (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,1);
      }
      break;
    case 0xd:
      if (((local_30 < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)&this_ptr->field_0x2d08)) &&
         (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,2);
      }
    }
    if (-1 < local_20) {
      pCVar1 = (CCharacter *)this_ptr->weapon;
      if (pCVar1 != local_24) {
        if (pCVar1 != (CCharacter *)0x0) {
          EVar3 = *(EWeaponType *)&(pCVar1->model).field_0x188;
          if (EVar3 < WEAPON_TYPE_MELEE) {
            if (EVar3 == WEAPON_TYPE_GUN) {
              iVar10 = 1;
            }
            else {
              iVar10 = 3;
            }
          }
          else if ((EVar3 < WEAPON_TYPE_BARON) || (EVar3 == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN))
                  ) {
            iVar10 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CMeleeClassInfo.name_hash)
            ;
            if ((iVar10 == 0) || (*(int *)(iVar10 + 0x6e4) == 0)) {
              iVar10 = 0;
            }
            else {
              iVar10 = 3;
            }
          }
          else {
            iVar10 = 3;
          }
          if (iVar10 == local_20) {
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,in_stack_ffffff88,in_stack_ffffff8c);
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_24 == (CCharacter *)0x0) {
LAB_0056dcd2:
            iVar10 = 0;
          }
          else {
            EVar3 = *(EWeaponType *)&(local_24->model).field_0x188;
            if (EVar3 < WEAPON_TYPE_MELEE) {
              if (EVar3 == WEAPON_TYPE_GUN) {
                iVar10 = 1;
              }
              else {
                iVar10 = 3;
              }
            }
            else if ((EVar3 < WEAPON_TYPE_BARON) ||
                    (EVar3 == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN))) {
              iVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (local_24,g_CMeleeClassInfo.name_hash);
              if ((iVar10 == 0) || (*(int *)(iVar10 + 0x6e4) == 0)) goto LAB_0056dcd2;
              iVar10 = 3;
            }
            else {
              iVar10 = 3;
            }
          }
          if ((iVar10 == local_20) &&
             (this_ptr->weapon = (CWeapon *)local_24, local_24 != (CCharacter *)0x0)) {
            (*(((local_24->base).vtable._uc)->_uc).kill)
                      (local_24,2,in_stack_ffffff88,in_stack_ffffff8c);
          }
        }
      }
      if ((this_ptr->action_pending == 1) && (local_20 == 3)) {
        core_hero_cpp_FUN_004cff90(this_ptr,1);
        this_ptr->action_pending = 0;
      }
      if ((*(int *)&this_ptr->field_0x2561c != 0) && (local_20 == 3)) {
        core_inv_cpp_FUN_004db8e0(local_28,*(int *)&this_ptr->field_0x2561c,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                  (0x01D182F0,*(CDemonActor **)&this_ptr->field_0x2561c);
        core_charactr_cpp_FUN_00428b10(this_ptr,1,*(uint *)&this_ptr->field_0x2561c,0,0);
        iVar10 = core_actor_cpp_isOfClass_FUN_0040c840
                           (*(CDemonActor **)&this_ptr->field_0x2561c,"CTrap");
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_34,0x16,1);
          if (this_ptr->action_pending != 0) {
            shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d");
          }
          this_ptr->action_pending = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_34,0x14,1);
          this_ptr->action_pending = 6;
        }
        *(uint *)&this_ptr->field_0x2561c = 0;
      }
      if (local_20 == 10) {
        pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_28);
        if (pCVar7 == (CLightGun *)0x0) {
LAB_0056ddd3:
          *(uint *)&this_ptr->field_0x255e8 = 1;
        }
        else {
          *(uint *)&this_ptr->field_0x255e8 = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)&this_ptr->field_0x255e8 < 2)) {
        pCVar7 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004dccb0(local_28);
        if (pCVar7 != (CLightGun *)0x0) goto LAB_0056ddd3;
        *(uint *)&this_ptr->field_0x255e8 = 0;
      }
      if ((this_ptr->action_pending == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        this_ptr->action_pending = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
                ((CCharacter *)this_ptr,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
