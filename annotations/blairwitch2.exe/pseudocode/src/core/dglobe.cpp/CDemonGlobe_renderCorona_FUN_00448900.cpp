// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900
// Address: 00448900
// Address Range: [[00448900, 00448af0]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00448900(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00448900(CDemonGlobe *this_ptr)

{
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  byte bVar4;
  double dVar5;
  float afStackY_1044 [1004];
  SMRGLHeaderPrimitive *prim;
  CustomScanlineFunc *scanline_renderer;
  byte local_84 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58 [2];
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3i local_38;
  float local_2c;
  float local_28 [4];
  float local_18;
  float local_14;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b27c,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0
            (g_CDemonRenderer_PTR_0060b280,&local_50);
  local_5c = local_50.x;
  local_58[(uint)bVar4 * -2] = *(float *)((int)&local_50 + (uint)bVar4 * -8 + 4);
  local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&local_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  local_28[2] = local_5c - (this_ptr->position).x;
  local_28[3] = local_58[0] - (this_ptr->position).y;
  local_18 = local_58[1] - (this_ptr->position).z;
  local_2c = local_28[2];
  local_28[(uint)bVar4 * -2] = local_28[(uint)bVar4 * -2 + 3];
  local_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (&local_5c != &local_2c) {
    local_5c = local_2c;
    local_58[0] = local_28[0];
    local_58[1] = local_28[1];
  }
  if (this_ptr->radius_squared <=
      local_58[1] * local_58[1] + local_5c * local_5c + local_58[0] * local_58[0]) {
    local_14 = this_ptr->radius * (float)0.00390625;
    iVar3 = 0;
    iVar2 = 0;
    do {
      local_44 = (float)*(int *)((int)&g_CVector3i_ARRAY_0060a0fc[0].x + iVar2) * local_14;
      local_40 = (float)*(int *)((int)&g_CVector3i_ARRAY_0060a0fc[0].y + iVar2) * local_14;
      local_3c = (float)*(int *)((int)&g_CVector3i_ARRAY_0060a0fc[0].z + iVar2) * local_14;
      local_38.x = (int)ROUND(local_44 * 256.0f);
      local_38.y = (int)ROUND(local_40 * 256.0f);
      local_38.z = (int)ROUND(local_3c * 256.0f);
      iVar2 = iVar2 + 0xc;
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRenderer_PTR_0060b27c->vertex_buffer_ptr->projected_vertex).
                        transformed_x + iVar3),&local_38);
      iVar3 = iVar3 + 0x30;
    } while (iVar2 != 0x2e8);
    iVar2 = 0;
    do {
      this_ptr_00 = g_CDemonRenderer_PTR_0060b27c;
      scanline_renderer = (CustomScanlineFunc *)local_84;
      local_80 = *(uint *)((int)&DAT_0060a3e4 + iVar2);
      local_7c = *(uint *)((int)&DAT_0060a3e8 + iVar2);
      local_78 = *(uint *)((int)&DAT_0060a3ec + iVar2);
      local_74 = *(uint *)((int)&DAT_0060a3f0 + iVar2);
      piVar1 = (int *)((int)&DAT_0060a3f4 + iVar2);
      local_6c = *(uint *)((int)&DAT_0060a3f8 + iVar2);
      local_68 = *(uint *)((int)&DAT_0060a3fc + iVar2);
      local_64 = *(uint *)((int)&DAT_0060a400 + iVar2);
      local_60 = *(uint *)((int)&DAT_0060a404 + iVar2);
      iVar2 = iVar2 + 0x24;
      prim = (SMRGLHeaderPrimitive *)0x448aa6;
      dVar5 = round((double)((float)*piVar1 * this_ptr->radius));
      local_74 = (int)ROUND(dVar5);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
                (this_ptr_00,prim,scanline_renderer);
    } while (iVar2 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_0043f820();
  return;
}
