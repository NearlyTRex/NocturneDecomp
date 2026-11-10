// Name: core_inv.cpp_drawWeaponIconBackground_FUN_004dd3f0
// Address: 004dd3f0
// Address Range: [[004dd3f0, 004dd5a6]]
// Convention: unknown
// Signature: void core_inv_cpp_drawWeaponIconBackground_FUN_004dd3f0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void core_inv_cpp_drawWeaponIconBackground_FUN_004dd3f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_48;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = 0x10000;
  iVar2 = 0x10000;
  if (0x1e0 < DAT_005fba1c) {
    iVar1 = (int)(0x2800000 / (longlong)DAT_005fba18);
    iVar2 = (int)(0x1e00000 / (longlong)DAT_005fba1c);
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_00600254);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,param_5);
  this_ptr = DAT_005f2afc;
  *(int *)(DAT_005f2afc->vertex_buffer_ptr + 0x10) = param_1 * iVar1;
  *(int *)(this_ptr->vertex_buffer_ptr + 0x14) = param_2 * iVar2;
  *(uint *)(this_ptr->vertex_buffer_ptr + 8) = 0x1000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x18) = 0;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x1c) = 0xa00000;
  *(int *)(this_ptr->vertex_buffer_ptr + 0x40) = iVar1 * param_3;
  *(int *)(this_ptr->vertex_buffer_ptr + 0x44) = param_2 * iVar2;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x38) = 0x1000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x48) = 0x600000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x4c) = 0xa00000;
  *(int *)(this_ptr->vertex_buffer_ptr + 0x70) = iVar1 * param_3;
  *(int *)(this_ptr->vertex_buffer_ptr + 0x74) = iVar2 * param_4;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x68) = 0x1000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x78) = 0x600000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x7c) = 0x1000000;
  *(int *)(this_ptr->vertex_buffer_ptr + 0xa0) = param_1 * iVar1;
  *(int *)(this_ptr->vertex_buffer_ptr + 0xa4) = iVar2 * param_4;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x98) = 0x1000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0xa8) = 0;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0xac) = 0x1000000;
  local_48.surface_normal.D.i = 0;
  local_48.surface_normal.C.i = 0;
  local_48.base.count = 4;
  local_48.surface_normal.B.i = 0;
  local_2c = 1;
  local_48.surface_normal.A.i = 0;
  local_30 = 0;
  local_24 = 3;
  local_28 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(this_ptr,&local_48,0xa3);
  local_20 = param_1;
  local_18 = param_2;
  local_1c = param_3;
  local_14 = param_4;
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_00449310
            (&g_CDemonCameraInstance,param_1,param_3,param_2,param_4);
  return;
}
