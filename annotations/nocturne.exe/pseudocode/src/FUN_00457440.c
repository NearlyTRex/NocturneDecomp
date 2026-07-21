// Name: FUN_00457440
// Address: 00457440
// Address Range: [[00457440, 004574ae]]
// Convention: unknown
// Signature: void FUN_00457440(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457440(void)

{
  float fVar1;
  int unaff_EBX;
  
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00457120();
  fVar1 = (float)_DAT_0057d496;
  *(float *)(unaff_EBX + 0x36c) = (float)*(int *)(unaff_EBX + 0x354) * fVar1;
  *(float *)(unaff_EBX + 0x370) = (float)*(int *)(unaff_EBX + 0x358) * fVar1;
  *(float *)(unaff_EBX + 0x374) = (float)*(int *)(unaff_EBX + 0x35c) * fVar1;
  *(float *)(unaff_EBX + 0x378) = (float)*(int *)(unaff_EBX + 0x360) * fVar1;
  *(float *)(unaff_EBX + 0x37c) = (float)*(int *)(unaff_EBX + 0x364) * fVar1;
  *(float *)(unaff_EBX + 0x380) = (float)*(int *)(unaff_EBX + 0x368) * fVar1;
  return;
}
