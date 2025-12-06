// Name: shape_design.c_displayPalette_FUN_00461560
// Address: 00461560
// Address Range: [[00461560, 0046169d]]
// Convention: unknown
// Signature: undefined shape_design.c_displayPalette_FUN_00461560()

#include "nocturne.h"

void shape_design_c_displayPalette_FUN_00461560(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  int local_2c;
  int local_14;
  
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  local_14 = 0;
  for (local_2c = 0; local_2c < 0x100; local_2c = local_2c + 1) {
    iVar2 = (local_2c % 0x10) * 0xe;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff84,"%3d");
    engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff84,0,local_14 * 0xc + 4);
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar2 + 0x16,local_14 * 0xc + 4,iVar2 + 0x1f,local_14 * 0xc + 0xb,local_2c);
    if ((local_2c + 1) % 0x10 == 0) {
      local_14 = local_14 + 1;
    }
  }
  pcVar3 = "Hit a key...";
  pcVar4 = &stack0xffffff84;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff84,0,g_WindowHeight + -0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
