// Name: core_doc.cpp_FUN_0045d2c0
// Address: 0045d2c0
// Address Range: [[0045d2c0, 0045d6b2]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0045d2c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0045d2c0(CCharacter *param_1)

{
  char *pcVar1;
  CFlame *pCVar2;
  CSound *this_ptr;
  char *pcVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  CDemonActor *this_ptr_00;
  int iVar9;
  CCloth **ppCVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = *(int *)(param_1[1].base.actor_name + 0x14);
  pCVar2 = param_1[2].flames;
  pCVar2[1].off_event[0x48] = '\0';
  pCVar2[1].off_event[0x49] = '\0';
  pCVar2[1].off_event[0x4a] = '\0';
  pCVar2[1].off_event[0x4b] = '\0';
  if (iVar6 == 0) {
    return;
  }
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    return;
  }
  if (*(int *)(param_1[2].flames[1].off_event + 0x4c) != 0) {
    return;
  }
  if ((iVar6 != 0) && (*(int *)(param_1[2].flames[1].on_event + 0x4c) == 0)) {
    return;
  }
  this_ptr_00 = *(CDemonActor **)(param_1[2].flames[1].off_event + 0x40);
  if (this_ptr_00 == (CDemonActor *)0x0) {
    this_ptr_00 = param_1->carry_hands[1].carry_actor;
LAB_0045d323:
    if ((this_ptr_00 != (CDemonActor *)0x0) &&
       (iVar6 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00), iVar6 != 0)
       ) {
      iVar12 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(this_ptr_00,g_CWeaponClassInfo.name_hash)
      ;
      if (iVar12 == 0) {
        return;
      }
      if (*(int *)(iVar12 + 0x43c) == 6) {
        iVar11 = 0;
        do {
          iVar9 = *(int *)(param_1[2].flames[1].off_event + 0x50) + 1;
          *(int *)(param_1[2].flames[1].off_event + 0x50) = iVar9;
          if ((iVar9 < 0) || (1 < iVar9)) {
            pCVar2 = param_1[2].flames;
            pCVar2[1].off_event[0x50] = '\0';
            pCVar2[1].off_event[0x51] = '\0';
            pCVar2[1].off_event[0x52] = '\0';
            pCVar2[1].off_event[0x53] = '\0';
          }
          uVar5 = *(int *)(param_1[2].flames[1].off_event + 0x50) + 4;
          if (uVar5 < 5) {
            if (uVar5 == 4) {
LAB_0045d483:
              if (iVar6 != 0) {
                param_1->layer_action_index = *(int *)(param_1[2].flames[1].off_event + 0x50) + 4;
                this_ptr = 0x0264B290;
                param_1->layer_action_t = 0.0;
                pCVar2 = param_1[2].flames;
                pCVar2[1].off_event[0x4c] = '\a';
                pCVar2[1].off_event[0x4d] = '\0';
                pCVar2[1].off_event[0x4e] = '\0';
                pCVar2[1].off_event[0x4f] = '\0';
                core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                          (this_ptr,&param_1->base,"?swordswing0?.wav" + 1,
                           &(param_1->base).location.position);
                return;
              }
            }
          }
          else if ((uVar5 < 6) || (uVar5 == 6)) goto LAB_0045d483;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0x14);
      }
      if (*(int *)(iVar12 + 0x43c) == 8) {
        param_1->layer_action_t = 0.0;
        pCVar2 = param_1[2].flames;
        pCVar2[1].off_event[0x4c] = '\a';
        pCVar2[1].off_event[0x4d] = '\0';
        pCVar2[1].off_event[0x4e] = '\0';
        pCVar2[1].off_event[0x4f] = '\0';
        param_1->layer_action_index = 7;
        return;
      }
      if (*(int *)(iVar12 + 0x43c) != 0xd) {
        return;
      }
      param_1->layer_action_t = 0.0;
      pCVar2 = param_1[2].flames;
      pCVar2[1].off_event[0x4c] = '\a';
      pCVar2[1].off_event[0x4d] = '\0';
      pCVar2[1].off_event[0x4e] = '\0';
      pCVar2[1].off_event[0x4f] = '\0';
      param_1->layer_action_index = 8;
      return;
    }
  }
  else {
    iVar6 = this_ptr_00[1].particle_systems[0].stop_after_fade;
    if ((((iVar6 == 7) || (iVar6 == 6)) || (iVar6 == 8)) || (iVar6 == 0xd)) goto LAB_0045d323;
  }
  iVar6 = *(int *)(param_1[2].flames[1].off_event + 0x40);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = *(int *)(iVar6 + 0x43c);
  if (iVar6 == 3) {
    return;
  }
  if ((param_1[2].cloth_list.cloths[6] == (CCloth *)0x0) && (iVar6 == 0)) {
    pcVar8 = param_1[2].flames[1].on_event + 0x60;
    pcVar1 = param_1[2].flames[1].off_event + 0x1c;
    pcVar3 = pcVar1;
    if (*(int *)(param_1[2].flames[1].off_event + 0x44) != 0) {
      pcVar3 = pcVar8;
      pcVar8 = pcVar1;
    }
    if ((*(int *)(pcVar3 + 0x1c) == 2) && (*(int *)(pcVar8 + 0x1c) != 2)) {
      *(uint *)(param_1[2].flames[1].off_event + 0x44) =
           (uint)(*(int *)(param_1[2].flames[1].off_event + 0x44) == 0);
    }
  }
  iVar6 = *(int *)(param_1[2].flames[1].off_event + 0x40);
  pCVar2 = param_1[2].flames;
  pCVar2[1].off_event[0x44] = '\x01';
  pCVar2[1].off_event[0x45] = '\0';
  pCVar2[1].off_event[0x46] = '\0';
  pCVar2[1].off_event[0x47] = '\0';
  if (iVar6 == 0) {
switchD_0045d3bc_caseD_3:
    iVar6 = 0;
  }
  else {
    switch(*(uint *)(iVar6 + 0x43c)) {
    case 0:
    case 5:
      iVar6 = 2;
      break;
    case 1:
      iVar6 = 0xb;
      break;
    case 2:
      iVar6 = 9;
      break;
    default:
      goto switchD_0045d3bc_caseD_3;
    case 4:
      iVar6 = 10;
      break;
    case 6:
    case 7:
    case 8:
    case 0xd:
      iVar6 = 6;
      break;
    case 10:
    case 0xb:
      iVar6 = 0xe;
    }
  }
  fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,iVar6);
  if (((((float)_DAT_005d07f7 <= fVar4) &&
       (fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0x12),
       fVar4 <= (float)_DAT_005d07ff)) && (1.0 <= *(float *)(param_1[2].flames[1].off_event + 0x30))
      ) && ((*(float *)(param_1[2].flames[1].off_event + 0x2c) <= 0.0 &&
            (iVar6 = *(int *)(param_1[2].flames[1].off_event + 0x40),
            iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0xf0))(iVar6), iVar6 != 0)))) {
    iVar6 = *(int *)(param_1[2].flames[1].off_event + 0x40);
    pCVar2 = param_1[2].flames;
    pCVar2[1].off_event[0x48] = '\0';
    pCVar2[1].off_event[0x49] = '\0';
    pCVar2[1].off_event[0x4a] = '\0';
    pCVar2[1].off_event[0x4b] = '\0';
    iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0xec))(iVar6);
    if (iVar6 != 0) {
      pCVar2 = param_1[2].flames;
      pCVar2[1].off_event[0x48] = '\x01';
      pCVar2[1].off_event[0x49] = '\0';
      pCVar2[1].off_event[0x4a] = '\0';
      pCVar2[1].off_event[0x4b] = '\0';
      return;
    }
    ppCVar10 = param_1[2].cloth_list.cloths + 7;
    iVar6 = 0;
    for (iVar12 = 0; iVar12 < (int)param_1[2].smoke_check_timer; iVar12 = iVar12 + 1) {
      if ((CCloth *)*(int *)&param_1[2].follow_formation.slots[0xb].field_0x34 == ppCVar10[0x11b]) {
        uVar7 = ppCVar10[5];
      }
      else {
        uVar7 = 0;
      }
      iVar6 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar7,g_CAmmoClassInfo.name_hash);
      if (iVar6 != 0) break;
      ppCVar10 = ppCVar10 + 1;
    }
    if ((iVar6 != 0) && (iVar6 = core_ammo_cpp_FUN_0040e450(iVar6,param_1), iVar6 != 0)) {
      *(uint *)(*(int *)(param_1[2].flames[1].off_event + 0x40) + 0x6c4) = 6;
      param_1->layer_action_index = 0xf;
      param_1->layer_action_t = 0.0;
      return;
    }
  }
  return;
}
