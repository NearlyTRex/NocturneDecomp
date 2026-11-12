// Name: wincore_winrun.cpp_FUN_005824d0
// Address: 005824d0
// Address Range: [[005824d0, 005824f6]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005824d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_005824d0(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_02d224f0 = 0;
  _DAT_02d224f4 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0xac;
    *(uint *)(iVar2 + 0x2d22ccc) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x2b0);
  return;
}
