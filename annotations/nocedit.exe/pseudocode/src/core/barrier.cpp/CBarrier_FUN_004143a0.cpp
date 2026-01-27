// Name: core_barrier.cpp_CBarrier_FUN_004143a0
// Address: 004143a0
// Address Range: [[004143a0, 004143dc]]
// Convention: __cdecl
// Signature: int core_barrier.cpp_CBarrier_FUN_004143a0(CBarrier * this_ptr)

#include "nocturne.h"

int __cdecl core_barrier_cpp_CBarrier_FUN_004143a0(CBarrier *this_ptr)

{
  int iVar1;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 0) {
    return 0;
  }
  if (this_ptr->unk[0x10] != '\0') {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(DAT_00821ff4,this_ptr->unk + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
