// Name: core_game.cpp_CGame_promptLoadGame_FUN_004a6570
// Address: 004a6570
// Address Range: [[004a6570, 004a6677]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004a6570(int param_1)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004a6570(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_210 [260];
  byte local_10c [256];
  
  *(uint *)(param_1 + 0x9c4) = 0;
  *(byte *)(param_1 + 0x9c8) = 0;
  splitpath(&DAT_01c78598,0,0,0,local_10c);
  iVar2 = _stricmp(local_10c,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = _stricmp(local_10c,".noc"), iVar2 == 0)) {
    pcVar5 = local_210;
    pcVar4 = &DAT_01c78598;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_210[0] = '\0';
  }
  pcVar5 = local_210;
  uVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                    ("Select file to load","save","*.noc",local_210,1);
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(0x01BCD074,uVar3);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = (char *)(param_1 + 0x9c8);
  *(uint *)(param_1 + 0x9c4) = 1;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
