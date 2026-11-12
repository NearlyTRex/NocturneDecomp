// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60
// Address: 0045ea60
// Address Range: [[0045ea60, 0045ec50]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(CDemonGlobe *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float afStackY_1044 [1005];
  SMRGLHeaderPrimitive *prim;
  code *scanline_renderer;
  SMRGLHeaderPrimitive local_84;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58 [5];
  float local_44;
  float local_40;
  float local_3c;
  CVector3i local_38;
  float local_2c;
  float local_28 [4];
  float local_18;
  float local_14;
  
  bVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (0x01BC120C,&this_ptr->position);
  engine_drender_cpp_FUN_00483ae0(DAT_00612560);
  local_5c = local_58[2];
  local_58[(uint)bVar3 * -2] = local_58[(uint)bVar3 * -2 + 3];
  local_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  local_28[2] = local_5c - (this_ptr->position).x;
  local_28[3] = local_58[0] - (this_ptr->position).y;
  local_18 = local_58[1] - (this_ptr->position).z;
  local_2c = local_28[2];
  local_28[(uint)bVar3 * -2] = local_28[(uint)bVar3 * -2 + 3];
  local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if (&local_5c != &local_2c) {
    local_5c = local_2c;
    local_58[0] = local_28[0];
    local_58[1] = local_28[1];
  }
  if (this_ptr->radius_squared <=
      local_58[1] * local_58[1] + local_5c * local_5c + local_58[0] * local_58[0]) {
    local_14 = this_ptr->radius * (float)_DAT_005d890b;
    iVar2 = 0;
    iVar1 = 0;
    do {
      local_44 = (float)*(int *)((int)&DAT_006113a0 + iVar1) * local_14;
      local_40 = (float)*(int *)((int)&DAT_006113a4 + iVar1) * local_14;
      local_3c = (float)*(int *)((int)&DAT_006113a8 + iVar1) * local_14;
      local_38.x = (int)ROUND(local_44 * _DAT_005fe9d0);
      local_38.y = (int)ROUND(local_40 * _DAT_005fe9d0);
      local_38.z = (int)ROUND(local_3c * _DAT_005fe9d0);
      iVar1 = iVar1 + 0xc;
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)
                 ((int)&(0x01BC120C->vertex_buffer_ptr->projected_vertex).transformed_x + iVar2),
                 &local_38);
      iVar2 = iVar2 + 0x30;
    } while (iVar1 != 0x2e8);
    iVar1 = 0;
    do {
      this_ptr_00 = 0x01BC120C;
      local_84.base.count = *(int *)((int)&DAT_00611688 + iVar1);
      local_84.surface_normal.A = *(UIntegerFloat *)((int)&DAT_0061168c + iVar1);
      local_84.surface_normal.B = *(UIntegerFloat *)((int)&DAT_00611690 + iVar1);
      local_84.surface_normal.C = *(UIntegerFloat *)((int)&DAT_00611694 + iVar1);
      local_6c = *(uint *)((int)&DAT_0061169c + iVar1);
      fVar4 = (float10)*(int *)((int)&DAT_00611698 + iVar1) * (float10)this_ptr->radius;
      local_68 = *(uint *)((int)&DAT_006116a0 + iVar1);
      local_64 = *(uint *)((int)&DAT_006116a4 + iVar1);
      scanline_renderer = core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450f20;
      local_60 = *(uint *)((int)&DAT_006116a8 + iVar1);
      iVar1 = iVar1 + 0x24;
      prim = &local_84;
      round();
      local_84.surface_normal.D.i = (int)ROUND(fVar4);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
                (this_ptr_00,prim,scanline_renderer);
    } while (iVar1 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_00450ee0();
  return;
}
