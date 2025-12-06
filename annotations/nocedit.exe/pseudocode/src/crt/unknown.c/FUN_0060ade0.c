// Name: crt_unknown.c_FUN_0060ade0
// Address: 0060ade0
// Address Range: [[0060ade0, 0060ae4d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060ade0()

#include "nocturne.h"

char * crt_unknown_c_FUN_0060ade0(void)

{
  char *buffer;
  BADSPACEBASE *in_ESP;
  uint *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  uint local_18;
  uint local_14;
  
  local_18 = *in_stack_00000004;
  local_14 = in_stack_00000004[1];
  buffer = in_stack_00000008;
  if ((in_stack_0000000c == 10) && ((local_14 & 0x80000000) != 0)) {
    *in_stack_00000008 = '-';
    local_14 = ~local_14;
    buffer = in_stack_00000008 + 1;
    local_18 = ~local_18 + 1;
    if (local_18 == 0) {
      local_14 = local_14 + 1;
    }
  }
  crt_stdlib_c_i64toa_FUN_0060ad40((longlong *)&local_18,buffer,in_stack_0000000c);
  return in_stack_00000008;
}
