// Name: shape_design.c_turnModelInsideOut_FUN_004671e0
// Address: 004671e0
// Address Range: [[004671e0, 0046734e]]
// Convention: __cdecl
// Signature: void shape_design.c_turnModelInsideOut_FUN_004671e0(void)

#include "nocturne.h"

void __cdecl shape_design_c_turnModelInsideOut_FUN_004671e0(void)

{
  uint uVar1;
  int iVar2;
  int local_18;
  
  for (iVar2 = 0; iVar2 < g_PolygonCount; iVar2 = iVar2 + 1) {
    uVar1 = g_ModelPolygonData[iVar2].vertex_indices_count;
    for (local_18 = 0; local_18 < (int)uVar1 / 2; local_18 = local_18 + 1) {
      shape_design_c_swapDWords_FUN_00462130
                ((uint *)(iVar2 * 0x184 + 0x16e99c8 + local_18 * 4),
                 (uint *)(iVar2 * 0x184 + (uVar1 - local_18) * 4 + 0x16e99c4));
      shape_design_c_swapFloats_FUN_00462160
                ((float *)(iVar2 * 0x184 + 0x16e9a08 + local_18 * 4),
                 (float *)(iVar2 * 0x184 + (uVar1 - local_18) * 4 + 0x16e9a04));
      shape_design_c_swapFloats_FUN_00462160
                ((float *)(iVar2 * 0x184 + 0x16e9a48 + local_18 * 4),
                 (float *)(iVar2 * 0x184 + (uVar1 - local_18) * 4 + 0x16e9a44));
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Model turned inside out.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}
