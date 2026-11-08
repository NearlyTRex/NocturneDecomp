// Name: FUN_00410110
// Address: 00410110
// Address Range: [[00410110, 004101b1]]
// Convention: unknown
// Signature: void FUN_00410110(int param_1,int param_2)

#include "nocturne.h"

void FUN_00410110(int param_1,int param_2)

{
  float fVar1;
  byte *puVar2;
  
  puVar2 = (byte *)(**(code **)(*(int *)(param_1 + 0x154) + 0xcc))(param_1);
  if (puVar2 == &DAT_007dff10) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      FUN_00431ce0(param_1);
      puVar2 = &DAT_005b6452;
    }
    else {
      if ((*(float *)(param_2 + 4) <= 0.0) || (*(int *)(param_1 + 0x26fc) != 0)) goto LAB_00410173;
      puVar2 = &DAT_005b6456;
    }
    FUN_00410030(param_1 + 0x158,puVar2);
  }
LAB_00410173:
  FUN_00430d60(param_1,param_2);
  return;
}
