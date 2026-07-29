// Name: shape_design.c_interactiveGlobalWeld_FUN_00466040
// Address: 00466040
// MANUAL RECONSTRUCTION
// Address Range: [[00466040, 004661c9]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_interactiveGlobalWeld_FUN_00466040(float tolerance)

#include "nocturne.h"

void __cdecl shape_design_c_interactiveGlobalWeld_FUN_00466040(float tolerance)

{
  uint uVar1;
  SShapeEditorPolygon *local_74;
  char local_70 [80];
  uint local_20;
  int local_1c;
  int local_18;

  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_70,0x32,0,0,"Enter weld point : ");
  if (local_70[0] != '\0') {
    uVar1 = atoi(local_70);
    if (((int)uVar1 < 0) || (g_VertexCount + -1 < (int)uVar1)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      for (local_20 = 0; (int)local_20 < g_VertexCount; local_20 = local_20 + 1) {
        if (((ABS(g_LoadedVertices[uVar1].vertex.x - g_LoadedVertices[local_20].vertex.x) <
              tolerance) &&
            (ABS(g_LoadedVertices[uVar1].vertex.y - g_LoadedVertices[local_20].vertex.y) < tolerance
            )) && (ABS(g_LoadedVertices[uVar1].vertex.z - g_LoadedVertices[local_20].vertex.z) <
                   tolerance)) {
          local_74 = g_ModelPolygonData;
          for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
            for (local_18 = 0; local_18 < (int)local_74->vertex_indices_count;
                local_18 = local_18 + 1) {
              if (local_74->vertex_indices[local_18] == local_20) {
                local_74->vertex_indices[local_18] = uVar1;
              }
            }
            local_74 = local_74 + 1;
          }
        }
      }
      shape_design_c_removeUnusedVertices_FUN_00463830();
    }
  }
  return;
}
