// Name: core_skeledit.cpp_FUN_00592520
// Address: 00592520
// Address Range: [[00592520, 005925bc]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00592520()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_00592520(void)

{
  int iVar1;
  char *in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_0000000c,"(");
  if (iVar1 == 0) {
    *in_stack_00000010 = 0;
  }
  else {
    iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_0000000c,")");
    if (iVar1 == 0) {
      *in_stack_00000010 = in_stack_0000001c + -1;
      return 1;
    }
    if (in_stack_00000020 != 0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"patch");
      if (iVar1 == 0) {
        *in_stack_00000010 = -1;
        return 1;
      }
    }
    iVar1 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_0000000c,"%d");
    if (((iVar1 != 1) || (*in_stack_00000010 < 0)) || (in_stack_00000024 <= *in_stack_00000010)) {
      return 0;
    }
  }
  return 1;
}
