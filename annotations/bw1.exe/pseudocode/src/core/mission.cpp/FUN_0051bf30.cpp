// Name: FUN_0051bf30
// Address: 0051bf30
// Address Range: [[0051bf30, 0051c09e]]
// Convention: unknown
// Signature: undefined4 FUN_0051bf30(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051bf30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (_DAT_01d06aa0 <= param_2) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x64f;
    FUN_005030e0("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(param_2 * 4 + 0x1d06aa4) != 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x650;
    FUN_005030e0("CDemonMission::createOneHero - hero already created!");
  }
  iVar1 = *(int *)(param_1 + 0x1118);
  local_14 = 0;
  do {
    if (iVar1 == 0) {
LAB_0051bfaa:
      if (local_14 == 0) {
        FUN_004943a0(0x01C3EB54,"Can't find hero placeholder for hero %d",param_2);
        return 0;
      }
      *(int *)(param_2 * 4 + 0x1d06aa4) = local_14;
      return 1;
    }
    iVar2 = FUN_0040c600(iVar1,_DAT_01d06b4c);
    if ((iVar2 != 0) && (param_2 == *(int *)(iVar2 + 0x158))) {
      if (param_4 == 0) {
        local_14 = FUN_004ecca0(iVar2,(&PTR_s_CGabriella_0061ef2c)[param_3]);
      }
      else {
        local_14 = param_4;
        (**(code **)(*(int *)(param_4 + 0x154) + 0x68))(param_4,iVar2 + 0x20,iVar2 + 0x30);
        *(uint *)(param_4 + 0x2c) = *(uint *)(iVar2 + 0x2c);
        FUN_00569b20(param_4 + 0x158);
        FUN_00524b10(param_4 + 0x158,0,0);
        (**(code **)(*(int *)(param_4 + 0x154) + 0x130))(param_4,0,0,0);
      }
      FUN_0051b160(0x01D2C900,local_14);
      goto LAB_0051bfaa;
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}
