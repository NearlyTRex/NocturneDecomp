// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
// Address: 004715e0
// Address Range: [[004715e0, 00471769]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

{
  int iVar2;
  int iVar1;
  int iVar3;
  SMRGLPrimitiveQuadIndex SStack_50;
  float local_28;
  float local_24;
  float local_20;
  CVector3i local_1c;
  CDemonRenderer *pCVar1;
  
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&this_ptr->position);
  iVar1 = 0;
  do {
    local_1c.x = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar3) *
                            (float)0.00390625 * this_ptr->radius *
                            256.0f);
    local_1c.y = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar3) *
                            (float)0.00390625 * this_ptr->radius *
                            256.0f);
    local_1c.z = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar3) *
                            (float)0.00390625 * this_ptr->radius *
                            256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar1),&local_1c);
    pCVar1 = g_CDemonRendererPtr1;
    *(uint *)((int)&g_CDemonRendererPtr1->vertex_buffer_ptr->u + iVar1) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar1) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->a + iVar1) = 0x8000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->r + iVar1) = 0xffff;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar1) = 0xffff;
    iVar3 = iVar3 + 0xc;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar1) = 0xffff;
    iVar1 = iVar1 + 0x30;
  } while (iVar3 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_CoronaHeadliteTexture);
  iVar2 = 0;
  do {
    SStack_50.base.base.count = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0x14);
    SStack_50.base.surface_normal.A =
         *(UIntegerFloat *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0x10);
    SStack_50.base.surface_normal.B =
         *(UIntegerFloat *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0xc);
    SStack_50.base.surface_normal.C =
         *(UIntegerFloat *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -8);
    iVar1 = iVar2 + -4;
    SStack_50.vertices[0] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2);
    SStack_50.vertices[1] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 4);
    SStack_50.vertices[2] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 8);
    SStack_50.vertices[3] = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 0xc);
    iVar2 = iVar2 + 0x24;
    SStack_50.base.surface_normal.D.i =
         (int)ROUND(ROUND((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar1) *
                          this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr1,&SStack_50.base);
  } while (iVar2 != 0xbd0);
  return;
}
