// Name: shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90
// Address: 0045ec90
// Address Range: [[0045ec90, 0045ee61]]
// Convention: unknown
// Signature: void shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90(void)

#include "nocturne.h"

void shape_design_c_translateAllVerticesAlongAxis_FUN_0045ec90(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  double dVar6;
  char *in_stack_ffffffac;
  char local_48 [40];
  int local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_48,10,0,0,"Enter distance or location in feet : ");
  iVar3 = -1;
  pcVar4 = local_48;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    dVar6 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffffac);
    local_1c = (float)dVar6;
    iVar3 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                      (local_48,0x14,0,0x16,"Press <Enter> or enter point to set to location : ");
    if (iVar3 != 0x1b) {
      iVar3 = -1;
      pcVar4 = local_48;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        local_20 = crt_stdlib_c_atoi_FUN_005ffef0(local_48);
        if ((local_20 < 0) || (g_VertexCount + -1 < local_20)) {
          engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x2c);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        local_1c = local_1c - g_LoadedVertices[local_20].vertex.x;
      }
      engine_2d_c_drawText_FUN_00401fd0("Which axis to use - X, Y, or Z? : ",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
      if (uVar2 < 0x59) {
        if (uVar2 == 0x58) {
          for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
            g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14].vertex.x + local_1c;
          }
        }
      }
      else if (uVar2 < 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y + local_1c;
        }
      }
      else if (uVar2 == 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[local_14].vertex.z + local_1c;
        }
      }
    }
  }
  return;
}
