// Name: shape_design.c_saveCurrentModel_FUN_00459de0
// Address: 00459de0
// MANUAL RECONSTRUCTION
// Address Range: [[00459de0, 00459e7d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

#include "nocturne.h"

void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

{
  char local_60 [80];

  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_60,0x28,0,0,"Model name to save : ");
  if (strchr(local_60,'.') == (char *)0x0) {
    if (strlen(local_60) < 9) {
      strcat(local_60,".MDL");
    }
  }
  shape_design_c_exportModelToMDL_FUN_00459e80(local_60);
  return;
}
