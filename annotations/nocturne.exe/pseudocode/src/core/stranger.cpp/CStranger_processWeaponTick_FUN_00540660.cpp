// Name: core_stranger.cpp_CStranger_processWeaponTick_FUN_00540660
// Address: 00540660
// Address Range: [[00540660, 0054071d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1fa94);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x14c) + 4))(iVar2,param_2);
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(param_1 + 0x1fa94),_DAT_01bca0c0);
    if (iVar2 != 0) {
      iVar3 = FUN_0046eda0(iVar2);
      if (iVar3 != 0) {
        *(uint *)(iVar2 + 0x57c) = 0;
        *(uint *)(iVar2 + 0x578) = *(uint *)(iVar2 + 0x57c);
        *(uint *)(iVar2 + 0x574) = *(uint *)(iVar2 + 0x578);
        (**(code **)(*(int *)(iVar2 + 0x14c) + 0xdc))(iVar2);
        *(uint *)(param_1 + 0x1fa94) = 0;
        *(uint *)(param_1 + 0x2a84) = 0;
        uVar1 = 0x41200000;
        *(uint *)(param_1 + 0x2a88) = 0;
        *(uint *)(param_1 + 0x1fa4c) = uVar1;
        if (*(int *)(param_1 + 0x1faa0) == 3) {
          *(uint *)(param_1 + 0x1faa0) = 0;
          return;
        }
      }
    }
  }
  return;
}
