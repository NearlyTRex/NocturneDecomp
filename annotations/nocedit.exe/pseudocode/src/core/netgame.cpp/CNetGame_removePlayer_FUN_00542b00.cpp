// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// Address: 00542b00
// Address Range: [[00542b00, 00542ce5]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_removePlayer(CNetGame* param_1, uint
   param_2) */

void core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(void)

{
  int iVar1;
  void *src;
  void *unaff_EBP;
  byte *dest;
  byte *dest_00;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x1c) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x862;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::removePlayer - invalid player index");
  }
  if (in_stack_0000000c == *(int *)(in_stack_00000008 + 0x114)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x869;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::removePlayer - tried to remove myself!");
  }
  if (in_stack_0000000c == *(int *)(in_stack_00000008 + 0x110)) {
    *(uint *)(in_stack_00000008 + 0x110) = 0xffffffff;
  }
  if (in_stack_0000000c == *(int *)(in_stack_00000008 + 0x114)) {
    *(uint *)(in_stack_00000008 + 0x114) = 0xffffffff;
  }
  iVar1 = *(int *)(in_stack_00000008 + 0x1c) + -1;
  *(int *)(in_stack_00000008 + 0x1c) = iVar1;
  crt_string_c_memmove_FUN_005fe5e0
            ((void *)(in_stack_0000000c * 0x78 + in_stack_00000008 + 0x20),
             (void *)((in_stack_0000000c + 1) * 0x78 + in_stack_00000008 + 0x20),
             (iVar1 - in_stack_0000000c) * 0x78);
  iVar1 = 0;
  if (0 < DAT_02f98ad0) {
    dest_00 = &DAT_02f98adc + in_stack_00000010;
    src = (void *)((int)unaff_EBP + 0x2f98adc);
    dest = &DAT_02f98ae0 + in_stack_00000010 * 4;
    do {
      crt_string_c_memmove_FUN_005fe5e0
                (dest_00,src,*(int *)(in_stack_0000000c + 0x1c) - in_stack_00000010);
      iVar1 = iVar1 + 1;
      src = (void *)((int)src + 0x114);
      crt_string_c_memmove_FUN_005fe5e0
                (dest,unaff_EBP,(*(int *)(in_stack_00000008 + 0x1c) - in_stack_0000000c) * 4);
      dest_00 = dest_00 + 0x114;
      dest = dest + 0x114;
    } while (iVar1 < DAT_02f98ad0);
  }
  if (in_stack_00000010 < *(int *)(in_stack_0000000c + 0x110)) {
    *(int *)(in_stack_0000000c + 0x110) = *(int *)(in_stack_0000000c + 0x110) + -1;
  }
  if (in_stack_00000010 < *(int *)(in_stack_0000000c + 0x114)) {
    *(int *)(in_stack_0000000c + 0x114) = *(int *)(in_stack_0000000c + 0x114) + -1;
    return;
  }
  return;
}
