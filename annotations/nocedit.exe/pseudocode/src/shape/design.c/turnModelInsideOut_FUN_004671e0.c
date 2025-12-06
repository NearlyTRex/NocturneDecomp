// Name: shape_design.c_turnModelInsideOut_FUN_004671e0
// Address: 004671e0
// Address Range: [[004671e0, 0046734e]]
// Convention: __cdecl
// Signature: void shape_design.c_turnModelInsideOut_FUN_004671e0(void)

#include "nocturne.h"

void __cdecl shape_design_c_turnModelInsideOut_FUN_004671e0(void)

{
  uint uVar1;
  float *value2_ptr;
  float *pfVar2;
  int iVar3;
  
  for (pfVar2 = (float *)0x0; (int)pfVar2 < g_PolygonCount; pfVar2 = (float *)((int)pfVar2 + 1)) {
    uVar1 = g_ModelPolygonData[(int)pfVar2].vertex_indices_count;
    iVar3 = 0;
    while (iVar3 < (int)uVar1 / 2) {
      shape_design_c_swapDWords_FUN_00462130
                ((uint *)((int)pfVar2 * 0x184 + 0x16e99c8 + iVar3 * 4),
                 (uint *)((int)pfVar2 * 0x184 + (uVar1 - iVar3) * 4 + 0x16e99c4));
      pfVar2 = (float *)((int)pfVar2 * 0x184 + (uVar1 - iVar3) * 4 + 0x16e9a04);
      shape_design_c_swapFloats_FUN_00462160
                ((float *)((int)pfVar2 * 0x184 + 0x16e9a08 + iVar3 * 4),pfVar2);
      value2_ptr = (float *)((int)pfVar2 * 0x184 + (uVar1 - iVar3) * 4 + 0x16e9a44);
      pfVar2 = (float *)((int)pfVar2 * 0x184 + 0x16e9a48 + (int)value2_ptr * 4);
      shape_design_c_swapFloats_FUN_00462160(pfVar2,value2_ptr);
      iVar3 = (int)value2_ptr + 1;
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Model turned inside out.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}
