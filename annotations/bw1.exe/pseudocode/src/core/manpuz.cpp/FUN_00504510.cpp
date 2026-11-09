// Name: core_manpuz.cpp_FUN_00504510
// Address: 00504510
// Address Range: [[00504510, 00504561]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_00504510(int param_1)

#include "nocturne.h"

void core_manpuz_cpp_FUN_00504510(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  float *pfVar2;
  float afStack_20 [4];
  uint uStack_10;
  uint uStack_c;
  
  afStack_20[0] = -*(float *)(param_1 + 0x1508);
  afStack_20[2] = -*(float *)(param_1 + 0x1508);
  afStack_20[3] = (float)*(uint *)(param_1 + 0x1508);
  uStack_10 = *(uint *)(param_1 + 0x1510);
  afStack_20[1] = 0.0;
  uStack_c = *(uint *)(param_1 + 0x1508);
  pfVar2 = afStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar2;
    pfVar2 = pfVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
