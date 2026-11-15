// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00
// Address: 00448b00
// Address Range: [[00448b00, 00448c89]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00(CDemonGlobe *this_ptr)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive *prim;
  CVector3i CStack_1c;
  
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (0x01BA5C50,&this_ptr->position);
  iVar3 = 0;
  do {
    CStack_1c.x = (int)ROUND((float)*(int *)((int)&DAT_0060a0fc + iVar4) * (float)_DAT_005cf01a *
                             this_ptr->radius * _DAT_005f5020);
    CStack_1c.y = (int)ROUND((float)*(int *)((int)&DAT_0060a100 + iVar4) * (float)_DAT_005cf01a *
                             this_ptr->radius * _DAT_005f5020);
    CStack_1c.z = (int)ROUND((float)*(int *)((int)&DAT_0060a104 + iVar4) * (float)_DAT_005cf01a *
                             this_ptr->radius * _DAT_005f5020);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              ((SProjectedVertex *)
               ((int)&(0x01BA5C50->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
               &CStack_1c);
    pCVar2 = 0x01BA5C50;
    *(uint *)((int)&DAT_0060b27c->vertex_buffer_ptr->u + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->v + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->a + iVar3) = 0x8000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->r + iVar3) = 0xffff;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->g + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->b + iVar3) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_00574e00((SMRGLTextureBasic *)0x60a0e4);
  iVar3 = 0;
  do {
    pCVar2 = 0x01BA5C50;
    piVar1 = (int *)((int)&DAT_0060a3f4 + iVar3);
    iVar3 = iVar3 + 0x24;
    prim = (SMRGLHeaderPrimitive *)0x448c6d;
    round((double)((float)*piVar1 * this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(pCVar2,prim);
  } while (iVar3 != 0xbd0);
  return;
}
