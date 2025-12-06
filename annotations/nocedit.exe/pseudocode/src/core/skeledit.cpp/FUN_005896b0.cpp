// Name: core_skeledit.cpp_FUN_005896b0
// Address: 005896b0
// Address Range: [[005896b0, 00589733]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005896b0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_005896b0(void)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  char acStack_2f8 [252];
  char acStack_1fc [4];
  char cStack_1f8;
  char acStack_fc [4];
  char acStack_f8 [240];
  uint uStack_8;
  
  uStack_8 = 0x5896ba;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x31c);
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_0000000c,&stack0x00000004,acStack_fc,&stack0xfffffd04,acStack_1fc);
  if (cStack_1f8 != '\0') {
    return;
  }
  crt_file_c_makepath_FUN_005febfc
            (in_stack_00000010,&stack0x00000008,acStack_f8,acStack_2f8,in_stack_00000014);
  return;
}
