// Name: core_menu.cpp_FUN_004d2880
// Address: 004d2880
// Address Range: [[004d2880, 004d28f9]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_004d2880(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_menu_cpp_FUN_004d2880(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint in_stack_00000004;
  char *in_stack_00000008;
  
  if (0x1d < _DAT_01cc8120) {
    g_CurrentFilename = "..\\core\\menu.cpp";
    g_CurrentLineNumber = 2087;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
  }
  iVar2 = _DAT_01cc8120;
  *(uint *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = in_stack_00000004;
  pcVar3 = (char *)(iVar2 * 0x28 + 0x1cc81a0);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01cc8120 = _DAT_01cc8120 + 1;
  return;
}
