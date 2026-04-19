// Name: shape_design.c_polygonToolModeManager_FUN_00464c90
// Address: 00464c90
// Address Range: [[00464c90, 00464e24] [00464e3c, 00464f08] [00464f20, 00465041] [00465058, 00465156]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_polygonToolModeManager_FUN_00464c90(int input_parameter)

#include "nocturne.h"

int __cdecl shape_design_c_polygonToolModeManager_FUN_00464c90(int input_parameter)

{
  char cVar2;
  int iVar2;
  int iVar4;
  int iVar3;
  char *pcVar4;
  char *pcVar7;
  char *pcVar5;
  char *pcVar8;
  char *pcVar6;
  byte bVar7;
  double dVar8;
  char local_b8 [80];
  char local_68 [80];
  int local_18;
  float local_14;
  char cVar1;
  
  bVar7 = 0;
  iVar2 = _strcmp(g_LoadedModelName,&s_EmptyChar_0061c3e2);
  if (iVar2 == 0) {
    local_18 = -1;
  }
  else {
    if ((g_KeyboardState[0x32] != '\0') && (g_KeyboardState[0x2a] != '\0')) {
      g_KeyboardState[0x32] = '\0';
      g_ToolModeEnabled = g_ToolModeEnabled ^ 1;
      if (g_ToolModeEnabled == 0) {
        g_SecondaryPolygonIndex = -1;
        g_KeyboardState[0x32] = '\0';
        return -1;
      }
      g_SavedVertexCount = g_VertexCount;
      g_SavedPolygonCount = g_PolygonCount;
      pcVar8 = g_LoadedModelName;
      pcVar7 = g_SavedModelName;
      do {
        cVar2 = *pcVar8;
        *pcVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar2;
        pcVar7 = pcVar7 + 2;
      } while (cVar2 != '\0');
    }
    if ((g_ToolModeEnabled == 0) ||
       (((iVar4 = _strcmp(g_SavedModelName,g_LoadedModelName), iVar4 == 0
         && (g_VertexCount <= g_SavedVertexCount)) && (g_PolygonCount <= g_SavedPolygonCount)))) {
      if (g_ToolModeEnabled == 0) {
        local_18 = input_parameter;
      }
      else {
        local_18 = shape_design_c_findClosestPolygonToMouse_FUN_00466250();
        if ((g_KeyboardState[0x32] != '\0') && (g_KeyboardState[0x2a] == '\0')) {
          g_KeyboardState[0x32] = '\0';
          g_PolygonToolMode = g_PolygonToolMode + 1;
          if (5 < g_PolygonToolMode) {
            g_PolygonToolMode = 0;
          }
        }
        switch(g_PolygonToolMode) {
        case 1:
          local_14 = 0.2;
          break;
        case 2:
          local_14 = 0.01;
          break;
        case 3:
          break;
        case 4:
          local_14 = 0.01;
          break;
        case 5:
          local_14 = 0.01;
        }
        iVar3 = shape_design_c_detectMouseButtonClick_FUN_00464870(1);
        if (iVar3 != 0) {
          if (g_PolygonToolMode != 0) {
            wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
            wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
          }
          switch(g_PolygonToolMode) {
          case 1:
            shape_design_c_polygonMergerSelectAndProcess_FUN_00465160(local_18,local_14);
            break;
          case 2:
            shape_design_c_weldNearbyVertices_FUN_00465c50(local_18,local_14);
            break;
          case 3:
            shape_design_c_duplicateSharedVertices_FUN_00465d50(local_18);
            break;
          case 4:
            shape_design_c_interactiveWeldVertices_FUN_00465e90(local_18,local_14);
            break;
          case 5:
            shape_design_c_interactiveGlobalWeld_FUN_00466040(local_14);
          }
          if (g_PolygonToolMode != 0) {
            wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
            wincore_windll_cpp_lockFrame_FUN_005b7210();
          }
        }
        pcVar4 = "Mouse polygon selection on";
        pcVar5 = local_b8;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar2;
          pcVar5 = pcVar5 + 2;
        } while (cVar2 != '\0');
        pcVar7 = &s_EmptyChar_0061c3fe;
        pcVar8 = local_68;
        do {
          cVar2 = *pcVar7;
          *pcVar8 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar2;
          pcVar8 = pcVar8 + 2;
        } while (cVar2 != '\0');
        switch(g_PolygonToolMode) {
        case 1:
          _sprintf(local_68," - Polygon merger (tol = %4.2f degs)",(double)local_14);
          break;
        case 2:
          _sprintf(local_68," - Polygon attacher (tol = %4.2f units)",(double)local_14);
          break;
        case 3:
          _sprintf(local_68," - Polygon detacher");
          break;
        case 4:
          _sprintf(local_68," - Polygon vertex welder (tol = %4.2f units)",(double)local_14);
          break;
        case 5:
          _sprintf(local_68," - Vertex welder (tol = %4.2f units)",(double)local_14);
        }
        pcVar8 = local_68;
        iVar4 = -1;
        pcVar6 = local_b8;
        do {
          pcVar6 = pcVar6;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6;
        } while (cVar2 != '\0');
        pcVar7 = pcVar6 + -1;
        do {
          cVar2 = *pcVar8;
          *pcVar7 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
        engine_2d_c_drawTextColor_FUN_00402430(local_b8,0,g_WindowHeight + -0x42);
        if ((g_PolygonToolMode == 1) && (g_SecondaryPolygonIndex != -1)) {
          dVar8 = shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
                            (g_ModelPolygonData + g_SecondaryPolygonIndex,
                             g_ModelPolygonData + local_18);
          _sprintf(local_b8,"Angle between polygon normals : %8.6lf",dVar8);
          engine_2d_c_drawTextColor_FUN_00402430(local_b8,0,g_WindowHeight + -0x58);
        }
      }
    }
    else {
      g_ToolModeEnabled = 0;
      g_SecondaryPolygonIndex = -1;
      local_18 = -1;
    }
  }
  return local_18;
}
