// Name: core_gore.cpp_CGore_FUN_004edaa0
// Address: 004edaa0
// Address Range: [[004edaa0, 004edaed]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004edaa0(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004edaa0(CGore *this_ptr)

{
  CBloodParticle *this_ptr_00;
  int iVar1;
  int in_stack_00000010;
  
  if (in_stack_00000010 != 2) {
    iVar1 = DAT_02d833d0 + 1;
    this_ptr_00 = DAT_02d833d4 + DAT_02d833d0;
    DAT_02d833d0 = iVar1;
    if (0xff < iVar1) {
      DAT_02d833d0 = 0;
    }
    core_gore_cpp_CBloodParticle_FUN_004eb9a0(this_ptr_00);
  }
  return;
}
