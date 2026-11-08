// Name: FUN_00574e00
// Address: 00574e00
// Address Range: [[00574e00, 00574e91]]
// Convention: unknown
// Signature: void FUN_00574e00(void)

#include "nocturne.h"

void FUN_00574e00(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    FUN_00573b30(iVar2,0x3f800000);
    FUN_00573c50(iVar2,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  FUN_00573fe0(0x3f800000);
  FUN_00573ec0(0,0,0,0,0,0);
  FUN_00573f20(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
  FUN_00573fa0(0,0,0);
  uVar1 = FUN_005756d0();
  FUN_005754d0(uVar1);
  uVar1 = FUN_005759a0();
  FUN_00575870(uVar1);
  return;
}
