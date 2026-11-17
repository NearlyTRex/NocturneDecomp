// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60
// Address: 0045ea60
// Address Range: [[0045ea60, 0045ec50]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(CDemonGlobe *this_ptr)

#include "nocturne.h"

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(CDemonGlobe *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (g_CDemonRenderer_PTR_0061255c,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0
            (g_CDemonRenderer_PTR_00612560,&local_50);
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
      local_44 = (float)*(int *)((int)&g_CVector3i_ARRAY_006113a0[0].x + iVar2) * local_14;
      local_40 = (float)*(int *)((int)&g_CVector3i_ARRAY_006113a0[0].y + iVar2) * local_14;
      local_3c = (float)*(int *)((int)&g_CVector3i_ARRAY_006113a0[0].z + iVar2) * local_14;
      local_38.x = (int)ROUND(local_44 * 256.0f);
      local_38.y = (int)ROUND(local_40 * 256.0f);
      local_38.z = (int)ROUND(local_3c * 256.0f);
      iVar2 = iVar2 + 0xc;
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRenderer_PTR_0061255c->vertex_buffer_ptr->projected_vertex).
                        transformed_x + iVar3),&local_38);
      iVar3 = iVar3 + 0x30;
    } while (iVar2 != 0x2e8);
    iVar2 = 0;
    do {
      this_ptr_00 = g_CDemonRenderer_PTR_0061255c;
      scanline_renderer = (CustomScanlineFunc *)local_84;
      local_80 = *(uint *)((int)&DAT_00611688 + iVar2);
      local_7c = *(uint *)((int)&DAT_0061168c + iVar2);
      local_78 = *(uint *)((int)&DAT_00611690 + iVar2);
      local_74 = *(uint *)((int)&DAT_00611694 + iVar2);
      piVar1 = (int *)((int)&DAT_00611698 + iVar2);
      local_6c = *(uint *)((int)&DAT_0061169c + iVar2);
      local_68 = *(uint *)((int)&DAT_006116a0 + iVar2);
      local_64 = *(uint *)((int)&DAT_006116a4 + iVar2);
      local_60 = *(uint *)((int)&DAT_006116a8 + iVar2);
      iVar2 = iVar2 + 0x24;
      prim = (SMRGLHeaderPrimitive *)0x45ec06;
      dVar5 = round((double)((float)*piVar1 * this_ptr->radius));
      local_74 = (int)ROUND(dVar5);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
                (this_ptr_00,prim,scanline_renderer);
    } while (iVar2 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_00450ee0();
  return;
}
