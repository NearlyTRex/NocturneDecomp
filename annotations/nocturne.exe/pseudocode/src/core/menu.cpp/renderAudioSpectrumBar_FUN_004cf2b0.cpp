// Name: core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0
// Address: 004cf2b0
// Address Range: [[004cf2b0, 004cf43b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(int x_center,int y_top,int height_half)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(int x_center,int y_top,int height_half)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_2c;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  this_ptr = g_CDemonRenderer_PTR_005ae704;
  if (0 < height_half * 2) {
    iVar1 = (x_center + -0x10) * 0x10000;
    (g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).screen_x = iVar1;
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
    local_2c.base.count = 4;
    local_2c.surface_normal.D.i = 0;
    local_2c.surface_normal.C.i = 0;
    local_2c.surface_normal.B.i = 0;
    local_2c.surface_normal.A.i = 0;
    local_14 = 0;
    local_c = 2;
    local_8 = 3;
    local_10 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(this_ptr,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,
               (SMRGLTextureBasic *)
               (&DAT_005bae58 +
               (((int)((_DAT_01cc5b64 + (_DAT_01cc5b64 >> 0x1f) * -0x10000) -
                      (uint)((_DAT_01cc5b64 >> 0x1f) << 0xf < 0)) >> 0x10) + x_center & 7U) * 0x18))
    ;
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
              (g_CDemonRenderer_PTR_005ae704,&local_2c,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,0xffff);
  }
  return;
}
