// Name: shape_design.c_selectModelPart_FUN_0045de80
// Address: 0045de80
// Address Range: [[0045de80, 0045df53]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_selectModelPart_FUN_0045de80(void)

#include "nocturne.h"

void __cdecl shape_design_c_selectModelPart_FUN_0045de80(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  char local_2c [20];
  int local_18;
  int local_14;
  
  bVar5 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_2c,0x13,0,0xb,"Part name : ");
  iVar2 = -1;
  pcVar3 = local_2c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_14 = -1;
    for (local_18 = 0; local_18 < g_PartsCount; local_18 = local_18 + 1) {
      iVar2 = strcmp(local_2c,g_ModelPartNames[local_18].name);
      if (iVar2 == 0) {
        local_14 = local_18;
        break;
      }
    }
    if (local_14 == -1) {
      pcVar3 = local_2c;
      pcVar4 = g_ModelPartNames[g_PartsCount].name;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      g_CurrentPartIndex = g_PartsCount;
      g_PartsCount = g_PartsCount + 1;
    }
    else {
      g_CurrentPartIndex = local_14;
    }
  }
  return;
}
