// Name: FUN_004619b0
// Address: 004619b0
// Address Range: [[004619b0, 00461a1e]]
// Convention: unknown
// Signature: void FUN_004619b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004619b0(void)

{
  float fVar1;
  int unaff_EBX;
  
  FUN_00461690();
  fVar1 = (float)_DAT_005d0e0c;
  *(float *)(unaff_EBX + 0x36c) = (float)*(int *)(unaff_EBX + 0x354) * fVar1;
  *(float *)(unaff_EBX + 0x370) = (float)*(int *)(unaff_EBX + 0x358) * fVar1;
  *(float *)(unaff_EBX + 0x374) = (float)*(int *)(unaff_EBX + 0x35c) * fVar1;
  *(float *)(unaff_EBX + 0x378) = (float)*(int *)(unaff_EBX + 0x360) * fVar1;
  *(float *)(unaff_EBX + 0x37c) = (float)*(int *)(unaff_EBX + 0x364) * fVar1;
  *(float *)(unaff_EBX + 0x380) = (float)*(int *)(unaff_EBX + 0x368) * fVar1;
  return;
}
