// Name: core_script.cpp_CScript_skipCommands_FUN_00504c70
// Address: 00504c70
// Address Range: [[00504c70, 00504d5c]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_skipCommands_FUN_00504c70(CScript *this_ptr,int direction,int count)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_skipCommands_FUN_00504c70(CScript *this_ptr,int direction,int count)

{
  char *str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  
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
           (iVar2 = _strnicmp(str1,"else",4), iVar2 != 0)) {
          if (iVar3 == 0) {
            if (!bVar1) {
              return direction;
            }
            return direction + 1;
          }
          direction = direction + 1;
        }
        else {
          direction = core_script_cpp_CScript_skipCommands_FUN_00504c70(this_ptr,direction + 1,1);
        }
      }
      else {
        direction = core_script_cpp_CScript_skipCommands_FUN_00504c70(this_ptr,direction + 1,1);
      }
    } while ((-1 < direction) && (bVar1 = false, direction < this_ptr->parsed_line_count));
  }
  return -1;
}
