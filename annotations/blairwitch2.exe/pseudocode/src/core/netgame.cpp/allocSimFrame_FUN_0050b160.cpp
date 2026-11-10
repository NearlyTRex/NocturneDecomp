// Name: core_netgame.cpp_allocSimFrame_FUN_0050b160
// Address: 0050b160
// Address Range: [[0050b160, 0050b20b]]
// Convention: unknown
// Signature: int * core_netgame_cpp_allocSimFrame_FUN_0050b160(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_netgame_cpp_allocSimFrame_FUN_0050b160(int param_1)

{
  int iVar1;
  int iVar2;
  int *dest;
  
  iVar2 = 0;
  if (0 < _DAT_01d54640) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1d54644)) {
        if (-1 < iVar2) {
          return (int *)(iVar1 + 0x1d54644);
        }
        break;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d54640 * 0x74);
  }
  if (0x1ff < _DAT_01d54640) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 299;
    core_main_c_FUN_004e4500("allocSimFrame - sim history list full");
  }
  dest = (int *)(_DAT_01d54640 * 0x74 + 0x1d54644);
  _DAT_01d54640 = _DAT_01d54640 + 1;
  memset(dest,0,0x74);
  *dest = param_1;
  return dest;
}
