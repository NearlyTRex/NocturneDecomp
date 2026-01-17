// Name: core_event.cpp_FUN_004aa530
// Address: 004aa530
// Address Range: [[004aa530, 004aa643]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa530()

#include "nocturne.h"

uint core_event_cpp_FUN_004aa530(void)

{
  int iVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  uint *in_stack_0000000c;
  byte local_78 [100];
  int local_14;
  
  local_14 = -1;
  crt_stdio_c_sscanf_FUN_0060013c
            ((char *)(in_stack_00000004 + *in_stack_00000008)," { %f, %f, %f }%n",in_stack_0000000c,
             in_stack_0000000c + 1,in_stack_0000000c + 2,&local_14);
  if (6 < local_14) {
    *in_stack_00000008 = *in_stack_00000008 + local_14;
    return 1;
  }
  crt_stdio_c_sscanf_FUN_0060013c
            ((char *)(in_stack_00000004 + *in_stack_00000008)," %[^ ,(){}]%n",local_78,&local_14);
  if (local_14 < 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d0a460,"Error parsing vector location");
    return 0xffffffff;
  }
  iVar1 = core_event_cpp_FUN_004aa400();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *in_stack_00000008 = *in_stack_00000008 + local_14;
  if (iVar1 != 0x0FFFFFFF) {
    if (in_stack_0000000c != (uint *)(iVar1 + 0x20)) {
      *in_stack_0000000c = *(uint *)(iVar1 + 0x20);
      in_stack_0000000c[1] = *(uint *)(iVar1 + 0x24);
      in_stack_0000000c[2] = *(uint *)(iVar1 + 0x28);
    }
    return 1;
  }
  return 0;
}
