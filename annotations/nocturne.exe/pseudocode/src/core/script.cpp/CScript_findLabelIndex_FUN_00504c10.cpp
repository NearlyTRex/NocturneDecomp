// Name: core_script.cpp_CScript_findLabelIndex_FUN_00504c10
// Address: 00504c10
// Address Range: [[00504c10, 00504c66]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00504c10(CScript *this_ptr,char *label_name)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00504c10(CScript *this_ptr,char *label_name)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *str2;
  
  iVar3 = 0;
  if (0 < this_ptr->parsed_line_count) {
    iVar4 = 0;
    do {
      pcVar1 = *(char **)((int)&this_ptr->parsed_lines->text + iVar4);
      if (*pcVar1 == ':') {
        str2 = label_name;
        pcVar1 = core_script_cpp_skipWhitespace_FUN_004fe070(pcVar1 + 1);
        iVar2 = _stricmp(pcVar1,str2);
        if (iVar2 == 0) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 < this_ptr->parsed_line_count);
  }
  return -1;
}
