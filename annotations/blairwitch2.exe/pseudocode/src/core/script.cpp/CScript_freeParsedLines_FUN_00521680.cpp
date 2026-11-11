// Name: core_script.cpp_CScript_freeParsedLines_FUN_00521680
// Address: 00521680
// Address Range: [[00521680, 005216d7]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_00521680(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_00521680(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->parsed_lines != (SScriptLine *)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->parsed_line_count) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)((int)&this_ptr->parsed_lines->text + iVar3);
        if (iVar1 != 0) {
          FUN_005b86a0(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < this_ptr->parsed_line_count);
    }
    FUN_005b86a0(this_ptr->parsed_lines);
    this_ptr->parsed_lines = (SScriptLine *)0x0;
  }
  this_ptr->parsed_line_count = 0;
  return;
}
