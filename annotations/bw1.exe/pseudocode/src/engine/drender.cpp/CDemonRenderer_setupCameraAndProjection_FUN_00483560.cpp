// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
// Address: 00483560
// Address Range: [[00483560, 0048377e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

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
  core_dirmat_cpp_FUN_0045f840(transform_matrix);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fVar6 = (float10)_DAT_005db364;
  fVar7 = (float10)*(float *)transform_matrix * (float10)_DAT_005db374;
  fVar8 = (float10)*(float *)(transform_matrix + 4) * (float10)_DAT_005db374;
  fVar9 = (float10)*(float *)(transform_matrix + 8) * (float10)_DAT_005db374;
  fVar10 = (float10)*(float *)(transform_matrix + 0xc) * (float10)_DAT_005db374;
  fVar11 = (float10)local_1c * fVar6 * (float10)_DAT_005db36c;
  fVar12 = (float10)local_14 * fVar6 * (float10)_DAT_005db36c;
  fVar13 = (float10)local_18 * fVar6 * (float10)_DAT_005db36c;
  round();
  _DAT_01c51d5c = (uint)ROUND(fVar7);
  fVar6 = (float10)*(float *)(transform_matrix + 0x10) * (float10)_DAT_005db374;
  round();
  _DAT_01c51d60 = (uint)ROUND(fVar8);
  fVar7 = (float10)*(float *)(transform_matrix + 0x14) * (float10)_DAT_005db374;
  round();
  _DAT_01c51d64 = (int)ROUND(fVar9);
  fVar8 = (float10)*(float *)(transform_matrix + 0x18) * (float10)_DAT_005db374;
  round();
  _DAT_01c51d68 = (uint)ROUND(fVar10);
  fVar9 = (float10)*(float *)(transform_matrix + 0x1c) * (float10)_DAT_005db374;
  round();
  iVar1 = DAT_0061b4c4;
  _DAT_01c51d6c = (uint)ROUND(fVar6);
  fVar6 = (float10)*(float *)(transform_matrix + 0x20) * (float10)_DAT_005db374;
  round();
  round();
  round();
  round();
  _DAT_01c51d70 = (int)ROUND(fVar7);
  _DAT_01c51d74 = (uint)ROUND(fVar8);
  _DAT_01c51d78 = (uint)ROUND(fVar9);
  _DAT_01c51d7c = (int)ROUND(fVar6);
  round();
  round();
  uVar14 = round();
  iVar2 = _DAT_01c4f014;
  iVar3 = _DAT_01c4f00c;
  _DAT_01c51d44 = (int)ROUND(fVar11);
  _DAT_01c51d48 = (int)ROUND(fVar12);
  _DAT_01c51d4c = (int)ROUND(fVar13);
  iVar4 = _DAT_01c4f010 - _DAT_01c4f008;
  *(int *)(this_ptr + 0x24) =
       (int)(((longlong)(int)uVar14 * (longlong)(int)((ulonglong)uVar14 >> 0x20)) / (longlong)iVar1)
  ;
  iVar1 = DAT_0061b4c4;
  iVar3 = ((iVar4 + 1) * 0x10000) / ((iVar2 - iVar3) + 1);
  *(int *)(this_ptr + 0x28) = iVar3;
  *(int *)(this_ptr + 0x28) =
       (int)((longlong)
             ((((longlong)iVar3 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar3 * 0x10000 & 0xffffffffU) / (longlong)iVar1);
  _DAT_01c51d5c =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c51d5c) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c51d5c) >> 0x20
            ) << 0x10;
  _DAT_01c51d68 =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c51d68) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c51d68) >> 0x20
            ) << 0x10;
  _DAT_01c51d74 =
       (uint)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c51d74) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x24) * (longlong)(int)_DAT_01c51d74) >> 0x20
            ) << 0x10;
  _DAT_01c51d60 =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c51d60) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c51d60) >> 0x20
            ) << 0x10;
  _DAT_01c51d6c =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c51d6c) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c51d6c) >> 0x20
            ) << 0x10;
  _DAT_01c51d78 =
       (uint)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c51d78) >> 0x10 |
       (int)((ulonglong)((longlong)*(int *)(this_ptr + 0x28) * (longlong)(int)_DAT_01c51d78) >> 0x20
            ) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_005073d0();
  return;
}
