// Name: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70
// Address: 00495e70
// Address Range: [[00495e70, 00495f62]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)

{
  int iVar1;
  char local_38 [32];
  float local_18;
  
  if ((show_current_value & 1U) == 0) {
    local_38[0] = '\0';
  }
  else {
    FUN_005bfb40(local_38,&DAT_005dbf28,(double)*result_ptr);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                        (this_ptr,prompt_text,local_38,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sscanf(local_38,&DAT_005dbf2b);
      if (iVar1 == 1) break;
      shape_edittool_cpp_FUN_004943a0(this_ptr);
    }
    if ((enable_range_check == 0) || ((min_value <= local_18 && (local_18 <= max_value)))) break;
    shape_edittool_cpp_FUN_004943a0
              (this_ptr,"Please enter a valid integer between %g and %g.",(double)min_value,(double)max_value);
  }
  *result_ptr = local_18;
  return 1;
}
