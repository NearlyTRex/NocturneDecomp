// Name: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40
// Address: 00440d40
// Address Range: [[00440d40, 00440fd6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  iVar1 = *(int *)(param_1 + 0x17c);
  fVar8 = (float)_DAT_0057b78b;
  iVar2 = *(int *)(param_1 + 0x180);
  fVar10 = (float)_DAT_0057b78b;
  iVar3 = *(int *)(param_1 + 0x188);
  fVar6 = (float)_DAT_0057b78b;
  iVar4 = *(int *)(param_1 + 0x18c);
  fVar7 = (float)_DAT_0057b78b;
  iVar5 = *(int *)(param_1 + 400);
  fVar9 = (float)_DAT_0057b78b;
  fVar11 = (float10)round();
  *(int *)(param_1 + 0x19c) = (int)ROUND(fVar11);
  fVar11 = (float10)round();
  *(int *)(param_1 + 0x1a0) = (int)ROUND(fVar11);
  fVar11 = (float10)round();
  fVar12 = (float10)round();
  fVar13 = (float10)round();
  fVar14 = (float10)round();
  fVar15 = (float10)round();
  fVar16 = (float10)round
                              ((float10)((float)iVar1 * fVar8 * (float)iVar4 * fVar7 -
                                        (float)iVar2 * fVar10 * (float)iVar3 * fVar6) *
                               (float10)6.250308e-39);
  fVar17 = (float10)round
                              ((float10)((float)iVar5 * fVar9) * (float10)6.250336e-39);
  *(int *)(param_1 + 0x1a4) = (int)ROUND(fVar11);
  *(int *)(param_1 + 0x1a8) = (int)ROUND(fVar12);
  *(int *)(param_1 + 0x1ac) = (int)ROUND(fVar13);
  *(int *)(param_1 + 0x1b0) = (int)ROUND(fVar14);
  *(int *)(param_1 + 0x1b4) = (int)ROUND(fVar15);
  *(int *)(param_1 + 0x1b8) = (int)ROUND(fVar16);
  *(int *)(param_1 + 0x1bc) = (int)ROUND(fVar17);
  return;
}
