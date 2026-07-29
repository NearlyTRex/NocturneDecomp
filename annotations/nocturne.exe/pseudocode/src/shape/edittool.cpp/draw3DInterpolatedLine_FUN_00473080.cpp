// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_00473080
// Address: 00473080
// Address Range: [[00473080, 0047318e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00473080(CVector3f *start_point,CVector3f *end_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00473080(CVector3f *start_point,CVector3f *end_point)

{
  SRenderVertex vertex2;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  SRenderVertex in_stack_ffffff74;
  byte in_stack_ffffffa4 [20];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  CVector3i *inputPoint;
  float fVar9;
  float fVar10;
  byte local_24 [12];
  int iStack_18;
  int iStack_14;
  float fStack_10;
  
  bVar4 = 0;
  local_24._0_4_ = (uint)ROUND(start_point->x * _DAT_0059ca4c);
  local_24._4_4_ = (uint)ROUND(start_point->y * _DAT_0059ca4c);
  local_24._8_4_ = (uint)ROUND(start_point->z * _DAT_0059ca4c);
  uVar6 = 0;
  uVar5 = 0x4730c2;
  engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)local_24);
  local_24._0_4_ = end_point->y * 0.000878906456455297._0_4_;
  local_24._4_4_ = 0.000878906456455297._0_4_ * end_point->z;
  fVar9 = start_point->x * 0.000878906456455297._4_4_;
  fVar10 = start_point->y * 0.000878906456455297._4_4_;
  fStack_10 = fVar9 + end_point->x * 0.000878906456455297._0_4_;
  local_24._8_4_ = (uint)ROUND(fStack_10 * _DAT_0059ca4c);
  iStack_18 = (int)ROUND((fVar10 + (float)local_24._0_4_) * _DAT_0059ca4c);
  iStack_14 = (int)ROUND((0.000878906456455297._4_4_ * start_point->z + (float)local_24._4_4_) *
                         _DAT_0059ca4c);
  inputPoint = (CVector3i *)(local_24 + 8);
  uVar8 = 1;
  uVar7 = 0x47315b;
  engine_matrix_c_transformToCache_FUN_004cd210(1,inputPoint);
  puVar2 = &DAT_005c5044;
  puVar3 = (uint *)&stack0xffffffa4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = &DAT_005c5014;
  puVar3 = (uint *)&stack0xffffff74;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  vertex2.projected_vertex.screen_y = uVar5;
  vertex2.projected_vertex.transformed_x = in_stack_ffffffa4._0_4_;
  vertex2.projected_vertex.transformed_y = in_stack_ffffffa4._4_4_;
  vertex2.projected_vertex.transformed_z = in_stack_ffffffa4._8_4_;
  vertex2.projected_vertex.inv_z = in_stack_ffffffa4._12_4_;
  vertex2.projected_vertex.screen_x = in_stack_ffffffa4._16_4_;
  vertex2.u = uVar6;
  vertex2.v = uVar7;
  vertex2.r = uVar8;
  vertex2.g = (int)inputPoint;
  vertex2.b = (int)fVar9;
  vertex2.a = (int)fVar10;
  engine_3d_c_clipAndDrawLine2D_FUN_00409290(in_stack_ffffff74,vertex2);
  return;
}
