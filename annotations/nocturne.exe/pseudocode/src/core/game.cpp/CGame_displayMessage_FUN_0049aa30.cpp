// Name: core_game.cpp_CGame_displayMessage_FUN_0049aa30
// Address: 0049aa30
// Address Range: [[0049aa30, 0049aa85]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayMessage_FUN_0049aa30(int param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayMessage_FUN_0049aa30(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    *(uint *)(param_1 + 900) = 0;
    return;
  }
  if (*param_2 != '\0') {
    pcVar2 = (char *)(param_1 + 0x284);
    *(uint *)(param_1 + 900) = param_3;
    do {
      cVar1 = *param_2;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar2[1] = cVar1;
      pcVar2 = pcVar2 + 2;
    } while (cVar1 != '\0');
    return;
  }
  *(uint *)(param_1 + 900) = 0;
  return;
}
