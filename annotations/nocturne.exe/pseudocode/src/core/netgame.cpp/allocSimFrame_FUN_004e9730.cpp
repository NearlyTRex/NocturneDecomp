// Name: core_netgame.cpp_allocSimFrame_FUN_004e9730
// Address: 004e9730
// Address Range: [[004e9730, 004e97db]]
// Convention: unknown
// Signature: int * core_netgame_cpp_allocSimFrame_FUN_004e9730(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_netgame_cpp_allocSimFrame_FUN_004e9730(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01d09c00) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1d09c04)) {
        if (-1 < iVar2) {
          return (int *)(iVar1 + 0x1d09c04);
        }
        break;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d09c00 * 100);
  }
  if (0x1ff < _DAT_01d09c00) {
    _DAT_01cc4800 = "..\\core\\netgame.cpp";
    _DAT_01cc4804 = 299;
    FUN_004c8440("allocSimFrame - sim history list full");
  }
  piVar3 = (int *)(_DAT_01d09c00 * 100 + 0x1d09c04);
  _DAT_01d09c00 = _DAT_01d09c00 + 1;
  memset(piVar3,0,100);
  *piVar3 = param_1;
  return piVar3;
}
