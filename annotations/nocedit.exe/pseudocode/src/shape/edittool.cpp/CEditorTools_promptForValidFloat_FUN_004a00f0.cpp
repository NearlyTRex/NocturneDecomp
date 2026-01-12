// Name: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
// Address: 004a00f0
// Address Range: [[004a00f0, 004a01e2]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, float min_value, float max_value, bool show_current_value)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
          (CEditorTools *this_ptr,char *prompt_text,float *result_ptr,bool enable_range_check,
          float min_value,float max_value,bool show_current_value)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined3 in_stack_00000011;
  char acStack_34 [32];
  float fStack_14;
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_34,"%g",(double)*result_ptr);
  }
  else {
    acStack_34[0] = '\0';
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,acStack_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c(acStack_34,"%f");
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
    }
    if ((_enable_range_check == 0) || ((min_value <= fStack_14 && (fStack_14 <= max_value)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %g and %g.",(double)min_value,(double)max_value);
  }
  *result_ptr = fStack_14;
  return 1;
}
