// Name: core_boxactor.cpp_CLightActor_FUN_00423590
// Address: 00423590
// Address Range: [[00423590, 004235b7]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423590()

#include "nocturne.h"

uint core_boxactor_cpp_CLightActor_FUN_00423590(void)

{
  int iVar1;
  int in_stack_00000008;
  
  iVar1 = core_boxactor_cpp_FUN_00423110();
  if (-1 < iVar1) {
    *(int *)(in_stack_00000008 + 0x66c) = iVar1;
    return 1;
  }
  return 0;
}
