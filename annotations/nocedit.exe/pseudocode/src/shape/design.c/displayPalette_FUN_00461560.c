// Name: shape_design.c_displayPalette_FUN_00461560
// Address: 00461560
// Address Range: [[00461560, 0046169d]]
// Convention: unknown
// Signature: undefined shape_design.c_displayPalette_FUN_00461560()

#include "nocturne.h"

void shape_design_c_displayPalette_FUN_00461560(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_7c [80];
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 10;
  local_18 = 8;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  local_14 = 0;
  for (local_2c = 0; local_2c < 0x100; local_2c = local_2c + 1) {
    local_24 = (local_1c + 4) * (local_2c % 0x10) + 0x16;
    local_20 = (local_18 + 4) * local_14 + 4;
    crt_stdio_c_sprintf_FUN_005fdbd0(local_7c,"%3d",local_14 << 4);
    engine_2d_c_drawTextColor_FUN_00402430(local_7c,0,(local_18 + 4) * local_14 + 4);
    engine_2d_c_fillRectColor_FUN_00403170
              (local_24,local_20,local_24 + local_1c + -1,local_20 + local_18 + -1,local_2c);
    if ((local_2c + 1) % 0x10 == 0) {
      local_14 = local_14 + 1;
    }
  }
  pcVar2 = "Hit a key...";
  pcVar3 = local_7c;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  engine_2d_c_drawTextColor_FUN_00402430(local_7c,0,g_WindowHeight + -0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
