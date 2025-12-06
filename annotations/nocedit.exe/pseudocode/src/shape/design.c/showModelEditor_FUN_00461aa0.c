// Name: shape_design.c_showModelEditor_FUN_00461aa0
// Address: 00461aa0
// Address Range: [[00461aa0, 00461ad1]]
// Convention: __cdecl
// Signature: void shape_design.c_showModelEditor_FUN_00461aa0(void)

#include "nocturne.h"

void __cdecl shape_design_c_showModelEditor_FUN_00461aa0(void)

{
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("The Model Editor is not available.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}
