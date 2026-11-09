// Name: core_menu.cpp_FUN_0050d1a0
// Address: 0050d1a0
// Address Range: [[0050d1a0, 0050d219]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_0050d1a0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_0050d1a0(uint param_1,char *param_2)

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
  *(uint *)(&DAT_01d2145c + _DAT_01d21458 * 4) = param_1;
  pcVar3 = (char *)(iVar2 * 0x28 + 0x1d214e0);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01d21458 = _DAT_01d21458 + 1;
  return;
}
