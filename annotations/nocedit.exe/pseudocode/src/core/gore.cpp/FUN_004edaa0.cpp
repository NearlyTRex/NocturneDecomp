// Name: core_gore.cpp_FUN_004edaa0
// Address: 004edaa0
// Address Range: [[004edaa0, 004edaed]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004edaa0(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004edaa0(byte param_1, uint param_2,
   uint param_3, uint param_4) */

void __cdecl core_gore_cpp_FUN_004edaa0(void)

{
  int in_stack_00000010;
  
  if (in_stack_00000010 != 2) {
    DAT_02d833d0 = DAT_02d833d0 + 1;
    if (0xff < DAT_02d833d0) {
      DAT_02d833d0 = 0;
    }
    core_gore_cpp_FUN_004eb9a0();
  }
  return;
}
