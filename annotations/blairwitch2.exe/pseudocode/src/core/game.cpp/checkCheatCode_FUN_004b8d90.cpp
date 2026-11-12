// Name: core_game.cpp_checkCheatCode_FUN_004b8d90
// Address: 004b8d90
// Address Range: [[004b8d90, 004b8e02]]
// Convention: unknown
// Signature: undefined4 core_game_cpp_checkCheatCode_FUN_004b8d90(byte *param_1)

#include "nocturne.h"

uint core_game_cpp_checkCheatCode_FUN_004b8d90(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = 0xffffffff;
  pbVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  iVar5 = 0;
  for (iVar4 = ~uVar3 - 1; 0 < iVar4; iVar4 = iVar4 + -1) {
    bVar1 = *(byte *)(iVar4 + 0x1cb80f7);
    uVar2 = toupper((uint)*param_1);
    if (bVar1 == uVar2) {
      iVar5 = iVar5 + 1;
    }
    param_1 = param_1 + 1;
  }
  if (iVar5 == ~uVar3 - 1) {
    DAT_01cb80f8 = 0;
    return 1;
  }
  return 0;
}
