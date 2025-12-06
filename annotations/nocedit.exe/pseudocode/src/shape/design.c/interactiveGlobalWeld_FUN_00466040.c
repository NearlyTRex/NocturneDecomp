// Name: shape_design.c_interactiveGlobalWeld_FUN_00466040
// Address: 00466040
// Address Range: [[00466040, 004661c9]]
// Convention: __cdecl
// Signature: void shape_design.c_interactiveGlobalWeld_FUN_00466040(float tolerance)

#include "nocturne.h"

void __cdecl shape_design_c_interactiveGlobalWeld_FUN_00466040(float tolerance)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  SShapeEditorPolygon *pSVar6;
  uint local_20;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(&stack0xffffff90,0x32,0,0,"Enter weld point : ")
  ;
  iVar3 = -1;
  pcVar4 = &stack0xffffff90;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    uVar2 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff90);
    if (((int)uVar2 < 0) || (g_VertexCount + -1 < (int)uVar2)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      for (local_20 = 0; (int)local_20 < g_VertexCount; local_20 = local_20 + 1) {
        if (((ABS(g_LoadedVertices[uVar2].vertex.x - g_LoadedVertices[local_20].vertex.x) <
              tolerance) &&
            (ABS(g_LoadedVertices[uVar2].vertex.y - g_LoadedVertices[local_20].vertex.y) < tolerance
            )) && (ABS(g_LoadedVertices[uVar2].vertex.z - g_LoadedVertices[local_20].vertex.z) <
                   tolerance)) {
          pSVar6 = g_ModelPolygonData;
          for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
            for (local_18 = 0; local_18 < (int)pSVar6->vertex_indices_count; local_18 = local_18 + 1
                ) {
              if (pSVar6->vertex_indices[local_18] == local_20) {
                pSVar6->vertex_indices[local_18] = uVar2;
              }
            }
            pSVar6 = pSVar6 + 1;
          }
        }
      }
      shape_design_c_removeUnusedVertices_FUN_00463830();
    }
  }
  return;
}
