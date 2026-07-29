// Name: shape_design.c_displayPalette_FUN_00461560
// Address: 00461560
// MANUAL RECONSTRUCTION
// Address Range: [[00461560, 0046169d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_displayPalette_FUN_00461560(int color)

#include "nocturne.h"

void __cdecl shape_design_c_displayPalette_FUN_00461560(int color)

{
  int iVar3;
  char local_7c [80];
  int local_2c;
  int local_14;

  engine_special_cpp_clearScreen_FUN_005b3e70();
  local_14 = 0;
  for (local_2c = 0; local_2c < 0x100; local_2c = local_2c + 1) {
    iVar3 = (local_2c % 0x10) * 0xe;
    _sprintf(local_7c,"%3d",local_14 << 4);
    engine_2d_c_drawTextColor_FUN_00402430(local_7c,0,local_14 * 0xc + 4);
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar3 + 0x16,local_14 * 0xc + 4,iVar3 + 0x1f,local_14 * 0xc + 0xb,local_2c);
    if ((local_2c + 1) % 0x10 == 0) {
      local_14 = local_14 + 1;
    }
  }
  strcpy(local_7c, "Hit a key...");
  engine_2d_c_drawTextColor_FUN_00402430(local_7c,0,g_WindowHeight + -0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
