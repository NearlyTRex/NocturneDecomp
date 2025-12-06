// Name: core_skeledit.cpp_FUN_00589530
// Address: 00589530
// Address Range: [[00589530, 005895e1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589530()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589530(void)

{
  BADSPACEBASE *in_ESP;
  char in_stack_00000008;
  char *in_stack_00000010;
  char *in_stack_00000018;
  char acStack_2f4 [248];
  char acStack_1fc [8];
  char acStack_1f4 [248];
  char acStack_fc [4];
  char acStack_f8 [4];
  char acStack_f4 [236];
  uint uStack_8;
  
  uStack_8 = 0x58953a;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x31c);
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_00000010,&stack0x00000004,acStack_fc,&stack0xfffffd04,acStack_1fc);
  if ((acStack_f8[0] == '\0') && (in_stack_00000008 == '\0')) {
    crt_string_c_splitpath_FUN_005ff178
              (in_stack_00000010,&stack0x00000008,acStack_f8,(char *)0x0,(char *)0x0);
    crt_file_c_makepath_FUN_005febfc
              (in_stack_00000018,&stack0x0000000c,acStack_f4,acStack_2f4,acStack_1f4);
    return;
  }
  return;
}
