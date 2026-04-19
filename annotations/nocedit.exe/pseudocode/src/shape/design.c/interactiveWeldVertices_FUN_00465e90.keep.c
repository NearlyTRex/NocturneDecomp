// Name: shape_design.c_interactiveWeldVertices_FUN_00465e90
// Address: 00465e90
// MANUAL RECONSTRUCTION
// Address Range: [[00465e90, 00466038]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_interactiveWeldVertices_FUN_00465e90(int polygon_index,float tolerance)

#include "nocturne.h"

void __cdecl shape_design_c_interactiveWeldVertices_FUN_00465e90(int polygon_index,float tolerance)

{
  char local_70 [80];
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;

  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_70,0x32,0,0,"Enter weld points a,b (weld a -> b) : ")
  ;
  if ((local_70[0] != '\0') &&
     (local_18 = sscanf(local_70,"%d,%d",&local_20,&local_1c),
     local_18 == 2)) {
    if (((int)local_20 < 0) ||
       ((((int)local_1c < 0 || (g_VertexCount + -1 < (int)local_20)) ||
        (g_VertexCount + -1 < (int)local_1c)))) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      local_14 = -1;
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
          local_18 = local_18 + 1) {
        if (local_20 == g_ModelPolygonData[polygon_index].vertex_indices[local_18]) {
          local_14 = local_18;
          break;
        }
      }
      if (local_14 == -1) {
        engine_2d_c_drawText_FUN_00401fd0("Point not on polygon.",0,0x16);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      else if (((ABS(g_LoadedVertices[local_20].vertex.x - g_LoadedVertices[local_1c].vertex.x) <
                 tolerance) &&
               (ABS(g_LoadedVertices[local_20].vertex.y - g_LoadedVertices[local_1c].vertex.y) <
                tolerance)) &&
              (ABS(g_LoadedVertices[local_20].vertex.z - g_LoadedVertices[local_1c].vertex.z) <
               tolerance)) {
        g_ModelPolygonData[polygon_index].vertex_indices[local_14] = local_1c;
        shape_design_c_removeUnusedVertices_FUN_00463830();
      }
    }
  }
  return;
}
