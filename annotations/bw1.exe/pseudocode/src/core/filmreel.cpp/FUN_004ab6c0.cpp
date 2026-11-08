// Name: FUN_004ab6c0
// Address: 004ab6c0
// Address Range: [[004ab6c0, 004ab842]]
// Convention: unknown
// Signature: void FUN_004ab6c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab6c0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x184) == 0) {
    if (*(int *)(param_1 + 0x3dc) != 0) {
      FUN_0045ddb0(0x0152D230,0);
      FUN_00573a80(*(uint *)(param_1 + 0x3e0));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,0x5df152);
      *(uint *)(param_1 + 0x3e0) = uVar3;
    }
  }
  else {
    fVar1 = param_2 * _DAT_005df15f;
    *(float *)(*(int *)(param_1 + 0x158) + 0x38) =
         *(float *)(*(int *)(param_1 + 0x158) + 0x38) - fVar1;
    *(float *)(param_1 + 0x3d8) = *(float *)(param_1 + 0x3d8) - fVar1;
    if (*(int *)(param_1 + 0x3dc) == 0) {
      iVar2 = FUN_0040c600(*(uint *)(param_1 + 0x158),_DAT_01c57034);
      if (iVar2 == 0) {
        _DAT_01d1d400 = "..\\core\\filmreel.cpp";
        _DAT_01d1d404 = 0x11d;
        FUN_005030e0("CFilmProjector::Need to put CFilmReel in place");
      }
      FUN_0045ddb0(0x0152D230,iVar2 + 0x2d8);
      FUN_00573a80(*(uint *)(param_1 + 0x3e0));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"35-start.wav");
      *(uint *)(param_1 + 0x3e0) = uVar3;
    }
    else {
      iVar2 = FUN_005735a0(*(uint *)(param_1 + 0x3e0));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"35-loop.wav");
        *(uint *)(param_1 + 0x3e0) = uVar3;
      }
    }
    if (*(int *)(param_1 + 0x370) == *(int *)(param_1 + 0x158)) {
      FUN_004a1b70(0x01C51D80,param_1 + 0x374);
    }
  }
  *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x184);
  FUN_0045d2a0(param_1,param_2);
  return;
}
