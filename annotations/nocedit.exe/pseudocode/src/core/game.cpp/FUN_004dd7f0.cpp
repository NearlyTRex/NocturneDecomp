// Name: core_game.cpp_FUN_004dd7f0
// Address: 004dd7f0
// Address Range: [[004dd7f0, 004dd862]]
// Convention: unknown
// Signature: undefined4 core_game_cpp_FUN_004dd7f0(void)

#include "nocturne.h"

uint core_game_cpp_FUN_004dd7f0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *in_stack_00000004;
  
  uVar3 = 0xffffffff;
  pbVar6 = in_stack_00000004;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  iVar5 = 0;
  for (iVar4 = ~uVar3 - 1; 0 < iVar4; iVar4 = iVar4 + -1) {
    bVar1 = g_InputHistory[iVar4];
    uVar2 = toupper((uint)*in_stack_00000004);
    if (bVar1 == uVar2) {
      iVar5 = iVar5 + 1;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (iVar5 == ~uVar3 - 1) {
    g_InputHistory[1] = '\0';
    return 1;
  }
  return 0;
}
