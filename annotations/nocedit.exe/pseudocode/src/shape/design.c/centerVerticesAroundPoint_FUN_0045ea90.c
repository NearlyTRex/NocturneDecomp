// Name: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
// Address: 0045ea90
// Address Range: [[0045ea90, 0045ec8d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_centerVerticesAroundPoint_FUN_0045ea90(void)

#include "nocturne.h"

void __cdecl shape_design_c_centerVerticesAroundPoint_FUN_0045ea90(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  double dVar6;
  char local_54 [40];
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_54,10,0,0,"Bias around what point? (or -1 for user-defined) : ");
  iVar3 = -1;
  pcVar4 = local_54;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    local_2c = atoi(local_54);
    if ((local_2c < -1) || (g_VertexCount + -1 < local_2c)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      if (local_2c == -1) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0(local_54,0x32,0,0xb,"Enter point : ");
        iVar3 = -1;
        pcVar4 = local_54;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 == -2) {
          return;
        }
        dVar6 = _strtod(local_54);
        local_28 = (float)dVar6;
        local_24 = local_28;
        local_20 = local_28;
        local_1c = local_28;
      }
      else {
        local_28 = g_LoadedVertices[local_2c].vertex.x;
        local_24 = g_LoadedVertices[local_2c].vertex.y;
        local_20 = g_LoadedVertices[local_2c].vertex.z;
      }
      engine_2d_c_drawText_FUN_00401fd0("Which axis to use - X, Y, or Z? : ",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar2 = toupper(uVar2 & 0xff);
      if (uVar2 < 0x59) {
        if (uVar2 == 0x58) {
          for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
            g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14].vertex.x - local_28;
          }
        }
      }
      else if (uVar2 < 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y - local_24;
        }
      }
      else if (uVar2 == 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[local_14].vertex.z - local_20;
        }
      }
    }
  }
  return;
}
