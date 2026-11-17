// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00
// Address: 00448b00
// Address Range: [[00448b00, 00448c89]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00(CDemonGlobe *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *prim;
  CVector3i CStack_1c;
  
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b27c,&this_ptr->position);
  iVar2 = 0;
  do {
    CStack_1c.x = (int)ROUND((float)*(int *)((int)&g_CVector3i_ARRAY_0060a0fc[0].x + iVar3) *
                             (float)0.00390625 * this_ptr->radius * 256.0f);
    CStack_1c.y = (int)ROUND((float)*(int *)((int)&g_CVector3i_ARRAY_0060a0fc[0].y + iVar3) *
                             (float)0.00390625 * this_ptr->radius * 256.0f);
    CStack_1c.z = (int)ROUND((float)*(int *)((int)&g_CVector3i_ARRAY_0060a0fc[0].z + iVar3) *
                             (float)0.00390625 * this_ptr->radius * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              ((SProjectedVertex *)
               ((int)&(g_CDemonRenderer_PTR_0060b27c->vertex_buffer_ptr->projected_vertex).
                      transformed_x + iVar2),&CStack_1c);
    pCVar1 = g_CDemonRenderer_PTR_0060b27c;
    *(uint *)((int)&g_CDemonRenderer_PTR_0060b27c->vertex_buffer_ptr->u + iVar2) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->a + iVar2) = 0x8000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->r + iVar2) = 0xffff;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar2) = 0xffff;
    iVar3 = iVar3 + 0xc;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar2) = 0xffff;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(&g_SMRGLTextureBasic_0060a0e4);
  iVar2 = 0;
  do {
    pCVar1 = g_CDemonRenderer_PTR_0060b27c;
    iVar3 = iVar2 + -4;
    iVar2 = iVar2 + 0x24;
    prim = (SMRGLHeaderPrimitive *)0x448c6d;
    round
              ((double)((float)*(int *)((int)g_SMRGLLightPrimitive_ARRAY_0060a3e4[0].vertices +
                                       iVar3) * this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(pCVar1,prim);
  } while (iVar2 != 0xbd0);
  return;
}
