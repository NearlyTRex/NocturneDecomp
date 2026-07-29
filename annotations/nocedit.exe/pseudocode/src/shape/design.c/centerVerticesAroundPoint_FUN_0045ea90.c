// Name: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
// Address: 0045ea90
// Address Range: [[0045ea90, 0045ec8d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_centerVerticesAroundPoint_FUN_0045ea90(void)

#include "nocturne.h"

void __cdecl shape_design_c_centerVerticesAroundPoint_FUN_0045ea90(void)

{
  char cVar2;
  int iVar4;
  uint uVar2;
  uint uVar5;
  int iVar3;
  char *pcVar6;
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
  char cVar1;
  
  bVar5 = 0;
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_54,10,0,0,"Bias around what point? (or -1 for user-defined) : ");
  iVar3 = -1;
  pcVar6 = local_54;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    iVar4 = atoi(local_54);
    if ((iVar4 < -1) || (g_VertexCount + -1 < iVar4)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      if (iVar4 == -1) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0(local_54,0x32,0,0xb,"Enter point : ");
        iVar4 = -1;
        pcVar4 = local_54;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar4;
        } while (cVar2 != '\0');
        if (iVar4 == -2) {
          return;
        }
        dVar6 = _strtod(local_54);
        local_28 = (float)dVar6;
        local_24 = local_28;
        local_20 = local_28;
      }
      else {
        local_28 = g_LoadedVertices[iVar4].vertex.x;
        local_24 = g_LoadedVertices[iVar4].vertex.y;
        local_20 = g_LoadedVertices[iVar4].vertex.z;
      }
      engine_2d_c_drawText_FUN_00401fd0("Which axis to use - X, Y, or Z? : ",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar5 = toupper(uVar2 & 0xff);
      if (uVar5 < 0x59) {
        if (uVar5 == 0x58) {
          for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
            g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14].vertex.x - local_28;
          }
        }
      }
      else if (uVar5 < 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y - local_24;
        }
      }
      else if (uVar5 == 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[local_14].vertex.z - local_20;
        }
      }
    }
  }
  return;
}
