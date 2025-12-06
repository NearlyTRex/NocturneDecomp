// Name: shape_design.c_showPointEditor_FUN_0045c6c0
// Address: 0045c6c0
// Address Range: [[0045c6c0, 0045c841] [0045c844, 0045ca46] [0045ca49, 0045ca9e]]
// Convention: __cdecl
// Signature: void shape_design.c_showPointEditor_FUN_0045c6c0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045c93b) */

void __cdecl shape_design_c_showPointEditor_FUN_0045c6c0(void)

{
  BADSPACEBASE *in_ESP;
  
  g_ZoomLevel = 0x10000;
  wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0();
  g_PointEditorMode = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_setupViewMatrix_FUN_0045ba60();
    wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    if (g_KeyboardState[0x17] != '\0') {
      g_KeyboardState[0x17] = '\0';
      g_PolygonScreenCache[19999].view_mode = g_PolygonScreenCache[19999].view_mode + 1;
      if (2 < g_PolygonScreenCache[19999].view_mode) {
        g_PolygonScreenCache[19999].view_mode = 0;
      }
    }
    if (g_KeyboardState[0xc] != '\0') {
      g_KeyboardState[0xc] = '\0';
      g_ZoomLevel = g_ZoomLevel + 0x400;
    }
    if (g_KeyboardState[0xd] != '\0') {
      g_KeyboardState[0xd] = '\0';
      g_ZoomLevel = g_ZoomLevel + -0x400;
      if (g_ZoomLevel < 0x400) {
        g_ZoomLevel = 0x400;
      }
    }
    if (g_PointEditorMode == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"Insert at end");
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0xb);
    }
    else if (g_PointEditorMode == 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"Move point : %d");
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0xb);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffff7c,"from %f,%f,%f",
                 (double)g_LoadedVertices[g_SelectedPointIndex].vertex.x);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0x16);
    }
    if (g_KeyboardState[0x20] != '\0') {
      g_KeyboardState[0x20] = '\0';
      shape_design_c_selectVertexToDelete_FUN_0045c5b0();
    }
    if (g_KeyboardState[0x32] != '\0') {
      g_KeyboardState[0x32] = '\0';
      shape_design_c_selectVertexToMove_FUN_0045c530();
    }
    shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0();
    g_ActiveRenderColor = 0x10;
    engine_2d_c_drawLine_FUN_004011b0(g_WindowWidth / 2,0,g_WindowWidth / 2,g_WindowHeight + -1);
    engine_2d_c_drawLine_FUN_004011b0(0,g_WindowHeight / 2,g_WindowWidth + -1,g_WindowHeight / 2);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%c");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,g_WindowWidth / 2 + 2,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%c");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,g_WindowWidth + -7,g_WindowHeight / 2 + -0xb)
    ;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%c");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff7c,"%d,%d,%d");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff7c,0,g_WindowHeight + -0xb);
    if (g_PointEditorMode == 0) {
      shape_design_c_doNothing_FUN_0045c4f0();
    }
    else if (g_PointEditorMode == 1) {
      shape_design_c_doNothing_FUN_0045c510();
    }
    shape_design_c_processVerticesAndRenderPolygons_FUN_0045d5d0();
    shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0();
    shape_design_c_handleEditorHotkeys_FUN_0045b990();
    if (g_KeyboardState[0x23] != '\0') {
      g_KeyboardState[0x23] = '\0';
      shape_design_c_showHelpFile_FUN_00457f00("point.hlp");
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (g_KeyboardState[1] == '\0');
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
