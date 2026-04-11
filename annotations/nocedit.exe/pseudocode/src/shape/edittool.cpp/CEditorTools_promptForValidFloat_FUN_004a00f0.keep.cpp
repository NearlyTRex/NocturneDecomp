// Name: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
// Address: 004a00f0
// MANUAL RECONSTRUCTION
// Address Range: [[004a00f0, 004a01e2]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)

{
  int iVar1;
  int iVar2;
  char local_38 [32];
  float local_18;
  
  if ((show_current_value & 1U) == 0) {
    local_38[0] = '\0';
  }
  else {
    _sprintf(local_38,"%g",(double)*result_ptr);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,local_38,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = sscanf(local_38,"%f",&local_18);
      if (iVar2 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
    }
    if ((enable_range_check == 0) || ((min_value <= local_18 && (local_18 <= max_value)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %g and %g.",(double)min_value,(double)max_value);
  }
  *result_ptr = local_18;
  return 1;
}
