// Name: core_skeledit.cpp_FUN_0058b8e0
// Address: 0058b8e0
// Address Range: [[0058b8e0, 0058b9a7]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b8e0()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_0058b8e0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *path_buffer;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  char acStack_104 [4];
  char acStack_100 [248];
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x22c);
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0xbc)) {
    path_buffer = (char *)(in_stack_0000000c + 200);
    do {
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%[^\n]\n",&stack0xfffffdf4);
      if (iVar1 != 1) {
        return 0;
      }
      crt_string_c_splitpath_FUN_005ff178
                (&stack0xfffffdf8,(char *)0x0,(char *)0x0,acStack_104,(char *)0x0);
      iVar2 = iVar2 + 1;
      crt_file_c_makepath_FUN_005febfc
                (path_buffer,(char *)0x0,(char *)0x0,acStack_100,".raw");
      path_buffer = path_buffer + 0x48;
    } while (iVar2 < *(int *)(in_stack_0000000c + 0xbc));
  }
  return 1;
}
