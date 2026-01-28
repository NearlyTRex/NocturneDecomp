// Name: core_skeledit.cpp_FUN_0058b8e0
// Address: 0058b8e0
// Address Range: [[0058b8e0, 0058b9a7]]
// Convention: unknown
// Signature: undefined4 core_skeledit_cpp_FUN_0058b8e0(void)

#include "nocturne.h"

uint core_skeledit_cpp_FUN_0058b8e0(void)

{
  int iVar1;
  int iVar2;
  char *path_buffer;
  int in_stack_00000004;
  FILE *in_stack_00000008;
  char local_214 [260];
  char local_110 [256];
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x22c);
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xbc)) {
    path_buffer = (char *)(in_stack_00000004 + 200);
    do {
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n",local_214);
      if (iVar1 != 1) {
        return 0;
      }
      crt_string_c_splitpath_FUN_005ff178(local_214,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
      iVar2 = iVar2 + 1;
      crt_file_c_makepath_FUN_005febfc(path_buffer,(char *)0x0,(char *)0x0,local_110,".raw")
      ;
      path_buffer = path_buffer + 0x48;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0xbc));
  }
  return 1;
}
