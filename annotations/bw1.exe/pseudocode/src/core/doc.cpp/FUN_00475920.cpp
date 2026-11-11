// Name: core_doc.cpp_FUN_00475920
// Address: 00475920
// Address Range: [[00475920, 00475c08]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00475920(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00475920(CCharacter *param_1)

{
  float *pfVar1;
  CFlame *pCVar2;
  CDemonActor *this_ptr;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  
  iVar7 = *(int *)(param_1[1].base.actor_name + 0x14);
  pCVar2 = param_1[2].flames;
  pCVar2[0x1a].on_event[0x30] = '\0';
  pCVar2[0x1a].on_event[0x31] = '\0';
  pCVar2[0x1a].on_event[0x32] = '\0';
  pCVar2[0x1a].on_event[0x33] = '\0';
  if (iVar7 == 0) {
    return;
  }
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    return;
  }
  if (param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x != 0.0) {
    return;
  }
  if (param_1[2].flames[0x1a].globe.corona_mode == 0) {
    return;
  }
  this_ptr = *(CDemonActor **)(param_1[2].flames[0x1a].on_event + 0x28);
  if (this_ptr == (CDemonActor *)0x0) {
    this_ptr = param_1->carry_hands[1].carry_actor;
LAB_0047597e:
    if ((this_ptr != (CDemonActor *)0x0) &&
       (uVar5 = (*((this_ptr->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr), uVar5 != 0)) {
      iVar7 = 0;
      do {
        iVar9 = *(int *)(param_1[2].flames[0x1a].on_event + 0x34) + 1;
        *(int *)(param_1[2].flames[0x1a].on_event + 0x34) = iVar9;
        if ((iVar9 < 0) || (1 < iVar9)) {
          pCVar2 = param_1[2].flames;
          pCVar2[0x1a].on_event[0x34] = '\0';
          pCVar2[0x1a].on_event[0x35] = '\0';
          pCVar2[0x1a].on_event[0x36] = '\0';
          pCVar2[0x1a].on_event[0x37] = '\0';
        }
        iVar9 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(param_1[2].flames[0x1a].on_event + 0x28),
                           g_CWeaponClassInfo.name_hash);
        uVar10 = 0;
        uVar6 = *(int *)(param_1[2].flames[0x1a].on_event + 0x34) + 0xc;
        if (0xb < uVar6) {
          if (uVar6 < 0xd) {
            if (iVar9 == 0) goto LAB_00475b04;
            if (*(int *)(*(int *)(param_1[2].flames[0x1a].on_event + 0x28) + 0x56c) == 9) {
              uVar10 = 8;
            }
            else {
              uVar10 = 1;
            }
          }
          else if (uVar6 == 0xd) {
LAB_00475b04:
            uVar10 = 2;
          }
        }
        if ((uVar10 & uVar5) != 0) {
          param_1->layer_action_t = 0.0;
          iVar7 = *(int *)(param_1[2].flames[0x1a].on_event + 0x34);
          param_1[2].flames[0x1a].base.previous_transform_state.orientation.vec.x = 9.80909e-45;
          param_1->layer_action_index = iVar7 + 0xc;
          return;
        }
        iVar7 = iVar7 + 1;
        if (0x13 < iVar7) {
          return;
        }
      } while( true );
    }
  }
  else if (this_ptr[2].orient.vec.x == 9.80909e-45) goto LAB_0047597e;
  iVar7 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = *(int *)(iVar7 + 0x2e0);
  if (iVar7 == 3) {
    return;
  }
  if ((*(int *)(param_1[2].flames[0x18].on_event + 0x50) == 0) && (iVar7 == 0)) {
    pfVar8 = &param_1[2].flames[0x1a].globe.inverse_radius;
    pfVar1 = (float *)(param_1[2].flames[0x1a].on_event + 4);
    pfVar3 = pfVar1;
    if (*(int *)(param_1[2].flames[0x1a].on_event + 0x2c) != 0) {
      pfVar3 = pfVar8;
      pfVar8 = pfVar1;
    }
    if ((pfVar3[7] == 2.8026e-45) && (pfVar8[7] != 2.8026e-45)) {
      *(uint *)(param_1[2].flames[0x1a].on_event + 0x2c) =
           (uint)(*(int *)(param_1[2].flames[0x1a].on_event + 0x2c) == 0);
    }
  }
  iVar7 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
  if (iVar7 == 0) {
switchD_00475a0b_caseD_3:
    iVar7 = 0;
  }
  else {
    switch(*(uint *)(iVar7 + 0x2e0)) {
    case 0:
    case 5:
      iVar7 = 2;
      break;
    case 1:
      iVar7 = 4;
      break;
    case 2:
      iVar7 = 5;
      break;
    default:
      goto switchD_00475a0b_caseD_3;
    case 4:
      iVar7 = 7;
      break;
    case 7:
      iVar7 = 8;
      break;
    case 9:
    case 10:
      iVar7 = 0xe;
    }
  }
  fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,iVar7);
  if (((((float)_DAT_005da5c4 <= fVar4) && (1.0 <= (float)param_1[2].flames[0x1a].sfx_handle)) &&
      (param_1[2].flames[0x1a].globe_scalar <= 0.0)) &&
     (iVar7 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28),
     iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe8))(iVar7), iVar7 != 0)) {
    iVar7 = *(int *)(param_1[2].flames[0x1a].on_event + 0x28);
    pCVar2 = param_1[2].flames;
    pCVar2[0x1a].on_event[0x30] = '\0';
    pCVar2[0x1a].on_event[0x31] = '\0';
    pCVar2[0x1a].on_event[0x32] = '\0';
    pCVar2[0x1a].on_event[0x33] = '\0';
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
    if (iVar7 != 0) {
      pCVar2 = param_1[2].flames;
      pCVar2[0x1a].on_event[0x30] = '\x01';
      pCVar2[0x1a].on_event[0x31] = '\0';
      pCVar2[0x1a].on_event[0x32] = '\0';
      pCVar2[0x1a].on_event[0x33] = '\0';
    }
    core_doc_cpp_FUN_0046f610(param_1,0);
    if (*(int *)(*(int *)(param_1[2].flames[0x1a].on_event + 0x28) + 0x2dc) == 3) {
      param_1->layer_action_t = 0.0;
      param_1->layer_action_index = 0x12;
      return;
    }
  }
  return;
}
