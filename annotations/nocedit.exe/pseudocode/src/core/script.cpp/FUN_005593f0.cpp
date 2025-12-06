// Name: core_script.cpp_FUN_005593f0
// Address: 005593f0
// Address Range: [[005593f0, 00559490]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005593f0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005593f0(uint param_1, uint param_2,
   uint param_3) */

char * core_script_cpp_FUN_005593f0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  
  pcVar2 = (char *)core_script_cpp_FUN_005593d0();
  *in_stack_00000004 = (int)pcVar2;
  if (*pcVar2 != '(') {
    return "No opening parenthesis";
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < in_stack_00000010) {
    do {
      iVar5 = *in_stack_00000004;
      pcVar2 = (char *)(iVar5 + 1);
      *in_stack_00000004 = (int)pcVar2;
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (cVar1 == '(') {
        iVar3 = iVar3 + 1;
      }
      else if (cVar1 == ')') {
        if (iVar3 == 0) {
          *in_stack_00000004 = iVar5 + 2;
          *(byte *)(iVar4 + in_stack_00000008) = 0;
          core_script_cpp_FUN_00559360();
          iVar4 = core_script_cpp_FUN_005593d0();
          *in_stack_00000004 = iVar4;
          return (char *)0x0;
        }
        iVar3 = iVar3 + -1;
      }
      iVar5 = iVar4 + 1;
      *(byte *)(iVar4 + in_stack_00000008) = *(byte *)*in_stack_00000004;
      iVar4 = iVar5;
    } while (iVar5 < in_stack_00000010);
  }
  return "Argument too long";
}
