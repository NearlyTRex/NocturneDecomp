// Name: core_game.cpp_checkCheatCode_FUN_004a0260
// Address: 004a0260
// Address Range: [[004a0260, 004a02d2]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_checkCheatCode_FUN_004a0260(char *cheat_string)

#include "nocturne.h"

int __cdecl core_game_cpp_checkCheatCode_FUN_004a0260(char *cheat_string)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = 0xffffffff;
  pcVar7 = cheat_string;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  for (iVar5 = ~uVar4 - 1; 0 < iVar5; iVar5 = iVar5 + -1) {
    bVar2 = *(byte *)(iVar5 + 0x1c78aef);
    uVar3 = toupper((uint)(byte)*cheat_string);
    if (bVar2 == uVar3) {
      iVar6 = iVar6 + 1;
    }
    cheat_string = cheat_string + 1;
  }
  if (iVar6 == ~uVar4 - 1) {
    DAT_01c78af0 = 0;
    return 1;
  }
  return 0;
}
