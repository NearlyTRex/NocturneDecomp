// Name: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360
// Address: 00471360
// Address Range: [[00471360, 0047142a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)

{
  int iVar1;
  char local_34 [32];
  int local_14;
  
  if ((show_current_value & 1U) == 0) {
    local_34[0] = '\0';
  }
  else {
    _sprintf(local_34,"%d");
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                        (this_ptr,prompt_text,local_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sscanf(local_34,"%d");
      if (iVar1 == 1) break;
      shape_edittool_cpp_FUN_0046fcd0(this_ptr,"Please enter a valid integer.");
    }
    if ((enable_range_check == 0) || ((min_value <= local_14 && (local_14 <= max_value)))) break;
    shape_edittool_cpp_FUN_0046fcd0
              (this_ptr,"Please enter a valid integer between %d and %d.",min_value,max_value);
  }
  *result_ptr = local_14;
  return 1;
}
