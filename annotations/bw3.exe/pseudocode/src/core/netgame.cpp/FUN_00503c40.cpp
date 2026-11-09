// Name: core_netgame.cpp_FUN_00503c40
// Address: 00503c40
// Address Range: [[00503c40, 00503ceb]]
// Convention: unknown
// Signature: int * core_netgame_cpp_FUN_00503c40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_netgame_cpp_FUN_00503c40(int param_1)

{
  int iVar1;
  int iVar2;
  int *dest;
  
  iVar2 = 0;
  if (0 < _DAT_01dc5c80) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1dc5c84)) {
        if (-1 < iVar2) {
          return (int *)(iVar1 + 0x1dc5c84);
        }
        break;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01dc5c80 * 0x74);
  }
  if (0x1ff < _DAT_01dc5c80) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 299;
    core_main_c_FUN_004e4330("allocSimFrame - sim history list full");
  }
  dest = (int *)(_DAT_01dc5c80 * 0x74 + 0x1dc5c84);
  _DAT_01dc5c80 = _DAT_01dc5c80 + 1;
  memset(dest,0,0x74);
  *dest = param_1;
  return dest;
}
