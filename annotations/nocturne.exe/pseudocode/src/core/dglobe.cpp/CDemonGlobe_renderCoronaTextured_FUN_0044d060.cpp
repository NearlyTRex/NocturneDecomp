// Name: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060
// Address: 0044d060
// Address Range: [[0044d060, 0044d1e9]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060(CDemonGlobe *this_ptr)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *prim;
  CVector3i local_1c;
  
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            ((CDemonRenderer *)PTR_g_CDemonRenderer_01b4d738_005ae700,&this_ptr->position);
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
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)(*(int *)PTR_g_CDemonRenderer_01b4d738_005ae700 + iVar2),
               &local_1c);
    puVar1 = PTR_g_CDemonRenderer_01b4d738_005ae700;
    *(uint *)(iVar2 + 0x18 + *(int *)PTR_g_CDemonRenderer_01b4d738_005ae700) = 0x800000;
    *(uint *)(iVar2 + 0x1c + *(int *)puVar1) = 0x800000;
    *(uint *)(iVar2 + 0x2c + *(int *)puVar1) = 0x8000;
    *(uint *)(*(int *)puVar1 + 0x20 + iVar2) = 0xffff;
    *(uint *)(*(int *)puVar1 + 0x24 + iVar2) = 0xffff;
    iVar3 = iVar3 + 0xc;
    *(uint *)(iVar2 + 0x28 + *(int *)puVar1) = 0xffff;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(&g_CoronaHeadliteTexture);
  iVar2 = 0;
  do {
    puVar1 = PTR_g_CDemonRenderer_01b4d738_005ae700;
    iVar3 = iVar2 + -4;
    iVar2 = iVar2 + 0x24;
    prim = (SMRGLHeaderPrimitive *)0x44d1cd;
    round
              ((double)((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar3) *
                       this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
              ((CDemonRenderer *)puVar1,prim);
  } while (iVar2 != 0xbd0);
  return;
}
