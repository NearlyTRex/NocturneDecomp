// Name: shape_design.c_saveCurrentModel_FUN_00459de0
// Address: 00459de0
// Address Range: [[00459de0, 00459e7d]]
// Convention: __cdecl
// Signature: void shape_design.c_saveCurrentModel_FUN_00459de0(void)

#include "nocturne.h"

void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffffa0,0x28,0,0,"Model name to save : ");
  pcVar5 = &stack0xffffffa0;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00459e29;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_00459e29;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00459e29:
  if (pcVar4 == (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar5 = &stack0xffffffa0;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < 9) {
      pcVar4 = ".MDL";
      iVar3 = -1;
      pcVar5 = &stack0xffffffa0;
      do {
        pcVar6 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
  }
  shape_design_c_exportModelToMDL_FUN_00459e80(&stack0xffffffa0);
  return;
}
