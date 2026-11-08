// Name: FUN_004e5900
// Address: 004e5900
// Address Range: [[004e5900, 004e5951]]
// Convention: unknown
// Signature: void FUN_004e5900(int param_1)

#include "nocturne.h"

void FUN_004e5900(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float afStack_20 [4];
  uint uStack_10;
  uint uStack_c;
  
  afStack_20[0] = -*(float *)(param_1 + 0x1664);
  afStack_20[2] = -*(float *)(param_1 + 0x1664);
  afStack_20[3] = (float)*(uint *)(param_1 + 0x1664);
  uStack_10 = *(uint *)(param_1 + 0x166c);
  afStack_20[1] = 0.0;
  uStack_c = *(uint *)(param_1 + 0x1664);
  pfVar2 = afStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
