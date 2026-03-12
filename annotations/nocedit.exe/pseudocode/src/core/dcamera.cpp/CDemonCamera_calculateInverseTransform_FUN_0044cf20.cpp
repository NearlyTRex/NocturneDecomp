// Name: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
// Address: 0044cf20
// Address Range: [[0044cf20, 0044d1b6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera *this_ptr)

{
  float fVar5;
  float fVar2;
  float fVar3;
  float fVar8;
  float fVar9;
  float fVar6;
  float fVar7;
  float fVar1;
  float fVar12;
  float fVar13;
  float fVar10;
  float fVar11;
  float fVar4;
  
  fVar2 = (float)(this_ptr->source_matrix).m[0].x * (float)1.52587890625e-05;
  fVar10 = (float)(this_ptr->source_matrix).m[0].y * (float)1.52587890625e-05;
  fVar12 = (float)(this_ptr->source_matrix).m[0].z * (float)1.52587890625e-05;
  fVar8 = (float)(this_ptr->source_matrix).m[1].x * (float)1.52587890625e-05;
  fVar3 = (float)(this_ptr->source_matrix).m[1].y * (float)1.52587890625e-05;
  fVar4 = (float)(this_ptr->source_matrix).m[1].z * (float)1.52587890625e-05;
  fVar11 = (float)(this_ptr->source_matrix).m[2].x * (float)1.52587890625e-05;
  fVar6 = (float)(this_ptr->source_matrix).m[2].y * (float)1.52587890625e-05;
  fVar7 = (float)(this_ptr->source_matrix).m[2].z * (float)1.52587890625e-05;
  fVar5 = fVar3 * fVar7 - fVar4 * fVar6;
  fVar9 = fVar8 * fVar7 - fVar4 * fVar11;
  fVar1 = fVar8 * fVar6 - fVar3 * fVar11;
  fVar13 = (float)65536 / (fVar12 * fVar1 + (fVar2 * fVar5 - fVar10 * fVar9));
  (this_ptr->inverted_matrix).m[0].x = (int)ROUND(ROUND(fVar5 * fVar13));
  (this_ptr->inverted_matrix).m[0].y =
       (int)ROUND(ROUND(-(fVar10 * fVar7 - fVar12 * fVar6) * fVar13));
  (this_ptr->inverted_matrix).m[0].z = (int)ROUND(ROUND((fVar10 * fVar4 - fVar12 * fVar3) * fVar13))
  ;
  (this_ptr->inverted_matrix).m[1].x = (int)ROUND(ROUND(-fVar9 * fVar13));
  (this_ptr->inverted_matrix).m[1].y = (int)ROUND(ROUND((fVar2 * fVar7 - fVar12 * fVar11) * fVar13))
  ;
  (this_ptr->inverted_matrix).m[1].z = (int)ROUND(ROUND(-(fVar2 * fVar4 - fVar12 * fVar8) * fVar13))
  ;
  (this_ptr->inverted_matrix).m[2].x = (int)ROUND(ROUND(fVar1 * fVar13));
  (this_ptr->inverted_matrix).m[2].y =
       (int)ROUND(ROUND(-(fVar2 * fVar6 - fVar10 * fVar11) * fVar13));
  (this_ptr->inverted_matrix).m[2].z = (int)ROUND(ROUND((fVar2 * fVar3 - fVar10 * fVar8) * fVar13));
  return;
}
