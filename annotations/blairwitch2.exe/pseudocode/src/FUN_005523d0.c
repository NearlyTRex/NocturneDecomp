// Name: FUN_005523d0
// Address: 005523d0
// Address Range: [[005523d0, 00552461]]
// Convention: unknown
// Signature: void FUN_005523d0(void)

#include "nocturne.h"

void FUN_005523d0(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    FUN_00551100(iVar2,0x3f800000);
    FUN_00551220(iVar2,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  FUN_005515b0(0x3f800000);
  FUN_00551490(0,0,0,0,0,0);
  FUN_005514f0(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
  FUN_00551570(0,0,0);
  uVar1 = FUN_00552ca0();
  FUN_00552aa0(uVar1);
  uVar1 = FUN_00552f70();
  FUN_00552e40(uVar1);
  return;
}
