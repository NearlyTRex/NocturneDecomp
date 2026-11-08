// Name: FUN_0056b520
// Address: 0056b520
// Address Range: [[0056b520, 0056b60f]]
// Convention: unknown
// Signature: int FUN_0056b520(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056b520(uint param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = &DAT_026bb86c;
  do {
    iVar4 = iVar2 * 0x3600 + 0x26b82bc;
    iVar1 = FUN_005c04e0(puVar3,param_1);
    if (iVar1 == 0) {
      FUN_00563bb0(iVar4);
      *(uint *)(&DAT_027902bc + iVar2 * 4) = 1;
      return iVar4;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x3600;
  } while (iVar2 < 0x40);
  iVar4 = 0;
  iVar1 = 0;
  iVar2 = _DAT_027902bc;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = iVar4 * 0x3600 + 0x26b82bc;
      FUN_00564e40(iVar2,param_1);
      FUN_00563bb0(iVar2);
      *(uint *)(&DAT_027902bc + iVar1) = 1;
      return iVar2;
    }
    iVar4 = iVar4 + 1;
    if (0xff < iVar1 + 4) break;
    iVar2 = *(int *)(iVar1 + 0x27902c0);
    iVar1 = iVar1 + 4;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x1086;
  FUN_005030e0("Can't load %s because deformable model manager is full.  (Size is %d)",param_1,0x40);
  return 0;
}
