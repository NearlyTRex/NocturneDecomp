// Name: core_gore.cpp_CGore_spawnFlies_FUN_004b0580
// Address: 004b0580
// Address Range: [[004b0580, 004b0667]]
// Convention: unknown
// Signature: int core_gore_cpp_CGore_spawnFlies_FUN_004b0580(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_gore_cpp_CGore_spawnFlies_FUN_004b0580(uint param_1,uint *param_2,uint param_3,float param_4,uint *param_5)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_0056497c(0x2a18);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_0048eef0(iVar3);
  }
  if (iVar4 == 0) {
    _DAT_01cc4800 = "..\\core\\gore.cpp";
    _DAT_01cc4804 = 0x675;
    FUN_004c8440("Can't create flies!");
  }
  fVar2 = (float)60;
  *(uint *)(iVar4 + 0x20) = *param_2;
  *(uint *)(iVar4 + 0x24) = param_2[1];
  *(uint *)(iVar4 + 0x28) = param_2[2];
  uVar1 = *0x01CC9450;
  *(uint *)(iVar4 + 0x15c) = 0;
  *(uint *)(iVar4 + 0x2c) = uVar1;
  *(uint *)(iVar4 + 0x2a04) = param_3;
  *(float *)(iVar4 + 0x2a0c) = fVar2 / param_4;
  if ((param_5 != (uint *)0x0) && ((uint *)(iVar4 + 0x150) != param_5)) {
    *(uint *)(iVar4 + 0x150) = *param_5;
    *(uint *)(iVar4 + 0x154) = param_5[1];
    *(uint *)(iVar4 + 0x158) = param_5[2];
  }
  (*(code *)**(uint **)(iVar4 + 0x14c))(iVar4);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar4);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,iVar4);
  return iVar4;
}
