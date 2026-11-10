// Name: core_script.cpp_CScript_findLabelIndex_FUN_005299b0
// Address: 005299b0
// Address Range: [[005299b0, 00529a06]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_005299b0(CScript *this_ptr,char *label_name)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_005299b0(CScript *this_ptr,char *label_name)

{
  char *str1;
  int iVar1;
  int iVar2;
  int iVar3;
  char *str2;
  
  iVar2 = 0;
  if (0 < this_ptr->parsed_line_count) {
    iVar3 = 0;
    do {
      if (**(char **)(this_ptr->parsed_lines + iVar3 + 4) == ':') {
        str2 = label_name;
        str1 = core_script_cpp_skipWhitespace_FUN_00521180
                         (*(char **)(this_ptr->parsed_lines + iVar3 + 4) + 1);
        iVar1 = _stricmp(str1,str2);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < this_ptr->parsed_line_count);
  }
  return -1;
}
