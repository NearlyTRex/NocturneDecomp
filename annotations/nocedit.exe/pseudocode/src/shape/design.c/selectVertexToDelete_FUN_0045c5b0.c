// Name: shape_design.c_selectVertexToDelete_FUN_0045c5b0
// Address: 0045c5b0
// Address Range: [[0045c5b0, 0045c6bf] [00604da4, 00604dca]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_selectVertexToDelete_FUN_0045c5b0(void)

#include "nocturne.h"

void __cdecl shape_design_c_selectVertexToDelete_FUN_0045c5b0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  char local_30 [20];
  int local_1c;
  int local_18;
  int local_14;
  char cVar1;
  
  bVar8 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_30,0x13,0,0xb,"Point to delete : ");
  local_18 = -1;
  iVar2 = -1;
  pcVar5 = local_30;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_18 = atoi(local_30);
  }
  if ((-1 < local_18) && (local_18 < g_VertexCount)) {
    for (local_14 = local_18; local_14 < g_VertexCount + -1; local_14 = local_14 + 1) {
      iVar1 = local_14 + 1;
      g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[iVar1].vertex.x;
      g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[iVar1].vertex.y;
      g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[iVar1].vertex.z;
      g_LoadedVertices[local_14].u = g_LoadedVertices[iVar1].u;
      g_LoadedVertices[local_14].v = g_LoadedVertices[iVar1].v;
    }
    g_VertexCount = g_VertexCount + -1;
  }
  for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
    for (local_1c = 0; local_1c < (int)g_ModelPolygonData[local_14].vertex_indices_count;
        local_1c = local_1c + 1) {
      if (local_18 <= (int)g_ModelPolygonData[local_14].vertex_indices[local_1c]) {
        g_ModelPolygonData[local_14].vertex_indices[local_1c] =
             g_ModelPolygonData[local_14].vertex_indices[local_1c] - 1;
      }
    }
  }
  return;
}
