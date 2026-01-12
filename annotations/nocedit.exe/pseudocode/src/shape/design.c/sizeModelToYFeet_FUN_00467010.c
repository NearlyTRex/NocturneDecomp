// Name: shape_design.c_sizeModelToYFeet_FUN_00467010
// Address: 00467010
// Address Range: [[00467010, 004671d0]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeModelToYFeet_FUN_00467010(void)

#include "nocturne.h"

void __cdecl shape_design_c_sizeModelToYFeet_FUN_00467010(void)

{
  char cVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [2];
  float local_18;
  float local_14;
  
  bVar5 = 0;
  local_18 = 999999.9;
  local_14 = -999999.9;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff84,0x14,0,0x16,"Enter Y distance in feet (,min,max for user-defined min/max points) : ");
  iVar3 = -1;
  pcVar4 = &stack0xffffff84;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    return;
  }
  iVar3 = crt_stdio_c_sscanf_FUN_0060013c
                    (&stack0xffffff84,"%f,%d,%d",local_20,&local_24,&local_28);
  if (iVar3 < 2) {
    for (local_2c = 0; local_2c < g_VertexCount; local_2c = local_2c + 1) {
      fVar2 = g_LoadedVertices[local_2c].vertex.y;
      if (local_14 < fVar2) {
        local_14 = fVar2;
      }
      if (fVar2 < local_18) {
        local_18 = fVar2;
      }
    }
  }
  else {
    if (iVar3 != 3) {
      engine_2d_c_drawText_FUN_00401fd0("Need distance and two points.",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    if ((((local_24 < 0) || (local_28 < 0)) || (g_VertexCount + -1 < local_24)) ||
       (g_VertexCount + -1 < local_28)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      return;
    }
    local_14 = g_LoadedVertices[local_28].vertex.y;
    local_18 = g_LoadedVertices[local_24].vertex.y;
  }
  local_20[0] = local_20[0] / (local_14 - local_18);
  for (local_2c = 0; local_2c < g_VertexCount; local_2c = local_2c + 1) {
    g_LoadedVertices[local_2c].vertex.x = g_LoadedVertices[local_2c].vertex.x * local_20[0];
    g_LoadedVertices[local_2c].vertex.y = g_LoadedVertices[local_2c].vertex.y * local_20[0];
    g_LoadedVertices[local_2c].vertex.z = g_LoadedVertices[local_2c].vertex.z * local_20[0];
  }
  return;
}
