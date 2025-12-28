// Name: shape_design.c_mouseWheelPolygonReducer_FUN_004648e0
// Address: 004648e0
// Address Range: [[004648e0, 00464c83]]
// Convention: __cdecl
// Signature: int shape_design.c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index)

#include "nocturne.h"

int __cdecl shape_design_c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  SVertexData *pSVar5;
  SShapeEditorPolygon *pSVar6;
  char *pcVar7;
  SVertexData *pSVar8;
  SShapeEditorPolygon *pSVar9;
  byte bVar10;
  int iVar11;
  
  bVar10 = 0;
  iVar11 = 0x32;
  iVar2 = crt_string_c_strcmp_FUN_005fef20(g_LoadedModelName,&s_EmptyChar_0061c2ba);
  if (iVar2 == 0) {
    selected_polygon_index = -1;
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
      g_BackupVertices =
           shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     ((g_VertexCount + iVar11) * 0x14,"..\\shape\\design.c",0x1a98);
      if (g_BackupVertices == (SVertexData *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x1a9a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get mem for vertices in mouse wheel polygon reducer!");
      }
      g_BackupPolygons =
           shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     ((g_PolygonCount + iVar11) * 0x184,"..\\shape\\design.c",0x1a9c);
      if (g_BackupPolygons == (SShapeEditorPolygon *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x1a9e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get mem for polygons in mouse wheel polygon reducer!");
      }
      g_BackupVertexCount = g_VertexCount;
      g_BackupPolygonCount = g_PolygonCount;
      pcVar4 = g_LoadedModelName;
      pcVar7 = g_BackupModelName;
      do {
        cVar1 = *pcVar4;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    if ((g_PolygonReducerEnabled == 0) ||
       (((iVar2 = crt_string_c_strcmp_FUN_005fef20(g_BackupModelName,g_LoadedModelName), iVar2 == 0
         && (g_VertexCount <= g_BackupVertexCount)) && (g_PolygonCount <= g_BackupPolygonCount)))) {
      if (g_PolygonReducerEnabled != 0) {
        selected_polygon_index = shape_design_c_findClosestPolygonToMouse_FUN_00466250();
        engine_2d_c_drawTextColor_FUN_00402430
                  ("Wheel polygon reducer on",0,g_WindowHeight + -0x4d);
        iVar2 = shape_design_c_detectMouseButtonClick_FUN_00464870(1);
        if (iVar2 != 0) {
          pSVar5 = g_LoadedVertices;
          pSVar8 = g_BackupVertices;
          for (uVar3 = (uint)(g_VertexCount * 0x14) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            (pSVar8->vertex).x = (pSVar5->vertex).x;
            pSVar5 = (SVertexData *)((int)pSVar5 + ((uint)bVar10 * -2 + 1) * 4);
            pSVar8 = (SVertexData *)((int)pSVar8 + (uint)bVar10 * -8 + 4);
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(byte *)&(pSVar8->vertex).x = *(byte *)&(pSVar5->vertex).x;
            pSVar5 = (SVertexData *)((int)pSVar5 + (uint)bVar10 * -2 + 1);
            pSVar8 = (SVertexData *)((int)pSVar8 + (uint)bVar10 * -2 + 1);
          }
          pSVar6 = g_ModelPolygonData;
          pSVar9 = g_BackupPolygons;
          for (uVar3 = (uint)(g_PolygonCount * 0x184) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            pSVar9->polygon_type = pSVar6->polygon_type;
            pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
            pSVar9 = (SShapeEditorPolygon *)((int)pSVar9 + (uint)bVar10 * -8 + 4);
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)&pSVar9->polygon_type = (char)pSVar6->polygon_type;
            pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + (uint)bVar10 * -2 + 1);
            pSVar9 = (SShapeEditorPolygon *)((int)pSVar9 + (uint)bVar10 * -2 + 1);
          }
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
          pSVar5 = g_BackupVertices;
          pSVar8 = g_LoadedVertices;
          for (uVar3 = (uint)(g_BackupVertexCount * 0x14) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            (pSVar8->vertex).x = (pSVar5->vertex).x;
            pSVar5 = (SVertexData *)((int)pSVar5 + (uint)bVar10 * -8 + 4);
            pSVar8 = (SVertexData *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(byte *)&(pSVar8->vertex).x = *(byte *)&(pSVar5->vertex).x;
            pSVar5 = (SVertexData *)((int)pSVar5 + (uint)bVar10 * -2 + 1);
            pSVar8 = (SVertexData *)((int)pSVar8 + (uint)bVar10 * -2 + 1);
          }
          selected_polygon_index = (int)g_ModelPolygonData;
          pSVar6 = g_BackupPolygons;
          pSVar9 = g_ModelPolygonData;
          for (uVar3 = (uint)(g_BackupPolygonCount * 0x184) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            pSVar9->polygon_type = pSVar6->polygon_type;
            pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + (uint)bVar10 * -8 + 4);
            pSVar9 = (SShapeEditorPolygon *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)&pSVar9->polygon_type = (char)pSVar6->polygon_type;
            pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + (uint)bVar10 * -2 + 1);
            pSVar9 = (SShapeEditorPolygon *)((int)pSVar9 + (uint)bVar10 * -2 + 1);
          }
          g_VertexCount = g_BackupVertexCount;
          g_PolygonCount = g_BackupPolygonCount;
        }
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
      selected_polygon_index = -1;
    }
  }
  return selected_polygon_index;
}
