// Name: core_script.cpp_CScript_freeParsedLines_FUN_00543790
// Address: 00543790
// Address Range: [[00543790, 005437e7]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_00543790(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_00543790(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->parsed_lines != (SScriptLine *)0x0) {
    iVar1 = 0;
    if (0 < this_ptr->parsed_line_count) {
      iVar2 = 0;
      do {
        if (*(int *)(this_ptr->parsed_lines + iVar2 + 4) != 0) {
          FUN_005c09f0(*(int *)(this_ptr->parsed_lines + iVar2 + 4));
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 8;
      } while (iVar1 < this_ptr->parsed_line_count);
    }
    FUN_005c09f0(this_ptr->parsed_lines);
    this_ptr->parsed_lines = (SScriptLine *)0x0;
  }
  this_ptr->parsed_line_count = 0;
  return;
}
