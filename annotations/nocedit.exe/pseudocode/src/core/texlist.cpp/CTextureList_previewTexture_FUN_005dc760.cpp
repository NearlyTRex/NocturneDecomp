// Name: core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760
// Address: 005dc760
// Address Range: [[005dc760, 005dca24]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_previewTexture_FUN_005dc760(CTextureList *this_ptr)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_previewTexture_FUN_005dc760(CTextureList *this_ptr)

{
  char cVar2;
  int iVar2;
  char (*pacVar3) [16];
  int iVar3;
  char *pcVar4;
  SMRGLPrimitiveQuadIndex SStack_50;
  SMRGLTextureBasic local_28;
  char cVar1;
  
  if ((g_KeyboardState[0x1d] != '\0') && (g_KeyboardState[0x2c] != '\0')) {
    g_KeyboardState[0x2c] = '\0';
    g_TexturePreviewEnabled = g_TexturePreviewEnabled ^ 1;
  }
  if (g_TexturePreviewEnabled != 0) {
    if (g_KeyboardState[0x2c] != '\0') {
      g_KeyboardState[0x2c] = '\0';
      g_TexturePreviewFullscreen = g_TexturePreviewFullscreen ^ 1;
    }
    g_TexturePreviewX = g_WindowWidth - g_WindowWidth / 7;
    g_TexturePreviewWidth = g_WindowWidth / 7 + -1;
    g_TexturePreviewY = g_WindowHeight - g_WindowHeight / 7;
    g_TexturePreviewHeight = g_WindowHeight / 7 + -1;
    if (g_TexturePreviewFullscreen == 0) {
      engine_matrix_c_pushViewport_FUN_0050e320
                (g_TexturePreviewX,g_TexturePreviewY,g_TexturePreviewWidth,g_TexturePreviewHeight);
    }
    engine_light_cpp_setAmbientLightLevel_FUN_00505490(0xffff);
    engine_light_cpp_setDirectionalLightVector_FUN_005054d0(0,0,0xffff);
    g_RenderVertexBuffer[0].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[0].u = 0xf80000;
    g_RenderVertexBuffer[1].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[2].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[2].v = 0xf80000;
    g_RenderVertexBuffer[3].projected_vertex.screen_x = -0x80000000;
    g_RenderVertexBuffer[3].u = 0xf80000;
    g_RenderVertexBuffer[0].projected_vertex.transformed_x = 0xa00;
    g_RenderVertexBuffer[0].projected_vertex.transformed_y = 0xa00;
    g_RenderVertexBuffer[0].projected_vertex.transformed_z = 0xa00;
    g_RenderVertexBuffer[0].v = 0x80000;
    g_RenderVertexBuffer[1].u = 0x80000;
    g_RenderVertexBuffer[1].v = 0x80000;
    g_RenderVertexBuffer[1].projected_vertex.transformed_y = 0xa00;
    g_RenderVertexBuffer[1].projected_vertex.transformed_z = 0xa00;
    g_RenderVertexBuffer[2].projected_vertex.transformed_z = 0xa00;
    local_28.base.count = 0;
    g_RenderVertexBuffer[1].projected_vertex.transformed_x = -0xa00;
    g_RenderVertexBuffer[2].projected_vertex.transformed_x = -0xa00;
    g_RenderVertexBuffer[2].projected_vertex.transformed_y = -0xa00;
    g_RenderVertexBuffer[3].projected_vertex.transformed_y = -0xa00;
    g_RenderVertexBuffer[3].projected_vertex.transformed_x = 0xa00;
    g_RenderVertexBuffer[3].projected_vertex.transformed_z = 0xa00;
    SStack_50.base.surface_normal.A.i = 0;
    SStack_50.base.surface_normal.B.i = 0;
    SStack_50.base.surface_normal.C.i = 0;
    SStack_50.base.surface_normal.D.i = 0;
    SStack_50.vertices[0] = 0;
    SStack_50.vertices[3] = 3;
    SStack_50.base.base.count = 4;
    SStack_50.vertices[2] = 2;
    SStack_50.vertices[1] = 1;
    g_RenderVertexBuffer[2].u = 0x80000;
    pcVar4 = local_28.texture_name;
    pacVar3 = this_ptr->master_texture_names + this_ptr->current_master_selection;
    g_RenderVertexBuffer[3].v = 0xf80000;
    do {
      cVar1 = (*pacVar3)[0];
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = (*pacVar3)[1];
      pacVar3 = (char (*) [16])(*pacVar3 + 2);
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,&local_28);
    engine_3d_c_renderPolygonTextureEnable_FUN_00403cc0(&SStack_50.base);
    if (g_KeyboardState[0x1b] != '\0') {
      g_KeyboardState[0x1b] = '\0';
      iVar2 = this_ptr->current_master_selection + (uint)(byte)g_KeyboardState[0x2a] * 9 + 1;
      this_ptr->current_master_selection = iVar2;
      if (this_ptr->master_texture_count <= iVar2) {
        this_ptr->current_master_selection = 0;
      }
    }
    if (g_KeyboardState[0x1a] != '\0') {
      g_KeyboardState[0x1a] = '\0';
      iVar3 = this_ptr->current_master_selection - ((uint)(byte)g_KeyboardState[0x2a] * 9 + 1);
      this_ptr->current_master_selection = iVar3;
      if (iVar3 < 0) {
        this_ptr->current_master_selection = this_ptr->master_texture_count + -1;
      }
    }
    if (g_TexturePreviewFullscreen == 0) {
      engine_matrix_c_popViewport_FUN_0050e480();
      return;
    }
  }
  return;
}
