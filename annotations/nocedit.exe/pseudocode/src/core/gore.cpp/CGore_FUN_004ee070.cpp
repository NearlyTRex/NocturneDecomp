// Name: core_gore.cpp_CGore_FUN_004ee070
// Address: 004ee070
// Address Range: [[004ee070, 004ee0e6]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ee070(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ee070(CGore *this_ptr)

{
  int iVar1;
  CFootstep *this_ptr_00;
  
  iVar1 = DAT_02da8c24 + 1;
  this_ptr_00 = DAT_02da8c2c + DAT_02da8c24;
  DAT_02da8c24 = iVar1;
  if (999 < iVar1) {
    DAT_02da8c24 = 0;
  }
  if (DAT_02da8c28 < 1000) {
    DAT_02da8c28 = DAT_02da8c28 + 1;
  }
  core_gore_cpp_CFootstep_FUN_004ed240(this_ptr_00);
  return;
}
