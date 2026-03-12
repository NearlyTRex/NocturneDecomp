// Name: core_script.cpp_CScript_skipCommands_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 005602ac]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_skipCommands_FUN_005601c0(CScript *this_ptr,int direction,int count)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_skipCommands_FUN_005601c0(CScript *this_ptr,int direction,int count)

{
  int iVar2;
  int iVar1;
  int iVar3;
  bool bVar1;
  char *str1;
  
  iVar3 = 0;
  bVar1 = true;
  if (direction < this_ptr->parsed_line_count) {
    do {
      str1 = this_ptr->parsed_lines[direction].text;
      if (*str1 == '{') {
        direction = direction + 1;
        iVar3 = iVar3 + 1;
      }
      else if (*str1 == '}') {
        if (iVar3 == 0) {
          if (!bVar1) {
            return direction;
          }
          return direction + 1;
        }
        direction = direction + 1;
        iVar3 = iVar3 + -1;
      }
      else if (((iVar3 < 1) && (!bVar1)) ||
              (iVar2 = _strnicmp(str1,"if",2), iVar2 != 0)) {
        if (((iVar3 < 1) && (count == 0)) ||
           (iVar1 = _strnicmp(str1,"else",4), iVar1 != 0)) {
          if (iVar3 == 0) {
            if (!bVar1) {
              return direction;
            }
            return direction + 1;
          }
          direction = direction + 1;
        }
        else {
          direction = core_script_cpp_CScript_skipCommands_FUN_005601c0(this_ptr,direction + 1,1);
        }
      }
      else {
        direction = core_script_cpp_CScript_skipCommands_FUN_005601c0(this_ptr,direction + 1,1);
      }
    } while ((-1 < direction) && (bVar1 = false, direction < this_ptr->parsed_line_count));
  }
  return -1;
}
