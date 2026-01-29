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
  
  __STK(0x18);
  iVar1 = strcmp(in_stack_00000004,"(");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0;
  }
  else {
    iVar1 = strcmp(in_stack_00000004,")");
    if (iVar1 == 0) {
      *in_stack_00000008 = in_stack_0000000c + -1;
      return 1;
    }
    if (in_stack_00000010 != 0) {
      iVar1 = stricmp(in_stack_00000004,"patch");
      if (iVar1 == 0) {
        *in_stack_00000008 = -1;
        return 1;
      }
    }
    iVar1 = sscanf(in_stack_00000004,"%d",in_stack_00000008);
    if (((iVar1 != 1) || (*in_stack_00000008 < 0)) || (in_stack_0000000c <= *in_stack_00000008)) {
      return 0;
    }
  }
  return 1;
}
