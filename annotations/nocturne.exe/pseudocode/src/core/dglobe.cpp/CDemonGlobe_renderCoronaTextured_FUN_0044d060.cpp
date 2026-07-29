// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060
// Address: 0044d060
// Address Range: [[0044d060, 0044d1e9]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060(CDemonGlobe *this_ptr)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive *prim;
  CVector3i local_1c;
  
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (0x01B4D738,&this_ptr->position);
  iVar3 = 0;
  do {
    local_1c.x = (int)ROUND((float)*(int *)((int)&DAT_005ad594 + iVar4) * (float)_DAT_0057c391 *
                            this_ptr->radius * _DAT_0059bff0);
    local_1c.y = (int)ROUND((float)*(int *)((int)&DAT_005ad598 + iVar4) * (float)_DAT_0057c391 *
                            this_ptr->radius * _DAT_0059bff0);
    local_1c.z = (int)ROUND((float)*(int *)((int)&DAT_005ad59c + iVar4) * (float)_DAT_0057c391 *
                            this_ptr->radius * _DAT_0059bff0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)
               ((int)&(0x01B4D738->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
               &local_1c);
    pCVar2 = 0x01B4D738;
    *(uint *)((int)&DAT_005ae700->vertex_buffer_ptr->u + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->v + iVar3) = 0x800000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->a + iVar3) = 0x8000;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->r + iVar3) = 0xffff;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->g + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(uint *)((int)&pCVar2->vertex_buffer_ptr->b + iVar3) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920((SMRGLTextureBasic *)&DAT_005ad57c);
  iVar3 = 0;
  do {
    pCVar2 = 0x01B4D738;
    piVar1 = (int *)((int)&DAT_005ad88c + iVar3);
    iVar3 = iVar3 + 0x24;
    prim = (SMRGLHeaderPrimitive *)0x44d1cd;
    round((double)((float)*piVar1 * this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(pCVar2,prim);
  } while (iVar3 != 0xbd0);
  return;
}
