// Name: core_procedur.cpp_CProceduralTexture_showMenu_FUN_00554880
// Address: 00554880
// Address Range: [[00554880, 005548f9]]
// Convention: __cdecl
// Signature: void __cdecl core_procedur_cpp_CProceduralTexture_showMenu_FUN_00554880(CProceduralTexture *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005548f1) */

void __cdecl core_procedur_cpp_CProceduralTexture_showMenu_FUN_00554880(CProceduralTexture *this_ptr)

{
  uint uVar1;
  
  do {
    while( true ) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Procedural texture menu",0,0);
      engine_2d_c_drawText_FUN_00401fd0("1. Water",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("Well, what's it gonna be?",0,0x2c);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      if ((uVar1 & 0xff) != 0x31) break;
      core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(this_ptr);
    }
  } while ((uVar1 & 0xff) != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
