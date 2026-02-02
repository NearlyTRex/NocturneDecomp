// Name: core_script.cpp_CScript_FUN_00566fa0
// Address: 00566fa0
// Address Range: [[00566fa0, 0056700c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566fa0(CScript *this_ptr,CStrList *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00566fa0(CScript *this_ptr,CStrList *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_d8 [200];
  
  core_script_cpp_CScript_FUN_0055a370(this_ptr);
  iVar2 = 0;
  if (0 < this_ptr->parsed_line_count) {
    iVar3 = 0;
    do {
      iVar1 = sscanf
                        (*(char **)((int)&this_ptr->parsed_lines->text + iVar3),": %s",
                         acStack_d8);
      if (iVar1 == 1) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(param_2,acStack_d8);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < this_ptr->parsed_line_count);
  }
  return;
}
