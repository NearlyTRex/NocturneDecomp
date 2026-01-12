// Name: shape_design.c_createCenterVertex_FUN_00469690
// Address: 00469690
// Address Range: [[00469690, 00469849]]
// Convention: __cdecl
// Signature: void shape_design.c_createCenterVertex_FUN_00469690(void)

#include "nocturne.h"

void __cdecl shape_design_c_createCenterVertex_FUN_00469690(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff64,10,0,0,"Enter # of vertices to use : ");
  iVar2 = -1;
  pcVar4 = &stack0xffffff64;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (((iVar2 != -2) && (iVar2 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff64), 0 < iVar2)) &&
     (iVar2 < 9)) {
    local_28 = 0xb;
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    for (local_14 = 0; local_14 < iVar2; local_14 = local_14 + 1) {
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff64,10,0,local_28,"Enter vertex # : ");
      iVar3 = -1;
      pcVar4 = &stack0xffffff64;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 == -2) {
        return;
      }
      iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff64);
      if (iVar3 < 0) {
        return;
      }
      if (g_VertexCount <= iVar3) {
        return;
      }
      local_24 = local_24 + g_LoadedVertices[iVar3].vertex.x;
      local_20 = local_20 + g_LoadedVertices[iVar3].vertex.y;
      local_1c = local_1c + g_LoadedVertices[iVar3].vertex.z;
      local_28 = local_28 + 0xb;
    }
    g_LoadedVertices[g_VertexCount].vertex.x = local_24 / (float)iVar2;
    g_LoadedVertices[g_VertexCount].vertex.y = local_20 / (float)iVar2;
    g_LoadedVertices[g_VertexCount].vertex.z = local_1c / (float)iVar2;
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff64,"New vertex created : %d.  Press a key...",g_VertexCount);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff64,0,local_28 + 0xb);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    g_VertexCount = g_VertexCount + 1;
  }
  return;
}
