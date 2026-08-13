// Name: core_menu.cpp_addCustomKeyBinding_FUN_004d2880
// Address: 004d2880
// Address Range: [[004d2880, 004d28f9]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004d2880(int *key_code_ptr,char *key_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004d2880(int *key_code_ptr,char *key_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x1d < _DAT_01cc8120) {
    g_CurrentFilename = "..\\core\\menu.cpp";
    g_CurrentLineNumber = 2087;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
  }
  iVar2 = _DAT_01cc8120;
  *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = key_code_ptr;
  pcVar3 = (char *)(iVar2 * 0x28 + 0x1cc81a0);
  do {
    cVar1 = *key_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = key_name[1];
    key_name = key_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01cc8120 = _DAT_01cc8120 + 1;
  return;
}
