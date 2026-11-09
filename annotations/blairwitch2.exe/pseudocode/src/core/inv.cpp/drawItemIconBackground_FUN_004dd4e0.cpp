// Name: core_inv.cpp_drawItemIconBackground_FUN_004dd4e0
// Address: 004dd4e0
// Address Range: [[004dd4e0, 004dd664]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004dd4e0(int x1,int y1,int x2,int y2,int alpha)

#include "nocturne.h"

void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004dd4e0(int x1,int y1,int x2,int y2,int alpha)

{
  CDemonRenderer *this_ptr;
  SMRGLHeaderPrimitive local_48 [4];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00617da4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,alpha);
  this_ptr = DAT_0060b280;
  *(int *)(*(int *)DAT_0060b280 + 0x10) = x1 << 0x10;
  *(int *)(*(int *)this_ptr + 0x14) = y1 << 0x10;
  *(uint *)(*(int *)this_ptr + 8) = 0x1000;
  *(uint *)(*(int *)this_ptr + 0x18) = 0;
  *(uint *)(*(int *)this_ptr + 0x1c) = 0;
  *(int *)(*(int *)this_ptr + 0x40) = x2 << 0x10;
  *(int *)(*(int *)this_ptr + 0x44) = y1 << 0x10;
  *(uint *)(*(int *)this_ptr + 0x38) = 0x1000;
  *(uint *)(*(int *)this_ptr + 0x48) = 0xf00000;
  *(uint *)(*(int *)this_ptr + 0x4c) = 0;
  *(int *)(*(int *)this_ptr + 0x70) = x2 << 0x10;
  *(int *)(*(int *)this_ptr + 0x74) = y2 << 0x10;
  *(uint *)(*(int *)this_ptr + 0x68) = 0x1000;
  *(uint *)(*(int *)this_ptr + 0x78) = 0xf00000;
  *(uint *)(*(int *)this_ptr + 0x7c) = 0x600000;
  *(int *)(*(int *)this_ptr + 0xa0) = x1 << 0x10;
  *(int *)(*(int *)this_ptr + 0xa4) = y2 << 0x10;
  *(uint *)(*(int *)this_ptr + 0x98) = 0x1000;
  *(uint *)(*(int *)this_ptr + 0xa8) = 0;
  *(uint *)(*(int *)this_ptr + 0xac) = 0x600000;
  local_44 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_30 = 0;
  local_24 = 3;
  local_2c = 1;
  local_28 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(this_ptr,local_48,0xa3);
  local_20 = x1;
  local_18 = y1;
  local_1c = x2;
  local_14 = y2;
  core_dcamera_cpp_CDemonCamera_pushRect_FUN_0043bb10(&g_CDemonCameraInstance,x1,x2,y1,y2);
  return;
}
