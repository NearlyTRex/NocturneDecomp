// Name: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0
// Address: 005907a0
// Address Range: [[005907a0, 005910f8]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005907a0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005907a0(CStranger *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  CWeapon *pCVar2;
  float fVar3;
  CMotionList *pCVar4;
  CDynamite *this_ptr_00;
  int iVar5;
  CLightGun *pCVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  CVector3f *apCStackY_1060 [1013];
  CVector3f *in_stack_ffffff88;
  float in_stack_ffffff8c;
  uint local_70;
  uint local_6c;
  CVector3f *local_60;
  uint local_54;
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
  
  bVar10 = 0;
  if ((*(int *)&this_ptr->field_0x2c98 == 0xe) && (*(int *)&this_ptr->field_0x2628 == 0)) {
    *(uint *)&this_ptr->field_0x2c9c = 0;
    *(uint *)&this_ptr->field_0x2c98 = 0;
  }
  local_40 = -1;
  local_24 = (CCharacter *)0x0;
  if (*(int *)&this_ptr->field_0x1ff88 == 0) {
    if (this_ptr->guns_drawn != 0) {
      if (*(int *)&this_ptr->field_0x2628 == 0) {
        local_24 = *(CCharacter **)&this_ptr->field_0x1fe20;
      }
      else {
        local_24 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(int *)&this_ptr->field_0x2628,g_CWeaponClassInfo.name_hash);
        if ((local_24 == (CCharacter *)0x0) &&
           (uVar7 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2628 + 0x154) + 0x74))
                              (*(int *)&this_ptr->field_0x2628), (uVar7 & 3) != 0)) {
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
  local_28 = (CInventory *)&this_ptr->field_0x1fae8;
  local_34 = (CMotionController *)&this_ptr->field_0x158;
  local_38 = 0;
  do {
    if (delta_time <= 0.0) {
      return;
    }
    iVar9 = *(int *)&this_ptr->field_0x1ff5c;
    if ((iVar9 == 1) || (*(int *)&this_ptr->field_0x1ff8c != 0)) {
LAB_0059082a:
      local_1c = 3;
      iVar9 = local_1c;
    }
    else if (iVar9 == 2) {
      iVar9 = 0;
    }
    else if (iVar9 == 3) {
      local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                           ((CCharacter *)this_ptr,6);
      local_1c = 6;
      iVar9 = local_1c;
      if ((float)_DAT_005f7019 < local_18) {
        fVar3 = delta_time * (float)_DAT_005f7011 + this_ptr->aim_speed_factor;
        this_ptr->aim_speed_factor = fVar3;
        if (0x428C0000 < fVar3) {
          this_ptr->aim_speed_factor = 0x428C0000;
        }
        if (*(int *)&this_ptr->field_0xc1e4 != 0) {
          return;
        }
        iVar9 = 0;
      }
    }
    else {
      pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_28);
      if ((pCVar6 != (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x1ff54 == 0))
      goto LAB_0059082a;
      pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_28);
      if ((pCVar6 == (CLightGun *)0x0) || (*(int *)&this_ptr->field_0x1ff54 != 1)) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_28);
        if ((pCVar6 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x1ff54 == 2)) {
          local_1c = 10;
          iVar9 = local_1c;
        }
        else {
          pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_28);
          if ((pCVar6 == (CLightGun *)0x0) && (*(int *)&this_ptr->field_0x1ff54 == 1))
          goto LAB_0059082a;
          if (local_40 < 0) {
            pCVar1 = (CCharacter *)this_ptr->weapon;
            if (pCVar1 == local_24) {
              if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00590c42_caseD_3:
                iVar9 = 0;
              }
              else {
                switch(this_ptr->weapon->weapon_type) {
                case WEAPON_TYPE_GUN:
                case WEAPON_TYPE_FLASHLIGHT:
                  iVar9 = 2;
                  break;
                case WEAPON_TYPE_SHOTGUN:
                  iVar9 = 4;
                  break;
                case WEAPON_TYPE_LIGHT_GUN:
                  iVar9 = 5;
                  break;
                default:
                  goto switchD_00590c42_caseD_3;
                case WEAPON_TYPE_TOMMY_GUN:
                  iVar9 = 7;
                  break;
                case WEAPON_TYPE_MELEE:
                  iVar9 = 8;
                  break;
                case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
                case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
                  iVar9 = 0xe;
                }
              }
            }
            else if (pCVar1 == (CCharacter *)0x0) {
              iVar9 = 0;
              if (local_24 != (CCharacter *)0x0) {
                fVar3 = (local_24->model).bone_origins[0x19].y;
                if ((uint)fVar3 < 7) {
                  if (fVar3 == 0.0) {
                    iVar9 = 1;
                  }
                  else {
                    local_1c = 3;
                    iVar9 = local_1c;
                  }
                }
                else if (((uint)fVar3 < 8) || (fVar3 == 1.12104e-44)) {
                  iVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    (local_24,g_CMeleeClassInfo.name_hash);
                  if ((iVar9 == 0) || (*(int *)(iVar9 + 0x588) == 0)) {
                    iVar9 = 0;
                  }
                  else {
                    iVar9 = 3;
                  }
                }
                else {
                  local_1c = 3;
                  iVar9 = local_1c;
                }
              }
            }
            else {
              fVar3 = (pCVar1->model).bone_origins[0x19].y;
              if ((uint)fVar3 < 7) {
                if (fVar3 == 0.0) {
                  iVar9 = 1;
                }
                else {
                  local_1c = 3;
                  iVar9 = local_1c;
                }
              }
              else if (((uint)fVar3 < 8) || (fVar3 == 1.12104e-44)) {
                iVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                                  (pCVar1,g_CMeleeClassInfo.name_hash);
                if ((iVar9 == 0) || (*(int *)(iVar9 + 0x588) == 0)) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = 3;
                }
              }
              else {
                local_1c = 3;
                iVar9 = local_1c;
              }
            }
          }
          else {
            local_1c = local_40;
            iVar9 = local_1c;
          }
        }
      }
      else {
        local_1c = 10;
        iVar9 = local_1c;
      }
    }
    local_1c = iVar9;
    local_2c = *(int *)&this_ptr->field_0x2c9c;
    local_20 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                         ((CCharacter *)this_ptr,&delta_time,local_1c);
    iVar9 = *(int *)(&this_ptr->field_0x27f4 + *(int *)&this_ptr->field_0x2c98 * 0x38) * 0x120;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(local_34);
    switch(*(uint *)&this_ptr->field_0x2c98) {
    case 6:
      this_ptr_00 = (CDynamite *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
      if (((this_ptr_00 != (CDynamite *)0x0) &&
          (iVar5 = core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(this_ptr_00), iVar5 == 0)) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar4 + iVar9 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2c9c)) {
        core_dynamite_cpp_CDynamite_lightFuse_FUN_00492640(this_ptr_00);
      }
      break;
    case 7:
      if ((*(int *)&this_ptr->field_0x1ff5c == 3) &&
         (local_18 = (float)(0xb / (longlong)*(int *)(pCVar4 + iVar9 + 0x1c8c)),
         (float)(int)local_18 <= *(float *)&this_ptr->field_0x2c9c)) {
        core_stranger_cpp_FUN_005906e0(this_ptr);
        local_54 = local_6c;
        *(uint *)((int)&stack0xffffffb0 + (uint)bVar10 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff98 + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xffffffb0 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4) =
             *(uint *)(&stack0xffffff9c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        local_3c = core_actor_cpp_castToClassHash_FUN_0040c600
                             (this_ptr->weapon,g_CDynamiteClassInfo.name_hash);
        local_30 = local_3c;
        if (local_3c != 0) {
          core_actor_cpp_FUN_00408ac0(this_ptr,&stack0xffffffac);
          iVar9 = local_30;
          in_stack_ffffff88 = local_60;
          puVar8 = (uint *)(local_30 + 0x57c);
          *(uint *)(&stack0xffffff8c + (uint)bVar10 * -8) =
               *(uint *)(&stack0xffffffa4 + (uint)bVar10 * -8);
          *(uint *)((int)&stack0xffffff90 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4) =
               *(uint *)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          if (puVar8 != (uint *)&stack0xffffff88) {
            *puVar8 = in_stack_ffffff88;
            *(float *)(iVar9 + 0x580) = in_stack_ffffff8c;
            *(uint *)(iVar9 + 0x584) = local_70;
          }
          (**(code **)(*(int *)(local_3c + 0x154) + 0xe4))(local_3c);
          this_ptr->weapon = (CWeapon *)0x0;
        }
        if (*(int *)&this_ptr->field_0x2628 != 0) {
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,&stack0xffffffac);
        }
        *(uint *)&this_ptr->field_0x1ff5c = 0;
        this_ptr->aim_speed_factor = 0x41200000;
      }
      if (1.0 <= *(float *)&this_ptr->field_0x2c9c) {
        *(uint *)&this_ptr->field_0x2c98 = 0;
        *(uint *)&this_ptr->field_0x2c9c = 0;
      }
      break;
    case 8:
      if (((local_2c < 0x3f19999a) && (0x3f199999 < *(int *)&this_ptr->field_0x2c9c)) &&
         (iVar9 = core_actor_cpp_isOfClass_FUN_0040c550(&this_ptr->weapon->base,"CShotgun")
         , iVar9 != 0)) {
        (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).applyDamage)
                  ((CCharacter *)this_ptr->weapon,(int)in_stack_ffffff88,in_stack_ffffff8c);
      }
      break;
    case 0xc:
      if (((local_2c < 0x3ebd70a4) && (0x3ebd70a3 < *(int *)&this_ptr->field_0x2c9c)) &&
         (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,1);
      }
      break;
    case 0xd:
      if (((local_2c < 0x3f28f5c3) && (0x3f28f5c2 < *(int *)&this_ptr->field_0x2c9c)) &&
         (pCVar2 = this_ptr->weapon, pCVar2 != (CWeapon *)0x0)) {
        (*((pCVar2->base).vtable._ub)->processMeleeHit)(&pCVar2->base,2);
      }
    }
    if (-1 < local_20) {
      pCVar1 = (CCharacter *)this_ptr->weapon;
      if (pCVar1 != local_24) {
        if (pCVar1 != (CCharacter *)0x0) {
          fVar3 = (pCVar1->model).bone_origins[0x19].y;
          if ((uint)fVar3 < 7) {
            if (fVar3 == 0.0) {
              iVar9 = 1;
            }
            else {
              iVar9 = 3;
            }
          }
          else if (((uint)fVar3 < 8) || (fVar3 == 1.12104e-44)) {
            iVar9 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar1,g_CMeleeClassInfo.name_hash);
            if ((iVar9 == 0) || (*(int *)(iVar9 + 0x588) == 0)) {
              iVar9 = 0;
            }
            else {
              iVar9 = 3;
            }
          }
          else {
            iVar9 = 3;
          }
          if (iVar9 == local_20) {
            (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).kill)
                      ((CCharacter *)this_ptr->weapon,1,in_stack_ffffff88,in_stack_ffffff8c);
            this_ptr->weapon = (CWeapon *)0x0;
          }
        }
        if (this_ptr->guns_drawn != 0) {
          if (local_24 == (CCharacter *)0x0) {
LAB_00590922:
            iVar9 = 0;
          }
          else {
            fVar3 = (local_24->model).bone_origins[0x19].y;
            if ((uint)fVar3 < 7) {
              if (fVar3 == 0.0) {
                iVar9 = 1;
              }
              else {
                iVar9 = 3;
              }
            }
            else if (((uint)fVar3 < 8) || (fVar3 == 1.12104e-44)) {
              iVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (local_24,g_CMeleeClassInfo.name_hash);
              if ((iVar9 == 0) || (*(int *)(iVar9 + 0x588) == 0)) goto LAB_00590922;
              iVar9 = 3;
            }
            else {
              iVar9 = 3;
            }
          }
          if ((iVar9 == local_20) &&
             (this_ptr->weapon = (CWeapon *)local_24, local_24 != (CCharacter *)0x0)) {
            (*(((local_24->base).vtable._uc)->_uc).kill)
                      (local_24,2,in_stack_ffffff88,in_stack_ffffff8c);
          }
        }
      }
      if ((*(int *)&this_ptr->field_0x1ff5c == 1) && (local_20 == 3)) {
        core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0((CHero *)this_ptr,1);
        *(uint *)&this_ptr->field_0x1ff5c = 0;
      }
      if ((*(CDemonActor **)&this_ptr->field_0x1ff8c != (CDemonActor *)0x0) && (local_20 == 3)) {
        core_inv_cpp_FUN_004f8d00(local_28,*(CDemonActor **)&this_ptr->field_0x1ff8c,0);
        core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160
                  (0x01D2C900,*(CDemonActor **)&this_ptr->field_0x1ff8c);
        core_charactr_cpp_FUN_004325b0(this_ptr,1,*(uint *)&this_ptr->field_0x1ff8c,0,0);
        iVar9 = core_actor_cpp_isOfClass_FUN_0040c550
                          (*(CDemonActor **)&this_ptr->field_0x1ff8c,"CTrap");
        if (iVar9 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x21,1);
          if (*(int *)&this_ptr->field_0x1ff5c != 0) {
            shape_edittool_cpp_FUN_00494340
                      (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                       *(int *)&this_ptr->field_0x1ff5c,0x141e);
          }
          *(uint *)&this_ptr->field_0x1ff5c = 2;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_34,0x1f,1);
          *(uint *)&this_ptr->field_0x1ff5c = 6;
        }
        *(uint *)&this_ptr->field_0x1ff8c = 0;
      }
      if (local_20 == 10) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_28);
        if (pCVar6 == (CLightGun *)0x0) {
LAB_00590a23:
          *(uint *)&this_ptr->field_0x1ff54 = 1;
        }
        else {
          *(uint *)&this_ptr->field_0x1ff54 = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)&this_ptr->field_0x1ff54 < 2)) {
        pCVar6 = core_inv_cpp_CInventory_getActiveLightGun_FUN_004f9ed0(local_28);
        if (pCVar6 != (CLightGun *)0x0) goto LAB_00590a23;
        *(uint *)&this_ptr->field_0x1ff54 = 0;
      }
      if ((*(int *)&this_ptr->field_0x1ff5c == 7) && ((local_20 == 0 || (local_20 == 8)))) {
        *(uint *)&this_ptr->field_0x1ff5c = 0;
      }
      core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610
                ((CCharacter *)this_ptr,local_1c);
    }
    local_38 = local_38 + 1;
    if (1 < local_38) {
      return;
    }
  } while( true );
}
