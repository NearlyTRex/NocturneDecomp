// Name: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
// Address Range: [[0040d940, 0040deba]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl
core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  int *piVar10;
  byte bVar11;
  int in_stack_00000020;
  CBoundingBox3D *in_stack_00000038;
  CBoundingBox3D *in_stack_0000003c;
  CBoundingBox3D *in_stack_0000006c;
  CBoundingBox3D *in_stack_00000070;
  CDemonActor *in_stack_000000b8;
  SRenderVertex *in_stack_fffffe9c;
  SRenderVertex *in_stack_fffffea0;
  float fStack_144;
  SRenderVertex *vertex1;
  SRenderVertex *vertex1_00;
  float fStack_a0;
  float fStack_8c;
  CVector3i CStack_80;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_5c;
  CVector3f CStack_4c;
  float fStack_40;
  CVector3i aCStack_30 [2];
  float fStack_14;
  
  bVar11 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  this_ptr = (CDemonActor *)
             (**(code **)(*(int *)(color + 0x154) + 0x14))
                       ((CDemonActor *)color,(CBoundingBox3D *)&stack0xfffffeb8);
  corner_index = 0;
  g_ActiveRenderColor = in_stack_00000020;
  do {
    fStack_144 = 5.955552e-39;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)this_ptr,(CVector3f *)&stack0xffffff5c,corner_index ^ 1);
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
              ((CBoundingBox3D *)color,(CVector3f *)&stack0xffffff54,corner_index);
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    pSVar9 = (SRenderVertex *)((int)(aCStack_30 + 1) + 4);
    vertex1 = (SRenderVertex *)0x40d9fe;
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0x00000000);
    color = (uint32_t)(pCVar3->y * 0.2f);
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffff50);
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffff18);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr->projected_vertex,(CVector3i *)&stack0xfffffff8);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffffe8);
    pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar8 = pSVar6 + 1;
    piVar10 = (int *)&stack0xfffffecc;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar8->projected_vertex).transformed_x;
      pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    piVar10 = (int *)&stack0xfffffe9c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar6->projected_vertex).transformed_x;
      pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe9c,in_stack_fffffea0);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_00000038,(CVector3f *)&fStack_a0,corner_index ^ 2);
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000003c,(CVector3f *)&stack0xffffff28,corner_index);
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    pSVar6 = (SRenderVertex *)&stack0xfffffffc;
    vertex1_00 = (SRenderVertex *)0x40dba3;
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&fStack_14);
    fVar1 = pCVar3->z * 0.2f;
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_4c);
    CStack_4c.y = pCVar4->x * 0.8f;
    CStack_4c.z = pCVar4->y * 0.8f;
    fStack_40 = pCVar4->z * 0.8f;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffffe8);
    pCVar2 = g_CDemonRendererPtr;
    fStack_14 = CStack_4c.z + fVar1;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr->projected_vertex,(CVector3i *)&fStack_a0);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_80);
    pSVar8 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar7 = pSVar8 + 1;
    piVar10 = (int *)&stack0xffffff00;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar7->projected_vertex).transformed_x;
      pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    piVar10 = (int *)&stack0xfffffed0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar8->projected_vertex).transformed_x;
      pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,pSVar9);
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (in_stack_0000006c,(CVector3f *)&stack0xfffffff4,corner_index ^ 4);
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
              (in_stack_00000070,(CVector3f *)&fStack_14,corner_index);
    core_actor_cpp_FUN_004104f0();
    core_actor_cpp_FUN_004104e0();
    core_actor_cpp_FUN_004104d0();
    core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_70);
    CStack_70.y = pCVar3->x * 0.2f;
    CStack_70.z = pCVar3->y * 0.2f;
    fStack_64 = pCVar3->z * 0.2f;
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xffffff64);
    core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff8);
    pCVar2 = g_CDemonRendererPtr;
    this_ptr = (CDemonActor *)(fStack_8c + fStack_5c);
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr->projected_vertex,aCStack_30);
    pCVar2 = g_CDemonRendererPtr;
    core_actor_cpp_FUN_004103d0();
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar2->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0x0000008c);
    pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
    pSVar8 = pSVar9 + 1;
    piVar10 = (int *)&stack0xffffff34;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar8->projected_vertex).transformed_x;
      pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    corner_index = corner_index + 1;
    piVar10 = (int *)&stack0xffffff04;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = (pSVar9->projected_vertex).transformed_x;
      pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
      piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,pSVar6);
  } while ((int)corner_index < 8);
  fStack_a0 = 5.957353e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_000000b8);
  return;
}
