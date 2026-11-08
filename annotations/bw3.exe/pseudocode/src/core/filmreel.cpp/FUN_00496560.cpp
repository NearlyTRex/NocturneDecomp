// Name: FUN_00496560
// Address: 00496560
// Address Range: [[00496560, 004966e2]]
// Convention: unknown
// Signature: void FUN_00496560(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00496560(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x184) == 0) {
    if (*(int *)(param_1 + 0x3dc) != 0) {
      FUN_00459d00(0x01549A94,0);
      FUN_00556be0(*(uint *)(param_1 + 0x3e0));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,0x5c048e);
      *(uint *)(param_1 + 0x3e0) = uVar3;
    }
  }
  else {
    fVar1 = param_2 * _DAT_005c049b;
    *(float *)(*(int *)(param_1 + 0x158) + 0x38) =
         *(float *)(*(int *)(param_1 + 0x158) + 0x38) - fVar1;
    *(float *)(param_1 + 0x3d8) = *(float *)(param_1 + 0x3d8) - fVar1;
    if (*(int *)(param_1 + 0x3dc) == 0) {
      iVar2 = FUN_0040c840(*(uint *)(param_1 + 0x158),_DAT_01c73614);
      if (iVar2 == 0) {
        _DAT_01d71de0 = "..\\core\\filmreel.cpp";
        _DAT_01d71de4 = 0x11d;
        FUN_004e4330("CFilmProjector::Need to put CFilmReel in place");
      }
      FUN_00459d00(0x01549A94,iVar2 + 0x2d8);
      FUN_00556be0(*(uint *)(param_1 + 0x3e0));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"35-start.wav");
      *(uint *)(param_1 + 0x3e0) = uVar3;
    }
    else {
      iVar2 = FUN_00556700(*(uint *)(param_1 + 0x3e0));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"35-loop.wav");
        *(uint *)(param_1 + 0x3e0) = uVar3;
      }
    }
    if (*(int *)(param_1 + 0x370) == *(int *)(param_1 + 0x158)) {
      FUN_0048c150(0x01C6E360,param_1 + 0x374);
    }
  }
  *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x184);
  FUN_004591f0(param_1,param_2);
  return;
}
