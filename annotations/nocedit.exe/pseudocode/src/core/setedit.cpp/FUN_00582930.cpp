// Name: core_setedit.cpp_FUN_00582930
// Address: 00582930
// Address Range: [[00582930, 00582f23]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00582930()

#include "nocturne.h"

void core_setedit_cpp_FUN_00582930(void)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  int in_stack_00000024;
  int in_stack_00000028;
  SRenderVertex *in_stack_ffffff44;
  SRenderVertex *in_stack_ffffff48;
  SRenderVertex *in_stack_ffffff4c;
  SRenderVertex *in_stack_ffffff50;
  SRenderVertex *in_stack_ffffff54;
  SRenderVertex *in_stack_ffffff58;
  SRenderVertex *in_stack_ffffff5c;
  SRenderVertex *in_stack_ffffff60;
  SRenderVertex *in_stack_ffffff64;
  SRenderVertex *in_stack_ffffff68;
  SRenderVertex *in_stack_ffffff6c;
  SRenderVertex *in_stack_ffffff70;
  SRenderVertex *in_stack_ffffff74;
  int iStack_88;
  float fVar7;
  float fVar8;
  CVector3i local_28;
  CVector3i local_1c;
  
  bVar6 = 0;
  local_28.x = (int)ROUND(256f * -1.0);
  local_28.y = (int)ROUND(256f * -1.0);
  local_28.z = (int)ROUND(256f * 2.0);
  iStack_88 = 0x58298a;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_28);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0xffffffa0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)&stack0xffffff8c);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)&stack0xffffff9c);
  fVar7 = 0.0;
  fVar8 = (float)(int)ROUND(256f * -0.3);
  fVar1 = 256f * -0.3;
  local_28.x = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,
             (CVector3i *)&stack0xffffffd0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,
             (CVector3i *)&stack0xfffffff8);
  local_1c.x = (int)ROUND(fVar7 * 256f);
  local_1c.y = (int)ROUND(-fVar8 * 256f);
  local_1c.z = (int)ROUND((float)(int)ROUND(fVar1) * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_1c);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,
             (CVector3i *)&stack0xffffffc4);
  if (in_stack_00000028 != 0) {
    engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
              (g_CDemonRendererPtr,in_stack_00000024);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,2);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,0);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,4,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,5,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,6,7);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,7,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,4);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,5);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,6);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,7);
    return;
  }
  g_ActiveRenderColor = in_stack_00000024;
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 1;
  piVar5 = (int *)&stack0xffffff74;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  piVar5 = (int *)&stack0xffffff44;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff44,in_stack_ffffff48);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 2;
  piVar5 = &iStack_88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 1;
  piVar5 = (int *)&stack0xffffff48;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff48,in_stack_ffffff4c);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 3;
  piVar5 = (int *)&stack0xffffff7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 2;
  piVar5 = (int *)&stack0xffffff4c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff4c,in_stack_ffffff50);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4;
  piVar5 = (int *)&stack0xffffff80;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 3;
  piVar5 = (int *)&stack0xffffff50;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff50,in_stack_ffffff54);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 5;
  piVar5 = (int *)&stack0xffffff84;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 4;
  piVar5 = (int *)&stack0xffffff54;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff54,in_stack_ffffff58);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 6;
  piVar5 = (int *)&stack0xffffff88;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 5;
  piVar5 = (int *)&stack0xffffff58;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff58,in_stack_ffffff5c);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 7;
  piVar5 = (int *)&stack0xffffff8c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 6;
  piVar5 = (int *)&stack0xffffff5c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff5c,in_stack_ffffff60);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 4;
  piVar5 = (int *)&stack0xffffff90;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 7;
  piVar5 = (int *)&stack0xffffff60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff60,in_stack_ffffff64);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 4;
  piVar5 = (int *)&stack0xffffff94;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  piVar5 = (int *)&stack0xffffff64;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff64,in_stack_ffffff68);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 5;
  piVar5 = (int *)&stack0xffffff98;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 1;
  piVar5 = (int *)&stack0xffffff68;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff68,in_stack_ffffff6c);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 6;
  piVar5 = (int *)&stack0xffffff9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 2;
  piVar5 = (int *)&stack0xffffff6c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff6c,in_stack_ffffff70);
  pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
  pSVar3 = pSVar4 + 7;
  piVar5 = (int *)&stack0xffffffa0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pSVar4 = pSVar4 + 3;
  piVar5 = (int *)&stack0xffffff70;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff70,in_stack_ffffff74);
  return;
}
