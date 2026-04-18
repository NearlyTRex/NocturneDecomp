// Name: shape_design.c_promptForModelNameAndLoad_FUN_00458a10
// Address: 00458a10
// MANUAL RECONSTRUCTION
// Address Range: [[00458a10, 00458ab3]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_promptForModelNameAndLoad_FUN_00458a10(void)

#include "nocturne.h"

int __cdecl shape_design_c_promptForModelNameAndLoad_FUN_00458a10(void)

{
  int iVar2;
  char *pcVar4;
  char *pcVar5;
  char local_64 [84];

  wincore_windll_cpp_clearScreen_FUN_005b3e70();
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
    if (strlen(local_64) < 9) {
      strcat(local_64,".MDL");
    }
  }
  iVar2 = shape_design_c_loadModelFile_FUN_00458ac0(local_64);
  return iVar2;
}
