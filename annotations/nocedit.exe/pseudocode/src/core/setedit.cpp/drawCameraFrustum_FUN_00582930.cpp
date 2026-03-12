// Name: core_setedit.cpp_drawCameraFrustum_FUN_00582930
// Address: 00582930
// Address Range: [[00582930, 00582f23]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_drawCameraFrustum_FUN_00582930(int color,int use_3d_lines)

#include "nocturne.h"

void __cdecl core_setedit_cpp_drawCameraFrustum_FUN_00582930(int color,int use_3d_lines)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int *piVar6;
  int *piVar4;
  byte bVar5;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  SRenderVertex vertex2_01;
  SRenderVertex vertex2_02;
  SRenderVertex *output;
  CVector3i *input;
  SRenderVertex vertex2_09;
  SRenderVertex vertex2_10;
  SRenderVertex vertex2_03;
  SRenderVertex vertex2_04;
  SRenderVertex vertex2_05;
  SRenderVertex vertex2_06;
  SRenderVertex vertex2_07;
  SRenderVertex vertex2_08;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex in_stack_ffffff24;
  byte auVar6 [24];
  byte in_stack_ffffff54 [32];
  uint in_stack_ffffff74;
  uint uVar7;
  
  bVar5 = 0;
  local_28.x = (int)ROUND(256.0f * -1.0);
  local_28.y = (int)ROUND(256.0f * -1.0);
  local_28.z = (int)ROUND(256.0f * 2.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_28);
  local_64.x = (int)ROUND(256.0f * 1.0);
  local_64.y = (int)ROUND(256.0f * -1.0);
  local_64.z = (int)ROUND(256.0f * 2.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_7c.x = (int)ROUND(256.0f * 1.0);
  local_7c.y = (int)ROUND(256.0f * 1.0);
  local_7c.z = (int)ROUND(256.0f * 2.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_7c);
  local_70.x = (int)ROUND(256.0f * -1.0);
  local_70.y = (int)ROUND(256.0f * 1.0);
  local_70.z = (int)ROUND(256.0f * 2.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
  local_40.x = (int)ROUND(256.0f * -0.3);
  local_40.y = (int)ROUND(256.0f * -0.3);
  local_40.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[4].projected_vertex,&local_40);
  local_1c.x = (int)ROUND(256.0f * 0.3);
  local_1c.y = (int)ROUND(256.0f * -0.3);
  local_1c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[5].projected_vertex,&local_1c);
  local_34.x = (int)ROUND(256.0f * 0.3);
  local_34.y = (int)ROUND(256.0f * 0.3);
  local_34.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[6].projected_vertex,&local_34);
  local_58.x = (int)ROUND(256.0f * -0.3);
  local_58.y = (int)ROUND(256.0f * 0.3);
  local_58.z = (int)ROUND(256.0f * 0.0);
  input = &local_58;
  output = g_CDemonRendererPtr2->vertex_buffer_ptr + 7;
  uVar7 = 0x582bba;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
  if (use_3d_lines != 0) {
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
              (g_CDemonRendererPtr2,color);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,1);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,2);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,3);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,0);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,4,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,5,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,6,7);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,7,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,7);
    return;
  }
  g_ActiveRenderColor = color;
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 1;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2.projected_vertex.inv_z = auVar6._12_4_;
  vertex2.projected_vertex.screen_x = auVar6._16_4_;
  vertex2.projected_vertex.screen_y = auVar6._20_4_;
  vertex2.u = in_stack_ffffff54._24_4_;
  vertex2.v = in_stack_ffffff54._28_4_;
  vertex2.g = uVar7;
  vertex2.b = (int)output;
  vertex2.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 2;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 1;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_00.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_00.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_00.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_00.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_00.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_00.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_00.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_00.u = in_stack_ffffff54._24_4_;
  vertex2_00.v = in_stack_ffffff54._28_4_;
  vertex2_00.g = uVar7;
  vertex2_00.b = (int)output;
  vertex2_00.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_00);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 3;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 2;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_01.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_01.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_01.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_01.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_01.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_01.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_01.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_01.u = in_stack_ffffff54._24_4_;
  vertex2_01.v = in_stack_ffffff54._28_4_;
  vertex2_01.g = uVar7;
  vertex2_01.b = (int)output;
  vertex2_01.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_01);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 3;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_02.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_02.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_02.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_02.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_02.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_02.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_02.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_02.u = in_stack_ffffff54._24_4_;
  vertex2_02.v = in_stack_ffffff54._28_4_;
  vertex2_02.g = uVar7;
  vertex2_02.b = (int)output;
  vertex2_02.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_02);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 5;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 4;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_03.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_03.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_03.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_03.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_03.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_03.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_03.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_03.u = in_stack_ffffff54._24_4_;
  vertex2_03.v = in_stack_ffffff54._28_4_;
  vertex2_03.g = uVar7;
  vertex2_03.b = (int)output;
  vertex2_03.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_03);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 6;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 5;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_04.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_04.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_04.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_04.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_04.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_04.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_04.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_04.u = in_stack_ffffff54._24_4_;
  vertex2_04.v = in_stack_ffffff54._28_4_;
  vertex2_04.g = uVar7;
  vertex2_04.b = (int)output;
  vertex2_04.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_04);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 7;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 6;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_05.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_05.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_05.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_05.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_05.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_05.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_05.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_05.u = in_stack_ffffff54._24_4_;
  vertex2_05.v = in_stack_ffffff54._28_4_;
  vertex2_05.g = uVar7;
  vertex2_05.b = (int)output;
  vertex2_05.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_05);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 4;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 7;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_06.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_06.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_06.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_06.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_06.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_06.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_06.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_06.u = in_stack_ffffff54._24_4_;
  vertex2_06.v = in_stack_ffffff54._28_4_;
  vertex2_06.g = uVar7;
  vertex2_06.b = (int)output;
  vertex2_06.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_06);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 4;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_07.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_07.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_07.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_07.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_07.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_07.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_07.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_07.u = in_stack_ffffff54._24_4_;
  vertex2_07.v = in_stack_ffffff54._28_4_;
  vertex2_07.g = uVar7;
  vertex2_07.b = (int)output;
  vertex2_07.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_07);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 5;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 1;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_08.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_08.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_08.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_08.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_08.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_08.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_08.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_08.u = in_stack_ffffff54._24_4_;
  vertex2_08.v = in_stack_ffffff54._28_4_;
  vertex2_08.g = uVar7;
  vertex2_08.b = (int)output;
  vertex2_08.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_08);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar4 = pSVar5 + 6;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar5 = pSVar5 + 2;
  piVar6 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar5 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  vertex2_09.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_09.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_09.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_09.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_09.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_09.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_09.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_09.u = in_stack_ffffff54._24_4_;
  vertex2_09.v = in_stack_ffffff54._28_4_;
  vertex2_09.g = uVar7;
  vertex2_09.b = (int)output;
  vertex2_09.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_09);
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar5 + 7;
  piVar6 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar2 = (SRenderVertex *)((int)pSVar2 + (uint)bVar5 * -8 + 4);
    *piVar6 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = pSVar2;
    piVar6 = piVar6 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar5 + 3;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = pSVar3;
    piVar4 = piVar4;
  }
  vertex2_10.r = in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_10.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_10.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_10.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_10.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_10.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_10.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_10.u = in_stack_ffffff54._24_4_;
  vertex2_10.v = in_stack_ffffff54._28_4_;
  vertex2_10.g = uVar7;
  vertex2_10.b = (int)output;
  vertex2_10.a = (int)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_10);
  return;
}
