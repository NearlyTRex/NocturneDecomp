// Name: core_script.cpp_FUN_00560160
// Address: 00560160
// Address Range: [[00560160, 005601b6]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_00560160(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00560160(CScript* param_1, uint param_2) */

int core_script_cpp_FUN_00560160(void)

{
  char *str1;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *str2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    iVar3 = 0;
    do {
      if (**(char **)(iVar3 + 4 + *(int *)(in_stack_00000004 + 0x34)) == ':') {
        str2 = in_stack_00000008;
        str1 = (char *)core_script_cpp_FUN_005593d0();
        iVar1 = stricmp(str1,str2);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
  }
  return -1;
}
