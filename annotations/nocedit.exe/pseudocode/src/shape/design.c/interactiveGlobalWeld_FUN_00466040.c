// Name: shape_design.c_interactiveGlobalWeld_FUN_00466040
// Address: 00466040
// Address Range: [[00466040, 004661c9]]
// Convention: __cdecl
// Signature: void shape_design.c_interactiveGlobalWeld_FUN_00466040(float tolerance)

#include "nocturne.h"

void __cdecl shape_design_c_interactiveGlobalWeld_FUN_00466040(float tolerance)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  SShapeEditorPolygon *pSVar5;
  char local_70 [80];
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_70,0x32,0,0,"Enter weld point : ");
  iVar2 = -1;
  pcVar3 = local_70;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_14 = crt_stdlib_c_atoi_FUN_005ffef0(local_70);
    if (((int)local_14 < 0) || (g_VertexCount + -1 < (int)local_14)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      for (local_20 = 0; (int)local_20 < g_VertexCount; local_20 = local_20 + 1) {
        if (((ABS(g_LoadedVertices[local_14].vertex.x - g_LoadedVertices[local_20].vertex.x) <
              tolerance) &&
            (ABS(g_LoadedVertices[local_14].vertex.y - g_LoadedVertices[local_20].vertex.y) <
             tolerance)) &&
           (ABS(g_LoadedVertices[local_14].vertex.z - g_LoadedVertices[local_20].vertex.z) <
            tolerance)) {
          pSVar5 = g_ModelPolygonData;
          for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
            for (local_18 = 0; local_18 < (int)pSVar5->vertex_indices_count; local_18 = local_18 + 1
                ) {
              if (pSVar5->vertex_indices[local_18] == local_20) {
                pSVar5->vertex_indices[local_18] = local_14;
              }
            }
            pSVar5 = pSVar5 + 1;
          }
        }
      }
      shape_design_c_removeUnusedVertices_FUN_00463830();
    }
  }
  return;
}
