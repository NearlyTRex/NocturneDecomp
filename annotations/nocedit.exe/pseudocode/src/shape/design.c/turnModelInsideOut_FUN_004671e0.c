// Name: shape_design.c_turnModelInsideOut_FUN_004671e0
// Address: 004671e0
// Address Range: [[004671e0, 0046734e]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_turnModelInsideOut_FUN_004671e0(void)

#include "nocturne.h"

void __cdecl shape_design_c_turnModelInsideOut_FUN_004671e0(void)

{
  int local_1c;
  int local_18;
  uint uVar1;
  
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    uVar1 = g_ModelPolygonData[local_1c].vertex_indices_count;
    for (local_18 = 0; local_18 < (int)uVar1 / 2; local_18 = local_18 + 1) {
      shape_design_c_swapDWords_FUN_00462130
                ((uint *)(local_1c * 0x184 + 0x16e99c8 + local_18 * 4),
                 (uint *)(local_1c * 0x184 + (uVar1 - local_18) * 4 + 0x16e99c4));
      shape_design_c_swapFloats_FUN_00462160
                ((float *)(local_1c * 0x184 + 0x16e9a08 + local_18 * 4),
                 (float *)(local_1c * 0x184 + (uVar1 - local_18) * 4 + 0x16e9a04));
      shape_design_c_swapFloats_FUN_00462160
                ((float *)(local_1c * 0x184 + 0x16e9a48 + local_18 * 4),
                 (float *)(local_1c * 0x184 + (uVar1 - local_18) * 4 + 0x16e9a44));
    }
  }
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Model turned inside out.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}
