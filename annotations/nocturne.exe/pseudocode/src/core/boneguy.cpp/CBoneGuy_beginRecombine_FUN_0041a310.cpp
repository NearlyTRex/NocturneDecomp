// Name: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a310
// Address: 0041a310
// Address Range: [[0041a310, 0041a3dd]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(int param_1)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1800 [1525];
  uint local_24;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0xbda0)) {
    puVar3 = (uint *)(param_1 + 0xbddc);
    iVar2 = param_1;
    do {
      FUN_0055d610(*(int *)(iVar2 + 0xbde8) + 0x30);
      puVar4 = (uint *)(iVar2 + 0xbdc0 + (uint)bVar6 * -8);
      *(uint *)(iVar2 + 0xbdbc) = local_24;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)(iVar2 + 0xbde8) + 0xf08) = 0;
      iVar1 = *(int *)(iVar2 + 0xbde8);
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      iVar2 = iVar2 + 0x48;
    } while (local_14 < *(int *)(param_1 + 0xbda0));
  }
  *(uint *)(param_1 + 0xc344) = 2;
  *(uint *)(param_1 + 0xc348) = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"boneguy-comeback.wav");
  return;
}
