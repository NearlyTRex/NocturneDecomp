// Name: core_dcube.cpp_FUN_0044b660
// Address: 0044b660
// Address Range: [[0044b660, 0044b715]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_0044b660(char *param_1)

#include "nocturne.h"

void core_dcube_cpp_FUN_0044b660(char *param_1)

{
  char *pcVar1;
  char local_68 [80];
  _FILE *local_18;
  int local_14;
  
  local_14 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  local_18 = engine_dosio_cpp_getFile_FUN_00456a60("help",param_1,"rt");
  if (local_18 != (_FILE *)0x0) {
    engine_special_cpp_clearScreen_FUN_0052ee70();
    while (pcVar1 = _fgets(local_68,0x4f,local_18), pcVar1 != (char *)0x0) {
      engine_2d_c_drawText_FUN_00402600(local_68,0,local_14);
      local_14 = local_14 + 0xb;
      if (DAT_005b7620 + -0xb < local_14) {
        wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        engine_special_cpp_clearScreen_FUN_0052ee70();
        local_14 = 0;
      }
    }
    _fclose(local_18);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  }
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  return;
}
