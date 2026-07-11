// Name: FUN_0052e850
// Address: 0052e850
// Address Range: [[0052e850, 0052e9bd]]
// Convention: unknown
// Signature: void FUN_0052e850(undefined4 param_1)

#include "nocturne.h"

void FUN_0052e850(uint param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)FUN_00527380(1);
  if (0x3E800000 < fVar1) {
    FUN_005272e0(1,0x3E800000);
  }
  fVar1 = (float)FUN_00527380(0);
  if (0x3E800000 < fVar1) {
    FUN_005272e0(0,0x3E800000);
  }
  fVar1 = (float)FUN_00527380(2);
  if (0x3F800000 < fVar1) {
    FUN_005272e0(2,0x3F800000);
  }
  iVar2 = FUN_00526ca0();
  if (iVar2 == 0) {
    FUN_0052e9c0(param_1);
    FUN_00528630(0,0,0);
    FUN_00527610(0,0,0,0,0,0);
    FUN_00527690(0,0x3ff00000,0,0,0,0,0,0,0,0x3ff00000,0,0,0,0,0,0,0,0x3ff00000);
    FUN_005277b0(0,0,0,0,0,0);
    FUN_00527e40();
    FUN_00526340();
    FUN_005261b0(1);
    FUN_00526270(1);
    iVar2 = FUN_005281b0();
    if (iVar2 < 0x7531) {
      FUN_005265a0("splash-music-22.wav");
      FUN_005263c0();
      return;
    }
    FUN_005265a0("@splash-music-44.wav" + 1);
    FUN_005263c0();
  }
  return;
}
