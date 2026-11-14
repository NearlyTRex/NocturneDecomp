// Name: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00449b30
// Address: 00449b30
// Address Range: [[00449b30, 00449dc6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00449b30(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00449b30(CDemonCamera *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  fVar2 = (float)(this_ptr->source_matrix).m[0].x * (float)_DAT_005b9cf6;
  fVar10 = (float)(this_ptr->source_matrix).m[0].y * (float)_DAT_005b9cf6;
  fVar12 = (float)(this_ptr->source_matrix).m[0].z * (float)_DAT_005b9cf6;
  fVar8 = (float)(this_ptr->source_matrix).m[1].x * (float)_DAT_005b9cf6;
  fVar3 = (float)(this_ptr->source_matrix).m[1].y * (float)_DAT_005b9cf6;
  fVar4 = (float)(this_ptr->source_matrix).m[1].z * (float)_DAT_005b9cf6;
  fVar11 = (float)(this_ptr->source_matrix).m[2].x * (float)_DAT_005b9cf6;
  fVar6 = (float)(this_ptr->source_matrix).m[2].y * (float)_DAT_005b9cf6;
  fVar7 = (float)(this_ptr->source_matrix).m[2].z * (float)_DAT_005b9cf6;
  fVar5 = fVar3 * fVar7 - fVar4 * fVar6;
  fVar9 = fVar8 * fVar7 - fVar4 * fVar11;
  fVar1 = fVar8 * fVar6 - fVar3 * fVar11;
  fVar13 = (float)_DAT_005b9cfe / (fVar12 * fVar1 + (fVar2 * fVar5 - fVar10 * fVar9));
  fVar15 = (float10)fVar5 * (float10)fVar13;
  fVar16 = (float10)-(fVar10 * fVar7 - fVar12 * fVar6) * (float10)fVar13;
  fVar17 = (float10)(fVar10 * fVar4 - fVar12 * fVar3) * (float10)fVar13;
  fVar18 = (float10)-fVar9 * (float10)fVar13;
  fVar19 = (float10)(fVar2 * fVar7 - fVar12 * fVar11) * (float10)fVar13;
  fVar20 = (float10)-(fVar2 * fVar4 - fVar12 * fVar8) * (float10)fVar13;
  fVar21 = (float10)fVar1 * (float10)fVar13;
  iVar14 = round();
  *(int *)(iVar14 + 0x19c) = (int)ROUND(fVar15);
  fVar15 = (float10)-(fVar2 * fVar6 - fVar10 * fVar11) * (float10)fVar13;
  iVar14 = round();
  *(int *)(iVar14 + 0x1a0) = (int)ROUND(fVar16);
  fVar16 = (float10)(fVar2 * fVar3 - fVar10 * fVar8) * (float10)fVar13;
  round();
  round();
  round();
  round();
  round();
  round();
  iVar14 = round();
  *(int *)(iVar14 + 0x1a4) = (int)ROUND(fVar17);
  *(int *)(iVar14 + 0x1a8) = (int)ROUND(fVar18);
  *(int *)(iVar14 + 0x1ac) = (int)ROUND(fVar19);
  *(int *)(iVar14 + 0x1b0) = (int)ROUND(fVar20);
  *(int *)(iVar14 + 0x1b4) = (int)ROUND(fVar21);
  *(int *)(iVar14 + 0x1b8) = (int)ROUND(fVar15);
  *(int *)(iVar14 + 0x1bc) = (int)ROUND(fVar16);
  return;
}
