// Name: core_script.cpp_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 005602ac]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_005601c0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005601c0(uint param_1, uint param_2,
   uint param_3) */

int core_script_cpp_FUN_005601c0(void)

{
  char *str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar3 = 0;
  bVar1 = true;
  if (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x30)) {
    do {
      str1 = *(char **)(*(int *)(in_stack_00000004 + 0x34) + 4 + in_stack_00000008 * 8);
      if (*str1 == '{') {
        in_stack_00000008 = in_stack_00000008 + 1;
        iVar3 = iVar3 + 1;
      }
      else if (*str1 == '}') {
        if (iVar3 == 0) {
          if (!bVar1) {
            return in_stack_00000008;
          }
          return in_stack_00000008 + 1;
        }
        in_stack_00000008 = in_stack_00000008 + 1;
        iVar3 = iVar3 + -1;
      }
      else if (((iVar3 < 1) && (!bVar1)) ||
              (iVar2 = strnicmp(str1,"if",2), iVar2 != 0)) {
        if (((iVar3 < 1) && (in_stack_0000000c == 0)) ||
           (iVar2 = strnicmp(str1,"else",4), iVar2 != 0)) {
          if (iVar3 == 0) {
            if (!bVar1) {
              return in_stack_00000008;
            }
            return in_stack_00000008 + 1;
          }
          in_stack_00000008 = in_stack_00000008 + 1;
        }
        else {
          in_stack_00000008 = core_script_cpp_FUN_005601c0();
        }
      }
      else {
        in_stack_00000008 = core_script_cpp_FUN_005601c0();
      }
    } while ((-1 < in_stack_00000008) &&
            (bVar1 = false, in_stack_00000008 < *(int *)(in_stack_00000004 + 0x30)));
  }
  return -1;
}
