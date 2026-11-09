// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
// Address: 0046b060
// Address Range: [[0046b060, 0046b27e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

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
  core_dirmat_cpp_FUN_004496e0(transform_matrix);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fVar6 = (float10)_DAT_005d156b;
  fVar7 = (float10)*(float *)transform_matrix * (float10)_DAT_005d157b;
  fVar8 = (float10)*(float *)(transform_matrix + 4) * (float10)_DAT_005d157b;
  fVar9 = (float10)*(float *)(transform_matrix + 8) * (float10)_DAT_005d157b;
  fVar10 = (float10)*(float *)(transform_matrix + 0xc) * (float10)_DAT_005d157b;
  fVar11 = (float10)local_1c * fVar6 * (float10)_DAT_005d1573;
  fVar12 = (float10)local_14 * fVar6 * (float10)_DAT_005d1573;
  fVar13 = (float10)local_18 * fVar6 * (float10)_DAT_005d1573;
  round();
  _DAT_01c38b9c = (uint)ROUND(fVar7);
  fVar6 = (float10)*(float *)(transform_matrix + 0x10) * (float10)_DAT_005d157b;
  round();
  _DAT_01c38ba0 = (uint)ROUND(fVar8);
  fVar7 = (float10)*(float *)(transform_matrix + 0x14) * (float10)_DAT_005d157b;
  round();
  _DAT_01c38ba4 = (int)ROUND(fVar9);
  fVar8 = (float10)*(float *)(transform_matrix + 0x18) * (float10)_DAT_005d157b;
  round();
  _DAT_01c38ba8 = (uint)ROUND(fVar10);
  fVar9 = (float10)*(float *)(transform_matrix + 0x1c) * (float10)_DAT_005d157b;
  round();
  iVar1 = DAT_006141e4;
  _DAT_01c38bac = (uint)ROUND(fVar6);
  fVar6 = (float10)*(float *)(transform_matrix + 0x20) * (float10)_DAT_005d157b;
  round();
  round();
  round();
  round();
  _DAT_01c38bb0 = (int)ROUND(fVar7);
  _DAT_01c38bb4 = (uint)ROUND(fVar8);
  _DAT_01c38bb8 = (uint)ROUND(fVar9);
  _DAT_01c38bbc = (int)ROUND(fVar6);
  round();
  round();
  uVar14 = round();
  iVar2 = _DAT_01c35e54;
  iVar3 = _DAT_01c35e4c;
  _DAT_01c38b84 = (int)ROUND(fVar11);
  _DAT_01c38b88 = (int)ROUND(fVar12);
  _DAT_01c38b8c = (int)ROUND(fVar13);
  iVar4 = _DAT_01c35e50 - _DAT_01c35e48;
  *(int *)(this_ptr + 0x24) =
       (int)(((longlong)(int)uVar14 * (longlong)(int)((ulonglong)uVar14 >> 0x20)) / (longlong)iVar1)
  ;
  iVar1 = DAT_006141e4;
  iVar3 = ((iVar4 + 1) * 0x10000) / ((iVar2 - iVar3) + 1);
  *(int *)(this_ptr + 0x28) = iVar3;
  *(int *)(this_ptr + 0x28) =
       (int)((longlong)
             ((((longlong)iVar3 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar3 * 0x10000 & 0xffffffffU) / (longlong)iVar1);
  _DAT_01c38b9c =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c38b9c) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c38b9c) >> 0x20
            ) << 0x10;
  _DAT_01c38ba8 =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c38ba8) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c38ba8) >> 0x20
            ) << 0x10;
  _DAT_01c38bb4 =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c38bb4) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c38bb4) >> 0x20
            ) << 0x10;
  _DAT_01c38ba0 =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c38ba0) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c38ba0) >> 0x20
            ) << 0x10;
  _DAT_01c38bac =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c38bac) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c38bac) >> 0x20
            ) << 0x10;
  _DAT_01c38bb8 =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c38bb8) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c38bb8) >> 0x20
            ) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_004e8730();
  return;
}
