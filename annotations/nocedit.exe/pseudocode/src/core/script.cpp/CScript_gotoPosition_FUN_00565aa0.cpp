// Name: core_script.cpp_CScript_gotoPosition_FUN_00565aa0
// Address: 00565aa0
// Address Range: [[00565aa0, 00565ad3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_gotoPosition_FUN_00565aa0(CScript *this_ptr,int column,int line)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_gotoPosition_FUN_00565aa0(CScript *this_ptr,int column,int line)

{
  int iVar1;
  
  if (-1 < line) {
    iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (line < iVar1) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,line,column);
      return;
    }
  }
  return;
}
