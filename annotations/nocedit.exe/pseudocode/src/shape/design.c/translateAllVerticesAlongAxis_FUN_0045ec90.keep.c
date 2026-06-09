// Name: shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90
// Address: 0045ec90
// MANUAL RECONSTRUCTION
// Address Range: [[0045ec90, 0045ee61]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90(void)

#include "nocturne.h"

void __cdecl shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90(void)

{
  int iVar4;
  uint uVar2;
  uint uVar5;
  int iVar3;
  byte bVar5;
  double dVar6;
  char local_48 [40];
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_48,10,0,0,"Enter distance or location in feet : ");
  iVar3 = strlen(local_48);
  if (iVar3 != 0) {
    dVar6 = _strtod(local_48);
    local_1c = (float)dVar6;
    iVar4 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (local_48,0x14,0,0x16,"Press <Enter> or enter point to set to location : ");
    if (iVar4 != 0x1b) {
      iVar4 = strlen(local_48);
      if (iVar4 != 0) {
        iVar4 = atoi(local_48);
        if ((iVar4 < 0) || (g_VertexCount + -1 < iVar4)) {
          engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        local_1c = local_1c - g_LoadedVertices[iVar4].vertex.x;
      }
      engine_2d_c_drawText_FUN_00401fd0("Which axis to use - X, Y, or Z? : ",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar5 = toupper(uVar2 & 0xff);
      if (uVar5 < 0x59) {
        if (uVar5 == 0x58) {
          for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
            g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14].vertex.x + local_1c;
          }
        }
      }
      else if (uVar5 < 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y + local_1c;
        }
      }
      else if (uVar5 == 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[local_14].vertex.z + local_1c;
        }
      }
    }
  }
  return;
}
