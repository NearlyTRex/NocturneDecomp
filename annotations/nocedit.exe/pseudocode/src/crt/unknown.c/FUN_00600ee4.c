// Name: crt_unknown.c_FUN_00600ee4
// Address: 00600ee4
// Address Range: [[00600ee4, 00600f32]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_00600ee4(void)

#include "nocturne.h"

_FILE * FUN_00600ee4(void)

{
  int iVar1;
  _FILE *in_stack_00000004;
  
  iVar1 = stream_valid(in_stack_00000004,1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)((int)&in_stack_00000004->_cnt +
                                          *(int *)(in_stack_00000004->_ptr + 4)) + 0x28) + 0x18))();
    if (iVar1 == -1) {
      reportStreamError
                ((FileEmbeddedData *)
                 ((int)&in_stack_00000004->_ptr + *(int *)(in_stack_00000004->_ptr + 4)),2);
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}
