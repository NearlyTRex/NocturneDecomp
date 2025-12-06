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
  int iVar14;
  uint in_EDX;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
  
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
  fVar6 = -(fVar10 * fVar7 - fVar12 * fVar6);
  fVar13 = (float)65536 / (fVar12 * fVar1 + (fVar2 * fVar5 - fVar10 * fVar9));
  fVar15 = (float10)fVar5 * (float10)fVar13;
  fVar16 = (float10)fVar6 * (float10)fVar13;
  fVar17 = (float10)(fVar10 * fVar4 - fVar12 * fVar3) * (float10)fVar13;
  fVar18 = (float10)-fVar9 * (float10)fVar13;
  fVar19 = (float10)(fVar2 * fVar7 - fVar12 * fVar11) * (float10)fVar13;
  fVar20 = (float10)-(fVar2 * fVar4 - fVar12 * fVar8) * (float10)fVar13;
  fVar21 = (float10)fVar1 * (float10)fVar13;
  dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  *(int *)(SUB84 /* extract 2-byte value */(dVar22,0) + 0x19c) = (int)ROUND(fVar15);
  fVar15 = (float10)fVar6 * (float10)fVar7;
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  *(int *)(SUB84 /* extract 2-byte value */(dVar22,0) + 0x1a0) = (int)ROUND(fVar16);
  fVar16 = (float10)fVar12 * (float10)fVar11;
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  iVar14 = SUB84 /* extract 2-byte value */(dVar22,0);
  *(int *)(iVar14 + 0x1a4) = (int)ROUND(fVar17);
  *(int *)(iVar14 + 0x1a8) = (int)ROUND(fVar18);
  *(int *)(iVar14 + 0x1ac) = (int)ROUND(fVar19);
  *(int *)(iVar14 + 0x1b0) = (int)ROUND(fVar20);
  *(int *)(iVar14 + 0x1b4) = (int)ROUND(fVar21);
  *(int *)(iVar14 + 0x1b8) = (int)ROUND(fVar15);
  *(int *)(iVar14 + 0x1bc) = (int)ROUND(fVar16);
  return;
}
