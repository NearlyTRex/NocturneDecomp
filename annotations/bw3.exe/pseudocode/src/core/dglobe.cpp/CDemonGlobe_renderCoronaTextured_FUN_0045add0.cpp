// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0
// Address: 0045add0
// Address Range: [[0045add0, 0045af59]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0(CDemonGlobe *this_ptr)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive *prim;
  CVector3i CStack_1c;
  
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (g_CDemonRenderer_PTR_005f2af8,&this_ptr->position);
  iVar3 = 0;
  do {
    CStack_1c.x = (int)ROUND((float)*(int *)((int)&g_CVector3i_ARRAY_005f1954[0].x + iVar4) *
                             (float)0.00390625 * this_ptr->radius * 256.0f);
    CStack_1c.y = (int)ROUND((float)*(int *)((int)&g_CVector3i_ARRAY_005f1954[0].y + iVar4) *
                             (float)0.00390625 * this_ptr->radius * 256.0f);
    CStack_1c.z = (int)ROUND((float)*(int *)((int)&g_CVector3i_ARRAY_005f1954[0].z + iVar4) *
                             (float)0.00390625 * this_ptr->radius * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              ((SProjectedVertex *)
               ((int)&(g_CDemonRenderer_PTR_005f2af8->vertex_buffer_ptr->projected_vertex).
                      transformed_x + iVar3),&CStack_1c);
    pCVar2 = g_CDemonRenderer_PTR_005f2af8;
    *(uint *)((int)&g_CDemonRenderer_PTR_005f2af8->vertex_buffer_ptr->u + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->v + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->a + iVar3) = 0x8000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->r + iVar3) = 0xffff;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->g + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->b + iVar3) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(&g_SMRGLTextureBasic_005f193c);
  iVar3 = 0;
  do {
    pCVar2 = g_CDemonRenderer_PTR_005f2af8;
    piVar1 = (int *)((int)&DAT_005f1c4c + iVar3);
    iVar3 = iVar3 + 0x24;
    prim = (SMRGLHeaderPrimitive *)0x45af3d;
    round((double)((float)*piVar1 * this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(pCVar2,prim);
  } while (iVar3 != 0xbd0);
  return;
}
