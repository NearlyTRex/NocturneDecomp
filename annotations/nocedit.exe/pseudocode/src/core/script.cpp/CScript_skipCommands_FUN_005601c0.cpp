// Name: core_script.cpp_CScript_skipCommands_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 005602ac]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_skipCommands_FUN_005601c0(CScript *this_ptr,int param_2,int param_3)

#include "nocturne.h"

int __cdecl
core_script_cpp_CScript_skipCommands_FUN_005601c0(CScript *this_ptr,int param_2,int param_3)

{
  char *str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar1 = true;
  if (param_2 < this_ptr->parsed_line_count) {
    do {
      str1 = this_ptr->parsed_lines[param_2].text;
      if (*str1 == '{') {
        param_2 = param_2 + 1;
        iVar3 = iVar3 + 1;
      }
      else if (*str1 == '}') {
        if (iVar3 == 0) {
          if (!bVar1) {
            return param_2;
          }
          return param_2 + 1;
        }
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
      }
      else if (((iVar3 < 1) && (!bVar1)) ||
              (iVar2 = strnicmp(str1,"if",2), iVar2 != 0)) {
        if (((iVar3 < 1) && (param_3 == 0)) ||
           (iVar2 = strnicmp(str1,"else",4), iVar2 != 0)) {
          if (iVar3 == 0) {
            if (!bVar1) {
              return param_2;
            }
            return param_2 + 1;
          }
          param_2 = param_2 + 1;
        }
        else {
          param_2 = core_script_cpp_CScript_skipCommands_FUN_005601c0(this_ptr,param_2 + 1,1);
        }
      }
      else {
        param_2 = core_script_cpp_CScript_skipCommands_FUN_005601c0(this_ptr,param_2 + 1,1);
      }
    } while ((-1 < param_2) && (bVar1 = false, param_2 < this_ptr->parsed_line_count));
  }
  return -1;
}
