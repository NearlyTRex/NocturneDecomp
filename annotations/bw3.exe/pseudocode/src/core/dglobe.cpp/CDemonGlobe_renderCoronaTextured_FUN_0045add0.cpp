// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0
// Address: 0045add0
// Address Range: [[0045add0, 0045af59]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0(CDemonGlobe *this_ptr)

{
  CDemonRenderer *pCVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  float10 fVar4;
  SMRGLHeaderPrimitive *prim;
  SMRGLHeaderPrimitive SStack_50;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3i CStack_1c;
  
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (0x01BDD7E4,&this_ptr->position);
  iVar2 = 0;
  do {
    fStack_28 = (float)*(int *)((int)&DAT_005f1954 + iVar3) * (float)_DAT_005baff1 *
                this_ptr->radius;
    fStack_24 = (float)*(int *)((int)&DAT_005f1958 + iVar3) * (float)_DAT_005baff1 *
                this_ptr->radius;
    fStack_20 = (float)*(int *)((int)&DAT_005f195c + iVar3) * (float)_DAT_005baff1 *
                this_ptr->radius;
    CStack_1c.x = (int)ROUND(fStack_28 * _DAT_005de380);
    CStack_1c.y = (int)ROUND(fStack_24 * _DAT_005de380);
    CStack_1c.z = (int)ROUND(fStack_20 * _DAT_005de380);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)
               ((int)&(0x01BDD7E4->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2),
               &CStack_1c);
    pCVar1 = 0x01BDD7E4;
    *(uint *)((int)&DAT_005f2af8->vertex_buffer_ptr->u + iVar2) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->a + iVar2) = 0x8000;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->r + iVar2) = 0xffff;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar2) = 0xffff;
    iVar3 = iVar3 + 0xc;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar2) = 0xffff;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 != 0x2e8);
  engine_texture_cpp_FUN_0056aa10(0x5f193c);
  iVar2 = 0;
  do {
    SStack_50.base.count = *(int *)((int)&DAT_005f1c3c + iVar2);
    SStack_50.surface_normal.A = *(UIntegerFloat *)((int)&DAT_005f1c40 + iVar2);
    SStack_50.surface_normal.B = *(UIntegerFloat *)((int)&DAT_005f1c44 + iVar2);
    SStack_50.surface_normal.C = *(UIntegerFloat *)((int)&DAT_005f1c48 + iVar2);
    uStack_38 = *(uint *)((int)&DAT_005f1c50 + iVar2);
    fVar4 = (float10)*(int *)((int)&DAT_005f1c4c + iVar2) * (float10)this_ptr->radius;
    uStack_34 = *(uint *)((int)&DAT_005f1c54 + iVar2);
    uStack_30 = *(uint *)((int)&DAT_005f1c58 + iVar2);
    uStack_2c = *(uint *)((int)&DAT_005f1c5c + iVar2);
    iVar2 = iVar2 + 0x24;
    prim = &SStack_50;
    round();
    SStack_50.surface_normal.D.i = (int)ROUND(fVar4);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(this_ptr_00,prim);
  } while (iVar2 != 0xbd0);
  return;
}
