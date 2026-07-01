// Name: core_menu.cpp_addCustomKeyBinding_FUN_00513460
// Address: 00513460
// Address Range: [[00513460, 005134d9]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_00513460(int *key_code_ptr,char *key_name)

#include "nocturne.h"

void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_00513460(int *key_code_ptr,char *key_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x1d < g_CustomKeyCount) {
    g_CurrentFilename = "..\\core\\menu.cpp";
    g_CurrentLineNumber = 2091;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
  }
  iVar2 = g_CustomKeyCount;
  g_CustomKeyPointers[g_CustomKeyCount] = key_code_ptr;
  pcVar3 = g_CustomKeyNames[iVar2];
  do {
    cVar1 = *key_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = key_name[1];
    key_name = key_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  g_CustomKeyCount = g_CustomKeyCount + 1;
  return;
}
