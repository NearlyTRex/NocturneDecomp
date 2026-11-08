// Name: FUN_004fcf70
// Address: 004fcf70
// Address Range: [[004fcf70, 004fd0d5]]
// Convention: unknown
// Signature: undefined4 FUN_004fcf70(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004fcf70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (_DAT_01cedee0 <= param_2) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x640;
    FUN_004e4500("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(param_2 * 4 + 0x1cedee4) != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x641;
    FUN_004e4500("CDemonMission::createOneHero - hero already created!");
  }
  iVar1 = *(int *)(param_1 + 0x1114);
  local_14 = 0;
  do {
    if (iVar1 == 0) {
LAB_004fcfea:
      if (local_14 == 0) {
        FUN_0047be40(0x01C25594,"Can't find hero placeholder for hero %d",param_2);
        return 0;
      }
      *(int *)(param_2 * 4 + 0x1cedee4) = local_14;
      return 1;
    }
    iVar2 = FUN_0040c8f0(iVar1,_DAT_01cedf8c);
    if ((iVar2 != 0) && (param_2 == *(int *)(iVar2 + 0x2b4))) {
      if (param_4 == 0) {
        local_14 = FUN_004d0a40(iVar2,(&PTR_s_CGabriella_00617a68)[param_3]);
      }
      else {
        local_14 = param_4;
        (**(code **)(*(int *)(param_4 + 0x2b0) + 0x70))(param_4,iVar2 + 0x20,iVar2 + 0x30);
        *(uint *)(param_4 + 0x2c) = *(uint *)(iVar2 + 0x2c);
        FUN_00503980(param_4 + 0x2b4,0,0);
        (**(code **)(*(int *)(param_4 + 0x2b0) + 0x138))(param_4,0,0,0);
      }
      FUN_004fc200(0x01D182F0,local_14);
      goto LAB_004fcfea;
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}
