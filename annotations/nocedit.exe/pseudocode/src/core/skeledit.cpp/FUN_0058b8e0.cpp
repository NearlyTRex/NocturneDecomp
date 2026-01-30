// Name: core_skeledit.cpp_FUN_0058b8e0
// Address: 0058b8e0
// Address Range: [[0058b8e0, 0058b9a7]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_0058b8e0(void)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_FUN_0058b8e0(void)

{
  int iVar1;
  int iVar2;
  char *path_buffer;
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  char local_214 [260];
  char local_110 [256];
  
  __STK(0x22c);
  iVar2 = 1;
  do {
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xbc)) {
    path_buffer = (char *)(in_stack_00000004 + 200);
    do {
      iVar1 = _fscanf(in_stack_00000008,"%[^\n]\n",local_214);
      if (iVar1 != 1) {
        return 0;
      }
      splitpath(local_214,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
      iVar2 = iVar2 + 1;
      makepath(path_buffer,(char *)0x0,(char *)0x0,local_110,".raw")
      ;
      path_buffer = path_buffer + 0x48;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0xbc));
  }
  return 1;
}
