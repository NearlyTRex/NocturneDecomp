// Name: core_script.cpp_CScript_editorPutLine_FUN_005662a0
// Address: 005662a0
// Address Range: [[005662a0, 00566323]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_editorPutLine_FUN_005662a0(CScript *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_editorPutLine_FUN_005662a0(CScript *this_ptr,int param_2)

{
  CBitFont *font_ptr;
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
    if (param_2 < iVar1 + 10) goto LAB_005662c2;
  }
  g_CurrentFilename = "..\\core\\script.cpp";
  g_CurrentLineNumber = 0x1a83;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorPutLine - invalid line number");
LAB_005662c2:
  font_ptr = (CBitFont *)(this_ptr->unk4 + 0x20);
  while( true ) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
    if (param_2 < iVar1) break;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)font_ptr,&DAT_00643fd5);
  }
  shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120((CStrList *)font_ptr,param_2,&DAT_031101c0);
  core_script_cpp_CScript_FUN_00566800(this_ptr,param_2);
  return;
}
