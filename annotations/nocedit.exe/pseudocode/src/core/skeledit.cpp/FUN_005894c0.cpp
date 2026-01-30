// Name: core_skeledit.cpp_FUN_005894c0
// Address: 005894c0
// Address Range: [[005894c0, 005894f1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_005894c0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_005894c0(void)

{
  int iVar1;
  _FILE *in_stack_00000004;
  int in_stack_00000008;
  
  __STK(0x10);
  do {
    if (in_stack_00000008 < 1) {
      return;
    }
    do {
      iVar1 = _fgetc(in_stack_00000004);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    in_stack_00000008 = in_stack_00000008 + -1;
  } while( true );
}
