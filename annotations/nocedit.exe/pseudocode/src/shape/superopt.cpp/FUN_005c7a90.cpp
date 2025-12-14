// Name: shape_superopt.cpp_FUN_005c7a90
// Address: 005c7a90
// Address Range: [[005c7a90, 005c7b18]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_FUN_005c7a90(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005c7a90(void)

{
  int iVar1;
  void *pvVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (((uint *)in_stack_00000004[1] != (uint *)0x0) &&
     (*in_stack_00000008 != **(int **)in_stack_00000004[1])) {
    return 0;
  }
  if (in_stack_00000004[1] == 0) {
    in_stack_00000004[5] = in_stack_00000008[0x10];
    in_stack_00000004[6] = in_stack_00000008[0x11];
    in_stack_00000004[7] = in_stack_00000008[0x12];
    in_stack_00000004[8] = in_stack_00000008[0x13];
    in_stack_00000004[9] = in_stack_00000008[0x14];
    in_stack_00000004[10] = in_stack_00000008[0x15];
    in_stack_00000004[4] = in_stack_00000008[0x17];
  }
  pvVar2 = crt_memory_c_realloc_FUN_00601df0
                     ((void *)in_stack_00000004[1],(*in_stack_00000004 + 1) * 4);
  if (pvVar2 != (void *)0x0) {
    in_stack_00000004[1] = (int)pvVar2;
    iVar1 = *in_stack_00000004;
    *in_stack_00000004 = iVar1 + 1;
    *(int **)(iVar1 * 4 + in_stack_00000004[1]) = in_stack_00000008;
  }
  return (uint)(pvVar2 != (void *)0x0);
}
