// Name: shape_design.c_selectVertexToMove_FUN_0045c530
// Address: 0045c530
// Address Range: [[0045c530, 0045c5a6]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_selectVertexToMove_FUN_0045c530(void)

#include "nocturne.h"

/* Signature: byte shape_design.c_PointToMove() */

void __cdecl shape_design_c_selectVertexToMove_FUN_0045c530(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_28 [20];
  int local_14;
  
  bVar4 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_28,0x13,0,0xb,"Point to move : ");
  local_14 = -1;
  iVar2 = -1;
  pcVar3 = local_28;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_14 = atoi(local_28);
  }
  if ((-1 < local_14) && (local_14 < g_VertexCount)) {
    g_PointEditorMode = 1;
    g_SelectedPointIndex = local_14;
  }
  return;
}
