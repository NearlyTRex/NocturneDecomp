// Name: core_menu.cpp_addCustomKeyBinding_FUN_00513460
// Address: 00513460
// MANUAL RECONSTRUCTION
// Address Range: [[00513460, 005134d9]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_00513460(int *key_code_ptr,char *key_name)

#include "nocturne.h"

void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_00513460(int *key_code_ptr,char *key_name)

{
  if (0x1d < g_CustomKeyCount) {
    g_CurrentFilename = "..\\core\\menu.cpp";
    g_CurrentLineNumber = 2091;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
  }
  g_CustomKeyPointers[g_CustomKeyCount] = key_code_ptr;
  strcpy(g_CustomKeyNames[g_CustomKeyCount],key_name);
  g_CustomKeyCount = g_CustomKeyCount + 1;
  return;
}
