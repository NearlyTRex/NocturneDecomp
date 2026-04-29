// Name: core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
// Address: 0050fe70
// Address Range: [[0050fe70, 0050fffb]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center,int y_top,int height_half)

#include "nocturne.h"

void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center,int y_top,int height_half)

{
  int iVar1;
  int iVar3;
  int iVar2;
  SMRGLHeaderPrimitive local_2c;
  CDemonRenderer *this_ptr;
  
  this_ptr = g_CDemonRendererPtr2;
  if (0 < height_half * 2) {
    iVar1 = (x_center + -0x10) * 0x10000;
    (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).screen_x = iVar1;
    (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y_top << 0x10;
    iVar2 = (x_center + 0x10) * 0x10000;
    this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar2;
    this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y_top << 0x10;
    this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar2;
    iVar3 = (y_top + height_half * -2) * 0x10000;
    this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar3;
    this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = iVar1;
    this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar3;
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
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(this_ptr,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,
               g_AudioSpectrumTextures +
               (((int)((g_AudioVisualizationCounter +
                       (g_AudioVisualizationCounter >> 0x1f) * -0x10000) -
                      (uint)((g_AudioVisualizationCounter >> 0x1f) << 0xf < 0)) >> 0x10) + x_center
               & 7));
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr2,&local_2c,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  }
  return;
}
