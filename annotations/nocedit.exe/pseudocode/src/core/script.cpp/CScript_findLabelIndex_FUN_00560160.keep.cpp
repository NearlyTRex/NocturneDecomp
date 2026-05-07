// Name: core_script.cpp_CScript_findLabelIndex_FUN_00560160
// Address: 00560160
// MANUAL RECONSTRUCTION
// Address Range: [[00560160, 005601b6]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00560160(CScript *this_ptr,char *label_name)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00560160(CScript *this_ptr,char *label_name)

{
  char *pcVar1;
  int iVar2;
  int iVar3;

  for (iVar3 = 0; iVar3 < this_ptr->parsed_line_count; iVar3 = iVar3 + 1) {
    pcVar1 = this_ptr->parsed_lines[iVar3].text;
    if (*pcVar1 == ':') {
      pcVar1 = core_script_cpp_skipWhitespace_FUN_005593d0(pcVar1 + 1);
      iVar2 = _stricmp(pcVar1,label_name);
      if (iVar2 == 0) {
        return iVar3;
      }
    }
  }
  return -1;
}
