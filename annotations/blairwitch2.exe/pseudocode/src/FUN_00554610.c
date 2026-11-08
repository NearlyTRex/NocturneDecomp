// Name: FUN_00554610
// Address: 00554610
// Address Range: [[00554610, 00554693]]
// Convention: unknown
// Signature: void FUN_00554610(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554610(int param_1)

{
  double dVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  FUN_005532f0();
  local_18 = 0x40000000 + (float)_DAT_005e942e;
  dVar1 = _DAT_005e9426;
  if (param_1 != 0) {
    local_18 = 0x40000000;
    dVar1 = _DAT_005e9436;
  }
  local_14 = 0x40000000 + (float)dVar1;
  iVar2 = 0x2641924;
  do {
    FUN_0054ddf0(iVar2,local_14,local_18);
    iVar2 = iVar2 + 0x1ac;
  } while (iVar2 != 0x2648424);
  FUN_00551440();
  return;
}
