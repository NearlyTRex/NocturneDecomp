// Name: core_script.cpp_FUN_005606e0
// Address: 005606e0
// Address Range: [[005606e0, 00560756]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_005606e0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005606e0(CScript* param_1, uint param_2) */

int core_script_cpp_FUN_005606e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  char local_110 [256];
  
  iVar2 = 0;
  splitpath
            (in_stack_00000008,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
    iVar3 = 0;
    do {
      iVar1 = stricmp
                        ((char *)(*(int *)(in_stack_00000004 + 0x20) + iVar3),local_110);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x1c));
  }
  return -1;
}
