// Name: shape_design.c_modelExportWizard_FUN_0045a7b0
// Address: 0045a7b0
// Address Range: [[0045a7b0, 0045aa7a]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_modelExportWizard_FUN_0045a7b0(int export_format_type)

#include "nocturne.h"

void __cdecl shape_design_c_modelExportWizard_FUN_0045a7b0(int export_format_type)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_6c [80];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_6c,0x28,0,0,"Binary filename to write : ")
  ;
  iVar2 = -1;
  pcVar5 = local_6c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    return;
  }
  pcVar5 = local_6c;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_0045a814;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_0045a814;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_0045a814:
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = local_6c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 9) {
      if (export_format_type == 0) {
        pcVar4 = ".ASM";
        iVar2 = -1;
        pcVar5 = local_6c;
        do {
          pcVar6 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
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
      else if (export_format_type == 1) {
        pcVar4 = ".BIN";
        iVar2 = -1;
        pcVar5 = local_6c;
        do {
          pcVar6 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
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
  }
  do {
    engine_2d_c_drawText_FUN_00401fd0("N) No reset depth",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("T) Transparent",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("Y) Reset depth",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("X) No sort",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("Z) Perspective reset depth for big objects",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("R) Z buffered Tree",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("G) Giant (bigger than 255 feet wide) object",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("H) Huge flat track",0,99);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar3 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = toupper(uVar3 & 0xff);
    if ((((local_1c == 0x4e) || (local_1c == 0x59)) || (local_1c == 0x58)) ||
       ((local_1c == 0x5a || (local_1c == 0x54)))) {
LAB_0045a97c:
      do {
        do {
          engine_2d_c_drawText_FUN_00401fd0("1. Scale to fit",0,0x79);
          engine_2d_c_drawText_FUN_00401fd0("2. Normalize X",0,0x84);
          engine_2d_c_drawText_FUN_00401fd0("3. Normalize Y",0,0x8f);
          engine_2d_c_drawText_FUN_00401fd0("4. Normalize Z",0,0x9a);
          engine_2d_c_drawText_FUN_00401fd0("5. Do not scale",0,0xa5);
          engine_2d_c_drawText_FUN_00401fd0("6. Animated model scale",0,0xb0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          uVar3 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          local_14 = toupper(uVar3 & 0xff);
        } while (local_14 < 0x31);
      } while (0x36 < local_14);
      engine_2d_c_drawText_FUN_00401fd0("Include texture maps? (Y/N) ",0,0xd1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar3 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      local_18 = toupper(uVar3 & 0xff);
      shape_design_c_exportModelToBIN_FUN_0045aa80
                (local_6c,local_1c,local_14,export_format_type,local_18);
      return;
    }
    if ((local_1c == 0x52) || ((local_1c == 0x47 || (local_1c == 0x48)))) goto LAB_0045a97c;
  } while( true );
}
