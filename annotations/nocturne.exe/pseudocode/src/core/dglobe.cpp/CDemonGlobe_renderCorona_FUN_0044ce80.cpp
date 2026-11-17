// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80
// Address: 0044ce80
// Address Range: [[0044ce80, 0044d050]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(CDemonGlobe *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  int iVar2;
  double dVar3;
  SMRGLHeaderPrimitive *prim;
  CustomScanlineFunc *scanline_renderer;
  byte local_64 [4];
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3i local_30;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            ((CDemonRenderer *)PTR_g_CDemonRenderer_01b4d738_005ae700,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
            (g_CDemonRenderer_PTR_005ae704,&local_18);
  local_24.x = local_18.x - (this_ptr->position).x;
  local_24.y = local_18.y - (this_ptr->position).y;
  local_24.z = local_18.z - (this_ptr->position).z;
  if (&local_18 != &local_24) {
    local_18.x = local_24.x;
    local_18.y = local_24.y;
    local_18.z = local_24.z;
  }
  if (this_ptr->radius_squared <=
      local_18.z * local_18.z + local_18.x * local_18.x + local_18.y * local_18.y) {
    local_c = this_ptr->radius * (float)0.00390625;
    iVar2 = 0;
    iVar1 = 0;
    do {
      local_3c = (float)*(int *)((int)&g_CoronaVertexPositions[0].x + iVar1) * local_c;
      local_38 = (float)*(int *)((int)&g_CoronaVertexPositions[0].y + iVar1) * local_c;
      local_34 = (float)*(int *)((int)&g_CoronaVertexPositions[0].z + iVar1) * local_c;
      local_30.x = (int)ROUND(local_3c * 256.0f);
      local_30.y = (int)ROUND(local_38 * 256.0f);
      local_30.z = (int)ROUND(local_34 * 256.0f);
      iVar1 = iVar1 + 0xc;
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)(*(int *)PTR_g_CDemonRenderer_01b4d738_005ae700 + iVar2),
                 &local_30);
      iVar2 = iVar2 + 0x30;
    } while (iVar1 != 0x2e8);
    iVar1 = 0;
    do {
      this_ptr_00 = PTR_g_CDemonRenderer_01b4d738_005ae700;
      local_60 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -0x14);
      local_5c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -0x10);
      local_58 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -0xc);
      local_54 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + -8);
      iVar2 = iVar1 + -4;
      local_4c = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1);
      local_48 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + 4);
      local_44 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + 8);
      local_40 = *(uint *)((int)g_CoronaFacePrimitives[0].vertices + iVar1 + 0xc);
      scanline_renderer = (CustomScanlineFunc *)local_64;
      iVar1 = iVar1 + 0x24;
      prim = (SMRGLHeaderPrimitive *)0x44d008;
      dVar3 = round
                        ((double)((float)*(int *)((int)g_CoronaFacePrimitives[0].vertices + iVar2) *
                                 this_ptr->radius));
      local_54 = (int)ROUND(dVar3);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                ((CDemonRenderer *)this_ptr_00,prim,scanline_renderer);
    } while (iVar1 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140();
  return;
}
