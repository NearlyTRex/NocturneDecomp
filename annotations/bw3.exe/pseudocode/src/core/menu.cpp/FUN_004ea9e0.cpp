// Name: core_menu.cpp_FUN_004ea9e0
// Address: 004ea9e0
// Address Range: [[004ea9e0, 004eaa59]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_004ea9e0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_004ea9e0(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x1f < _DAT_01d75c98) {
    _DAT_01d71de0 = "..\\core\\menu.cpp";
    _DAT_01d71de4 = 0x8f5;
    core_main_c_FUN_004e4330("Too many custom keys!");
  }
  iVar2 = _DAT_01d75c98;
  *(uint *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = param_1;
  pcVar3 = (char *)(iVar2 * 0x28 + 0x1d75d20);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01d75c98 = _DAT_01d75c98 + 1;
  return;
}
