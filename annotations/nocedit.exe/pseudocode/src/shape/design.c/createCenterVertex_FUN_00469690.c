// Name: shape_design.c_createCenterVertex_FUN_00469690
// Address: 00469690
// Address Range: [[00469690, 00469849]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_createCenterVertex_FUN_00469690(void)

#include "nocturne.h"

void __cdecl shape_design_c_createCenterVertex_FUN_00469690(void)

{
  char cVar2;
  int iVar3;
  int iVar2;
  int iVar4;
  char *pcVar5;
  char *pcVar3;
  byte bVar4;
  char local_9c [112];
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  char cVar1;
  
  bVar4 = 0;
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_9c,10,0,0,"Enter # of vertices to use : ");
  iVar2 = -1;
  pcVar5 = local_9c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (((iVar2 != -2) && (iVar3 = atoi(local_9c), 0 < iVar3)) &&
     (iVar3 < 9)) {
    local_28 = 0xb;
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    for (local_14 = 0; local_14 < iVar3; local_14 = local_14 + 1) {
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_9c,10,0,local_28,"Enter vertex # : ");
      iVar4 = -1;
      pcVar3 = local_9c;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3;
      } while (cVar2 != '\0');
      if (iVar4 == -2) {
        return;
      }
      iVar4 = atoi(local_9c);
      if (iVar4 < 0) {
        return;
      }
      if (g_VertexCount <= iVar4) {
        return;
      }
      local_24 = local_24 + g_LoadedVertices[iVar4].vertex.x;
      local_20 = local_20 + g_LoadedVertices[iVar4].vertex.y;
      local_1c = local_1c + g_LoadedVertices[iVar4].vertex.z;
      local_28 = local_28 + 0xb;
    }
    g_LoadedVertices[g_VertexCount].vertex.x = local_24 / (float)iVar3;
    g_LoadedVertices[g_VertexCount].vertex.y = local_20 / (float)iVar3;
    g_LoadedVertices[g_VertexCount].vertex.z = local_1c / (float)iVar3;
    _sprintf(local_9c,"New vertex created : %d.  Press a key...",g_VertexCount);
    engine_2d_c_drawText_FUN_00401fd0(local_9c,0,local_28 + 0xb);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    g_VertexCount = g_VertexCount + 1;
  }
  return;
}
