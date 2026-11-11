// Name: unkafter_prye.cpp_FUN_005263c0
// Address: 005263c0
// Address Range: [[005263c0, 005267a1]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_005263c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_prye_cpp_FUN_005263c0(CCharacter *param_1)

{
  CDemonActor_vtable *pCVar1;
  CFlame *pCVar2;
  CDemonActor *this_ptr;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1[1].base.actor_name + 0x14);
  pCVar2 = param_1[2].flames + 0x15;
  (pCVar2->base).create_event[0x4c] = '\0';
  (pCVar2->base).create_event[0x4d] = '\0';
  (pCVar2->base).create_event[0x4e] = '\0';
  (pCVar2->base).create_event[0x4f] = '\0';
  if (iVar5 == 0) {
    return;
  }
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    return;
  }
  if (param_1[2].flames[0x14].render_corona != 0) {
    return;
  }
  if (param_1[2].flames[0x15].base.health == 0) {
    return;
  }
  this_ptr = *(CDemonActor **)(param_1[2].flames[0x15].base.create_event + 0x44);
  if (this_ptr == (CDemonActor *)0x0) {
    this_ptr = param_1->carry_hands[1].carry_actor;
  }
  else if (this_ptr[2].orient.vec.x != 9.80909e-45) goto LAB_00526426;
  if ((this_ptr != (CDemonActor *)0x0) &&
     (uVar4 = (*((this_ptr->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr), uVar4 != 0)) {
    iVar7 = 0;
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
    *(int *)(param_1[2].flames[0x15].base.create_event + 0x50) = iVar5;
    do {
      iVar5 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x50) + 1;
      *(int *)(param_1[2].flames[0x15].base.create_event + 0x50) = iVar5;
      if ((iVar5 < 0) || (2 < iVar5)) {
        pCVar2 = param_1[2].flames + 0x15;
        (pCVar2->base).create_event[0x50] = '\0';
        (pCVar2->base).create_event[0x51] = '\0';
        (pCVar2->base).create_event[0x52] = '\0';
        (pCVar2->base).create_event[0x53] = '\0';
      }
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(param_1[2].flames[0x15].base.create_event + 0x44),
                         g_CWeaponClassInfo.name_hash);
      uVar6 = 0;
      switch(*(uint *)(param_1[2].flames[0x15].base.create_event + 0x50)) {
      case 0:
      case 1:
      case 2:
      case 3:
switchD_005265a3_caseD_0:
        uVar6 = 2;
        break;
      case 0xffffffff:
        if (iVar5 == 0) goto switchD_005265a3_caseD_0;
        if (*(int *)(*(int *)(param_1[2].flames[0x15].base.create_event + 0x44) + 0x56c) == 9) {
          uVar6 = 8;
        }
        else {
          uVar6 = 1;
        }
      }
      if ((uVar6 & uVar4) != 0) {
        iVar5 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x50);
        param_1->layer_action_t = 0.0;
        param_1->layer_action_index = iVar5 + 0xd;
        pCVar1 = (param_1->base).vtable._ub;
        param_1[2].flames[0x14].render_corona = 7;
        (*pCVar1->playSound)(&param_1->base,"?wp_holystaff.wav" + 1);
        return;
      }
      iVar7 = iVar7 + 1;
      if (0x13 < iVar7) {
        return;
      }
    } while( true );
  }
LAB_00526426:
  iVar5 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
  if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x2e0), iVar5 != 3)) {
    switch(iVar5) {
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
      iVar5 = 0;
      break;
    case 4:
      iVar5 = 7;
      break;
    case 7:
    case 0xc:
      iVar5 = 8;
      break;
    case 8:
      iVar5 = 0;
      break;
    case 9:
    case 10:
      iVar5 = 0xe;
      break;
    case 0xd:
      iVar5 = 0x11;
      break;
    case 0xe:
      iVar5 = 0x12;
    }
    fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,iVar5);
    if ((((float)_DAT_005cd987 <= fVar3) &&
        (1.0 <= *(float *)(param_1[2].flames[0x15].base.create_event + 0x14))) &&
       (*(float *)(param_1[2].flames[0x15].base.create_event + 0x10) <= 0.0)) {
      if (0.0 < param_1->bind_time) {
        if (param_1->bind_type == 4) {
          param_1[2].flames[0x14].enemy_burn_index = 1;
        }
      }
      else {
        param_1[2].flames[0x14].enemy_burn_index = 0;
      }
      iVar5 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5);
      if (iVar5 != 0) {
        iVar5 = *(int *)(param_1[2].flames[0x15].base.create_event + 0x44);
        iVar7 = *(int *)(iVar5 + 0x2e0);
        if (iVar7 == 0xc) {
          iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (iVar5,g_CLightStaffClassInfo.name_hash);
          if (iVar5 != 0) {
            param_1->layer_action_t = 0.0;
            param_1[2].flames[0x14].render_corona = 10;
            param_1->layer_action_index = 0x1c;
            return;
          }
          iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)(param_1[2].flames[0x15].base.create_event + 0x44),
                             g_CFirestaffClassInfo.name_hash);
          if (iVar5 != 0) {
            param_1->layer_action_t = 0.0;
            param_1[2].flames[0x14].render_corona = 0xb;
            param_1->layer_action_index = 0x1b;
            return;
          }
        }
        else {
          if (iVar7 == 0xd) {
            param_1->layer_action_t = 0.0;
            param_1[2].flames[0x14].render_corona = 0xc;
            param_1->layer_action_index = 0x1f;
            return;
          }
          if (iVar7 == 0xe) {
            param_1->layer_action_t = 0.0;
            param_1[2].flames[0x14].render_corona = 0xd;
            param_1->layer_action_index = 0x20;
          }
          else {
            (**(code **)(*(int *)(iVar5 + 0x154) + 0xe4))(iVar5);
            core_prye_cpp_FUN_0051f360(param_1,0);
            if (*(int *)(*(int *)(param_1[2].flames[0x15].base.create_event + 0x44) + 0x2dc) == 2) {
              param_1->layer_action_t = 0.0;
              param_1->layer_action_index = 8;
            }
            if (*(int *)(*(int *)(param_1[2].flames[0x15].base.create_event + 0x44) + 0x2dc) == 1) {
              param_1->layer_action_t = 0.0;
              param_1->layer_action_index = 0x19;
              return;
            }
          }
        }
      }
    }
  }
  return;
}
