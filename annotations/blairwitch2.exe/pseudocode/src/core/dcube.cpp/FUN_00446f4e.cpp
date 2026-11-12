// Name: core_dcube.cpp_FUN_00446f4e
// Address: 00446f4e
// Address Range: [[00446f4e, 00447005]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00446f4e(char *param_1)

#include "nocturne.h"

void core_dcube_cpp_FUN_00446f4e(char *param_1)

{
  int iVar1;
  char acStack_68 [80];
  _FILE *p_Stack_18;
  int iStack_14;
  
  iStack_14 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  p_Stack_18 = engine_dosio_cpp_FUN_00460c70((char *)0x5cea3d,param_1,(char *)0x5cea3a);
  if (p_Stack_18 != (_FILE *)0x0) {
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    while (iVar1 = _fgets(acStack_68,0x4f,p_Stack_18), iVar1 != 0) {
      engine_2d_c_drawText_FUN_00401fe0(acStack_68,0,iStack_14);
      iStack_14 = iStack_14 + 0xb;
      if (DAT_006141bc + -0xb < iStack_14) {
        wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
        wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
        engine_2d_c_clearInputAndWait_FUN_004032b0();
        engine_special_cpp_clearScreen_FUN_0055b1f0();
        iStack_14 = 0;
      }
    }
    _fclose(p_Stack_18);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
  }
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  return;
}
