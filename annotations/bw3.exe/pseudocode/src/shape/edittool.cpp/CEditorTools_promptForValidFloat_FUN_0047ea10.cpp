// Name: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10
// Address: 0047ea10
// Address Range: [[0047ea10, 0047eb02]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047ea10(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047ea10(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)

{
  int iVar1;
  char local_38 [32];
  float local_18;
  
  if ((show_current_value & 1U) == 0) {
    local_38[0] = '\0';
  }
  else {
    _sprintf(local_38,&DAT_005bcfe5);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
                        (this_ptr,prompt_text,local_38,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sscanf(local_38,&DAT_005bcfe8);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (this_ptr,"Please enter a valid number.");
    }
    if ((enable_range_check == 0) || ((min_value <= local_18 && (local_18 <= max_value)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (this_ptr,"Please enter a valid integer between %g and %g.");
  }
  *result_ptr = local_18;
  return 1;
}
