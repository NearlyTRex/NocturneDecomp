// Name: core_menu.cpp_addCustomKeyBinding_FUN_004d2880
// Address: 004d2880
// Address Range: [[004d2880, 004d28f9]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004d2880(int *key_code_ptr,char *key_name)

#include "nocturne.h"

void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004d2880(int *key_code_ptr,char *key_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x1d < g_INT_01cc8120) {
    g_CurrentFilename = "..\\core\\menu.cpp";
    g_CurrentLineNumber = 2087;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
  }
  iVar2 = g_INT_01cc8120;
  g_INT_PTR_ARRAY_01cc8124[g_INT_01cc8120] = key_code_ptr;
  pcVar3 = g_CHAR_ARRAY_ARRAY_01cc81a0[iVar2];
  do {
    cVar1 = *key_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = key_name[1];
    key_name = key_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  g_INT_01cc8120 = g_INT_01cc8120 + 1;
  return;
}
