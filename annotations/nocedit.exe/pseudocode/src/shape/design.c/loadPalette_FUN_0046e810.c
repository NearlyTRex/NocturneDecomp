// Name: shape_design.c_loadPalette_FUN_0046e810
// Address: 0046e810
// Address Range: [[0046e810, 0046eb7d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_loadPalette_FUN_0046e810(void)

#include "nocturne.h"

void __cdecl shape_design_c_loadPalette_FUN_0046e810(void)

{
  char cVar2;
  int iVar2;
  int iVar3;
  uint uVar3;
  uint uVar4;
  char *pcVar4;
  char *pcVar7;
  char *pcVar8;
  char *pcVar5;
  char *pcVar6;
  char *pcVar9;
  byte bVar7;
  char local_b8 [80];
  char local_68 [80];
  char *local_18;
  int local_14;
  char cVar1;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("  1) Load model palette",0,0x16);
  engine_2d_c_drawText_FUN_00401fd0("  2) Load .ACT file palette",0,0x21);
  engine_2d_c_drawText_FUN_00401fd0("  3) Load default editor palette",0,0x2c);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0(local_b8,0x14,0,0,"Enter option [1] : ");
  if (iVar2 == 0x1b) {
    return;
  }
  local_14 = 1;
  iVar3 = -1;
  pcVar8 = local_b8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
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
    pcVar4 = g_LoadedModelName;
    pcVar5 = local_68;
    do {
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pcVar8 = local_68;
    do {
      pcVar7 = pcVar8;
      if (*pcVar8 == '.') goto LAB_0046e929;
      if (*pcVar8 == '\0') break;
      pcVar7 = pcVar8 + 1;
      if (*pcVar7 == '.') goto LAB_0046e929;
      pcVar8 = pcVar8 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
LAB_0046e929:
    if (pcVar7 == (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar8 = local_68;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
      } while (cVar2 != '\0');
      if (~uVar3 - 1 < 9) {
        pcVar8 = ".ACT";
        iVar3 = -1;
        pcVar6 = local_68;
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
          cVar2 = *pcVar8;
          *pcVar7 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
      }
    }
    else {
      pcVar8 = ".ACT";
      do {
        cVar2 = *pcVar8;
        *pcVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar2;
        pcVar7 = pcVar7 + 2;
      } while (cVar2 != '\0');
    }
    iVar3 = engine_dosio_c_getFileSize_FUN_00481880("art",local_68);
    if (iVar3 == -1) {
      engine_2d_c_drawText_FUN_00401fd0("File not found.  Hit a key...",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    engine_2d_c_loadPaletteFile_FUN_004015a0(local_68);
    engine_2d_c_doNothing2_FUN_00402860(local_68);
    engine_2d_c_loadOrBuildColorMap_FUN_00402930(local_68);
    engine_2d_c_doNothing1_FUN_00401590(local_68);
  }
  else if (local_14 == 2) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_68,0x4f,0,0x42,"Enter .ACT filename : ");
    pcVar8 = local_68;
    do {
      pcVar7 = pcVar8;
      if (*pcVar8 == '.') goto LAB_0046ea46;
      if (*pcVar8 == '\0') break;
      pcVar7 = pcVar8 + 1;
      if (*pcVar7 == '.') goto LAB_0046ea46;
      pcVar8 = pcVar8 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
LAB_0046ea46:
    if (pcVar7 == (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar8 = local_68;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
      } while (cVar2 != '\0');
      if (~uVar4 - 1 < 9) {
        pcVar7 = ".ACT";
        iVar3 = -1;
        pcVar8 = local_68;
        do {
          pcVar9 = pcVar8;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar9 = pcVar8 + (uint)bVar7 * -2 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar2 != '\0');
        pcVar9 = pcVar9 + -1;
        do {
          cVar2 = *pcVar7;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
      }
    }
    else {
      pcVar8 = ".ACT";
      do {
        cVar2 = *pcVar8;
        *pcVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar2;
        pcVar7 = pcVar7 + 2;
      } while (cVar2 != '\0');
    }
    iVar3 = engine_dosio_c_getFileSize_FUN_00481880("art",local_68);
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
    engine_2d_c_doNothing2_FUN_00402860("vga.lte");
    engine_2d_c_loadOrBuildColorMap_FUN_00402930("vga.act");
    engine_2d_c_doNothing1_FUN_00401590("vga.act");
  }
  wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
  engine_2d_c_drawText_FUN_00401fd0("New palette loaded.  Hit a key...",0,0x58);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
