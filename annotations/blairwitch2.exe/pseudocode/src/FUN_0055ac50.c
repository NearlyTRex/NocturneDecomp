// Name: FUN_0055ac50
// Address: 0055ac50
// Address Range: [[0055ac50, 0055ada5]]
// Convention: unknown
// Signature: void FUN_0055ac50(undefined4 param_1)

#include "nocturne.h"

void FUN_0055ac50(uint param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)FUN_00551190(1);
  if (0x3E800000 < fVar1) {
    FUN_00551100(1,0x3E800000);
  }
  fVar1 = (float)FUN_00551190(0);
  if (0x3E800000 < fVar1) {
    FUN_00551100(0,0x3E800000);
  }
  fVar1 = (float)FUN_00551190(2);
  if (0x3F800000 < fVar1) {
    FUN_00551100(2,0x3F800000);
  }
  iVar2 = FUN_00550bc0();
  if (iVar2 == 0) {
    FUN_0055adb0(param_1);
    FUN_00552cc0(0,0,0);
    FUN_00551490(0,0,0,0,0,0);
    FUN_005514f0(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
    FUN_00551570(0,0,0);
    FUN_005524b0();
    FUN_00550450();
    FUN_00550310(1);
    FUN_005503a0(1);
    iVar2 = FUN_005527f0();
    if (iVar2 < 0x7531) {
      FUN_005506b0("XBLAIRMENU.wav");
      FUN_005504d0();
      return;
    }
    FUN_005506b0("@XBLAIRMENU.wav" + 1);
    FUN_005504d0();
  }
  return;
}
