// Name: shape_design.c_selectModelPart_FUN_0045de80
// Address: 0045de80
// MANUAL RECONSTRUCTION
// Address Range: [[0045de80, 0045df53]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_selectModelPart_FUN_0045de80(void)

#include "nocturne.h"

void __cdecl shape_design_c_selectModelPart_FUN_0045de80(void)

{
  int iVar3;
  char local_2c [20];
  int local_18;
  int local_14;

  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_2c,0x13,0,0xb,"Part name : ");
  if (local_2c[0] != '\0') {
    local_14 = -1;
    for (local_18 = 0; local_18 < g_PartsCount; local_18 = local_18 + 1) {
      iVar3 = _strcmp(local_2c,g_ModelPartNames[local_18].name);
      if (iVar3 == 0) {
        local_14 = local_18;
        break;
      }
    }
    if (local_14 == -1) {
      strcpy(g_ModelPartNames[g_PartsCount].name,local_2c);
      g_CurrentPartIndex = g_PartsCount;
      g_PartsCount = g_PartsCount + 1;
    }
    else {
      g_CurrentPartIndex = local_14;
    }
  }
  return;
}
