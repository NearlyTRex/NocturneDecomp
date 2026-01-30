// Name: core_setedit.cpp_FUN_00578a00
// Address: 00578a00
// Address Range: [[00578a00, 00578a18]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_00578a00(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_00578a00(void)

{
  int iVar1;
  _FILE *in_stack_00000004;
  
  do {
    iVar1 = _fgetc(in_stack_00000004);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
