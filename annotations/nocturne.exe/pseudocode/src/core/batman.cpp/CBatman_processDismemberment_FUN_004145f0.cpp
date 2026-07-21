// Name: core_batman.cpp_CBatman_processDismemberment_FUN_004145f0
// Address: 004145f0
// Address Range: [[004145f0, 00414927]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_processDismemberment_FUN_004145f0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_processDismemberment_FUN_004145f0(int param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  byte *puVar3;
  int iVar4;
  uint uVar5;
  byte local_34 [12];
  uint local_28;
  uint local_24;
  uint local_20;
  int local_14;
  
  if ((0.0 < (float)param_2[0xb]) && (*param_2 == -1)) {
    iVar4 = rand();
    switch(iVar4 % 6) {
    case 0:
      iVar4 = *(int *)(param_1 + 0xbd90);
      break;
    case 1:
      iVar4 = *(int *)(param_1 + 0xbd94);
      break;
    case 2:
      iVar4 = *(int *)(param_1 + 0xbd98);
      break;
    case 3:
      iVar4 = *(int *)(param_1 + 0xbd9c);
      break;
    case 4:
      iVar4 = *(int *)(param_1 + 0xbd88);
      break;
    case 5:
      iVar4 = *(int *)(param_1 + 0xbd8c);
      break;
    default:
      goto switchD_00414626_default;
    }
    *param_2 = iVar4;
  }
switchD_00414626_default:
  iVar4 = *param_2;
  if (((((iVar4 == *(int *)(param_1 + 0xbd90)) || (iVar4 == *(int *)(param_1 + 0xbd94))) ||
       (iVar4 == *(int *)(param_1 + 0xbd98))) ||
      ((iVar4 == *(int *)(param_1 + 0xbd9c) || (iVar4 == *(int *)(param_1 + 0xbd8c))))) ||
     (iVar4 == *(int *)(param_1 + 0xbd88))) {
    local_14 = param_2[0xb];
    if (*(int *)(param_1 + 0xbd88) == *param_2) {
      local_14 = 0x3d4ccccd;
    }
    if (*(int *)(param_1 + 0xbd8c) == *param_2) {
      local_14 = 0x3ca3d70a;
    }
    if (*(int *)(0x01C775EC + 0x1e0) != 0) {
      local_14 = 0x3f800000;
    }
    if (*(int *)(0x01C775EC + 0x14) == 0) {
      local_14 = 0;
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(local_14);
    if (iVar4 != 0) {
      uVar5 = core_bodypart_cpp_createBodyPart_FUN_00415b30
                        (param_1 + 0x20,param_1 + 0x30,param_2 + 3,param_1,0,0,
                         *(uint *)(param_1 + 0x2608));
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(param_1,uVar5,*param_2,0);
      if (*param_2 == *(int *)(param_1 + 0xbd90)) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  (param_1,uVar5,*(uint *)(param_1 + 0xbd94),0);
      }
      if (*(int *)(param_1 + 0xbd98) == *param_2) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  (param_1,uVar5,*(uint *)(param_1 + 0xbd9c),0);
      }
      if (*(int *)(param_1 + 0xbd8c) == *param_2) {
        piVar1 = param_2 + 3;
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd98),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd9c),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd90),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd94),piVar1,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  (param_1,*(uint *)(param_1 + 0xbd88),piVar1,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(param_1,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(uVar5);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd88) * 4) == 0) {
        param_2[1] = 0x461c3c00;
      }
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_00578d0f);
    }
  }
  iVar4 = *param_2;
  if (iVar4 == *(int *)(param_1 + 0xbd88)) {
    fVar2 = (float)param_2[1] * (float)_DAT_00578d1f;
  }
  else {
    if ((iVar4 == *(int *)(param_1 + 0xbda0)) || (iVar4 == *(int *)(param_1 + 0xbd8c))) {
      param_2[1] = param_2[1];
      goto LAB_004147e1;
    }
    fVar2 = (float)param_2[1] * (float)_DAT_00578d17;
  }
  param_2[1] = (int)fVar2;
LAB_004147e1:
  puVar3 = PTR_DAT_005ad350;
  if ((*(int *)(param_1 + 0xbd8c) == *param_2) && (param_2[0xc] == 0x68)) {
    param_2[1] = (int)((float)param_2[1] * (float)_DAT_00578d27);
    engine_console_cpp_CConsole_printf_FUN_0043ac60(puVar3,"Shot thru the heart\n");
    iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
    if (iVar4 != 0) {
      local_28 = 0;
      local_24 = 0x41a00000;
      local_20 = 0x41a00000;
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_34,&local_28);
      core_charactr_cpp_CCharacter_dismember_FUN_00427b60(param_1,local_34,0xbf800000,1);
      return;
    }
  }
  return;
}
