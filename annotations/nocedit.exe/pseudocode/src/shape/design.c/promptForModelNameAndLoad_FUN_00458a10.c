// Name: shape_design.c_promptForModelNameAndLoad_FUN_00458a10
// Address: 00458a10
// Address Range: [[00458a10, 00458ab3]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_promptForModelNameAndLoad_FUN_00458a10(void)

#include "nocturne.h"

int __cdecl shape_design_c_promptForModelNameAndLoad_FUN_00458a10(void)

{
  char cVar2;
  int iVar2;
  uint uVar3;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar7;
  char *pcVar6;
  char *pcVar8;
  byte bVar7;
  char local_64 [84];
  char cVar1;
  
  bVar7 = 0;
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_64,0x28,0,0,"Model name to load : ");
  pcVar5 = local_64;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00458a59;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_00458a59;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00458a59:
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar7 = local_64;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 9) {
      pcVar7 = ".MDL";
      iVar3 = -1;
      pcVar6 = local_64;
      do {
        pcVar6 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6;
      } while (cVar2 != '\0');
      pcVar8 = pcVar6 + -1;
      do {
        cVar2 = *pcVar7;
        *pcVar8 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar8[1] = cVar2;
        pcVar8 = pcVar8 + 2;
      } while (cVar2 != '\0');
    }
  }
  iVar2 = shape_design_c_loadModelFile_FUN_00458ac0(local_64);
  return iVar2;
}
