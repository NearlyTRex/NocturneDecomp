// Name: core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0
// Address: 00561cf0
// Address Range: [[00561cf0, 00561fba]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_00561cf0(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_00561cf0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xbde0);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xbde4);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xbde8);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xbdec);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xbdf8);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xbdf4);
      break;
    default:
      goto switchD_00561d26_default;
    }
    *param_2 = iVar2;
  }
switchD_00561d26_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xbde0)) || (iVar2 == *(int *)(param_1 + 0xbde4))) ||
       (iVar2 == *(int *)(param_1 + 0xbde8))) ||
      ((iVar2 == *(int *)(param_1 + 0xbdec) || (iVar2 == *(int *)(param_1 + 0xbdf4))))) ||
     (iVar2 == *(int *)(param_1 + 0xbdf8))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xbdf8) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xbdf4) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01C775EC + 0x1e0) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01C775EC + 0x14) == 0) {
      local_14 = 0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(local_14);
    if (iVar2 != 0) {
      uVar3 = core_bodypart_cpp_createBodyPart_FUN_00415b30
                        (param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,0);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(param_1,uVar3,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xbde0)) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  (param_1,uVar3,*(uint *)(param_1 + 0xbde4),0);
      }
      if (*(int *)(param_1 + 0xbde8) == *param_2) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  (param_1,uVar3,*(uint *)(param_1 + 0xbdec),0);
      }
      if (*(int *)(param_1 + 0xbdf4) == *param_2) {
        piVar1 = param_2 + 3;
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbde8),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbdec),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbde0),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbde4),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbdf8),piVar1,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(param_1,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(uVar3);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf8) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)7);
      if (*(int *)(param_1 + 0xbdf0) < 0) {
        param_2[1] = 0x4479c000;
      }
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xbdf8)) {
    param_2[1] = (int)((float)param_2[1] * (float)2.5);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xbdf0)) && (iVar2 != *(int *)(param_1 + 0xbdf4))) {
    param_2[1] = (int)((float)param_2[1] * (float)0.5);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
