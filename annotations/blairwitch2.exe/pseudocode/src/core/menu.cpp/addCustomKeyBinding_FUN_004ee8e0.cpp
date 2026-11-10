// Name: core_menu.cpp_addCustomKeyBinding_FUN_004ee8e0
// Address: 004ee8e0
// Address Range: [[004ee8e0, 004ee959]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004ee8e0(int *key_code_ptr,char *key_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004ee8e0(int *key_code_ptr,char *key_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x25 < _DAT_01d086f0) {
    _DAT_01d046a0 = "..\\core\\menu.cpp";
    _DAT_01d046a4 = 0x907;
    core_main_c_FUN_004e4500("Too many custom keys!");
  }
  iVar2 = _DAT_01d086f0;
  *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = key_code_ptr;
  pcVar3 = (char *)(iVar2 * 0x28 + 0x1d08790);
  do {
    cVar1 = *key_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = key_name[1];
    key_name = key_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01d086f0 = _DAT_01d086f0 + 1;
  return;
}
