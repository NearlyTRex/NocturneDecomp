// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80
// Address: 0044ce80
// Address Range: [[0044ce80, 0044d050]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(CDemonGlobe *this_ptr)

{
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  double dVar4;
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
            (0x01B4D738,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(DAT_005ae704,&local_18);
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
    iVar3 = 0;
    iVar2 = 0;
    do {
      local_3c = (float)*(int *)((int)&DAT_005ad594 + iVar2) * local_c;
      local_38 = (float)*(int *)((int)&DAT_005ad598 + iVar2) * local_c;
      local_34 = (float)*(int *)((int)&DAT_005ad59c + iVar2) * local_c;
      local_30.x = (int)ROUND(local_3c * _DAT_0059bff0);
      local_30.y = (int)ROUND(local_38 * _DAT_0059bff0);
      local_30.z = (int)ROUND(local_34 * _DAT_0059bff0);
      iVar2 = iVar2 + 0xc;
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)
                 ((int)&(0x01B4D738->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
                 &local_30);
      iVar3 = iVar3 + 0x30;
    } while (iVar2 != 0x2e8);
    iVar2 = 0;
    do {
      this_ptr_00 = 0x01B4D738;
      local_60 = *(uint *)((int)&DAT_005ad87c + iVar2);
      local_5c = *(uint *)((int)&DAT_005ad880 + iVar2);
      local_58 = *(uint *)((int)&DAT_005ad884 + iVar2);
      local_54 = *(uint *)((int)&DAT_005ad888 + iVar2);
      piVar1 = (int *)((int)&DAT_005ad88c + iVar2);
      local_4c = *(uint *)((int)&DAT_005ad890 + iVar2);
      local_48 = *(uint *)((int)&DAT_005ad894 + iVar2);
      local_44 = *(uint *)((int)&DAT_005ad898 + iVar2);
      local_40 = *(uint *)((int)&DAT_005ad89c + iVar2);
      scanline_renderer = (CustomScanlineFunc *)local_64;
      iVar2 = iVar2 + 0x24;
      prim = (SMRGLHeaderPrimitive *)0x44d008;
      dVar4 = round((double)((float)*piVar1 * this_ptr->radius));
      local_54 = (int)ROUND(dVar4);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                (this_ptr_00,prim,scanline_renderer);
    } while (iVar2 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140();
  return;
}
