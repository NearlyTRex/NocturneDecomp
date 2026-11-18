// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_00498660
// Address: 00498660
// Address Range: [[00498660, 004987a1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00498660(CVector3f *start_point,CVector3f *end_point)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00498660(CVector3f *start_point,CVector3f *end_point)

{
  SRenderVertex vertex2;
  int iVar1;
  float unaff_EBP;
  SRenderVertex *pSVar2;
  float unaff_EDI;
  int *piVar3;
  byte bVar4;
  float afStackY_1044 [996];
  SRenderVertex in_stack_ffffff4c;
  byte in_stack_ffffff7c [20];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  CVector3i *inputPoint;
  float fVar9;
  float fVar10;
  float fStack_54;
  float fStack_50;
  byte auStack_4c [12];
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  auStack_4c._0_4_ = (uint)ROUND(start_point->x * 256.0f);
  auStack_4c._4_4_ = (uint)ROUND(start_point->y * 256.0f);
  auStack_4c._8_4_ = (uint)ROUND(start_point->z * 256.0f);
  uVar6 = 0;
  uVar5 = 0x4986a3;
  engine_matrix_c_transformToCache_FUN_00507b00(0,(CVector3i *)auStack_4c);
  afStack_34[2] = end_point->x * 0.2f;
  afStack_34[3] = end_point->y * 0.2f;
  fStack_24 = end_point->z * 0.2f;
  fStack_14 = afStack_34[2];
  *(float *)(&stack0xfffffff0 + (uint)bVar4 * -8) = afStack_34[(uint)bVar4 * -2 + 3];
  *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_20 = start_point->x * 0.8f;
  fStack_1c = start_point->y * 0.8f;
  fStack_18 = start_point->z * 0.8f;
  fStack_50 = fStack_20;
  *(float *)(auStack_4c + (uint)bVar4 * -8) = afStack_34[(uint)bVar4 * -2 + 6];
  *(float *)(auStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  fVar9 = fStack_50 + fStack_14;
  fVar10 = (float)auStack_4c._0_4_ + unaff_EBP;
  fStack_54 = (float)auStack_4c._4_4_ + unaff_EDI;
  fStack_38 = fVar9;
  afStack_34[(uint)bVar4 * -2] = *(float *)(&stack0xffffffa8 + (uint)bVar4 * -8);
  afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  auStack_4c._8_4_ = (uint)ROUND(fStack_38 * 256.0f);
  iStack_40 = (int)ROUND(afStack_34[0] * 256.0f);
  iStack_3c = (int)ROUND(afStack_34[1] * 256.0f);
  inputPoint = (CVector3i *)(auStack_4c + 8);
  uVar8 = 1;
  uVar7 = 0x49876d;
  engine_matrix_c_transformToCache_FUN_00507b00(1,inputPoint);
  pSVar2 = g_SRenderVertex_ARRAY_00629014 + 1;
  piVar3 = (int *)&stack0xffffff7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  pSVar2 = g_SRenderVertex_ARRAY_00629014;
  piVar3 = (int *)&stack0xffffff4c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  vertex2.projected_vertex.screen_y = uVar5;
  vertex2.projected_vertex.transformed_x = in_stack_ffffff7c._0_4_;
  vertex2.projected_vertex.transformed_y = in_stack_ffffff7c._4_4_;
  vertex2.projected_vertex.transformed_z = in_stack_ffffff7c._8_4_;
  vertex2.projected_vertex.inv_z = in_stack_ffffff7c._12_4_;
  vertex2.projected_vertex.screen_x = in_stack_ffffff7c._16_4_;
  vertex2.u = uVar6;
  vertex2.v = uVar7;
  vertex2.r = uVar8;
  vertex2.g = (int)inputPoint;
  vertex2.b = (int)fVar9;
  vertex2.a = (int)fVar10;
  engine_3d_c_clipAndDrawLine2D_FUN_00407af0(in_stack_ffffff4c,vertex2);
  return;
}
