// Name: core_script.cpp_FUN_005593f0
// Address: 005593f0
// Address Range: [[005593f0, 00559490]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_FUN_005593f0(int *param_1,char *param_2,int param_3)

#include "nocturne.h"

char * __cdecl core_script_cpp_FUN_005593f0(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *extraout_EAX;
  int iVar2;
  int extraout_EAX_00;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  core_script_cpp_FUN_005593d0((char *)*param_1);
  *param_1 = (int)extraout_EAX;
  if (*extraout_EAX != '(') {
    return "No opening parenthesis";
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar4 = *param_1;
      pcVar5 = (char *)(iVar4 + 1);
      *param_1 = (int)pcVar5;
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (cVar1 == '(') {
        iVar2 = iVar2 + 1;
      }
      else if (cVar1 == ')') {
        if (iVar2 == 0) {
          *param_1 = iVar4 + 2;
          param_2[iVar3] = '\0';
          core_script_cpp_FUN_00559360(param_2);
          core_script_cpp_FUN_005593d0((char *)*param_1);
          *param_1 = extraout_EAX_00;
          return (char *)0x0;
        }
        iVar2 = iVar2 + -1;
      }
      iVar4 = iVar3 + 1;
      param_2[iVar3] = *(char *)*param_1;
      iVar3 = iVar4;
    } while (iVar4 < param_3);
  }
  return "Argument too long";
}
