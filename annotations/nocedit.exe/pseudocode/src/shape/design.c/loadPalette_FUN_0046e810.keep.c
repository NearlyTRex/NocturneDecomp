// Name: shape_design.c_loadPalette_FUN_0046e810
// Address: 0046e810
// MANUAL RECONSTRUCTION
// Address Range: [[0046e810, 0046eb7d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_loadPalette_FUN_0046e810(void)

#include "nocturne.h"

void __cdecl shape_design_c_loadPalette_FUN_0046e810(void)

{
  int iVar2;
  int iVar3;
  char *pcVar7;
  char local_b8 [80];
  char local_68 [80];
  int local_14;

  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("  1) Load model palette",0,0x16);
  engine_2d_c_drawText_FUN_00401fd0("  2) Load .ACT file palette",0,0x21);
  engine_2d_c_drawText_FUN_00401fd0("  3) Load default editor palette",0,0x2c);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0(local_b8,0x14,0,0,"Enter option [1] : ");
  if (iVar2 == 0x1b) {
    return;
  }
  local_14 = 1;
  if (strlen(local_b8) != 0) {
    local_14 = atoi(local_b8);
  }
  if (local_14 == 1) {
    if (g_LoadedModelName[0] == '\0') {
      engine_2d_c_drawText_FUN_00401fd0("No model loaded.  Hit a key...",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    strcpy(local_68,g_LoadedModelName);
    pcVar7 = strchr(local_68,'.');
    if (pcVar7 == (char *)0x0) {
      if (strlen(local_68) < 9) {
        strcat(local_68,".ACT");
      }
    }
    else {
      strcpy(pcVar7,".ACT");
    }
    iVar3 = engine_dosio_cpp_getFileSize_FUN_00481880("art",local_68);
    if (iVar3 == -1) {
      engine_2d_c_drawText_FUN_00401fd0("File not found.  Hit a key...",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    engine_2d_c_loadPaletteFile_FUN_004015a0(local_68);
    engine_2d_c_loadLightTable_FUN_00402860(local_68);
    engine_2d_c_loadOrBuildColorMap_FUN_00402930(local_68);
    engine_2d_c_buildBlendTables_FUN_00401590(local_68);
  }
  else if (local_14 == 2) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_68,0x4f,0,0x42,"Enter .ACT filename : ");
    pcVar7 = strchr(local_68,'.');
    if (pcVar7 == (char *)0x0) {
      if (strlen(local_68) < 9) {
        strcat(local_68,".ACT");
      }
    }
    else {
      strcpy(pcVar7,".ACT");
    }
    iVar3 = engine_dosio_cpp_getFileSize_FUN_00481880("art",local_68);
    if (iVar3 == -1) {
      engine_2d_c_drawText_FUN_00401fd0("File not found.  Hit a key...",0,0x58);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  }
  else {
    if (local_14 != 3) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid option.  Hit a key...",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    engine_2d_c_loadPaletteFile_FUN_004015a0("vga.act");
    engine_2d_c_loadLightTable_FUN_00402860("vga.lte");
    engine_2d_c_loadOrBuildColorMap_FUN_00402930("vga.act");
    engine_2d_c_buildBlendTables_FUN_00401590("vga.act");
  }
  wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
  engine_2d_c_drawText_FUN_00401fd0("New palette loaded.  Hit a key...",0,0x58);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
