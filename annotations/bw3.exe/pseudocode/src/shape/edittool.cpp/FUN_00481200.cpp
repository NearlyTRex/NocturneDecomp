// Name: shape_edittool.cpp_FUN_00481200
// Address: 00481200
// Address Range: [[00481200, 00481341]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00481200(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00481200(float *param_1,float *param_2)

{
  SRenderVertex vertex2;
  int iVar1;
  float unaff_EBP;
  uint *puVar2;
  float unaff_EDI;
  uint *puVar3;
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
  auStack_4c._0_4_ = (uint)ROUND(*param_1 * _DAT_005deffc);
  auStack_4c._4_4_ = (uint)ROUND(param_1[1] * _DAT_005deffc);
  auStack_4c._8_4_ = (uint)ROUND(param_1[2] * _DAT_005deffc);
  uVar6 = 0;
  uVar5 = 0x481243;
  engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)auStack_4c);
  afStack_34[2] = *param_2 * _DAT_005bd33d;
  afStack_34[3] = param_2[1] * _DAT_005bd33d;
  fStack_24 = param_2[2] * _DAT_005bd33d;
  fStack_14 = *param_2 * _DAT_005bd33d;
  *(float *)(&stack0xfffffff0 + (uint)bVar4 * -8) = afStack_34[(uint)bVar4 * -2 + 3];
  *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_20 = *param_1 * _DAT_005bd341;
  fStack_1c = param_1[1] * _DAT_005bd341;
  fStack_18 = param_1[2] * _DAT_005bd341;
  fStack_50 = *param_1 * _DAT_005bd341;
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
  auStack_4c._8_4_ = (uint)ROUND(fStack_38 * _DAT_005deffc);
  iStack_40 = (int)ROUND(afStack_34[0] * _DAT_005deffc);
  iStack_3c = (int)ROUND(afStack_34[1] * _DAT_005deffc);
  inputPoint = (CVector3i *)(auStack_4c + 8);
  uVar8 = 1;
  uVar7 = 0x48130d;
  engine_matrix_c_transformToCache_FUN_004e5540(1,inputPoint);
  puVar2 = &DAT_0060b044;
  puVar3 = (uint *)&stack0xffffff7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = &DAT_0060b014;
  puVar3 = (uint *)&stack0xffffff4c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407b30(in_stack_ffffff4c,vertex2);
  return;
}
