// Name: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
// Address: 0044cf20
// Address Range: [[0044cf20, 0044d1b6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera *this_ptr)

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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  fVar3 = (float)(this_ptr->source_matrix).m[0].x * (float)1.52587890625e-05;
  fVar10 = (float)(this_ptr->source_matrix).m[0].y * (float)1.52587890625e-05;
  fVar12 = (float)(this_ptr->source_matrix).m[0].z * (float)1.52587890625e-05;
  fVar8 = (float)(this_ptr->source_matrix).m[1].x * (float)1.52587890625e-05;
  fVar1 = (float)(this_ptr->source_matrix).m[1].y * (float)1.52587890625e-05;
  fVar4 = (float)(this_ptr->source_matrix).m[1].z * (float)1.52587890625e-05;
  fVar11 = (float)(this_ptr->source_matrix).m[2].x * (float)1.52587890625e-05;
  fVar6 = (float)(this_ptr->source_matrix).m[2].y * (float)1.52587890625e-05;
  fVar7 = (float)(this_ptr->source_matrix).m[2].z * (float)1.52587890625e-05;
  fVar5 = fVar1 * fVar7 - fVar4 * fVar6;
  fVar9 = fVar8 * fVar7 - fVar4 * fVar11;
  fVar2 = fVar8 * fVar6 - fVar1 * fVar11;
  fVar1 = fVar10 * fVar4 - fVar12 * fVar1;
  fVar13 = (float)65536 / (fVar12 * fVar2 + (fVar3 * fVar5 - fVar10 * fVar9));
  dVar14 = round((double)(fVar5 * fVar13));
  (this_ptr->inverted_matrix).m[0].x = (int)ROUND(dVar14);
  dVar14 = round((double)(-(fVar10 * fVar7 - fVar12 * fVar6) * fVar13));
  (this_ptr->inverted_matrix).m[0].y = (int)ROUND(dVar14);
  dVar14 = round((double)(fVar1 * fVar13));
  dVar15 = round((double)(-fVar9 * fVar13));
  dVar16 = round((double)((fVar3 * fVar7 - fVar12 * fVar11) * fVar13));
  dVar17 = round((double)(-(fVar3 * fVar4 - fVar12 * fVar8) * fVar13));
  dVar18 = round((double)(fVar2 * fVar13));
  dVar19 = round((double)(fVar1 * 6.319857e-39));
  dVar20 = round((double)(fVar11 * 6.319886e-39));
  (this_ptr->inverted_matrix).m[0].z = (int)ROUND(dVar14);
  (this_ptr->inverted_matrix).m[1].x = (int)ROUND(dVar15);
  (this_ptr->inverted_matrix).m[1].y = (int)ROUND(dVar16);
  (this_ptr->inverted_matrix).m[1].z = (int)ROUND(dVar17);
  (this_ptr->inverted_matrix).m[2].x = (int)ROUND(dVar18);
  (this_ptr->inverted_matrix).m[2].y = (int)ROUND(dVar19);
  (this_ptr->inverted_matrix).m[2].z = (int)ROUND(dVar20);
  return;
}
