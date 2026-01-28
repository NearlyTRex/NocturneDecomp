// Name: core_boxactor.cpp_CLightActor_FUN_00423590
// Address: 00423590
// Address Range: [[00423590, 004235b7]]
// Convention: unknown
// Signature: undefined4 core_boxactor_cpp_CLightActor_FUN_00423590(void)

#include "nocturne.h"

uint core_boxactor_cpp_CLightActor_FUN_00423590(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_boxactor_cpp_CLightActor_FUN_00423110
                    ((CLightActor *)"Select type of light to fill in initial properties.  (You can manually adjust later).");
  if (-1 < iVar1) {
    *(int *)(in_stack_00000004 + 0x66c) = iVar1;
    return 1;
  }
  return 0;
}
