// Name: core_script.cpp_FUN_005606e0
// Address: 005606e0
// Address Range: [[005606e0, 00560756]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005606e0()

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
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_00000008,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
    iVar3 = 0;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0
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
