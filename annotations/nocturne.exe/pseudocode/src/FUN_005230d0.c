// Name: FUN_005230d0
// Address: 005230d0
// Address Range: [[005230d0, 00523168]]
// Convention: unknown
// Signature: void FUN_005230d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005230d0(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02dc835c != 0) {
    FUN_005638d0(_DAT_02dc835c);
    _DAT_02dc835c = 0;
  }
  if (_DAT_02dc8380 != 0) {
    FUN_005638d0(_DAT_02dc8380);
    _DAT_02dc8380 = 0;
  }
  if (_DAT_02dc8338 != 0) {
    FUN_005638d0(_DAT_02dc8338);
    _DAT_02dc8338 = 0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2dc833c) = 0;
    *(uint *)(iVar2 + 0x2dc8384) = 0;
    *(uint *)(iVar2 + 0x2dc83a4) = 0;
    *(uint *)(iVar2 + 0x2dc8360) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  _DAT_02dc8334 = 0;
  _DAT_02dc8328 = 0;
  _DAT_02dc832c = 0;
  _DAT_02dc8330 = 0;
  return;
}
