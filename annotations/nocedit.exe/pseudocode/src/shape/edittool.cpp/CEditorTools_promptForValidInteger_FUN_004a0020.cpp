// Name: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
// Address: 004a0020
// Address Range: [[004a0020, 004a00ea]]
// Convention: __cdecl
// Signature: bool shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, bool enable_range_check, int min_value, int max_value, bool show_current_value)

#include "nocturne.h"

bool __cdecl
shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
          (CEditorTools *this_ptr,char *prompt_text,int *result_ptr,bool enable_range_check,
          int min_value,int max_value,bool show_current_value)

{
  int iVar1;
  undefined3 in_stack_00000011;
  char local_34 [32];
  int local_14;
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_34,"%d",*result_ptr);
  }
  else {
    local_34[0] = '\0';
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,local_34,0x1e,1);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c(local_34,"%d",&local_14);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid integer.");
    }
    if ((_enable_range_check == 0) || ((min_value <= local_14 && (local_14 <= max_value)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %d and %d.",min_value,max_value);
  }
  *result_ptr = local_14;
  return true;
}
