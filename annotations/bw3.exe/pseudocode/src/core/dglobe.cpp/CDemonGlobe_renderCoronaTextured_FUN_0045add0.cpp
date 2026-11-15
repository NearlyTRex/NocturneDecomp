// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0
// Address: 0045add0
// Address Range: [[0045add0, 0045af59]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
            (0x01BDD7E4,&this_ptr->position);
  iVar3 = 0;
  do {
    CStack_1c.x = (int)ROUND((float)*(int *)((int)&DAT_005f1954 + iVar4) * (float)_DAT_005baff1 *
                             this_ptr->radius * _DAT_005de380);
    CStack_1c.y = (int)ROUND((float)*(int *)((int)&DAT_005f1958 + iVar4) * (float)_DAT_005baff1 *
                             this_ptr->radius * _DAT_005de380);
    CStack_1c.z = (int)ROUND((float)*(int *)((int)&DAT_005f195c + iVar4) * (float)_DAT_005baff1 *
                             this_ptr->radius * _DAT_005de380);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              ((SProjectedVertex *)
               ((int)&(0x01BDD7E4->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
               &CStack_1c);
    pCVar2 = 0x01BDD7E4;
    *(uint *)((int)&DAT_005f2af8->vertex_buffer_ptr->u + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->v + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->a + iVar3) = 0x8000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->r + iVar3) = 0xffff;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->g + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->b + iVar3) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10((SMRGLTextureBasic *)0x5f193c);
  iVar3 = 0;
  do {
    pCVar2 = 0x01BDD7E4;
    piVar1 = (int *)((int)&DAT_005f1c4c + iVar3);
    iVar3 = iVar3 + 0x24;
    prim = (SMRGLHeaderPrimitive *)0x45af3d;
    round((double)((float)*piVar1 * this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(pCVar2,prim);
  } while (iVar3 != 0xbd0);
  return;
}
