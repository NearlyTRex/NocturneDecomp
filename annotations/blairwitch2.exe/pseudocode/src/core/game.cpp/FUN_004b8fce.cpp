// Name: core_game.cpp_FUN_004b8fce
// Address: 004b8fce
// Address Range: [[004b8fce, 004b905c]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b8fce(char *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b8fce(char *param_1,uint param_2)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)FUN_005b8be2(0x47c);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
              (0x01D182F0,(CDemonActor *)pCVar1);
    (**(code **)(*(int *)&pCVar1->field_0x2b0 + 8))(pCVar1);
    *(uint *)&pCVar1->field_0x474 = param_2;
    core_ammo_cpp_FUN_0040e240(pCVar1,param_1);
    *(uint *)&pCVar1->field_0x470 = 500;
    core_inv_cpp_FUN_004dadb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,pCVar1,1,0);
    return;
  }
  return;
}
