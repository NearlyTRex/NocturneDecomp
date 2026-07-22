// Name: core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0
// Address: 00412de0
// Address Range: [[00412de0, 0041303e]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00412de0(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00412de0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xbd44);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xbd48);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xbd4c);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xbd50);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xbd24);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xbd28);
      break;
    default:
      goto switchD_00412e16_default;
    }
    *param_2 = iVar2;
  }
switchD_00412e16_default:
  iVar2 = *param_2;
  if ((((iVar2 != *(int *)(param_1 + 0xbd44)) && (iVar2 != *(int *)(param_1 + 0xbd48))) &&
      (iVar2 != *(int *)(param_1 + 0xbd4c))) &&
     (((iVar2 != *(int *)(param_1 + 0xbd50) && (iVar2 != *(int *)(param_1 + 0xbd28))) &&
      (iVar2 != *(int *)(param_1 + 0xbd24))))) {
    return;
  }
  local_14 = param_2[0xb];
  if (*(int *)(param_1 + 0xbd24) == *param_2) {
    local_14 = 0x3d4ccccd;
  }
  if (*(int *)(param_1 + 0xbd28) == *param_2) {
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
                      (param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,
                       *(uint *)(param_1 + 0x2608));
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(param_1,uVar3,*param_2,0);
    if (*param_2 == *(int *)(param_1 + 0xbd44)) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                (param_1,uVar3,*(uint *)(param_1 + 0xbd48),0);
    }
    if (*(int *)(param_1 + 0xbd4c) == *param_2) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                (param_1,uVar3,*(uint *)(param_1 + 0xbd50),0);
    }
    if (*(int *)(param_1 + 0xbd28) == *param_2) {
      piVar1 = param_2 + 3;
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                (param_1,*(uint *)(param_1 + 0xbd4c),piVar1,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                (param_1,*(uint *)(param_1 + 0xbd50),piVar1,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                (param_1,*(uint *)(param_1 + 0xbd44),piVar1,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                (param_1,*(uint *)(param_1 + 0xbd48),piVar1,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                (param_1,*(uint *)(param_1 + 0xbd24),piVar1,0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(param_1,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(uVar3);
    if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd24) * 4) == 0) {
      param_2[1] = 0x461c3c00;
    }
    param_2[2] = (int)((float)param_2[2] * (float)7);
    return;
  }
  return;
}
