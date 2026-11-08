// Name: FUN_004f7710
// Address: 004f7710
// Address Range: [[004f7710, 004f787e]]
// Convention: unknown
// Signature: undefined4 FUN_004f7710(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f7710(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (_DAT_01d5ba00 <= param_2) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x651;
    FUN_004e4330("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(param_2 * 4 + 0x1d5ba04) != 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x652;
    FUN_004e4330("CDemonMission::createOneHero - hero already created!");
  }
  iVar1 = *(int *)(param_1 + 0x143c);
  local_14 = 0;
  do {
    if (iVar1 == 0) {
LAB_004f778a:
      if (local_14 == 0) {
        FUN_0047cf40(0x01C5B0E4,"Can't find hero placeholder for hero %d",param_2);
        return 0;
      }
      *(int *)(param_2 * 4 + 0x1d5ba04) = local_14;
      return 1;
    }
    iVar2 = FUN_0040c840(iVar1,_DAT_01d5baac);
    if ((iVar2 != 0) && (param_2 == *(int *)(iVar2 + 0x158))) {
      if (param_4 == 0) {
        local_14 = FUN_004d4be0(iVar2,(&PTR_s_CGabriella_005fffc4)[param_3]);
      }
      else {
        local_14 = param_4;
        (**(code **)(*(int *)(param_4 + 0x154) + 0x68))(param_4,iVar2 + 0x20,iVar2 + 0x30);
        *(uint *)(param_4 + 0x2c) = *(uint *)(iVar2 + 0x2c);
        FUN_0054e6b0(param_4 + 0x158);
        FUN_004fc420(param_4 + 0x158,0,0);
        (**(code **)(*(int *)(param_4 + 0x154) + 0x130))(param_4,0,0,0);
      }
      FUN_004f6930(0x01D81080,local_14);
      goto LAB_004f778a;
    }
    iVar1 = *(int *)(iVar1 + 0x14c);
  } while( true );
}
