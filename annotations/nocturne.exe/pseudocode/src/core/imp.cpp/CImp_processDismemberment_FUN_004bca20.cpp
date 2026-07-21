// Name: core_imp.cpp_CImp_processDismemberment_FUN_004bca20
// Address: 004bca20
// Address Range: [[004bca20, 004bccb5]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004bca20(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004bca20(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xbd30);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0xbd34);
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0xbd38);
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0xbd3c);
      break;
    case 4:
      iVar2 = *(int *)(param_1 + 0xbd58);
      break;
    case 5:
      iVar2 = *(int *)(param_1 + 0xbd54);
      break;
    default:
      goto switchD_004bca56_default;
    }
    *param_2 = iVar2;
  }
switchD_004bca56_default:
  iVar2 = *param_2;
  if (((((iVar2 == *(int *)(param_1 + 0xbd30)) || (iVar2 == *(int *)(param_1 + 0xbd34))) ||
       (iVar2 == *(int *)(param_1 + 0xbd38))) ||
      ((iVar2 == *(int *)(param_1 + 0xbd3c) || (iVar2 == *(int *)(param_1 + 0xbd54))))) ||
     (iVar2 == *(int *)(param_1 + 0xbd58))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xbd58) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xbd54) == *param_2) {
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
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(param_1,uVar3,*param_2,1);
      if (*param_2 == *(int *)(param_1 + 0xbd30)) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  (param_1,uVar3,*(uint *)(param_1 + 0xbd34),0);
      }
      if (*(int *)(param_1 + 0xbd38) == *param_2) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  (param_1,uVar3,*(uint *)(param_1 + 0xbd3c),0);
      }
      if (*(int *)(param_1 + 0xbd54) == *param_2) {
        piVar1 = param_2 + 3;
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd38),piVar1,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd3c),piVar1,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd30),piVar1,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd34),piVar1,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd58),piVar1,1);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(param_1,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(uVar3);
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005864a5);
    }
  }
  iVar2 = *param_2;
  if (iVar2 == *(int *)(param_1 + 0xbd58)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005864b5);
    return;
  }
  if ((iVar2 != *(int *)(param_1 + 0xbd50)) && (iVar2 != *(int *)(param_1 + 0xbd54))) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_005864ad);
    return;
  }
  param_2[1] = param_2[1];
  return;
}
