// Name: core_main.c_FUN_004c8510
// Address: 004c8510
// Address Range: [[004c8510, 004c85da]]
// Convention: unknown
// Signature: void core_main_c_FUN_004c8510(void)

#include "nocturne.h"

void core_main_c_FUN_004c8510(void)

{
  uint uVar1;
  char acStack_10c [256];
  
  do {
    engine_special_cpp_clearScreen_FUN_0052ee70();
    engine_2d_c_drawText_FUN_00402600("Nocturne(R) Debug/editor Menu",0,0);
    engine_2d_c_drawText_FUN_00402600("1. Play a mission",0,0x16);
    engine_2d_c_drawText_FUN_00402600("Z. Display memory usage info",0,0xbb);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    uVar1 = toupper(uVar1 & 0xff);
    if (uVar1 < 0x34) {
      if ((0x30 < uVar1) && (uVar1 < 0x32)) {
        core_game_cpp_FUN_004a4b50(g_CGame_PTR_005b9354,0);
      }
    }
    else if ((((0x34 < uVar1) && (0x40 < uVar1)) && (0x41 < uVar1)) && (uVar1 == 0x5a)) {
      shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
                (g_CEditorTools_PTR_005b6d50,acStack_10c);
      shape_edittool_cpp_FUN_0046fe60(g_CEditorTools_PTR_005b6d50,acStack_10c);
    }
  } while (uVar1 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  return;
}
