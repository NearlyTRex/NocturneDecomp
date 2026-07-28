// Name: core_main.c_waitWithSkip_FUN_004c8e10
// Address: 004c8e10
// Address Range: [[004c8e10, 004c8ea9]]
// Convention: unknown
// Signature: void core_main_c_waitWithSkip_FUN_004c8e10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_main_c_waitWithSkip_FUN_004c8e10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  do {
    iVar2 = iVar1;
    if (param_1 < 1) {
      return;
    }
    while( true ) {
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
      _DAT_01bd1d80 = (iVar1 - iVar2) / 0x12;
      if (_DAT_01bd1d80 < 0) {
        _DAT_01bd1d80 = 0;
      }
      if (0x4000 < _DAT_01bd1d80) {
        _DAT_01bd1d80 = 0x4000;
      }
      param_1 = param_1 - _DAT_01bd1d80;
      iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a);
      if (iVar2 == 0) break;
      iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = iVar1;
      if (param_1 < 1) {
        return;
      }
    }
  } while( true );
}
