// Name: shape_design.c_showHelpFile_FUN_00457f00
// Address: 00457f00
// Address Range: [[00457f00, 00457fc4]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_showHelpFile_FUN_00457f00(char *help_filename)

#include "nocturne.h"

void __cdecl shape_design_c_showHelpFile_FUN_00457f00(char *help_filename)

{
  _FILE *stream;
  char *pcVar1;
  char local_68 [80];
  _FILE *local_18;
  int local_14;
  
  local_14 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  stream = engine_dosio_cpp_getFile_FUN_00481a50("help",help_filename,"rt");
  if (stream != (_FILE *)0x0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    while (pcVar1 = _fgets(local_68,0x4f,stream), pcVar1 != (char *)0x0) {
      engine_2d_c_drawText_FUN_00401fd0(local_68,0,local_14);
      local_14 = local_14 + 0xb;
      if (g_WindowHeight + -0xb < local_14) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        local_14 = 0;
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\shape\\design.c",0x186);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
