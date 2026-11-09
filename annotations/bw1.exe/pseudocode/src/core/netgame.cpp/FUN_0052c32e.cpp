// Name: core_netgame.cpp_FUN_0052c32e
// Address: 0052c32e
// Address Range: [[0052c32e, 0052c3e5]]
// Convention: unknown
// Signature: int * core_netgame_cpp_FUN_0052c32e(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * core_netgame_cpp_FUN_0052c32e(int param_1)

{
  int iVar1;
  int iVar2;
  int *dest;
  
  iVar2 = 0;
  if (0 < _DAT_01d715a8) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1d715ac)) {
        if (-1 < iVar2) {
          return (int *)(iVar1 + 0x1d715ac);
        }
        break;
      }
      iVar1 = iVar1 + 0x6c;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d715a8 * 0x6c);
  }
  if (0x1ff < _DAT_01d715a8) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 299;
    core_main_c_FUN_005030e0("allocSimFrame - sim history list full");
  }
  dest = (int *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
  _DAT_01d715a8 = _DAT_01d715a8 + 1;
  memset(dest,0,0x6c);
  *dest = param_1;
  return dest;
}
