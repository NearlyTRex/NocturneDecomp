// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
// Address: 004715e0
// MANUAL RECONSTRUCTION
// Address Range: [[004715e0, 00471769]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)

{
  int iVar2;
  int iVar3;
  SMRGLPrimitiveQuadIndex SStack_50;
  CVector3i local_1c;
  CDemonRenderer *pCVar1;

  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&this_ptr->position);
  iVar3 = 0;
  do {
    local_1c.x = (int)ROUND((float)g_CoronaVertexPositions[iVar3].x *
                            (float)0.00390625 * this_ptr->radius *
                            256.0f);
    local_1c.y = (int)ROUND((float)g_CoronaVertexPositions[iVar3].y *
                            (float)0.00390625 * this_ptr->radius *
                            256.0f);
    local_1c.z = (int)ROUND((float)g_CoronaVertexPositions[iVar3].z *
                            (float)0.00390625 * this_ptr->radius *
                            256.0f);
    pCVar1 = g_CDemonRendererPtr1;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&pCVar1->vertex_buffer_ptr[iVar3].projected_vertex,&local_1c);
    pCVar1->vertex_buffer_ptr[iVar3].u = 0x80 << 16;
    pCVar1->vertex_buffer_ptr[iVar3].v = 0x80 << 16;
    pCVar1->vertex_buffer_ptr[iVar3].a = 0x8000;
    pCVar1->vertex_buffer_ptr[iVar3].r = 0xffff;
    pCVar1->vertex_buffer_ptr[iVar3].g = 0xffff;
    pCVar1->vertex_buffer_ptr[iVar3].b = 0xffff;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 62);
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_CoronaHeadliteTexture);
  iVar2 = 0;
  do {
    memcpy(&SStack_50.base.base.count,&g_CoronaFacePrimitives[iVar2],sizeof(SMRGLLightPrimitive));
    SStack_50.base.surface_normal.D.i =
         (int)ROUND(ROUND((float)g_CoronaFacePrimitives[iVar2].normal.D.i *
                          this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
              (g_CDemonRendererPtr1,&SStack_50.base);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 84);
  return;
}
