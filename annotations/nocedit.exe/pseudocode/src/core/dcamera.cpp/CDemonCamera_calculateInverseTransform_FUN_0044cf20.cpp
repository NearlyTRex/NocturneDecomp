// Name: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
// Address: 0044cf20
// Address Range: [[0044cf20, 0044d1b6]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera *this_ptr)

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
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  double dVar21;
  
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
  fVar14 = (float10)-(fVar10 * fVar7 - fVar12 * fVar6) * (float10)fVar13;
  fVar15 = (float10)fVar1 * (float10)fVar13;
  fVar16 = (float10)-fVar9 * (float10)fVar13;
  fVar17 = (float10)(fVar3 * fVar7 - fVar12 * fVar11) * (float10)fVar13;
  fVar18 = (float10)fVar2 * (float10)fVar13;
  dVar20 = crt_math_c_round_FUN_005fe6b0((double)(fVar5 * fVar13));
  (this_ptr->inverted_matrix).m[0].x = (int)ROUND(dVar20);
  fVar19 = (float10)fVar1 * (float10)6.319857e-39;
  dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  (this_ptr->inverted_matrix).m[0].y = (int)ROUND(dVar20);
  fVar14 = (float10)fVar11 * (float10)6.319886e-39;
  dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fVar15 = (float10)dVar20;
  dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
  fVar16 = (float10)dVar20;
  dVar20 = crt_math_c_round_FUN_005fe6b0((double)fVar17);
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)(-(fVar3 * fVar4 - fVar12 * fVar8) * fVar13));
  fVar17 = (float10)dVar21;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)fVar18);
  fVar18 = (float10)dVar21;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)fVar19);
  fVar19 = (float10)dVar21;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  (this_ptr->inverted_matrix).m[0].z = (int)ROUND(fVar15);
  (this_ptr->inverted_matrix).m[1].x = (int)ROUND(fVar16);
  (this_ptr->inverted_matrix).m[1].y = (int)ROUND(dVar20);
  (this_ptr->inverted_matrix).m[1].z = (int)ROUND(fVar17);
  (this_ptr->inverted_matrix).m[2].x = (int)ROUND(fVar18);
  (this_ptr->inverted_matrix).m[2].y = (int)ROUND(fVar19);
  (this_ptr->inverted_matrix).m[2].z = (int)ROUND(dVar21);
  return;
}
