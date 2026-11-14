// Name: core_menu.cpp_renderAudioSpectrumBar_FUN_004e76d0
// Address: 004e76d0
// Address Range: [[004e76d0, 004e785b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004e76d0(int x_center,int y_top,int height_half)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004e76d0(int x_center,int y_top,int height_half)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive SStack_2c;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  this_ptr = DAT_005f2afc;
  if (0 < height_half * 2) {
    iVar1 = (x_center + -0x10) * 0x10000;
    (DAT_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x = iVar1;
    (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y_top << 0x10;
    iVar2 = (x_center + 0x10) * 0x10000;
    this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar2;
    this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y_top << 0x10;
    this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar2;
    iVar2 = (y_top + height_half * -2) * 0x10000;
    this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar2;
    this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = iVar1;
    this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar2;
    this_ptr->vertex_buffer_ptr->u = 0x80000;
    this_ptr->vertex_buffer_ptr->v = 0xf80000;
    this_ptr->vertex_buffer_ptr[1].u = 0xf80000;
    this_ptr->vertex_buffer_ptr[1].v = 0xf80000;
    this_ptr->vertex_buffer_ptr[2].u = 0xf80000;
    this_ptr->vertex_buffer_ptr[2].v = 0x80000;
    this_ptr->vertex_buffer_ptr[3].u = 0x80000;
    this_ptr->vertex_buffer_ptr[3].v = 0x80000;
    SStack_2c.base.count = 4;
    SStack_2c.surface_normal.D.i = 0;
    SStack_2c.surface_normal.C.i = 0;
    SStack_2c.surface_normal.B.i = 0;
    SStack_2c.surface_normal.A.i = 0;
    uStack_14 = 0;
    uStack_c = 2;
    uStack_8 = 3;
    uStack_10 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,
               (SMRGLTextureBasic *)
               ((((int)((_DAT_01d737e0 + (_DAT_01d737e0 >> 0x1f) * -0x10000) -
                       (uint)((_DAT_01d737e0 >> 0x1f) << 0xf < 0)) >> 0x10) + x_center & 7U) * 0x18
               + 0x6003b8));
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
              (DAT_005f2afc,&SStack_2c,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  }
  return;
}
