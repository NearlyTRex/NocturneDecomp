// Name: unkafter_stranger.cpp_FUN_0045d2c0
// Address: 0045d2c0
// Address Range: [[0045d2c0, 0045d6b2]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045d2c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_stranger_cpp_FUN_0045d2c0(CCharacter *param_1)

{
  CSound *this_ptr;
  byte *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  int iVar7;
  CCloth **ppCVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = *(int *)(param_1[1].base.actor_name + 0x14);
  *(uint *)&param_1[2].field_0x41e0 = 0;
  if (iVar4 == 0) {
    return;
  }
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    return;
  }
  if (*(int *)&param_1[2].field_0x41e4 != 0) {
    return;
  }
  if ((iVar4 != 0) && (*(int *)&param_1[2].field_0x4180 == 0)) {
    return;
  }
  iVar4 = *(int *)&param_1[2].field_0x41d8;
  if (iVar4 == 0) {
    iVar4 = *(int *)&param_1->field_0x2698;
LAB_0045d323:
    if ((iVar4 != 0) && (iVar10 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x7c))(iVar4), iVar10 != 0)
       ) {
      iVar4 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar4,g_CWeaponClassInfo.name_hash);
      if (iVar4 == 0) {
        return;
      }
      if (*(int *)(iVar4 + 0x43c) == 6) {
        iVar9 = 0;
        do {
          iVar7 = *(int *)&param_1[2].field_0x41e8 + 1;
          *(int *)&param_1[2].field_0x41e8 = iVar7;
          if ((iVar7 < 0) || (1 < iVar7)) {
            *(uint *)&param_1[2].field_0x41e8 = 0;
          }
          uVar3 = *(int *)&param_1[2].field_0x41e8 + 4;
          if (uVar3 < 5) {
            if (uVar3 == 4) {
LAB_0045d483:
              if (iVar10 != 0) {
                param_1->layer_action_index = *(int *)&param_1[2].field_0x41e8 + 4;
                this_ptr = 0x0264B290;
                param_1->layer_action_t = 0.0;
                *(uint *)&param_1[2].field_0x41e4 = 7;
                core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                          (this_ptr,&param_1->base,"?swordswing0?.wav" + 1,
                           (CVector3f *)&(param_1->base).field_0x20);
                return;
              }
            }
          }
          else if ((uVar3 < 6) || (uVar3 == 6)) goto LAB_0045d483;
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x14);
      }
      if (*(int *)(iVar4 + 0x43c) == 8) {
        param_1->layer_action_t = 0.0;
        *(uint *)&param_1[2].field_0x41e4 = 7;
        param_1->layer_action_index = 7;
        return;
      }
      if (*(int *)(iVar4 + 0x43c) != 0xd) {
        return;
      }
      param_1->layer_action_t = 0.0;
      *(uint *)&param_1[2].field_0x41e4 = 7;
      param_1->layer_action_index = 8;
      return;
    }
  }
  else {
    iVar10 = *(int *)(iVar4 + 0x43c);
    if ((((iVar10 == 7) || (iVar10 == 6)) || (iVar10 == 8)) || (iVar10 == 0xd)) goto LAB_0045d323;
  }
  if (*(int *)&param_1[2].field_0x41d8 == 0) {
    return;
  }
  iVar4 = *(int *)(*(int *)&param_1[2].field_0x41d8 + 0x43c);
  if (iVar4 == 3) {
    return;
  }
  if ((param_1[2].cloth_list.cloths[6] == (CCloth *)0x0) && (iVar4 == 0)) {
    puVar6 = &param_1[2].field_0x4194;
    puVar1 = &param_1[2].field_0x41b4;
    if (*(int *)&param_1[2].field_0x41dc != 0) {
      puVar1 = puVar6;
      puVar6 = &param_1[2].field_0x41b4;
    }
    if ((*(int *)(puVar1 + 0x1c) == 2) && (*(int *)(puVar6 + 0x1c) != 2)) {
      *(uint *)&param_1[2].field_0x41dc = (uint)(*(int *)&param_1[2].field_0x41dc == 0);
    }
  }
  *(uint *)&param_1[2].field_0x41dc = 1;
  if (*(int *)&param_1[2].field_0x41d8 == 0) {
switchD_0045d3bc_caseD_3:
    iVar4 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&param_1[2].field_0x41d8 + 0x43c)) {
    case 0:
    case 5:
      iVar4 = 2;
      break;
    case 1:
      iVar4 = 0xb;
      break;
    case 2:
      iVar4 = 9;
      break;
    default:
      goto switchD_0045d3bc_caseD_3;
    case 4:
      iVar4 = 10;
      break;
    case 6:
    case 7:
    case 8:
    case 0xd:
      iVar4 = 6;
      break;
    case 10:
    case 0xb:
      iVar4 = 0xe;
    }
  }
  fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,iVar4);
  if (((((float)_DAT_005d07f7 <= fVar2) &&
       (fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0x12),
       fVar2 <= (float)_DAT_005d07ff)) && (1.0 <= *(float *)&param_1[2].field_0x41c8)) &&
     ((*(float *)&param_1[2].field_0x41c4 <= 0.0 &&
      (iVar4 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x41d8 + 0x2b0) + 0xf0))
                         (*(int *)&param_1[2].field_0x41d8), iVar4 != 0)))) {
    *(uint *)&param_1[2].field_0x41e0 = 0;
    iVar4 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x41d8 + 0x2b0) + 0xec))
                      (*(int *)&param_1[2].field_0x41d8);
    if (iVar4 != 0) {
      *(uint *)&param_1[2].field_0x41e0 = 1;
      return;
    }
    ppCVar8 = param_1[2].cloth_list.cloths + 7;
    iVar4 = 0;
    for (iVar10 = 0; iVar10 < (int)param_1[2].smoke_check_timer; iVar10 = iVar10 + 1) {
      if ((CCloth *)*(int *)&param_1[2].field_0x3324 == ppCVar8[0x11b]) {
        uVar5 = ppCVar8[5];
      }
      else {
        uVar5 = 0;
      }
      iVar4 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar5,g_CAmmoClassInfo.name_hash);
      if (iVar4 != 0) break;
      ppCVar8 = ppCVar8 + 1;
    }
    if ((iVar4 != 0) && (iVar4 = core_ammo_cpp_FUN_0040e450(iVar4,param_1), iVar4 != 0)) {
      *(uint *)(*(int *)&param_1[2].field_0x41d8 + 0x6c4) = 6;
      param_1->layer_action_index = 0xf;
      param_1->layer_action_t = 0.0;
      return;
    }
  }
  return;
}
