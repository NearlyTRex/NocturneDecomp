// Name: shape_design.c_deleteSinglePolygon_FUN_0045dcc0
// Address: 0045dcc0
// MANUAL RECONSTRUCTION
// Address Range: [[0045dcc0, 0045dd6c]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_deleteSinglePolygon_FUN_0045dcc0(void)

#include "nocturne.h"

void __cdecl shape_design_c_deleteSinglePolygon_FUN_0045dcc0(void)

{
  char local_6c [80];
  int local_1c;

  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_6c,0x14,0,0,"Polygon # to delete : ");
  if (((strlen(local_6c) != 0) && (local_1c = atoi(local_6c), -1 < local_1c)) &&
     (local_1c < g_PolygonCount)) {
    for (; local_1c < g_PolygonCount + -1; local_1c = local_1c + 1) {
      g_ModelPolygonData[local_1c] = g_ModelPolygonData[local_1c + 1];
    }
    g_PolygonCount = g_PolygonCount + -1;
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
