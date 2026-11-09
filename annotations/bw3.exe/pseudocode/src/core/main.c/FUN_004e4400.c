// Name: core_main.c_FUN_004e4400
// Address: 004e4400
// Address Range: [[004e4400, 004e44ca]]
// Convention: unknown
// Signature: void core_main_c_FUN_004e4400(void)

#include "nocturne.h"

void core_main_c_FUN_004e4400(void)

{
  uint uVar1;
  char acStack_10c [256];
  
  do {
    engine_special_cpp_clearScreen_FUN_00560d70();
    engine_2d_c_drawText_FUN_00401fe0("Blair Witch 3 Debug/editor Menu",0,0);
    engine_2d_c_drawText_FUN_00401fe0("1. Play a mission",0,0x16);
    engine_2d_c_drawText_FUN_00401fe0("Z. Display memory usage info",0,0xbb);
    wincore_wddvmem_cpp_FUN_0057a8a0();
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    uVar1 = toupper(uVar1 & 0xff);
    if (uVar1 < 0x34) {
      if ((0x30 < uVar1) && (uVar1 < 0x32)) {
        core_game_cpp_FUN_004be8d0(g_CGamePtr,0);
      }
    }
    else if ((((0x34 < uVar1) && (0x40 < uVar1)) && (0x41 < uVar1)) && (uVar1 == 0x5a)) {
      shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0
                (g_CEditorToolsPtr,acStack_10c);
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80(g_CEditorToolsPtr,acStack_10c);
    }
  } while (uVar1 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  return;
}
