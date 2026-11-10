// Name: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940
// Address: 0047e940
// Address Range: [[0047e940, 0047ea0a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)

{
  int iVar1;
  char local_34 [32];
  int local_14;
  
  if ((show_current_value & 1U) == 0) {
    local_34[0] = '\0';
  }
  else {
    _sprintf(local_34,&DAT_005bcf91);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
                        (this_ptr,prompt_text,local_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sscanf(local_34,&DAT_005bcf94);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (this_ptr,"Please enter a valid integer.");
    }
    if ((enable_range_check == 0) || ((min_value <= local_14 && (local_14 <= max_value)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (this_ptr,"Please enter a valid integer between %d and %d.");
  }
  *result_ptr = local_14;
  return 1;
}
