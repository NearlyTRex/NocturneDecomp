// Name: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0
// Address: 0054e0b0
// Address Range: [[0054e0b0, 0054e126]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicusummon.wav");
  for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x14cd6c); iVar3 = iVar3 + 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar4 + 0x14cd70 + 0x01E57284),_DAT_01b7b32c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2cc) == 2)) {
      iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
      if (iVar2 == 0) {
        FUN_00462710(iVar1);
      }
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
