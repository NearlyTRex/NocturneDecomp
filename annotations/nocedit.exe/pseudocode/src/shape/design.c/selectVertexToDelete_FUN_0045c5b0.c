// Name: shape_design.c_selectVertexToDelete_FUN_0045c5b0
// Address: 0045c5b0
// Address Range: [[0045c5b0, 0045c6bf]]
// Convention: __cdecl
// Signature: void shape_design.c_selectVertexToDelete_FUN_0045c5b0(void)

#include "nocturne.h"

void __cdecl shape_design_c_selectVertexToDelete_FUN_0045c5b0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffffd0,0x13,0,0xb,"Point to delete : ");
  local_18 = -1;
  iVar2 = -1;
  pcVar5 = &stack0xffffffd0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_18 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffffd0);
  }
  if ((-1 < local_18) && (local_18 < g_VertexCount)) {
    for (local_14 = local_18; local_14 < g_VertexCount + -1; local_14 = local_14 + 1) {
      puVar6 = (uint *)(local_14 * 0x14 + 0x1626410 + (uint)bVar8 * -8);
      puVar3 = (uint *)((local_14 + 1) * 0x14 + 0x1626410 + (uint)bVar8 * -8);
      g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14 + 1].vertex.x;
      puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar4 = puVar3 + (uint)bVar8 * -2 + 1;
      *puVar6 = *puVar3;
      *puVar7 = *puVar4;
      puVar7[(uint)bVar8 * -2 + 1] = puVar4[(uint)bVar8 * -2 + 1];
      (puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (puVar4 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
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
