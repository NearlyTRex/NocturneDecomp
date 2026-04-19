// Name: shape_design.c_selectVertexToMove_FUN_0045c530
// Address: 0045c530
// MANUAL RECONSTRUCTION
// Address Range: [[0045c530, 0045c5a6]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_selectVertexToMove_FUN_0045c530(void)

#include "nocturne.h"

void __cdecl shape_design_c_selectVertexToMove_FUN_0045c530(void)

{
  char local_28 [20];
  int local_14;

  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_28,0x13,0,0xb,"Point to move : ");
  local_14 = -1;
  if (local_28[0] != '\0') {
    local_14 = atoi(local_28);
  }
  if ((-1 < local_14) && (local_14 < g_VertexCount)) {
    g_PointEditorMode = 1;
    g_SelectedPointIndex = local_14;
  }
  return;
}
