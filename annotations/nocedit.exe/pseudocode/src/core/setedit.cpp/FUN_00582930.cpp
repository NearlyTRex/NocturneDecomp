// Name: core_setedit.cpp_FUN_00582930
// Address: 00582930
// Address Range: [[00582930, 00582f23]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_00582930(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_00582930(void)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  SRenderVertex vertex2_02;
  SRenderVertex vertex2_03;
  SRenderVertex vertex2_04;
  SRenderVertex vertex2_05;
  SRenderVertex vertex2_06;
  SRenderVertex vertex2_07;
  SRenderVertex vertex2_08;
  SRenderVertex vertex2_09;
  SRenderVertex vertex2_10;
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  SRenderVertex in_stack_ffffff24;
  byte auVar6 [24];
  byte in_stack_ffffff54 [32];
  uint in_stack_ffffff74;
  uint uVar7;
  SRenderVertex *output;
  CVector3i *input;
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
  
  bVar5 = 0;
  local_4c = -1.0;
  local_44 = 2.0;
  local_48 = -1.0;
  local_28.x = (int)ROUND(256.0f * -1.0);
  local_28.y = (int)ROUND(256.0f * -1.0);
  local_28.z = (int)ROUND(256.0f * 2.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_28);
  local_4c = -local_4c;
  local_64.x = (int)ROUND(local_4c * 256.0f);
  local_64.y = (int)ROUND(local_48 * 256.0f);
  local_64.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_48 = -local_48;
  local_7c.x = (int)ROUND(local_4c * 256.0f);
  local_7c.y = (int)ROUND(local_48 * 256.0f);
  local_7c.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_7c);
  local_4c = -local_4c;
  local_70.x = (int)ROUND(local_4c * 256.0f);
  local_70.y = (int)ROUND(local_48 * 256.0f);
  local_70.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
  local_4c = -0.3;
  local_48 = -0.3;
  local_44 = 0.0;
  local_40.x = (int)ROUND(256.0f * -0.3);
  local_40.y = (int)ROUND(256.0f * -0.3);
  local_40.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[4].projected_vertex,&local_40);
  local_4c = -local_4c;
  local_1c.x = (int)ROUND(local_4c * 256.0f);
  local_1c.y = (int)ROUND(local_48 * 256.0f);
  local_1c.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[5].projected_vertex,&local_1c);
  local_48 = -local_48;
  local_34.x = (int)ROUND(local_4c * 256.0f);
  local_34.y = (int)ROUND(local_48 * 256.0f);
  local_34.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[6].projected_vertex,&local_34);
  local_4c = -local_4c;
  local_58.x = (int)ROUND(local_4c * 256.0f);
  local_58.y = (int)ROUND(local_48 * 256.0f);
  local_58.z = (int)ROUND(local_44 * 256.0f);
  input = &local_58;
  output = g_CDemonRendererPtr2->vertex_buffer_ptr + 7;
  uVar7 = 0x582bba;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
  if (in_stack_00000008 != 0) {
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
              (g_CDemonRendererPtr2,in_stack_00000004);
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
  g_ActiveRenderColor = in_stack_00000004;
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 1;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2.projected_vertex.inv_z = auVar6._12_4_;
  vertex2.projected_vertex.screen_x = auVar6._16_4_;
  vertex2.projected_vertex.screen_y = auVar6._20_4_;
  vertex2.u = (float)in_stack_ffffff54._24_4_;
  vertex2.v = (float)in_stack_ffffff54._28_4_;
  vertex2.color = uVar7;
  vertex2.fog = (float)output;
  vertex2.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 2;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 1;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_00.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_00.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_00.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_00.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_00.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_00.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_00.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_00.u = (float)in_stack_ffffff54._24_4_;
  vertex2_00.v = (float)in_stack_ffffff54._28_4_;
  vertex2_00.color = uVar7;
  vertex2_00.fog = (float)output;
  vertex2_00.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_00);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 3;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 2;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_01.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_01.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_01.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_01.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_01.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_01.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_01.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_01.u = (float)in_stack_ffffff54._24_4_;
  vertex2_01.v = (float)in_stack_ffffff54._28_4_;
  vertex2_01.color = uVar7;
  vertex2_01.fog = (float)output;
  vertex2_01.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_01);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 3;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_02.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_02.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_02.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_02.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_02.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_02.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_02.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_02.u = (float)in_stack_ffffff54._24_4_;
  vertex2_02.v = (float)in_stack_ffffff54._28_4_;
  vertex2_02.color = uVar7;
  vertex2_02.fog = (float)output;
  vertex2_02.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_02);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 5;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 4;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_03.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_03.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_03.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_03.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_03.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_03.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_03.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_03.u = (float)in_stack_ffffff54._24_4_;
  vertex2_03.v = (float)in_stack_ffffff54._28_4_;
  vertex2_03.color = uVar7;
  vertex2_03.fog = (float)output;
  vertex2_03.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_03);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 6;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 5;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_04.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_04.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_04.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_04.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_04.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_04.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_04.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_04.u = (float)in_stack_ffffff54._24_4_;
  vertex2_04.v = (float)in_stack_ffffff54._28_4_;
  vertex2_04.color = uVar7;
  vertex2_04.fog = (float)output;
  vertex2_04.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_04);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 7;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 6;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_05.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_05.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_05.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_05.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_05.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_05.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_05.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_05.u = (float)in_stack_ffffff54._24_4_;
  vertex2_05.v = (float)in_stack_ffffff54._28_4_;
  vertex2_05.color = uVar7;
  vertex2_05.fog = (float)output;
  vertex2_05.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_05);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 4;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 7;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_06.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_06.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_06.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_06.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_06.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_06.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_06.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_06.u = (float)in_stack_ffffff54._24_4_;
  vertex2_06.v = (float)in_stack_ffffff54._28_4_;
  vertex2_06.color = uVar7;
  vertex2_06.fog = (float)output;
  vertex2_06.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_06);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 4;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_07.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_07.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_07.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_07.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_07.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_07.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_07.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_07.u = (float)in_stack_ffffff54._24_4_;
  vertex2_07.v = (float)in_stack_ffffff54._28_4_;
  vertex2_07.color = uVar7;
  vertex2_07.fog = (float)output;
  vertex2_07.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_07);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 5;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 1;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_08.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_08.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_08.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_08.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_08.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_08.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_08.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_08.u = (float)in_stack_ffffff54._24_4_;
  vertex2_08.v = (float)in_stack_ffffff54._28_4_;
  vertex2_08.color = uVar7;
  vertex2_08.fog = (float)output;
  vertex2_08.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_08);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 6;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 2;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_09.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_09.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_09.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_09.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_09.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_09.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_09.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_09.u = (float)in_stack_ffffff54._24_4_;
  vertex2_09.v = (float)in_stack_ffffff54._28_4_;
  vertex2_09.color = uVar7;
  vertex2_09.fog = (float)output;
  vertex2_09.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_09);
  pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 7;
  piVar4 = (int *)&stack0xffffff54;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  pSVar3 = pSVar3 + 3;
  piVar4 = (int *)&stack0xffffff24;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  vertex2_10.light = (float)in_stack_ffffff74;
  auVar6 = in_stack_ffffff54._0_24_;
  vertex2_10.projected_vertex.transformed_x = auVar6._0_4_;
  vertex2_10.projected_vertex.transformed_y = auVar6._4_4_;
  vertex2_10.projected_vertex.transformed_z = auVar6._8_4_;
  vertex2_10.projected_vertex.inv_z = auVar6._12_4_;
  vertex2_10.projected_vertex.screen_x = auVar6._16_4_;
  vertex2_10.projected_vertex.screen_y = auVar6._20_4_;
  vertex2_10.u = (float)in_stack_ffffff54._24_4_;
  vertex2_10.v = (float)in_stack_ffffff54._28_4_;
  vertex2_10.color = uVar7;
  vertex2_10.fog = (float)output;
  vertex2_10.w_recip = (float)input;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,vertex2_10);
  return;
}
