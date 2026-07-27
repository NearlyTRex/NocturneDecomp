// Name: core_netgame.cpp_FUN_004e9520
// Address: 004e9520
// Address Range: [[004e9520, 004e9560]]
// Convention: unknown
// Signature: void core_netgame_cpp_FUN_004e9520(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_netgame_cpp_FUN_004e9520(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = iVar1 / 0x12 - _DAT_01cea3f4;
  _DAT_01cea3f4 = iVar1 / 0x12;
  if (-1 < iVar2) {
    if (0x20000 < iVar2) {
      iVar2 = 0x20000;
    }
    _DAT_01cea3f8 = _DAT_01cea3f8 + iVar2;
    return;
  }
  return;
}
