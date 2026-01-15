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
  char local_40 [40];
  CVector3f local_18;
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_40,"%g,%g,%g",(double)result_ptr->x,(double)result_ptr->y,
               (double)result_ptr->z);
  }
  else {
    local_40[0] = '\0';
  }
  while( true ) {
    iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (editor_tools,prompt_text,local_40,0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = crt_stdio_c_sscanf_FUN_0060013c(local_40,"%f%*[ ,]%f%*[ ,]%f");
    if (iVar1 == 3) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (editor_tools,"Please enter a valid vector.");
  }
  if (result_ptr != &local_18) {
    result_ptr->x = local_18.x;
    result_ptr->y = local_18.y;
    result_ptr->z = local_18.z;
  }
  return 1;
}
