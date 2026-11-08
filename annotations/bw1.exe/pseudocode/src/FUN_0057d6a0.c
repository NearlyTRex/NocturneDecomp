// Name: FUN_0057d6a0
// Address: 0057d6a0
// Address Range: [[0057d6a0, 0057d7f5]]
// Convention: unknown
// Signature: void FUN_0057d6a0(undefined4 param_1)

#include "nocturne.h"

void FUN_0057d6a0(uint param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)FUN_00573bc0(1);
  if (0x3E800000 < fVar1) {
    FUN_00573b30(1,0x3E800000);
  }
  fVar1 = (float)FUN_00573bc0(0);
  if (0x3E800000 < fVar1) {
    FUN_00573b30(0,0x3E800000);
  }
  fVar1 = (float)FUN_00573bc0(2);
  if (0x3F800000 < fVar1) {
    FUN_00573b30(2,0x3F800000);
  }
  iVar2 = FUN_005735f0();
  if (iVar2 == 0) {
    FUN_0057d800(param_1);
    FUN_005756f0(0,0,0);
    FUN_00573ec0(0,0,0,0,0,0);
    FUN_00573f20(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
    FUN_00573fa0(0,0,0);
    FUN_00574ee0();
    FUN_00572ac0();
    FUN_00572980(1);
    FUN_00572a10(1);
    iVar2 = FUN_00575220();
    if (iVar2 < 0x7531) {
      FUN_00572d20("splash-music-22.wav");
      FUN_00572b40();
      return;
    }
    FUN_00572d20("@splash-music-44.wav" + 1);
    FUN_00572b40();
  }
  return;
}
