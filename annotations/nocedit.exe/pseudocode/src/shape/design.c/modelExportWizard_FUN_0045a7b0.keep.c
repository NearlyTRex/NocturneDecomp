// Name: shape_design.c_modelExportWizard_FUN_0045a7b0
// Address: 0045a7b0
// MANUAL RECONSTRUCTION
// Address Range: [[0045a7b0, 0045aa7a]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_modelExportWizard_FUN_0045a7b0(int export_format_type)

#include "nocturne.h"

void __cdecl shape_design_c_modelExportWizard_FUN_0045a7b0(int export_format_type)

{
  uint uVar4;
  int iVar5;
  int scale_mode;
  int include_textures;
  char *pcVar4;
  char local_6c [80];

  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_6c,0x28,0,0,"Binary filename to write : ")
  ;
  if (strlen(local_6c) == 0) {
    return;
  }
  pcVar4 = strchr(local_6c,'.');
  if (pcVar4 == (char *)0x0) {
    if (strlen(local_6c) < 9) {
      if (export_format_type == 0) {
        strcat(local_6c,".ASM");
      }
      else if (export_format_type == 1) {
        strcat(local_6c,".BIN");
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
    uVar4 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    iVar5 = toupper(uVar4 & 0xff);
    if ((((iVar5 == 0x4e) || (iVar5 == 0x59)) || (iVar5 == 0x58)) ||
       ((iVar5 == 0x5a || (iVar5 == 0x54)))) {
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
          uVar4 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          scale_mode = toupper(uVar4 & 0xff);
        } while (scale_mode < 0x31);
      } while (0x36 < scale_mode);
      engine_2d_c_drawText_FUN_00401fd0("Include texture maps? (Y/N) ",0,0xd1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar4 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      include_textures = toupper(uVar4 & 0xff);
      shape_design_c_exportModelToBIN_FUN_0045aa80
                (local_6c,iVar5,scale_mode,export_format_type,include_textures);
      return;
    }
    if ((iVar5 == 0x52) || ((iVar5 == 0x47 || (iVar5 == 0x48)))) goto LAB_0045a97c;
  } while( true );
}
