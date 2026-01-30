// Name: core_morph.cpp_FUN_0052cd30
// Address: 0052cd30
// Address Range: [[0052cd30, 0052cd48]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052cd30(void)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052cd30(void)

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
