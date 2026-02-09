// Name: core_skeledit.cpp_FUN_00592520
// Address: 00592520
// Address Range: [[00592520, 005925bc]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_00592520(void *ptr)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_FUN_00592520(void *ptr)

{
  int iVar1;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  __STK();
  iVar1 = strcmp(ptr,"(");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0;
  }
  else {
    iVar1 = strcmp(ptr,")");
    if (iVar1 == 0) {
      *in_stack_00000008 = in_stack_0000000c + -1;
      return 1;
    }
    if (in_stack_00000010 != 0) {
      iVar1 = stricmp(ptr,"patch");
      if (iVar1 == 0) {
        *in_stack_00000008 = -1;
        return 1;
      }
    }
    iVar1 = sscanf(ptr,"%d",in_stack_00000008);
    if (((iVar1 != 1) || (*in_stack_00000008 < 0)) || (in_stack_0000000c <= *in_stack_00000008)) {
      return 0;
    }
  }
  return 1;
}
