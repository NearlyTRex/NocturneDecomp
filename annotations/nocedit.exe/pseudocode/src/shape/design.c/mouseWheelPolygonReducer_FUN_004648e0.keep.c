// Name: shape_design.c_mouseWheelPolygonReducer_FUN_004648e0
// Address: 004648e0
// MANUAL RECONSTRUCTION
// Address Range: [[004648e0, 00464c83]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index)

#include "nocturne.h"

int __cdecl shape_design_c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index)

{
  int iVar2;
  int iVar3;
  int local_18;

  iVar2 = _strcmp(g_LoadedModelName,&s_EmptyChar_0061c2ba);
  if (iVar2 == 0) {
    local_18 = -1;
  }
  else {
    if ((g_KeyboardState[0x11] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
      g_KeyboardState[0x11] = '\0';
      g_PolygonReducerEnabled = g_PolygonReducerEnabled ^ 1;
      if (g_PolygonReducerEnabled == 0) {
        if (g_BackupPolygons != (SShapeEditorPolygon *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackupPolygons,"..\\shape\\design.c",0x1aaa)
          ;
          g_BackupPolygons = (SShapeEditorPolygon *)0x0;
        }
        if (g_BackupVertices != (SVertexData *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackupVertices,"..\\shape\\design.c",0x1aae)
          ;
          g_BackupVertices = (SVertexData *)0x0;
        }
        return -1;
      }
      g_BackupVertices = (SVertexData *)
           shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     ((g_VertexCount + 0x32) * 0x14,"..\\shape\\design.c",0x1a98);
      if (g_BackupVertices == (SVertexData *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x1a9a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get mem for vertices in mouse wheel polygon reducer!");
      }
      g_BackupPolygons = (SShapeEditorPolygon *)
           shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     ((g_PolygonCount + 0x32) * 0x184,"..\\shape\\design.c",0x1a9c);
      if (g_BackupPolygons == (SShapeEditorPolygon *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x1a9e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get mem for polygons in mouse wheel polygon reducer!");
      }
      g_BackupVertexCount = g_VertexCount;
      g_BackupPolygonCount = g_PolygonCount;
      strcpy(g_BackupModelName,g_LoadedModelName);
    }
    if ((g_PolygonReducerEnabled == 0) ||
       (((iVar3 = _strcmp(g_BackupModelName,g_LoadedModelName), iVar3 == 0
         && (g_VertexCount <= g_BackupVertexCount)) && (g_PolygonCount <= g_BackupPolygonCount)))) {
      if (g_PolygonReducerEnabled == 0) {
        local_18 = selected_polygon_index;
      }
      else {
        selected_polygon_index = shape_design_c_findClosestPolygonToMouse_FUN_00466250();
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Wheel polygon reducer on",0,g_WindowHeight + -0x4d);
        iVar3 = shape_design_c_detectMouseButtonClick_FUN_00464870(1);
        if (iVar3 != 0) {
          memcpy(g_BackupVertices,g_LoadedVertices,g_VertexCount * sizeof(SVertexData));
          memcpy(g_BackupPolygons,g_ModelPolygonData,g_PolygonCount * sizeof(SShapeEditorPolygon));
          g_BackupVertexCount = g_VertexCount;
          g_BackupPolygonCount = g_PolygonCount;
          wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
          wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
          selected_polygon_index =
               shape_design_c_complexPolygonReduction_FUN_00463b30(selected_polygon_index);
          wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
          wincore_windll_cpp_lockFrame_FUN_005b7210();
        }
        if (g_KeyboardState[0x16] != '\0') {
          g_KeyboardState[0x16] = '\0';
          memcpy(g_LoadedVertices,g_BackupVertices,g_BackupVertexCount * sizeof(SVertexData));
          memcpy(g_ModelPolygonData,g_BackupPolygons,g_BackupPolygonCount * sizeof(SShapeEditorPolygon));
          g_VertexCount = g_BackupVertexCount;
          g_PolygonCount = g_BackupPolygonCount;
        }
        local_18 = selected_polygon_index;
      }
    }
    else {
      if (g_BackupPolygons != (SShapeEditorPolygon *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackupPolygons,"..\\shape\\design.c",0x1ac1);
        g_BackupPolygons = (SShapeEditorPolygon *)0x0;
      }
      if (g_BackupVertices != (SVertexData *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackupVertices,"..\\shape\\design.c",0x1ac5);
        g_BackupVertices = (SVertexData *)0x0;
      }
      g_PolygonReducerEnabled = 0;
      local_18 = -1;
    }
  }
  return local_18;
}
