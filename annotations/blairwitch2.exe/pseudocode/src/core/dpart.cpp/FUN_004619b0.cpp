// Name: core_dpart.cpp_FUN_004619b0
// Address: 004619b0
// Address Range: [[004619b0, 00461a1e]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_004619b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dpart_cpp_FUN_004619b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  CDemonPart *unaff_EBX;
  
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00461690(unaff_EBX);
  fVar6 = (float)_DAT_005d0e0c;
  iVar1 = (unaff_EBX->bbox3).y;
  iVar2 = (unaff_EBX->bbox3).z;
  iVar3 = (unaff_EBX->bbox4).x;
  iVar4 = (unaff_EBX->bbox4).y;
  iVar5 = (unaff_EBX->bbox4).z;
  (unaff_EBX->bbox1_float).x = (float)(unaff_EBX->bbox3).x * fVar6;
  (unaff_EBX->bbox1_float).y = (float)iVar1 * fVar6;
  (unaff_EBX->bbox1_float).z = (float)iVar2 * fVar6;
  (unaff_EBX->bbox2_float).x = (float)iVar3 * fVar6;
  (unaff_EBX->bbox2_float).y = (float)iVar4 * fVar6;
  (unaff_EBX->bbox2_float).z = (float)iVar5 * fVar6;
  return;
}
