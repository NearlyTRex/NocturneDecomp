// Name: shape_design.c_polygonReducer_FUN_004654e0
// Address: 004654e0
// MANUAL RECONSTRUCTION
// Address Range: [[004654e0, 0046555f]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_polygonReducer_FUN_004654e0(void)

#include "nocturne.h"

void __cdecl shape_design_c_polygonReducer_FUN_004654e0(void)

{
  int iVar2;
  char local_64 [80];
  int local_14;

  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                    (local_64,0x14,0,0,"Enter 1 for full pass or 2 for single pass [1] : ");
  if (iVar2 != 0x1b) {
    local_14 = 1;
    if (local_64[0] != '\0') {
      local_14 = atoi(local_64);
    }
    if (local_14 == 1) {
      shape_design_c_configureFullPassPolygonReduction_FUN_00465810(1);
    }
    else if (local_14 == 2) {
      shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(1);
    }
  }
  return;
}
