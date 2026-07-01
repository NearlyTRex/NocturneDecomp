// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// MANUAL RECONSTRUCTION
// Address Range: [[004a1ca0, 004a1e8d] [006029f4, 00602c17]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

{
  int scale_int;
  int i;
  CVector3i local_20;
  char local_34[20];

  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 141;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  g_ActiveRenderColor = text_color;

  scale_int = (int)ROUND(scale_factor * 256.0f);

  // Project 4 axis-system points: origin and 3 axis tips into vertex_buffer_ptr[0..3].
  local_20.x = 0;
  local_20.y = 0;
  local_20.z = 0;
  engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_20);
  local_20.x = scale_int;
  local_20.y = 0;
  local_20.z = 0;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,&local_20);
  local_20.x = 0;
  local_20.y = scale_int;
  local_20.z = 0;
  engine_matrix_c_transformToCache_FUN_0050cd70(2,&local_20);
  local_20.x = 0;
  local_20.y = 0;
  local_20.z = scale_int;
  engine_matrix_c_transformToCache_FUN_0050cd70(3,&local_20);

  // Draw the 3 axis lines: origin -> X tip, origin -> Y tip, origin -> Z tip.
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[0], g_RenderVertexBuffer[1]);
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[0], g_RenderVertexBuffer[2]);
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[0], g_RenderVertexBuffer[3]);

  // Draw axis labels at the screen position of each visible axis tip.
  for (i = 0; i < 3; i++) {
    if ((g_RenderVertexBuffer[i + 1].projected_vertex.screen_x & 0x80000000U) == 0) {
      _sprintf(local_34, "%c", g_AxisLabelChars[i]);
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                (g_EditorFont, local_34,
                 (int)(short)((uint)g_RenderVertexBuffer[i + 1].projected_vertex.screen_x >> 0x10),
                 (int)(short)((uint)g_RenderVertexBuffer[i + 1].projected_vertex.screen_y >> 0x10),
                 g_AxisLabelTextColor, -1);
    }
  }
  return;
}
