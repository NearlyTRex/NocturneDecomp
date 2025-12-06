// Name: crt_unknown.c_FUN_00600ee4
// Address: 00600ee4
// Address Range: [[00600ee4, 00600f32]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600ee4()

#include "nocturne.h"

/* Signature: int* FUN_00600ee4(FILE* param_1, int param_2) */

FILE * crt_unknown_c_FUN_00600ee4(void)

{
  int iVar1;
  FILE *in_stack_00000004;
  
  iVar1 = crt_stdio_c_stream_valid_FUN_00608cd1(in_stack_00000004,1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)((int)&in_stack_00000004->_cnt +
                                          *(int *)(in_stack_00000004->_ptr + 4)) + 0x28) + 0x18))();
    if (iVar1 == -1) {
      crt_stdio_c_reportStreamError_FUN_00606020
                ((FileEmbeddedData *)
                 ((int)&in_stack_00000004->_ptr + *(int *)(in_stack_00000004->_ptr + 4)),2);
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}
