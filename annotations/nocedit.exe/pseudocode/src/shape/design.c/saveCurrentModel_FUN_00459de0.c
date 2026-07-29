// Name: shape_design.c_saveCurrentModel_FUN_00459de0
// Address: 00459de0
// Address Range: [[00459de0, 00459e7d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

#include "nocturne.h"

void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

{
  char cVar2;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar3;
  char *pcVar6;
  char *pcVar7;
  byte bVar7;
  char local_60 [80];
  char cVar1;
  
  bVar7 = 0;
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_60,0x28,0,0,"Model name to save : ");
  pcVar5 = local_60;
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
    pcVar3 = local_60;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < 9) {
      pcVar3 = ".MDL";
      iVar3 = -1;
      pcVar6 = local_60;
      do {
        pcVar6 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6;
      } while (cVar2 != '\0');
      pcVar7 = pcVar6 + -1;
      do {
        cVar2 = *pcVar3;
        *pcVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar7[1] = cVar2;
        pcVar7 = pcVar7 + 2;
      } while (cVar2 != '\0');
    }
  }
  shape_design_c_exportModelToMDL_FUN_00459e80(local_60);
  return;
}
