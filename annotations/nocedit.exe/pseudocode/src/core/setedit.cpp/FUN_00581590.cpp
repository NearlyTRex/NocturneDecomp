// Name: core_setedit.cpp_FUN_00581590
// Address: 00581590
// Address Range: [[00581590, 005817cd]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581590()

#include "nocturne.h"

void core_setedit_cpp_FUN_00581590(void)

{
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("F1",0,0);
  engine_2d_c_drawText_FUN_00401fd0("Show this help screen",g_WindowWidth / 10,0);
  engine_2d_c_drawText_FUN_00401fd0("S",0,0xb);
  engine_2d_c_drawText_FUN_00401fd0("Set default room size for set",g_WindowWidth / 10,0xb);
  engine_2d_c_drawText_FUN_00401fd0("TAB",0,0x16);
  engine_2d_c_drawText_FUN_00401fd0("Next room",g_WindowWidth / 10,0x16);
  engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",0,0x21);
  engine_2d_c_drawText_FUN_00401fd0("Previous room",g_WindowWidth / 10,0x21);
  engine_2d_c_drawText_FUN_00401fd0("I",0,0x2c);
  engine_2d_c_drawText_FUN_00401fd0("Insert room",g_WindowWidth / 10,0x2c);
  engine_2d_c_drawText_FUN_00401fd0("D",0,0x37);
  engine_2d_c_drawText_FUN_00401fd0("Delete room",g_WindowWidth / 10,0x37);
  engine_2d_c_drawText_FUN_00401fd0("N",0,0x42);
  engine_2d_c_drawText_FUN_00401fd0("Deselect room",g_WindowWidth / 10,0x42);
  engine_2d_c_drawText_FUN_00401fd0("To position the selected box, use the normal slew keys.",0,0x58);
  engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,99);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
