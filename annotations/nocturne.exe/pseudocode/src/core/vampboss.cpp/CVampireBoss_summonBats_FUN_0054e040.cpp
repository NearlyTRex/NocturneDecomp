// Name: core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040
// Address: 0054e040
// Address Range: [[0054e040, 0054e0a0]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicusummon.wav");
  for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar3 + 0x14cd70 + 0x01E57284),_DAT_02dd1144);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xbecc) != 0)) {
      FUN_0054bfc0(iVar1);
    }
    iVar3 = iVar3 + 4;
  }
  return;
}
