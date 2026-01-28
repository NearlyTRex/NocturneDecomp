// Name: shape_design.c_sizeModelToZFeet_FUN_00466c70
// Address: 00466c70
// Address Range: [[00466c70, 00466e30]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_sizeModelToZFeet_FUN_00466c70(void)

#include "nocturne.h"

void __cdecl shape_design_c_sizeModelToZFeet_FUN_00466c70(void)

{
  char cVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_7c [80];
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
            (local_7c,0x14,0,0x16,"Enter Z distance in feet (,min,max for user-defined min/max points) : ");
  iVar3 = -1;
  pcVar4 = local_7c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    return;
  }
  local_2c = crt_stdio_c_sscanf_FUN_0060013c(local_7c,"%f,%d,%d",local_20,&local_24,&local_28)
  ;
  if (local_2c < 2) {
    for (local_2c = 0; local_2c < g_VertexCount; local_2c = local_2c + 1) {
      fVar2 = g_LoadedVertices[local_2c].vertex.z;
      if (local_14 < fVar2) {
        local_14 = fVar2;
      }
      if (fVar2 < local_18) {
        local_18 = fVar2;
      }
    }
  }
  else {
    if (local_2c != 3) {
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
    local_14 = g_LoadedVertices[local_28].vertex.z;
    local_18 = g_LoadedVertices[local_24].vertex.z;
  }
  local_20[0] = local_20[0] / (local_14 - local_18);
  for (local_2c = 0; local_2c < g_VertexCount; local_2c = local_2c + 1) {
    g_LoadedVertices[local_2c].vertex.x = g_LoadedVertices[local_2c].vertex.x * local_20[0];
    g_LoadedVertices[local_2c].vertex.y = g_LoadedVertices[local_2c].vertex.y * local_20[0];
    g_LoadedVertices[local_2c].vertex.z = g_LoadedVertices[local_2c].vertex.z * local_20[0];
  }
  return;
}
