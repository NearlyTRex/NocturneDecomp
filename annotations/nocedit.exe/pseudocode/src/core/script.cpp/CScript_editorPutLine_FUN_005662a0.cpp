// Name: core_script.cpp_CScript_editorPutLine_FUN_005662a0
// Address: 005662a0
// Address Range: [[005662a0, 00566323]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_editorPutLine_FUN_005662a0(CScript *this_ptr,int line_number)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_editorPutLine_FUN_005662a0(CScript *this_ptr,int line_number)

{
  CStrList *this_ptr_00;
  int iVar1;
  
  if (-1 < line_number) {
    iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (line_number < iVar1 + 10) goto LAB_005662c2;
  }
  g_CurrentFilename = "..\\core\\script.cpp";
  g_CurrentLineNumber = 6787;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorPutLine - invalid line number");
LAB_005662c2:
  this_ptr_00 = &this_ptr->script_text;
  while( true ) {
    iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00);
    if (line_number < iVar1) break;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr_00,&s_EmptyChar_00643fd5);
  }
  shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
            (this_ptr_00,line_number,g_CurrentLineBuffer + 1);
  core_script_cpp_CScript_updateLineMetrics_FUN_00566800(this_ptr,line_number);
  return;
}
