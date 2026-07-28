// Name: core_netgame.cpp_purgeOldSimFrames_FUN_004e97e0
// Address: 004e97e0
// Address Range: [[004e97e0, 004e9850]]
// Convention: unknown
// Signature: void core_netgame_cpp_purgeOldSimFrames_FUN_004e97e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_netgame_cpp_purgeOldSimFrames_FUN_004e97e0(int param_1)

{
  int iVar1;
  int iVar2;
  byte *src;
  
  iVar1 = 0;
  if (0 < _DAT_01d09c00) {
    iVar2 = 0;
    src = &DAT_01d09c68;
    do {
      while (*(int *)(iVar2 + 0x1d09c04) < param_1) {
        _DAT_01d09c00 = _DAT_01d09c00 + -1;
        memmove
                  ((void *)(iVar2 + 0x1d09c04),src,(_DAT_01d09c00 - iVar1) * 100);
        if (_DAT_01d09c00 <= iVar1) {
          return;
        }
      }
      src = src + 100;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 100;
    } while (iVar1 < _DAT_01d09c00);
  }
  return;
}
