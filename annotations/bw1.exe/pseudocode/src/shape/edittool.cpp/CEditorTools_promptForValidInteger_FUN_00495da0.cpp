// Name: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0
// Address: 00495da0
// Address Range: [[00495da0, 00495e6a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value)

{
  int iVar1;
  char local_34 [32];
  int local_14;
  
  if ((show_current_value & 1U) == 0) {
    local_34[0] = '\0';
  }
  else {
    FUN_005bfb40(local_34,&DAT_005dbed4,*result_ptr);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                        (this_ptr,prompt_text,local_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sscanf(local_34,&DAT_005dbed7);
      if (iVar1 == 1) break;
      shape_edittool_cpp_FUN_004943a0(this_ptr,"Please enter a valid integer.");
    }
    if ((enable_range_check == 0) || ((min_value <= local_14 && (local_14 <= max_value)))) break;
    shape_edittool_cpp_FUN_004943a0
              (this_ptr,"Please enter a valid integer between %d and %d.",min_value,max_value);
  }
  *result_ptr = local_14;
  return 1;
}
