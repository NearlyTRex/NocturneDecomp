// Name: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
// Address: 004a0300
// Address Range: [[004a0300, 004a03ca]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300(CEditorTools * editor_tools, char * prompt_text, CVector3f * result_ptr, bool show_current_value)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
          (CEditorTools *editor_tools,char *prompt_text,CVector3f *result_ptr,
          bool show_current_value)

{
  int iVar1;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_EDI;
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffffc0,"%g,%g,%g",(double)result_ptr->x,(double)result_ptr->y,
               (double)result_ptr->z);
  }
  while( true ) {
    iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (editor_tools,prompt_text,&stack0xffffffc4,0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffffc8,"%f%*[ ,]%f%*[ ,]%f");
    if (iVar1 == 3) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (editor_tools,"Please enter a valid vector.");
  }
  if (result_ptr != (CVector3f *)&stack0xfffffff4) {
    result_ptr->x = unaff_EDI;
    result_ptr->y = unaff_ESI;
    result_ptr->z = unaff_EBX;
  }
  return 1;
}
