// Name: core_boxactor.cpp_CLightActor_initializeInEditor_FUN_00423590
// Address: 00423590
// Address Range: [[00423590, 004235b7]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_initializeInEditor_FUN_00423590(CLightActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CLightActor_initializeInEditor_FUN_00423590(CLightActor *this_ptr)

{
  int iVar1;
  
  iVar1 = core_boxactor_cpp_FUN_00423110();
  if (-1 < iVar1) {
    *(int *)this_ptr->unk = iVar1;
    return 1;
  }
  return 0;
}
