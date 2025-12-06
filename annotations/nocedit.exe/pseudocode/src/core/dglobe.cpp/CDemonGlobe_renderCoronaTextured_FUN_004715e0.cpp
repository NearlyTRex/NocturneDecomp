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
  uint extraout_EDX;
  uint uVar2;
  uint extraout_EDX_00;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  SMRGLHeaderPrimitive *in_stack_ffffffbc;
  int local_18;
  int local_14;
  
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->position);
  iVar3 = 0;
  do {
    local_18 = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar4) *
                          (float)0.00390625 * this_ptr->radius *
                          256f);
    local_14 = (int)ROUND((float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar4) *
                          (float)0.00390625 * this_ptr->radius *
                          256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar3),(CVector3i *)&local_18);
    pCVar1 = g_CDemonRendererPtr;
    *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar3) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar3) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar3) = 0x8000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->light + iVar3) = 0xffff;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_CoronaHeadliteTexture);
  iVar3 = 0;
  uVar2 = extraout_EDX;
  do {
    iVar3 = iVar3 + 0x24;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar2,&stack0xffffffbc));
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (this_ptr_00,in_stack_ffffffbc);
    uVar2 = extraout_EDX_00;
  } while (iVar3 != 0xbd0);
  return;
}
