// Name: unkafter_stranger.cpp_FUN_0045d2c0
// Address: 0045d2c0
// Address Range: [[0045d2c0, 0045d6b2]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045d2c0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_stranger_cpp_FUN_0045d2c0(CDemonActor *param_1)

{
  CSound *this_ptr;
  byte *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = *(int *)&param_1[0x62].field_0x18c;
  *(uint *)&param_1[0xdd].field_0x13c = 0;
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)&param_1[0xe].field_0x194 != 0) {
    return;
  }
  if (*(int *)&param_1[0xdd].field_0x140 != 0) {
    return;
  }
  if ((iVar5 != 0) && (*(int *)&param_1[0xdd].field_0xdc == 0)) {
    return;
  }
  iVar5 = *(int *)&param_1[0xdd].field_0x134;
  if (iVar5 == 0) {
    iVar5 = *(int *)&param_1[0xe].field_0xc0;
LAB_0045d323:
    if ((iVar5 != 0) && (iVar9 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x7c))(iVar5), iVar9 != 0))
    {
      iVar5 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar5,g_CWeaponClassInfo.name_hash);
      if (iVar5 == 0) {
        return;
      }
      if (*(int *)(iVar5 + 0x43c) == 6) {
        iVar8 = 0;
        do {
          iVar6 = *(int *)&param_1[0xdd].field_0x144 + 1;
          *(int *)&param_1[0xdd].field_0x144 = iVar6;
          if ((iVar6 < 0) || (1 < iVar6)) {
            *(uint *)&param_1[0xdd].field_0x144 = 0;
          }
          uVar3 = *(int *)&param_1[0xdd].field_0x144 + 4;
          if (uVar3 < 5) {
            if (uVar3 == 4) {
LAB_0045d483:
              if (iVar9 != 0) {
                *(int *)&param_1[0x10].field_0x1c4 = *(int *)&param_1[0xdd].field_0x144 + 4;
                this_ptr = 0x0264B290;
                *(uint *)&param_1[0x10].field_0x1c8 = 0;
                *(uint *)&param_1[0xdd].field_0x140 = 7;
                core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                          (this_ptr,param_1,"?swordswing0?.wav" + 1,
                           (CVector3f *)&param_1->field_0x20);
                return;
              }
            }
          }
          else if ((uVar3 < 6) || (uVar3 == 6)) goto LAB_0045d483;
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x14);
      }
      if (*(int *)(iVar5 + 0x43c) == 8) {
        *(uint *)&param_1[0x10].field_0x1c8 = 0;
        *(uint *)&param_1[0xdd].field_0x140 = 7;
        *(uint *)&param_1[0x10].field_0x1c4 = 7;
        return;
      }
      if (*(int *)(iVar5 + 0x43c) != 0xd) {
        return;
      }
      *(uint *)&param_1[0x10].field_0x1c8 = 0;
      *(uint *)&param_1[0xdd].field_0x140 = 7;
      *(uint *)&param_1[0x10].field_0x1c4 = 8;
      return;
    }
  }
  else {
    iVar9 = *(int *)(iVar5 + 0x43c);
    if ((((iVar9 == 7) || (iVar9 == 6)) || (iVar9 == 8)) || (iVar9 == 0xd)) goto LAB_0045d323;
  }
  if (*(int *)&param_1[0xdd].field_0x134 == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)&param_1[0xdd].field_0x134 + 0x43c);
  if (iVar5 == 3) {
    return;
  }
  if ((*(int *)&param_1[0xd6].field_0x100 == 0) && (iVar5 == 0)) {
    puVar7 = &param_1[0xdd].field_0xf0;
    puVar1 = &param_1[0xdd].field_0x110;
    if (*(int *)&param_1[0xdd].field_0x138 != 0) {
      puVar1 = puVar7;
      puVar7 = &param_1[0xdd].field_0x110;
    }
    if ((*(int *)(puVar1 + 0x1c) == 2) && (*(int *)(puVar7 + 0x1c) != 2)) {
      *(uint *)&param_1[0xdd].field_0x138 = (uint)(*(int *)&param_1[0xdd].field_0x138 == 0);
    }
  }
  *(uint *)&param_1[0xdd].field_0x138 = 1;
  if (*(int *)&param_1[0xdd].field_0x134 == 0) {
switchD_0045d3bc_caseD_3:
    uVar4 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&param_1[0xdd].field_0x134 + 0x43c)) {
    case 0:
    case 5:
      uVar4 = 2;
      break;
    case 1:
      uVar4 = 0xb;
      break;
    case 2:
      uVar4 = 9;
      break;
    default:
      goto switchD_0045d3bc_caseD_3;
    case 4:
      uVar4 = 10;
      break;
    case 6:
    case 7:
    case 8:
    case 0xd:
      uVar4 = 6;
      break;
    case 10:
    case 0xb:
      uVar4 = 0xe;
    }
  }
  fVar2 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,uVar4);
  if (((((float)_DAT_005d07f7 <= fVar2) &&
       (fVar2 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,0x12), fVar2 <= (float)_DAT_005d07ff))
      && (1.0 <= *(float *)&param_1[0xdd].field_0x124)) &&
     ((*(float *)&param_1[0xdd].field_0x120 <= 0.0 &&
      (iVar5 = (**(code **)(*(int *)(*(int *)&param_1[0xdd].field_0x134 + 0x2b0) + 0xf0))
                         (*(int *)&param_1[0xdd].field_0x134), iVar5 != 0)))) {
    *(uint *)&param_1[0xdd].field_0x13c = 0;
    iVar5 = (**(code **)(*(int *)(*(int *)&param_1[0xdd].field_0x134 + 0x2b0) + 0xec))
                      (*(int *)&param_1[0xdd].field_0x134);
    if (iVar5 != 0) {
      *(uint *)&param_1[0xdd].field_0x13c = 1;
      return;
    }
    puVar7 = &param_1[0xd6].field_0x104;
    iVar5 = 0;
    for (iVar9 = 0; iVar9 < *(int *)&param_1[0xd6].field_0x114; iVar9 = iVar9 + 1) {
      if (*(int *)&param_1[0xd8].field_0x4 == *(int *)(puVar7 + 0x46c)) {
        uVar4 = *(uint *)(puVar7 + 0x14);
      }
      else {
        uVar4 = 0;
      }
      iVar5 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar4,g_CAmmoClassInfo.name_hash);
      if (iVar5 != 0) break;
      puVar7 = puVar7 + 4;
    }
    if ((iVar5 != 0) && (iVar5 = core_ammo_cpp_FUN_0040e450(iVar5,param_1), iVar5 != 0)) {
      *(uint *)(*(int *)&param_1[0xdd].field_0x134 + 0x6c4) = 6;
      *(uint *)&param_1[0x10].field_0x1c4 = 0xf;
      *(uint *)&param_1[0x10].field_0x1c8 = 0;
      return;
    }
  }
  return;
}
