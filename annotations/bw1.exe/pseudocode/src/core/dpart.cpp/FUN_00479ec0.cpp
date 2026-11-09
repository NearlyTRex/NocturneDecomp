// Name: core_dpart.cpp_FUN_00479ec0
// Address: 00479ec0
// Address Range: [[00479ec0, 00479f2e]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00479ec0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dpart_cpp_FUN_00479ec0(void)

{
  float fVar1;
  CDemonPart *unaff_EBX;
  
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0(unaff_EBX);
  fVar1 = (float)_DAT_005dac05;
  *(float *)(unaff_EBX + 0x36c) = (float)*(int *)(unaff_EBX + 0x354) * fVar1;
  *(float *)(unaff_EBX + 0x370) = (float)*(int *)(unaff_EBX + 0x358) * fVar1;
  *(float *)(unaff_EBX + 0x374) = (float)*(int *)(unaff_EBX + 0x35c) * fVar1;
  *(float *)(unaff_EBX + 0x378) = (float)*(int *)(unaff_EBX + 0x360) * fVar1;
  *(float *)(unaff_EBX + 0x37c) = (float)*(int *)(unaff_EBX + 0x364) * fVar1;
  *(float *)(unaff_EBX + 0x380) = (float)*(int *)(unaff_EBX + 0x368) * fVar1;
  return;
}
