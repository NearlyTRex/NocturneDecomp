// Name: core_script.cpp_CScript_collectLabels_FUN_00566fa0
// Address: 00566fa0
// MANUAL RECONSTRUCTION
// Address Range: [[00566fa0, 0056700c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_collectLabels_FUN_00566fa0(CScript *this_ptr,CStrList *labels_out)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_collectLabels_FUN_00566fa0(CScript *this_ptr,CStrList *labels_out)

{
  int iVar1;
  int iVar2;
  char acStack_d8 [200];
  
  core_script_cpp_CScript_buildParsedLines_FUN_0055a370(this_ptr);
  for (iVar2 = 0; iVar2 < this_ptr->parsed_line_count; iVar2 = iVar2 + 1) {
    iVar1 = sscanf(this_ptr->parsed_lines[iVar2].text,": %s",acStack_d8);
    if (iVar1 == 1) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(labels_out,acStack_d8);
    }
  }
  return;
}
