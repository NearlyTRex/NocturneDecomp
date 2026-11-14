// Name: core_menu.cpp_addCustomKeyBinding_FUN_0050d1a0
// Address: 0050d1a0
// Address Range: [[0050d1a0, 0050d219]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_0050d1a0(int *key_code_ptr,char *key_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_0050d1a0(int *key_code_ptr,char *key_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x1f < _DAT_01d21458) {
    _DAT_01d1d400 = "..\\core\\menu.cpp";
    _DAT_01d1d404 = 0x8af;
    core_main_c_FUN_005030e0("Too many custom keys!");
  }
  iVar2 = _DAT_01d21458;
  *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = key_code_ptr;
  pcVar3 = (char *)(iVar2 * 0x28 + 0x1d214e0);
  do {
    cVar1 = *key_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = key_name[1];
    key_name = key_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01d21458 = _DAT_01d21458 + 1;
  return;
}
