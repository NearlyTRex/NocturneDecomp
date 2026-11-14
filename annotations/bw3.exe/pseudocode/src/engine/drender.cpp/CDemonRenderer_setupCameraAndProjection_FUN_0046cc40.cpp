// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
// Address: 0046cc40
// Address Range: [[0046cc40, 0046ce5e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  float afStackY_1010 [1017];
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  core_dirmat_cpp_FUN_0045b9b0(transform_matrix);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fVar7 = (float10)_DAT_005bc4fb;
  fVar8 = (float10)transform_matrix->m[0].x * (float10)_DAT_005bc50b;
  fVar9 = (float10)transform_matrix->m[0].y * (float10)_DAT_005bc50b;
  fVar10 = (float10)transform_matrix->m[0].z * (float10)_DAT_005bc50b;
  fVar11 = (float10)transform_matrix->m[1].x * (float10)_DAT_005bc50b;
  fVar12 = (float10)local_1c * fVar7 * (float10)_DAT_005bc503;
  fVar13 = (float10)local_14 * fVar7 * (float10)_DAT_005bc503;
  fVar14 = (float10)local_18 * fVar7 * (float10)_DAT_005bc503;
  round();
  _DAT_01c6e2fc = (uint)ROUND(fVar8);
  fVar7 = (float10)transform_matrix->m[1].y * (float10)_DAT_005bc50b;
  round();
  _DAT_01c6e300 = (uint)ROUND(fVar9);
  fVar8 = (float10)transform_matrix->m[1].z * (float10)_DAT_005bc50b;
  round();
  _DAT_01c6e304 = (int)ROUND(fVar10);
  fVar9 = (float10)transform_matrix->m[2].x * (float10)_DAT_005bc50b;
  round();
  _DAT_01c6e308 = (uint)ROUND(fVar11);
  fVar10 = (float10)transform_matrix->m[2].y * (float10)_DAT_005bc50b;
  round();
  iVar2 = DAT_005fba44;
  _DAT_01c6e30c = (uint)ROUND(fVar7);
  fVar7 = (float10)transform_matrix->m[2].z * (float10)_DAT_005bc50b;
  round();
  round();
  round();
  round();
  _DAT_01c6e310 = (int)ROUND(fVar8);
  _DAT_01c6e314 = (uint)ROUND(fVar9);
  _DAT_01c6e318 = (uint)ROUND(fVar10);
  _DAT_01c6e31c = (int)ROUND(fVar7);
  round();
  round();
  uVar15 = round();
  iVar3 = _DAT_01c6b5b4;
  iVar4 = _DAT_01c6b5ac;
  _DAT_01c6e2e4 = (int)ROUND(fVar12);
  _DAT_01c6e2e8 = (int)ROUND(fVar13);
  _DAT_01c6e2ec = (int)ROUND(fVar14);
  iVar5 = _DAT_01c6b5b0 - _DAT_01c6b5a8;
  this_ptr->projection_reciprocal =
       (int)(((longlong)(int)uVar15 * (longlong)(int)((ulonglong)uVar15 >> 0x20)) / (longlong)iVar2)
  ;
  iVar2 = DAT_005fba44;
  iVar4 = ((iVar5 + 1) * 0x10000) / ((iVar3 - iVar4) + 1);
  this_ptr->aspect_ratio_fixed = iVar4;
  this_ptr->aspect_ratio_fixed =
       (int)((longlong)
             ((((longlong)iVar4 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar4 * 0x10000 & 0xffffffffU) / (longlong)iVar2);
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c6e2fc;
  _DAT_01c6e2fc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c6e308;
  _DAT_01c6e308 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c6e314;
  _DAT_01c6e314 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c6e300;
  _DAT_01c6e300 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c6e30c;
  _DAT_01c6e30c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c6e318;
  _DAT_01c6e318 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_004e4e10();
  return;
}
