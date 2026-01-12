// Name: engine_colquant.c_FUN_00441790
// Address: 00441790
// Address Range: [[00441790, 004417d6]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00441790()

#include "nocturne.h"

ulonglong engine_colquant_c_FUN_00441790(void)

{
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint local_14;
  
  if ((double)CONCAT44 /* combine 2-byte values */(in_stack_00000008,in_stack_00000004) <=
      (double)CONCAT44 /* combine 2-byte values */(in_stack_00000010,in_stack_0000000c)) {
    local_14 = in_stack_0000000c;
    in_stack_00000008 = in_stack_00000010;
  }
  else {
    local_14 = in_stack_00000004;
  }
  return CONCAT44 /* combine 2-byte values */(in_stack_00000008,local_14);
}
