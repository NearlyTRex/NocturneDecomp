// Name: core_xform.cpp_FUN_005b7410
// Address: 005b7410
// Address Range: [[005b7410, 005b7550]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_xform_cpp_FUN_005b7410(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __cdecl core_xform_cpp_FUN_005b7410(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)

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
  
  fVar3 = _DAT_005fa164 /
          (*(float *)(quat_in + 0xc) * *(float *)(quat_in + 0xc) +
          *(float *)(quat_in + 8) * *(float *)(quat_in + 8) +
          *(float *)quat_in * *(float *)quat_in + *(float *)(quat_in + 4) * *(float *)(quat_in + 4))
  ;
  fVar8 = *(float *)(quat_in + 8) * fVar3;
  fVar9 = *(float *)(quat_in + 0xc) * fVar3;
  fVar10 = *(float *)quat_in * *(float *)(quat_in + 4) * fVar3;
  fVar1 = *(float *)quat_in;
  fVar2 = *(float *)quat_in;
  fVar11 = *(float *)(quat_in + 4) * *(float *)(quat_in + 4) * fVar3;
  fVar3 = *(float *)(quat_in + 4);
  fVar4 = *(float *)(quat_in + 4);
  fVar5 = *(float *)(quat_in + 8);
  fVar6 = *(float *)(quat_in + 8);
  fVar7 = *(float *)(quat_in + 0xc);
  *(float *)(matrix_out + 0x10) = fVar3 * fVar8 + fVar2 * fVar9;
  *(float *)(matrix_out + 0x20) = fVar4 * fVar9 - fVar1 * fVar8;
  *(float *)(matrix_out + 4) = fVar3 * fVar8 - fVar2 * fVar9;
  *(float *)(matrix_out + 0x24) = fVar6 * fVar9 + fVar10;
  *(float *)(matrix_out + 8) = fVar4 * fVar9 + fVar1 * fVar8;
  *(float *)(matrix_out + 0x18) = fVar6 * fVar9 - fVar10;
  *(float *)matrix_out = 1.0 - (fVar5 * fVar8 + fVar7 * fVar9);
  *(float *)(matrix_out + 0x14) = 1.0 - (fVar11 + fVar7 * fVar9);
  *(float *)(matrix_out + 0x28) = 1.0 - (fVar11 + fVar5 * fVar8);
  return quat_in;
}
