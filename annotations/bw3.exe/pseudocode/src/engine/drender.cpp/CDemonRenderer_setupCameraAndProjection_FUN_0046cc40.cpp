// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
// Address: 0046cc40
// Address Range: [[0046cc40, 0046ce5e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float afStackY_1010 [1017];
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  core_dirmat_cpp_FUN_0045b9b0(transform_matrix);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fVar6 = (float10)_DAT_005bc4fb;
  fVar7 = (float10)*(float *)transform_matrix * (float10)_DAT_005bc50b;
  fVar8 = (float10)*(float *)(transform_matrix + 4) * (float10)_DAT_005bc50b;
  fVar9 = (float10)*(float *)(transform_matrix + 8) * (float10)_DAT_005bc50b;
  fVar10 = (float10)*(float *)(transform_matrix + 0xc) * (float10)_DAT_005bc50b;
  fVar11 = (float10)local_1c * fVar6 * (float10)_DAT_005bc503;
  fVar12 = (float10)local_14 * fVar6 * (float10)_DAT_005bc503;
  fVar13 = (float10)local_18 * fVar6 * (float10)_DAT_005bc503;
  round();
  _DAT_01c6e2fc = (uint)ROUND(fVar7);
  fVar6 = (float10)*(float *)(transform_matrix + 0x10) * (float10)_DAT_005bc50b;
  round();
  _DAT_01c6e300 = (uint)ROUND(fVar8);
  fVar7 = (float10)*(float *)(transform_matrix + 0x14) * (float10)_DAT_005bc50b;
  round();
  _DAT_01c6e304 = (int)ROUND(fVar9);
  fVar8 = (float10)*(float *)(transform_matrix + 0x18) * (float10)_DAT_005bc50b;
  round();
  _DAT_01c6e308 = (uint)ROUND(fVar10);
  fVar9 = (float10)*(float *)(transform_matrix + 0x1c) * (float10)_DAT_005bc50b;
  round();
  iVar1 = DAT_005fba44;
  _DAT_01c6e30c = (uint)ROUND(fVar6);
  fVar6 = (float10)*(float *)(transform_matrix + 0x20) * (float10)_DAT_005bc50b;
  round();
  round();
  round();
  round();
  _DAT_01c6e310 = (int)ROUND(fVar7);
  _DAT_01c6e314 = (uint)ROUND(fVar8);
  _DAT_01c6e318 = (uint)ROUND(fVar9);
  _DAT_01c6e31c = (int)ROUND(fVar6);
  round();
  round();
  uVar14 = round();
  iVar2 = _DAT_01c6b5b4;
  iVar3 = _DAT_01c6b5ac;
  _DAT_01c6e2e4 = (int)ROUND(fVar11);
  _DAT_01c6e2e8 = (int)ROUND(fVar12);
  _DAT_01c6e2ec = (int)ROUND(fVar13);
  iVar4 = _DAT_01c6b5b0 - _DAT_01c6b5a8;
  *(int *)(this_ptr + 0x24) =
       (int)(((longlong)(int)uVar14 * (longlong)(int)((ulonglong)uVar14 >> 0x20)) / (longlong)iVar1)
  ;
  iVar1 = DAT_005fba44;
  iVar3 = ((iVar4 + 1) * 0x10000) / ((iVar2 - iVar3) + 1);
  *(int *)(this_ptr + 0x28) = iVar3;
  *(int *)(this_ptr + 0x28) =
       (int)((longlong)
             ((((longlong)iVar3 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar3 * 0x10000 & 0xffffffffU) / (longlong)iVar1);
  _DAT_01c6e2fc =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c6e2fc) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c6e2fc) >> 0x20
            ) << 0x10;
  _DAT_01c6e308 =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c6e308) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c6e308) >> 0x20
            ) << 0x10;
  _DAT_01c6e314 =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c6e314) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c6e314) >> 0x20
            ) << 0x10;
  _DAT_01c6e300 =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c6e300) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c6e300) >> 0x20
            ) << 0x10;
  _DAT_01c6e30c =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c6e30c) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c6e30c) >> 0x20
            ) << 0x10;
  _DAT_01c6e318 =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c6e318) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c6e318) >> 0x20
            ) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_004e4e10();
  return;
}
