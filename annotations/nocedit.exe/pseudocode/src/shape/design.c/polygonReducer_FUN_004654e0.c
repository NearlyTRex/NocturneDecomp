// Name: shape_design.c_polygonReducer_FUN_004654e0
// Address: 004654e0
// Address Range: [[004654e0, 0046555f]]
// Convention: __cdecl
// Signature: void shape_design.c_polygonReducer_FUN_004654e0(void)

#include "nocturne.h"

void __cdecl shape_design_c_polygonReducer_FUN_004654e0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  int local_14;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                    (&stack0xffffff9c,0x14,0,0,"Enter 1 for full pass or 2 for single pass [1] : ");
  if (iVar2 != 0x1b) {
    local_14 = 1;
    iVar2 = -1;
    pcVar3 = &stack0xffffff9c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      local_14 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff9c);
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
