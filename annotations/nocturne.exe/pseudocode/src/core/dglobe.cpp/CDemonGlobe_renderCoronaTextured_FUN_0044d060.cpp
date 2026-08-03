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
  byte *puVar2;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive *prim;
  CVector3i local_1c;
  
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            ((CDemonRenderer *)PTR_DAT_005ae700,&this_ptr->position);
  iVar3 = 0;
  do {
    local_1c.x = (int)ROUND((float)*(int *)((int)&DAT_005ad594 + iVar4) * (float)_DAT_0057c391 *
                            this_ptr->radius * _DAT_0059bff0);
    local_1c.y = (int)ROUND((float)*(int *)((int)&DAT_005ad598 + iVar4) * (float)_DAT_0057c391 *
                            this_ptr->radius * _DAT_0059bff0);
    local_1c.z = (int)ROUND((float)*(int *)((int)&DAT_005ad59c + iVar4) * (float)_DAT_0057c391 *
                            this_ptr->radius * _DAT_0059bff0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              ((SProjectedVertex *)(*(int *)PTR_DAT_005ae700 + iVar3),&local_1c);
    puVar2 = PTR_DAT_005ae700;
    *(uint *)(iVar3 + 0x18 + *(int *)PTR_DAT_005ae700) = 0x800000;
    *(uint *)(iVar3 + 0x1c + *(int *)puVar2) = 0x800000;
    *(uint *)(iVar3 + 0x2c + *(int *)puVar2) = 0x8000;
    *(uint *)(*(int *)puVar2 + 0x20 + iVar3) = 0xffff;
    *(uint *)(*(int *)puVar2 + 0x24 + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(uint *)(iVar3 + 0x28 + *(int *)puVar2) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920((SMRGLTextureBasic *)&DAT_005ad57c);
  iVar3 = 0;
  do {
    puVar2 = PTR_DAT_005ae700;
    piVar1 = (int *)((int)&DAT_005ad88c + iVar3);
    iVar3 = iVar3 + 0x24;
    prim = (SMRGLHeaderPrimitive *)0x44d1cd;
    round((double)((float)*piVar1 * this_ptr->radius));
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
              ((CDemonRenderer *)puVar2,prim);
  } while (iVar3 != 0xbd0);
  return;
}
