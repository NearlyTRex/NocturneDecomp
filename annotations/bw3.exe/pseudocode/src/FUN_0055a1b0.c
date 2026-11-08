// Name: FUN_0055a1b0
// Address: 0055a1b0
// Address Range: [[0055a1b0, 0055a233]]
// Convention: unknown
// Signature: void FUN_0055a1b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a1b0(int param_1)

{
  double dVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  FUN_00558e90();
  local_18 = 0x40000000 + (float)_DAT_005d3f22;
  dVar1 = _DAT_005d3f1a;
  if (param_1 != 0) {
    local_18 = 0x40000000;
    dVar1 = _DAT_005d3f2a;
  }
  local_14 = 0x40000000 + (float)dVar1;
  iVar2 = 0x2cebc24;
  do {
    FUN_00553960(iVar2,local_14,local_18);
    iVar2 = iVar2 + 0x1b0;
  } while (iVar2 != 0x2cf2824);
  FUN_00556fd0();
  return;
}
