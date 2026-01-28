// Name: core_skeledit.cpp_FUN_00592520
// Address: 00592520
// Address Range: [[00592520, 005925bc]]
// Convention: unknown
// Signature: undefined4 core_skeledit_cpp_FUN_00592520(void)

#include "nocturne.h"

uint core_skeledit_cpp_FUN_00592520(void)

{
  int iVar1;
  char *in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"(");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0;
  }
  else {
    iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,")");
    if (iVar1 == 0) {
      *in_stack_00000008 = in_stack_0000000c + -1;
      return 1;
    }
    if (in_stack_00000010 != 0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"patch");
      if (iVar1 == 0) {
        *in_stack_00000008 = -1;
        return 1;
      }
    }
    iVar1 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000004,"%d",in_stack_00000008);
    if (((iVar1 != 1) || (*in_stack_00000008 < 0)) || (in_stack_0000000c <= *in_stack_00000008)) {
      return 0;
    }
  }
  return 1;
}
