// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
// Address: 004715e0
// Address Range: [[004715e0, 00471769]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive SStack_50;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  CVector3i local_1c;
  
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&this_ptr->position);
  iVar2 = 0;
  do {
    local_28 = (float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar3) *
               (float)0.00390625 * this_ptr->radius;
    local_24 = (float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar3) *
               (float)0.00390625 * this_ptr->radius;
    local_20 = (float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar3) *
               (float)0.00390625 * this_ptr->radius;
    local_1c.x = (int)ROUND(local_28 * 256.0f);
    local_1c.y = (int)ROUND(local_24 * 256.0f);
    local_1c.z = (int)ROUND(local_20 * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar2),&local_1c);
    pCVar1 = g_CDemonRendererPtr1;
    *(uint *)((int)&g_CDemonRendererPtr1->vertex_buffer_ptr->u + iVar2) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar2) = 0x8000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->light + iVar2) = 0xffff;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0xffff;
    iVar3 = iVar3 + 0xc;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = 0xffff;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_CoronaHeadliteTexture);
  iVar2 = 0;
  do {
    SStack_50.base.count = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0x14);
    SStack_50.surface_normal.A = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0x10);
    SStack_50.surface_normal.B = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -0xc);
    SStack_50.surface_normal.C = *(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + -8);
    iVar3 = iVar2 + -4;
    local_38 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2);
    local_34 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 4);
    local_30 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 8);
    local_2c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar2 + 0xc);
    iVar2 = iVar2 + 0x24;
    SStack_50.surface_normal.D =
         (int)ROUND(ROUND((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar3) *
                          this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr1,&SStack_50);
  } while (iVar2 != 0xbd0);
  return;
}
