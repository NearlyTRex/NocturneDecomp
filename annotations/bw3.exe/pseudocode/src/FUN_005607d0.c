// Name: FUN_005607d0
// Address: 005607d0
// Address Range: [[005607d0, 00560925]]
// Convention: unknown
// Signature: void FUN_005607d0(undefined4 param_1)

#include "nocturne.h"

void FUN_005607d0(uint param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)FUN_00556d20(1);
  if (0x3E800000 < fVar1) {
    FUN_00556c90(1,0x3E800000);
  }
  fVar1 = (float)FUN_00556d20(0);
  if (0x3E800000 < fVar1) {
    FUN_00556c90(0,0x3E800000);
  }
  fVar1 = (float)FUN_00556d20(2);
  if (0x3F800000 < fVar1) {
    FUN_00556c90(2,0x3F800000);
  }
  iVar2 = FUN_00556750();
  if (iVar2 == 0) {
    FUN_00560930(param_1);
    FUN_00558860(0,0,0);
    FUN_00557020(0,0,0,0,0,0);
    FUN_00557080(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
    FUN_00557100(0,0,0);
    FUN_00558050();
    FUN_00555fd0();
    FUN_00555e90(1);
    FUN_00555f20(1);
    iVar2 = FUN_00558390();
    if (iVar2 < 0x7531) {
      FUN_00556240("splash-music-22.wav");
      FUN_00556050();
      return;
    }
    FUN_00556240("@splash.mp3" + 1);
    FUN_00556050();
  }
  return;
}
