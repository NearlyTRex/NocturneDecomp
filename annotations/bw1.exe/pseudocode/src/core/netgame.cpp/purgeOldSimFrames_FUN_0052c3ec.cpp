// Name: core_netgame.cpp_purgeOldSimFrames_FUN_0052c3ec
// Address: 0052c3ec
// Address Range: [[0052c3ec, 0052c460]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0052c3ec(int min_sequence)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0052c3ec(int min_sequence)

{
  int iVar1;
  int iVar2;
  byte *src;
  
  iVar1 = 0;
  if (0 < _DAT_01d715a8) {
    iVar2 = 0;
    src = &DAT_01d71618;
    do {
      while (*(int *)(iVar2 + 0x1d715ac) < min_sequence) {
        _DAT_01d715a8 = _DAT_01d715a8 + -1;
        memmove
                  ((void *)(iVar2 + 0x1d715ac),src,(_DAT_01d715a8 - iVar1) * 0x6c);
        if (_DAT_01d715a8 <= iVar1) {
          return;
        }
      }
      src = src + 0x6c;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x6c;
    } while (iVar1 < _DAT_01d715a8);
  }
  return;
}
