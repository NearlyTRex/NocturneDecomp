// Name: core_setedit.cpp_FUN_00582930
// Address: 00582930
// Address Range: [[00582930, 00582f23]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00582930()

#include "nocturne.h"

void core_setedit_cpp_FUN_00582930(void)

{
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  SRenderVertex *in_stack_ffffff24;
  SRenderVertex *in_stack_ffffff28;
  int aiStack_ac [8];
  uint uStack_8c;
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
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_28);
  local_4c = -local_4c;
  local_64.x = (int)ROUND(local_4c * 256.0f);
  local_64.y = (int)ROUND(local_48 * 256.0f);
  local_64.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_64);
  local_48 = -local_48;
  local_7c.x = (int)ROUND(local_4c * 256.0f);
  local_7c.y = (int)ROUND(local_48 * 256.0f);
  local_7c.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_7c);
  local_4c = -local_4c;
  local_70.x = (int)ROUND(local_4c * 256.0f);
  local_70.y = (int)ROUND(local_48 * 256.0f);
  local_70.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_70);
  local_4c = -0.3;
  local_48 = -0.3;
  local_44 = 0.0;
  local_40.x = (int)ROUND(256.0f * -0.3);
  local_40.y = (int)ROUND(256.0f * -0.3);
  local_40.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,&local_40);
  local_4c = -local_4c;
  local_1c.x = (int)ROUND(local_4c * 256.0f);
  local_1c.y = (int)ROUND(local_48 * 256.0f);
  local_1c.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,&local_1c);
  local_48 = -local_48;
  local_34.x = (int)ROUND(local_4c * 256.0f);
  local_34.y = (int)ROUND(local_48 * 256.0f);
  local_34.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_34);
  local_4c = -local_4c;
  local_58.x = (int)ROUND(local_4c * 256.0f);
  local_58.y = (int)ROUND(local_48 * 256.0f);
  local_58.z = (int)ROUND(local_44 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,&local_58);
  if (in_stack_00000008 != 0) {
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
              (g_CDemonRendererPtr,in_stack_00000004);
    uStack_8c = 0x582bf1;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
    uStack_8c = 0x582c04;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,2);
    uStack_8c = 0x582c17;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
    uStack_8c = 0x582c29;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,0);
    uStack_8c = 0x582c3b;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,4,5);
    uStack_8c = 0x582c4e;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,5,6);
    uStack_8c = 0x582c61;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,6,7);
    uStack_8c = 0x582c74;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,7,4);
    uStack_8c = 0x582c87;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,4);
    uStack_8c = 0x582c9a;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,5);
    uStack_8c = 0x582cad;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,6);
    uStack_8c = 0x582cbf;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,7);
    return;
  }
  g_ActiveRenderColor = in_stack_00000004;
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 1;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 2;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 3;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 5;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 6;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 7;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 4;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 4;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 5;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 6;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar2 = pSVar3 + 7;
  piVar4 = aiStack_ac;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff24,in_stack_ffffff28);
  return;
}
