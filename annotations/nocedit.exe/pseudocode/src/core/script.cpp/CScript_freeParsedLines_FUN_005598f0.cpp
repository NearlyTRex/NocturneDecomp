// Name: core_script.cpp_CScript_freeParsedLines_FUN_005598f0
// Address: 005598f0
// Address Range: [[005598f0, 0055995b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_005598f0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_005598f0(CScript *this_ptr)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  if (this_ptr->parsed_lines != (SScriptLine *)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->parsed_line_count) {
      iVar1 = 0;
      do {
        ptr = *(void **)((int)&this_ptr->parsed_lines->text + iVar1);
        if (ptr != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\script.cpp",462);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < this_ptr->parsed_line_count);
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->parsed_lines,"..\\core\\script.cpp",464)
    ;
    this_ptr->parsed_lines = (SScriptLine *)0x0;
  }
  this_ptr->parsed_line_count = 0;
  return;
}
