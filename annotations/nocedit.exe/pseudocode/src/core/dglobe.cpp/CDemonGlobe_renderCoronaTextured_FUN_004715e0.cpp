// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
// Address: 004715e0
// Address Range: [[004715e0, 00471769]]
// Convention: __cdecl
// Signature: void core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe * this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

{
  CDemonRenderer *pCVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *polygon_info;
  CVector3i local_1c;
  
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&this_ptr->position);
  iVar2 = 0;
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
    iVar3 = iVar2 + -4;
    iVar2 = iVar2 + 0x24;
    polygon_info = (SMRGLHeaderPrimitive *)0x47174d;
    crt_math_c_round_FUN_005fe6b0
              ((double)((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar3) *
                       this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr_00,polygon_info);
  } while (iVar2 != 0xbd0);
  return;
}
