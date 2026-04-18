// Name: shape_design.c_saveCurrentModel_FUN_00459de0
// Address: 00459de0
// MANUAL RECONSTRUCTION
// Address Range: [[00459de0, 00459e7d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

#include "nocturne.h"

void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

{
  char *pcVar4;
  char *pcVar5;
  char local_60 [80];

  wincore_windll_cpp_clearScreen_FUN_005b3e70();
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
    if (strlen(local_60) < 9) {
      strcat(local_60,".MDL");
    }
  }
  shape_design_c_exportModelToMDL_FUN_00459e80(local_60);
  return;
}
