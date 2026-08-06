// Name: core_script.cpp_CScript_freeParsedLines_FUN_004fe550
// Address: 004fe550
// Address Range: [[004fe550, 004fe5a7]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_004fe550(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_004fe550(CScript *this_ptr)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  if (this_ptr->parsed_lines != (SScriptLine *)0x0) {
    iVar1 = 0;
    if (0 < this_ptr->parsed_line_count) {
      iVar2 = 0;
      do {
        ptr = *(void **)((int)&this_ptr->parsed_lines->text + iVar2);
        if (ptr != (void *)0x0) {
          free(ptr);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 8;
      } while (iVar1 < this_ptr->parsed_line_count);
    }
    free(this_ptr->parsed_lines);
    this_ptr->parsed_lines = (SScriptLine *)0x0;
  }
  this_ptr->parsed_line_count = 0;
  return;
}
